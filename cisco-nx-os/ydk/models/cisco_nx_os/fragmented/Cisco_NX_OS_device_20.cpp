
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_20.hpp"
#include "Cisco_NX_OS_device_21.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecItems()
    :
    tlvrec_list(this, {"type"})
{

    yang_name = "tlvRec-items"; yang_parent_name = "LspRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::~TlvRecItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlvrec_list.len(); index++)
    {
        if(tlvrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::has_operation() const
{
    for (std::size_t index=0; index<tlvrec_list.len(); index++)
    {
        if(tlvrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlvRec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TlvRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList>();
        ent_->parent = this;
        tlvrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tlvrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TlvRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::TlvRecList()
    :
    type{YType::uint8, "type"},
    value_{YType::str, "value"},
    name{YType::str, "name"}
{

    yang_name = "TlvRec-list"; yang_parent_name = "tlvRec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::~TlvRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| value_.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TlvRec-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IprecItems()
    :
    iprec_list(this, {"pfx"})
{

    yang_name = "iprec-items"; yang_parent_name = "LspRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::~IprecItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iprec_list.len(); index++)
    {
        if(iprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::has_operation() const
{
    for (std::size_t index=0; index<iprec_list.len(); index++)
    {
        if(iprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iprec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList>();
        ent_->parent = this;
        iprec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iprec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::IpRecList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"}
{

    yang_name = "IpRec-list"; yang_parent_name = "iprec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::~IpRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpRec-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NhItems()
    :
    nexthop_list(this, {"nhif", "addr"})
{

    yang_name = "nh-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::~NhItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nexthop-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList>();
        ent_->parent = this;
        nexthop_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nexthop_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nexthop-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::NexthopList()
    :
    nhif{YType::str, "nhIf"},
    addr{YType::str, "addr"},
    if_{YType::uint32, "if"},
    name{YType::str, "name"}
{

    yang_name = "Nexthop-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::~NexthopList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::has_data() const
{
    if (is_presence_container) return true;
    return nhif.is_set
	|| addr.is_set
	|| if_.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhif.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nexthop-list";
    ADD_KEY_TOKEN(nhif, "nhIf");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhif.is_set || is_set(nhif.yfilter)) leaf_name_data.push_back(nhif.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhIf")
    {
        nhif = value;
        nhif.value_namespace = name_space;
        nhif.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhIf")
    {
        nhif.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhIf" || name == "addr" || name == "if" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList>();
        ent_->parent = this;
        route_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"}
        ,
    rsnhatt_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems>())
{
    rsnhatt_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set
	|| (rsnhatt_items !=  nullptr && rsnhatt_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rsnhatt_items !=  nullptr && rsnhatt_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsnhAtt-items")
    {
        if(rsnhatt_items == nullptr)
        {
            rsnhatt_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems>();
        }
        return rsnhatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsnhatt_items != nullptr)
    {
        _children["rsnhAtt-items"] = rsnhatt_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsnhAtt-items" || name == "pfx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsnhAttItems()
    :
    rsnhatt_list(this, {"tdn"})
{

    yang_name = "rsnhAtt-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::~RsnhAttItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsnhatt_list.len(); index++)
    {
        if(rsnhatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsnhatt_list.len(); index++)
    {
        if(rsnhatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsnhAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsNhAtt-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList>();
        ent_->parent = this;
        rsnhatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsnhatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsNhAtt-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::RsNhAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsNhAtt-list"; yang_parent_name = "rsnhAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::~RsNhAttList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DTEp-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList>();
        ent_->parent = this;
        dtep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dtep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomAf-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList>();
        ent_->parent = this;
        domaf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domaf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tblmap{YType::str, "tblMap"},
    tblmapfltr{YType::enumeration, "tblMapFltr"},
    rtridipaddr{YType::str, "rtrIdIpAddr"},
    rtridif{YType::str, "rtrIdIf"},
    srmpls{YType::boolean, "srMpls"},
    name{YType::str, "name"}
        ,
    distribute_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems>())
    , advertiseint_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems>())
    , interleak_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems>())
    , leakctrl_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems>())
    , rtsum_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems>())
{
    distribute_items->parent = this;
    advertiseint_items->parent = this;
    interleak_items->parent = this;
    leakctrl_items->parent = this;
    rtsum_items->parent = this;

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
	|| tblmap.is_set
	|| tblmapfltr.is_set
	|| rtridipaddr.is_set
	|| rtridif.is_set
	|| srmpls.is_set
	|| name.is_set
	|| (distribute_items !=  nullptr && distribute_items->has_data())
	|| (advertiseint_items !=  nullptr && advertiseint_items->has_data())
	|| (interleak_items !=  nullptr && interleak_items->has_data())
	|| (leakctrl_items !=  nullptr && leakctrl_items->has_data())
	|| (rtsum_items !=  nullptr && rtsum_items->has_data());
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
	|| ydk::is_set(tblmap.yfilter)
	|| ydk::is_set(tblmapfltr.yfilter)
	|| ydk::is_set(rtridipaddr.yfilter)
	|| ydk::is_set(rtridif.yfilter)
	|| ydk::is_set(srmpls.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (distribute_items !=  nullptr && distribute_items->has_operation())
	|| (advertiseint_items !=  nullptr && advertiseint_items->has_operation())
	|| (interleak_items !=  nullptr && interleak_items->has_operation())
	|| (leakctrl_items !=  nullptr && leakctrl_items->has_operation())
	|| (rtsum_items !=  nullptr && rtsum_items->has_operation());
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
    if (tblmap.is_set || is_set(tblmap.yfilter)) leaf_name_data.push_back(tblmap.get_name_leafdata());
    if (tblmapfltr.is_set || is_set(tblmapfltr.yfilter)) leaf_name_data.push_back(tblmapfltr.get_name_leafdata());
    if (rtridipaddr.is_set || is_set(rtridipaddr.yfilter)) leaf_name_data.push_back(rtridipaddr.get_name_leafdata());
    if (rtridif.is_set || is_set(rtridif.yfilter)) leaf_name_data.push_back(rtridif.get_name_leafdata());
    if (srmpls.is_set || is_set(srmpls.yfilter)) leaf_name_data.push_back(srmpls.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribute-items")
    {
        if(distribute_items == nullptr)
        {
            distribute_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems>();
        }
        return distribute_items;
    }

    if(child_yang_name == "advertiseint-items")
    {
        if(advertiseint_items == nullptr)
        {
            advertiseint_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems>();
        }
        return advertiseint_items;
    }

    if(child_yang_name == "interleak-items")
    {
        if(interleak_items == nullptr)
        {
            interleak_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems>();
        }
        return interleak_items;
    }

    if(child_yang_name == "leakctrl-items")
    {
        if(leakctrl_items == nullptr)
        {
            leakctrl_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems>();
        }
        return leakctrl_items;
    }

    if(child_yang_name == "rtsum-items")
    {
        if(rtsum_items == nullptr)
        {
            rtsum_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems>();
        }
        return rtsum_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(distribute_items != nullptr)
    {
        _children["distribute-items"] = distribute_items;
    }

    if(advertiseint_items != nullptr)
    {
        _children["advertiseint-items"] = advertiseint_items;
    }

    if(interleak_items != nullptr)
    {
        _children["interleak-items"] = interleak_items;
    }

    if(leakctrl_items != nullptr)
    {
        _children["leakctrl-items"] = leakctrl_items;
    }

    if(rtsum_items != nullptr)
    {
        _children["rtsum-items"] = rtsum_items;
    }

    return _children;
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
    if(value_path == "tblMap")
    {
        tblmap = value;
        tblmap.value_namespace = name_space;
        tblmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tblMapFltr")
    {
        tblmapfltr = value;
        tblmapfltr.value_namespace = name_space;
        tblmapfltr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrIdIpAddr")
    {
        rtridipaddr = value;
        rtridipaddr.value_namespace = name_space;
        rtridipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrIdIf")
    {
        rtridif = value;
        rtridif.value_namespace = name_space;
        rtridif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srMpls")
    {
        srmpls = value;
        srmpls.value_namespace = name_space;
        srmpls.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "tblMap")
    {
        tblmap.yfilter = yfilter;
    }
    if(value_path == "tblMapFltr")
    {
        tblmapfltr.yfilter = yfilter;
    }
    if(value_path == "rtrIdIpAddr")
    {
        rtridipaddr.yfilter = yfilter;
    }
    if(value_path == "rtrIdIf")
    {
        rtridif.yfilter = yfilter;
    }
    if(value_path == "srMpls")
    {
        srmpls.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribute-items" || name == "advertiseint-items" || name == "interleak-items" || name == "leakctrl-items" || name == "rtsum-items" || name == "type" || name == "ctrl" || name == "mtType" || name == "dist" || name == "maxEcmp" || name == "defInfOrig" || name == "defInfOrigRtMap" || name == "enableBfd" || name == "tblMap" || name == "tblMapFltr" || name == "rtrIdIpAddr" || name == "rtrIdIf" || name == "srMpls" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeItems()
    :
    distribute_list(this, {"source"})
{

    yang_name = "distribute-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::~DistributeItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<distribute_list.len(); index++)
    {
        if(distribute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::has_operation() const
{
    for (std::size_t index=0; index<distribute_list.len(); index++)
    {
        if(distribute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Distribute-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeList>();
        ent_->parent = this;
        distribute_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : distribute_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Distribute-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeList::DistributeList()
    :
    source{YType::enumeration, "source"},
    destination{YType::enumeration, "destination"},
    all{YType::boolean, "all"},
    rmap{YType::str, "rmap"}
{

    yang_name = "Distribute-list"; yang_parent_name = "distribute-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeList::~DistributeList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeList::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| destination.is_set
	|| all.is_set
	|| rmap.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(rmap.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Distribute-list";
    ADD_KEY_TOKEN(source, "source");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (rmap.is_set || is_set(rmap.yfilter)) leaf_name_data.push_back(rmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmap")
    {
        rmap = value;
        rmap.value_namespace = name_space;
        rmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "rmap")
    {
        rmap.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination" || name == "all" || name == "rmap")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseintItems()
    :
    advertiseint_list(this, {"advtif"})
{

    yang_name = "advertiseint-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::~AdvertiseintItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<advertiseint_list.len(); index++)
    {
        if(advertiseint_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::has_operation() const
{
    for (std::size_t index=0; index<advertiseint_list.len(); index++)
    {
        if(advertiseint_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertiseint-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdvertiseInt-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseIntList>();
        ent_->parent = this;
        advertiseint_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : advertiseint_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdvertiseInt-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseIntList::AdvertiseIntList()
    :
    advtif{YType::str, "advtIf"},
    advtlevel{YType::enumeration, "advtLevel"}
{

    yang_name = "AdvertiseInt-list"; yang_parent_name = "advertiseint-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseIntList::~AdvertiseIntList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseIntList::has_data() const
{
    if (is_presence_container) return true;
    return advtif.is_set
	|| advtlevel.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseIntList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advtif.yfilter)
	|| ydk::is_set(advtlevel.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseIntList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdvertiseInt-list";
    ADD_KEY_TOKEN(advtif, "advtIf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseIntList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advtif.is_set || is_set(advtif.yfilter)) leaf_name_data.push_back(advtif.get_name_leafdata());
    if (advtlevel.is_set || is_set(advtlevel.yfilter)) leaf_name_data.push_back(advtlevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseIntList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseIntList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseIntList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advtIf")
    {
        advtif = value;
        advtif.value_namespace = name_space;
        advtif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advtLevel")
    {
        advtlevel = value;
        advtlevel.value_namespace = name_space;
        advtlevel.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseIntList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advtIf")
    {
        advtif.yfilter = yfilter;
    }
    if(value_path == "advtLevel")
    {
        advtlevel.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseIntList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advtIf" || name == "advtLevel")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterleakItems()
    :
    interleakp_list(this, {"proto", "inst", "asn"})
{

    yang_name = "interleak-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::~InterleakItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::has_operation() const
{
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InterLeakP-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList>();
        ent_->parent = this;
        interleakp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interleakp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InterLeakP-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::InterLeakPList()
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

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::~InterLeakPList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::has_data() const
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::has_operation() const
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

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InterLeakP-list";
    ADD_KEY_TOKEN(proto, "proto");
    ADD_KEY_TOKEN(inst, "inst");
    ADD_KEY_TOKEN(asn, "asn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "inst" || name == "asn" || name == "name" || name == "descr" || name == "scope" || name == "rtMap")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems::LeakctrlItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::enumeration, "ctrl"},
    max{YType::uint16, "max"},
    thresh{YType::uint8, "thresh"},
    retries{YType::uint16, "retries"},
    duration{YType::uint16, "duration"}
{

    yang_name = "leakctrl-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems::~LeakctrlItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems::has_data() const
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems::has_operation() const
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

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leakctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ctrl" || name == "max" || name == "thresh" || name == "retries" || name == "duration")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtsumItems()
    :
    rtsum_list(this, {"addr"})
{

    yang_name = "rtsum-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::~RtsumItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtsum_list.len(); index++)
    {
        if(rtsum_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::has_operation() const
{
    for (std::size_t index=0; index<rtsum_list.len(); index++)
    {
        if(rtsum_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtsum-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtSum-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtSumList>();
        ent_->parent = this;
        rtsum_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtsum_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtSum-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtSumList::RtSumList()
    :
    addr{YType::str, "addr"},
    sumlevel{YType::enumeration, "sumLevel"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "RtSum-list"; yang_parent_name = "rtsum-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtSumList::~RtSumList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtSumList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| sumlevel.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtSumList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(sumlevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtSumList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtSum-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtSumList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (sumlevel.is_set || is_set(sumlevel.yfilter)) leaf_name_data.push_back(sumlevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtSumList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtSumList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtSumList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sumLevel")
    {
        sumlevel = value;
        sumlevel.value_namespace = name_space;
        sumlevel.value_namespace_prefix = name_space_prefix;
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtSumList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "sumLevel")
    {
        sumlevel.yfilter = yfilter;
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtSumList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "sumLevel" || name == "name" || name == "descr")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems::DistrlsItems()
    :
    state{YType::boolean, "state"},
    instid{YType::uint32, "instId"},
    level{YType::enumeration, "level"},
    throt{YType::uint16, "throt"}
{

    yang_name = "distrls-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems::~DistrlsItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| instid.is_set
	|| level.is_set
	|| throt.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(instid.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(throt.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distrls-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (instid.is_set || is_set(instid.yfilter)) leaf_name_data.push_back(instid.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (throt.is_set || is_set(throt.yfilter)) leaf_name_data.push_back(throt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instId")
    {
        instid = value;
        instid.value_namespace = name_space;
        instid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throt")
    {
        throt = value;
        throt.value_namespace = name_space;
        throt.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "instId")
    {
        instid.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "throt")
    {
        throt.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "instId" || name == "level" || name == "throt")
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FmcastTree-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList>();
        ent_->parent = this;
        fmcasttree_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fmcasttree_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    operst{YType::enumeration, "operSt"},
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
	|| operst.is_set
	|| name.is_set
	|| (node_items !=  nullptr && node_items->has_data())
	|| (oifleaf_items !=  nullptr && oifleaf_items->has_data())
	|| (oifspine_items !=  nullptr && oifspine_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
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
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_items != nullptr)
    {
        _children["node-items"] = node_items;
    }

    if(oifleaf_items != nullptr)
    {
        _children["oifleaf-items"] = oifleaf_items;
    }

    if(oifspine_items != nullptr)
    {
        _children["oifspine-items"] = oifspine_items;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-items" || name == "oifleaf-items" || name == "oifspine-items" || name == "id" || name == "operSt" || name == "name")
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeIdRec-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList>();
        ent_->parent = this;
        nodeidrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nodeidrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListLeaf-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList>();
        ent_->parent = this;
        oiflistleaf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oiflistleaf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
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
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "name")
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListSpine-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList>();
        ent_->parent = this;
        oiflistspine_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oiflistspine_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
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
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "name")
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::get_children() const
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
    metriclvl1{YType::uint32, "metricLvl1"},
    metriclvl2{YType::uint32, "metricLvl2"},
    ctrl{YType::str, "ctrl"},
    v4enable{YType::boolean, "v4enable"},
    v6enable{YType::boolean, "v6enable"},
    authchecklvl1{YType::boolean, "authCheckLvl1"},
    authchecklvl2{YType::boolean, "authCheckLvl2"},
    authcheck{YType::boolean, "authCheck"},
    networktypep2p{YType::enumeration, "networkTypeP2P"},
    lsprefreshintvl{YType::uint32, "lspRefreshIntvl"},
    retransinterval{YType::uint16, "retransInterval"},
    retransthrottleinterval{YType::uint16, "retransThrottleInterval"},
    v4bfd{YType::enumeration, "v4Bfd"},
    v6bfd{YType::enumeration, "v6Bfd"},
    passive{YType::enumeration, "passive"},
    hellopad{YType::enumeration, "helloPad"},
    hellointvl{YType::uint16, "helloIntvl"},
    hellointvllvl1{YType::uint16, "helloIntvlLvl1"},
    hellointvllvl2{YType::uint16, "helloIntvlLvl2"},
    hellomult{YType::uint16, "helloMult"},
    hellomultlvl1{YType::uint16, "helloMultLvl1"},
    hellomultlvl2{YType::uint16, "helloMultLvl2"},
    prioritylvl1{YType::uint8, "priorityLvl1"},
    prioritylvl2{YType::uint8, "priorityLvl2"},
    mt2metriclvl1{YType::uint32, "mt2MetricLvl1"},
    mt2metriclvl2{YType::uint32, "mt2MetricLvl2"},
    csnpintvllvl1{YType::uint16, "csnpIntvlLvl1"},
    csnpintvllvl2{YType::uint16, "csnpIntvlLvl2"},
    authtype{YType::enumeration, "authType"},
    authtypelvl1{YType::enumeration, "authTypeLvl1"},
    authtypelvl2{YType::enumeration, "authTypeLvl2"},
    authkey{YType::str, "authKey"},
    authkeylvl1{YType::str, "authKeyLvl1"},
    authkeylvl2{YType::str, "authKeyLvl2"},
    mtuchecklvl1{YType::boolean, "mtuCheckLvl1"},
    mtuchecklvl2{YType::boolean, "mtuCheckLvl2"},
    mtucheck{YType::boolean, "mtuCheck"},
    nflagclear{YType::boolean, "nFlagClear"}
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
	|| metriclvl1.is_set
	|| metriclvl2.is_set
	|| ctrl.is_set
	|| v4enable.is_set
	|| v6enable.is_set
	|| authchecklvl1.is_set
	|| authchecklvl2.is_set
	|| authcheck.is_set
	|| networktypep2p.is_set
	|| lsprefreshintvl.is_set
	|| retransinterval.is_set
	|| retransthrottleinterval.is_set
	|| v4bfd.is_set
	|| v6bfd.is_set
	|| passive.is_set
	|| hellopad.is_set
	|| hellointvl.is_set
	|| hellointvllvl1.is_set
	|| hellointvllvl2.is_set
	|| hellomult.is_set
	|| hellomultlvl1.is_set
	|| hellomultlvl2.is_set
	|| prioritylvl1.is_set
	|| prioritylvl2.is_set
	|| mt2metriclvl1.is_set
	|| mt2metriclvl2.is_set
	|| csnpintvllvl1.is_set
	|| csnpintvllvl2.is_set
	|| authtype.is_set
	|| authtypelvl1.is_set
	|| authtypelvl2.is_set
	|| authkey.is_set
	|| authkeylvl1.is_set
	|| authkeylvl2.is_set
	|| mtuchecklvl1.is_set
	|| mtuchecklvl2.is_set
	|| mtucheck.is_set
	|| nflagclear.is_set
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
	|| ydk::is_set(metriclvl1.yfilter)
	|| ydk::is_set(metriclvl2.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(v4enable.yfilter)
	|| ydk::is_set(v6enable.yfilter)
	|| ydk::is_set(authchecklvl1.yfilter)
	|| ydk::is_set(authchecklvl2.yfilter)
	|| ydk::is_set(authcheck.yfilter)
	|| ydk::is_set(networktypep2p.yfilter)
	|| ydk::is_set(lsprefreshintvl.yfilter)
	|| ydk::is_set(retransinterval.yfilter)
	|| ydk::is_set(retransthrottleinterval.yfilter)
	|| ydk::is_set(v4bfd.yfilter)
	|| ydk::is_set(v6bfd.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(hellopad.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(hellointvllvl1.yfilter)
	|| ydk::is_set(hellointvllvl2.yfilter)
	|| ydk::is_set(hellomult.yfilter)
	|| ydk::is_set(hellomultlvl1.yfilter)
	|| ydk::is_set(hellomultlvl2.yfilter)
	|| ydk::is_set(prioritylvl1.yfilter)
	|| ydk::is_set(prioritylvl2.yfilter)
	|| ydk::is_set(mt2metriclvl1.yfilter)
	|| ydk::is_set(mt2metriclvl2.yfilter)
	|| ydk::is_set(csnpintvllvl1.yfilter)
	|| ydk::is_set(csnpintvllvl2.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(authtypelvl1.yfilter)
	|| ydk::is_set(authtypelvl2.yfilter)
	|| ydk::is_set(authkey.yfilter)
	|| ydk::is_set(authkeylvl1.yfilter)
	|| ydk::is_set(authkeylvl2.yfilter)
	|| ydk::is_set(mtuchecklvl1.yfilter)
	|| ydk::is_set(mtuchecklvl2.yfilter)
	|| ydk::is_set(mtucheck.yfilter)
	|| ydk::is_set(nflagclear.yfilter)
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
    if (metriclvl1.is_set || is_set(metriclvl1.yfilter)) leaf_name_data.push_back(metriclvl1.get_name_leafdata());
    if (metriclvl2.is_set || is_set(metriclvl2.yfilter)) leaf_name_data.push_back(metriclvl2.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (v4enable.is_set || is_set(v4enable.yfilter)) leaf_name_data.push_back(v4enable.get_name_leafdata());
    if (v6enable.is_set || is_set(v6enable.yfilter)) leaf_name_data.push_back(v6enable.get_name_leafdata());
    if (authchecklvl1.is_set || is_set(authchecklvl1.yfilter)) leaf_name_data.push_back(authchecklvl1.get_name_leafdata());
    if (authchecklvl2.is_set || is_set(authchecklvl2.yfilter)) leaf_name_data.push_back(authchecklvl2.get_name_leafdata());
    if (authcheck.is_set || is_set(authcheck.yfilter)) leaf_name_data.push_back(authcheck.get_name_leafdata());
    if (networktypep2p.is_set || is_set(networktypep2p.yfilter)) leaf_name_data.push_back(networktypep2p.get_name_leafdata());
    if (lsprefreshintvl.is_set || is_set(lsprefreshintvl.yfilter)) leaf_name_data.push_back(lsprefreshintvl.get_name_leafdata());
    if (retransinterval.is_set || is_set(retransinterval.yfilter)) leaf_name_data.push_back(retransinterval.get_name_leafdata());
    if (retransthrottleinterval.is_set || is_set(retransthrottleinterval.yfilter)) leaf_name_data.push_back(retransthrottleinterval.get_name_leafdata());
    if (v4bfd.is_set || is_set(v4bfd.yfilter)) leaf_name_data.push_back(v4bfd.get_name_leafdata());
    if (v6bfd.is_set || is_set(v6bfd.yfilter)) leaf_name_data.push_back(v6bfd.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (hellopad.is_set || is_set(hellopad.yfilter)) leaf_name_data.push_back(hellopad.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (hellointvllvl1.is_set || is_set(hellointvllvl1.yfilter)) leaf_name_data.push_back(hellointvllvl1.get_name_leafdata());
    if (hellointvllvl2.is_set || is_set(hellointvllvl2.yfilter)) leaf_name_data.push_back(hellointvllvl2.get_name_leafdata());
    if (hellomult.is_set || is_set(hellomult.yfilter)) leaf_name_data.push_back(hellomult.get_name_leafdata());
    if (hellomultlvl1.is_set || is_set(hellomultlvl1.yfilter)) leaf_name_data.push_back(hellomultlvl1.get_name_leafdata());
    if (hellomultlvl2.is_set || is_set(hellomultlvl2.yfilter)) leaf_name_data.push_back(hellomultlvl2.get_name_leafdata());
    if (prioritylvl1.is_set || is_set(prioritylvl1.yfilter)) leaf_name_data.push_back(prioritylvl1.get_name_leafdata());
    if (prioritylvl2.is_set || is_set(prioritylvl2.yfilter)) leaf_name_data.push_back(prioritylvl2.get_name_leafdata());
    if (mt2metriclvl1.is_set || is_set(mt2metriclvl1.yfilter)) leaf_name_data.push_back(mt2metriclvl1.get_name_leafdata());
    if (mt2metriclvl2.is_set || is_set(mt2metriclvl2.yfilter)) leaf_name_data.push_back(mt2metriclvl2.get_name_leafdata());
    if (csnpintvllvl1.is_set || is_set(csnpintvllvl1.yfilter)) leaf_name_data.push_back(csnpintvllvl1.get_name_leafdata());
    if (csnpintvllvl2.is_set || is_set(csnpintvllvl2.yfilter)) leaf_name_data.push_back(csnpintvllvl2.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (authtypelvl1.is_set || is_set(authtypelvl1.yfilter)) leaf_name_data.push_back(authtypelvl1.get_name_leafdata());
    if (authtypelvl2.is_set || is_set(authtypelvl2.yfilter)) leaf_name_data.push_back(authtypelvl2.get_name_leafdata());
    if (authkey.is_set || is_set(authkey.yfilter)) leaf_name_data.push_back(authkey.get_name_leafdata());
    if (authkeylvl1.is_set || is_set(authkeylvl1.yfilter)) leaf_name_data.push_back(authkeylvl1.get_name_leafdata());
    if (authkeylvl2.is_set || is_set(authkeylvl2.yfilter)) leaf_name_data.push_back(authkeylvl2.get_name_leafdata());
    if (mtuchecklvl1.is_set || is_set(mtuchecklvl1.yfilter)) leaf_name_data.push_back(mtuchecklvl1.get_name_leafdata());
    if (mtuchecklvl2.is_set || is_set(mtuchecklvl2.yfilter)) leaf_name_data.push_back(mtuchecklvl2.get_name_leafdata());
    if (mtucheck.is_set || is_set(mtucheck.yfilter)) leaf_name_data.push_back(mtucheck.get_name_leafdata());
    if (nflagclear.is_set || is_set(nflagclear.yfilter)) leaf_name_data.push_back(nflagclear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adj_items != nullptr)
    {
        _children["adj-items"] = adj_items;
    }

    if(meshgrp_items != nullptr)
    {
        _children["meshgrp-items"] = meshgrp_items;
    }

    if(lvl_items != nullptr)
    {
        _children["lvl-items"] = lvl_items;
    }

    if(traffic_items != nullptr)
    {
        _children["traffic-items"] = traffic_items;
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
    if(value_path == "metricLvl1")
    {
        metriclvl1 = value;
        metriclvl1.value_namespace = name_space;
        metriclvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metricLvl2")
    {
        metriclvl2 = value;
        metriclvl2.value_namespace = name_space;
        metriclvl2.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "authCheck")
    {
        authcheck = value;
        authcheck.value_namespace = name_space;
        authcheck.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPad")
    {
        hellopad = value;
        hellopad.value_namespace = name_space;
        hellopad.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvlLvl1")
    {
        hellointvllvl1 = value;
        hellointvllvl1.value_namespace = name_space;
        hellointvllvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvlLvl2")
    {
        hellointvllvl2 = value;
        hellointvllvl2.value_namespace = name_space;
        hellointvllvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloMult")
    {
        hellomult = value;
        hellomult.value_namespace = name_space;
        hellomult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloMultLvl1")
    {
        hellomultlvl1 = value;
        hellomultlvl1.value_namespace = name_space;
        hellomultlvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloMultLvl2")
    {
        hellomultlvl2 = value;
        hellomultlvl2.value_namespace = name_space;
        hellomultlvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priorityLvl1")
    {
        prioritylvl1 = value;
        prioritylvl1.value_namespace = name_space;
        prioritylvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priorityLvl2")
    {
        prioritylvl2 = value;
        prioritylvl2.value_namespace = name_space;
        prioritylvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt2MetricLvl1")
    {
        mt2metriclvl1 = value;
        mt2metriclvl1.value_namespace = name_space;
        mt2metriclvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt2MetricLvl2")
    {
        mt2metriclvl2 = value;
        mt2metriclvl2.value_namespace = name_space;
        mt2metriclvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpIntvlLvl1")
    {
        csnpintvllvl1 = value;
        csnpintvllvl1.value_namespace = name_space;
        csnpintvllvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpIntvlLvl2")
    {
        csnpintvllvl2 = value;
        csnpintvllvl2.value_namespace = name_space;
        csnpintvllvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authType")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authTypeLvl1")
    {
        authtypelvl1 = value;
        authtypelvl1.value_namespace = name_space;
        authtypelvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authTypeLvl2")
    {
        authtypelvl2 = value;
        authtypelvl2.value_namespace = name_space;
        authtypelvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKey")
    {
        authkey = value;
        authkey.value_namespace = name_space;
        authkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKeyLvl1")
    {
        authkeylvl1 = value;
        authkeylvl1.value_namespace = name_space;
        authkeylvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKeyLvl2")
    {
        authkeylvl2 = value;
        authkeylvl2.value_namespace = name_space;
        authkeylvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtuCheckLvl1")
    {
        mtuchecklvl1 = value;
        mtuchecklvl1.value_namespace = name_space;
        mtuchecklvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtuCheckLvl2")
    {
        mtuchecklvl2 = value;
        mtuchecklvl2.value_namespace = name_space;
        mtuchecklvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtuCheck")
    {
        mtucheck = value;
        mtucheck.value_namespace = name_space;
        mtucheck.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nFlagClear")
    {
        nflagclear = value;
        nflagclear.value_namespace = name_space;
        nflagclear.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "metricLvl1")
    {
        metriclvl1.yfilter = yfilter;
    }
    if(value_path == "metricLvl2")
    {
        metriclvl2.yfilter = yfilter;
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
    if(value_path == "authCheck")
    {
        authcheck.yfilter = yfilter;
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
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "helloPad")
    {
        hellopad.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "helloIntvlLvl1")
    {
        hellointvllvl1.yfilter = yfilter;
    }
    if(value_path == "helloIntvlLvl2")
    {
        hellointvllvl2.yfilter = yfilter;
    }
    if(value_path == "helloMult")
    {
        hellomult.yfilter = yfilter;
    }
    if(value_path == "helloMultLvl1")
    {
        hellomultlvl1.yfilter = yfilter;
    }
    if(value_path == "helloMultLvl2")
    {
        hellomultlvl2.yfilter = yfilter;
    }
    if(value_path == "priorityLvl1")
    {
        prioritylvl1.yfilter = yfilter;
    }
    if(value_path == "priorityLvl2")
    {
        prioritylvl2.yfilter = yfilter;
    }
    if(value_path == "mt2MetricLvl1")
    {
        mt2metriclvl1.yfilter = yfilter;
    }
    if(value_path == "mt2MetricLvl2")
    {
        mt2metriclvl2.yfilter = yfilter;
    }
    if(value_path == "csnpIntvlLvl1")
    {
        csnpintvllvl1.yfilter = yfilter;
    }
    if(value_path == "csnpIntvlLvl2")
    {
        csnpintvllvl2.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "authTypeLvl1")
    {
        authtypelvl1.yfilter = yfilter;
    }
    if(value_path == "authTypeLvl2")
    {
        authtypelvl2.yfilter = yfilter;
    }
    if(value_path == "authKey")
    {
        authkey.yfilter = yfilter;
    }
    if(value_path == "authKeyLvl1")
    {
        authkeylvl1.yfilter = yfilter;
    }
    if(value_path == "authKeyLvl2")
    {
        authkeylvl2.yfilter = yfilter;
    }
    if(value_path == "mtuCheckLvl1")
    {
        mtuchecklvl1.yfilter = yfilter;
    }
    if(value_path == "mtuCheckLvl2")
    {
        mtuchecklvl2.yfilter = yfilter;
    }
    if(value_path == "mtuCheck")
    {
        mtucheck.yfilter = yfilter;
    }
    if(value_path == "nFlagClear")
    {
        nflagclear.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "meshgrp-items" || name == "lvl-items" || name == "traffic-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "cktT" || name == "metricLvl1" || name == "metricLvl2" || name == "ctrl" || name == "v4enable" || name == "v6enable" || name == "authCheckLvl1" || name == "authCheckLvl2" || name == "authCheck" || name == "networkTypeP2P" || name == "lspRefreshIntvl" || name == "retransInterval" || name == "retransThrottleInterval" || name == "v4Bfd" || name == "v6Bfd" || name == "passive" || name == "helloPad" || name == "helloIntvl" || name == "helloIntvlLvl1" || name == "helloIntvlLvl2" || name == "helloMult" || name == "helloMultLvl1" || name == "helloMultLvl2" || name == "priorityLvl1" || name == "priorityLvl2" || name == "mt2MetricLvl1" || name == "mt2MetricLvl2" || name == "csnpIntvlLvl1" || name == "csnpIntvlLvl2" || name == "authType" || name == "authTypeLvl1" || name == "authTypeLvl2" || name == "authKey" || name == "authKeyLvl1" || name == "authKeyLvl2" || name == "mtuCheckLvl1" || name == "mtuCheckLvl2" || name == "mtuCheck" || name == "nFlagClear")
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList>();
        ent_->parent = this;
        adjep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_children() const
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
	|| name.is_set
	|| (addr_items !=  nullptr && addr_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(sysid.yfilter)
	|| ydk::is_set(operst.yfilter)
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
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr_items != nullptr)
    {
        _children["addr-items"] = addr_items;
    }

    return _children;
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
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-items" || name == "type" || name == "sysId" || name == "operSt" || name == "name")
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PeerIpAddr-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList>();
        ent_->parent = this;
        peeripaddr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peeripaddr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    id{YType::uint32, "id"},
    ctrl{YType::str, "ctrl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "meshgrp-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::~MeshgrpItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ctrl.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
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

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::has_leaf_or_child_of_name(const std::string & name) const
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfLvl-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList>();
        ent_->parent = this;
        iflvl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iflvl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    mt0metriclvl1{YType::uint32, "mt0MetricLvl1"},
    mt0metriclvl2{YType::uint32, "mt0MetricLvl2"},
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
	|| mt0metriclvl1.is_set
	|| mt0metriclvl2.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mt0metriclvl1.yfilter)
	|| ydk::is_set(mt0metriclvl2.yfilter)
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
    if (mt0metriclvl1.is_set || is_set(mt0metriclvl1.yfilter)) leaf_name_data.push_back(mt0metriclvl1.get_name_leafdata());
    if (mt0metriclvl2.is_set || is_set(mt0metriclvl2.yfilter)) leaf_name_data.push_back(mt0metriclvl2.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt0MetricLvl1")
    {
        mt0metriclvl1 = value;
        mt0metriclvl1.value_namespace = name_space;
        mt0metriclvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt0MetricLvl2")
    {
        mt0metriclvl2 = value;
        mt0metriclvl2.value_namespace = name_space;
        mt0metriclvl2.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mt0MetricLvl1")
    {
        mt0metriclvl1.yfilter = yfilter;
    }
    if(value_path == "mt0MetricLvl2")
    {
        mt0metriclvl2.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "mt0MetricLvl1" || name == "mt0MetricLvl2" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::TrafficItems()
{

    yang_name = "traffic-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::~TrafficItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::has_operation() const
{
    return is_set(yfilter);
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


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

System::IsisItems::InstItems::InstList::EvthstryItems::EvthstryItems()
    :
    evthstry_list(this, {"type"})
{

    yang_name = "evthstry-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::EvthstryItems::~EvthstryItems()
{
}

bool System::IsisItems::InstItems::InstList::EvthstryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evthstry_list.len(); index++)
    {
        if(evthstry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::EvthstryItems::has_operation() const
{
    for (std::size_t index=0; index<evthstry_list.len(); index++)
    {
        if(evthstry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::EvthstryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evthstry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::EvthstryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::EvthstryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EvtHstry-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::InstItems::InstList::EvthstryItems::EvtHstryList>();
        ent_->parent = this;
        evthstry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::EvthstryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : evthstry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IsisItems::InstItems::InstList::EvthstryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::EvthstryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::EvthstryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EvtHstry-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::EvthstryItems::EvtHstryList::EvtHstryList()
    :
    type{YType::enumeration, "type"},
    size{YType::uint32, "size"}
{

    yang_name = "EvtHstry-list"; yang_parent_name = "evthstry-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::EvthstryItems::EvtHstryList::~EvtHstryList()
{
}

bool System::IsisItems::InstItems::InstList::EvthstryItems::EvtHstryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| size.is_set;
}

bool System::IsisItems::InstItems::InstList::EvthstryItems::EvtHstryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::IsisItems::InstItems::InstList::EvthstryItems::EvtHstryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EvtHstry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::EvthstryItems::EvtHstryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::InstItems::InstList::EvthstryItems::EvtHstryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::InstItems::InstList::EvthstryItems::EvtHstryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::InstItems::InstList::EvthstryItems::EvtHstryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::EvthstryItems::EvtHstryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::EvthstryItems::EvtHstryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "size")
        return true;
    return false;
}

System::IsisItems::SyslogItems::SyslogItems()
    :
    loglevel{YType::uint32, "logLevel"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "syslog-items"; yang_parent_name = "isis-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IsisItems::SyslogItems::~SyslogItems()
{
}

bool System::IsisItems::SyslogItems::has_data() const
{
    if (is_presence_container) return true;
    return loglevel.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::IsisItems::SyslogItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::IsisItems::SyslogItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/isis-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IsisItems::SyslogItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::SyslogItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loglevel.is_set || is_set(loglevel.yfilter)) leaf_name_data.push_back(loglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::SyslogItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::SyslogItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::SyslogItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logLevel")
    {
        loglevel = value;
        loglevel.value_namespace = name_space;
        loglevel.value_namespace_prefix = name_space_prefix;
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

void System::IsisItems::SyslogItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logLevel")
    {
        loglevel.yfilter = yfilter;
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

bool System::IsisItems::SyslogItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logLevel" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
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

std::shared_ptr<ydk::Entity> System::IsisItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InternalIf-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::IfItems::InternalIfList>();
        ent_->parent = this;
        internalif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : internalif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    metriclvl1{YType::uint32, "metricLvl1"},
    metriclvl2{YType::uint32, "metricLvl2"},
    ctrl{YType::str, "ctrl"},
    v4enable{YType::boolean, "v4enable"},
    v6enable{YType::boolean, "v6enable"},
    authchecklvl1{YType::boolean, "authCheckLvl1"},
    authchecklvl2{YType::boolean, "authCheckLvl2"},
    authcheck{YType::boolean, "authCheck"},
    networktypep2p{YType::enumeration, "networkTypeP2P"},
    lsprefreshintvl{YType::uint32, "lspRefreshIntvl"},
    retransinterval{YType::uint16, "retransInterval"},
    retransthrottleinterval{YType::uint16, "retransThrottleInterval"},
    v4bfd{YType::enumeration, "v4Bfd"},
    v6bfd{YType::enumeration, "v6Bfd"},
    passive{YType::enumeration, "passive"},
    hellopad{YType::enumeration, "helloPad"},
    hellointvl{YType::uint16, "helloIntvl"},
    hellointvllvl1{YType::uint16, "helloIntvlLvl1"},
    hellointvllvl2{YType::uint16, "helloIntvlLvl2"},
    hellomult{YType::uint16, "helloMult"},
    hellomultlvl1{YType::uint16, "helloMultLvl1"},
    hellomultlvl2{YType::uint16, "helloMultLvl2"},
    prioritylvl1{YType::uint8, "priorityLvl1"},
    prioritylvl2{YType::uint8, "priorityLvl2"},
    mt2metriclvl1{YType::uint32, "mt2MetricLvl1"},
    mt2metriclvl2{YType::uint32, "mt2MetricLvl2"},
    csnpintvllvl1{YType::uint16, "csnpIntvlLvl1"},
    csnpintvllvl2{YType::uint16, "csnpIntvlLvl2"},
    authtype{YType::enumeration, "authType"},
    authtypelvl1{YType::enumeration, "authTypeLvl1"},
    authtypelvl2{YType::enumeration, "authTypeLvl2"},
    authkey{YType::str, "authKey"},
    authkeylvl1{YType::str, "authKeyLvl1"},
    authkeylvl2{YType::str, "authKeyLvl2"},
    mtuchecklvl1{YType::boolean, "mtuCheckLvl1"},
    mtuchecklvl2{YType::boolean, "mtuCheckLvl2"},
    mtucheck{YType::boolean, "mtuCheck"},
    nflagclear{YType::boolean, "nFlagClear"},
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
	|| metriclvl1.is_set
	|| metriclvl2.is_set
	|| ctrl.is_set
	|| v4enable.is_set
	|| v6enable.is_set
	|| authchecklvl1.is_set
	|| authchecklvl2.is_set
	|| authcheck.is_set
	|| networktypep2p.is_set
	|| lsprefreshintvl.is_set
	|| retransinterval.is_set
	|| retransthrottleinterval.is_set
	|| v4bfd.is_set
	|| v6bfd.is_set
	|| passive.is_set
	|| hellopad.is_set
	|| hellointvl.is_set
	|| hellointvllvl1.is_set
	|| hellointvllvl2.is_set
	|| hellomult.is_set
	|| hellomultlvl1.is_set
	|| hellomultlvl2.is_set
	|| prioritylvl1.is_set
	|| prioritylvl2.is_set
	|| mt2metriclvl1.is_set
	|| mt2metriclvl2.is_set
	|| csnpintvllvl1.is_set
	|| csnpintvllvl2.is_set
	|| authtype.is_set
	|| authtypelvl1.is_set
	|| authtypelvl2.is_set
	|| authkey.is_set
	|| authkeylvl1.is_set
	|| authkeylvl2.is_set
	|| mtuchecklvl1.is_set
	|| mtuchecklvl2.is_set
	|| mtucheck.is_set
	|| nflagclear.is_set
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
	|| ydk::is_set(metriclvl1.yfilter)
	|| ydk::is_set(metriclvl2.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(v4enable.yfilter)
	|| ydk::is_set(v6enable.yfilter)
	|| ydk::is_set(authchecklvl1.yfilter)
	|| ydk::is_set(authchecklvl2.yfilter)
	|| ydk::is_set(authcheck.yfilter)
	|| ydk::is_set(networktypep2p.yfilter)
	|| ydk::is_set(lsprefreshintvl.yfilter)
	|| ydk::is_set(retransinterval.yfilter)
	|| ydk::is_set(retransthrottleinterval.yfilter)
	|| ydk::is_set(v4bfd.yfilter)
	|| ydk::is_set(v6bfd.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(hellopad.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(hellointvllvl1.yfilter)
	|| ydk::is_set(hellointvllvl2.yfilter)
	|| ydk::is_set(hellomult.yfilter)
	|| ydk::is_set(hellomultlvl1.yfilter)
	|| ydk::is_set(hellomultlvl2.yfilter)
	|| ydk::is_set(prioritylvl1.yfilter)
	|| ydk::is_set(prioritylvl2.yfilter)
	|| ydk::is_set(mt2metriclvl1.yfilter)
	|| ydk::is_set(mt2metriclvl2.yfilter)
	|| ydk::is_set(csnpintvllvl1.yfilter)
	|| ydk::is_set(csnpintvllvl2.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(authtypelvl1.yfilter)
	|| ydk::is_set(authtypelvl2.yfilter)
	|| ydk::is_set(authkey.yfilter)
	|| ydk::is_set(authkeylvl1.yfilter)
	|| ydk::is_set(authkeylvl2.yfilter)
	|| ydk::is_set(mtuchecklvl1.yfilter)
	|| ydk::is_set(mtuchecklvl2.yfilter)
	|| ydk::is_set(mtucheck.yfilter)
	|| ydk::is_set(nflagclear.yfilter)
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
    if (metriclvl1.is_set || is_set(metriclvl1.yfilter)) leaf_name_data.push_back(metriclvl1.get_name_leafdata());
    if (metriclvl2.is_set || is_set(metriclvl2.yfilter)) leaf_name_data.push_back(metriclvl2.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (v4enable.is_set || is_set(v4enable.yfilter)) leaf_name_data.push_back(v4enable.get_name_leafdata());
    if (v6enable.is_set || is_set(v6enable.yfilter)) leaf_name_data.push_back(v6enable.get_name_leafdata());
    if (authchecklvl1.is_set || is_set(authchecklvl1.yfilter)) leaf_name_data.push_back(authchecklvl1.get_name_leafdata());
    if (authchecklvl2.is_set || is_set(authchecklvl2.yfilter)) leaf_name_data.push_back(authchecklvl2.get_name_leafdata());
    if (authcheck.is_set || is_set(authcheck.yfilter)) leaf_name_data.push_back(authcheck.get_name_leafdata());
    if (networktypep2p.is_set || is_set(networktypep2p.yfilter)) leaf_name_data.push_back(networktypep2p.get_name_leafdata());
    if (lsprefreshintvl.is_set || is_set(lsprefreshintvl.yfilter)) leaf_name_data.push_back(lsprefreshintvl.get_name_leafdata());
    if (retransinterval.is_set || is_set(retransinterval.yfilter)) leaf_name_data.push_back(retransinterval.get_name_leafdata());
    if (retransthrottleinterval.is_set || is_set(retransthrottleinterval.yfilter)) leaf_name_data.push_back(retransthrottleinterval.get_name_leafdata());
    if (v4bfd.is_set || is_set(v4bfd.yfilter)) leaf_name_data.push_back(v4bfd.get_name_leafdata());
    if (v6bfd.is_set || is_set(v6bfd.yfilter)) leaf_name_data.push_back(v6bfd.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (hellopad.is_set || is_set(hellopad.yfilter)) leaf_name_data.push_back(hellopad.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (hellointvllvl1.is_set || is_set(hellointvllvl1.yfilter)) leaf_name_data.push_back(hellointvllvl1.get_name_leafdata());
    if (hellointvllvl2.is_set || is_set(hellointvllvl2.yfilter)) leaf_name_data.push_back(hellointvllvl2.get_name_leafdata());
    if (hellomult.is_set || is_set(hellomult.yfilter)) leaf_name_data.push_back(hellomult.get_name_leafdata());
    if (hellomultlvl1.is_set || is_set(hellomultlvl1.yfilter)) leaf_name_data.push_back(hellomultlvl1.get_name_leafdata());
    if (hellomultlvl2.is_set || is_set(hellomultlvl2.yfilter)) leaf_name_data.push_back(hellomultlvl2.get_name_leafdata());
    if (prioritylvl1.is_set || is_set(prioritylvl1.yfilter)) leaf_name_data.push_back(prioritylvl1.get_name_leafdata());
    if (prioritylvl2.is_set || is_set(prioritylvl2.yfilter)) leaf_name_data.push_back(prioritylvl2.get_name_leafdata());
    if (mt2metriclvl1.is_set || is_set(mt2metriclvl1.yfilter)) leaf_name_data.push_back(mt2metriclvl1.get_name_leafdata());
    if (mt2metriclvl2.is_set || is_set(mt2metriclvl2.yfilter)) leaf_name_data.push_back(mt2metriclvl2.get_name_leafdata());
    if (csnpintvllvl1.is_set || is_set(csnpintvllvl1.yfilter)) leaf_name_data.push_back(csnpintvllvl1.get_name_leafdata());
    if (csnpintvllvl2.is_set || is_set(csnpintvllvl2.yfilter)) leaf_name_data.push_back(csnpintvllvl2.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (authtypelvl1.is_set || is_set(authtypelvl1.yfilter)) leaf_name_data.push_back(authtypelvl1.get_name_leafdata());
    if (authtypelvl2.is_set || is_set(authtypelvl2.yfilter)) leaf_name_data.push_back(authtypelvl2.get_name_leafdata());
    if (authkey.is_set || is_set(authkey.yfilter)) leaf_name_data.push_back(authkey.get_name_leafdata());
    if (authkeylvl1.is_set || is_set(authkeylvl1.yfilter)) leaf_name_data.push_back(authkeylvl1.get_name_leafdata());
    if (authkeylvl2.is_set || is_set(authkeylvl2.yfilter)) leaf_name_data.push_back(authkeylvl2.get_name_leafdata());
    if (mtuchecklvl1.is_set || is_set(mtuchecklvl1.yfilter)) leaf_name_data.push_back(mtuchecklvl1.get_name_leafdata());
    if (mtuchecklvl2.is_set || is_set(mtuchecklvl2.yfilter)) leaf_name_data.push_back(mtuchecklvl2.get_name_leafdata());
    if (mtucheck.is_set || is_set(mtucheck.yfilter)) leaf_name_data.push_back(mtucheck.get_name_leafdata());
    if (nflagclear.is_set || is_set(nflagclear.yfilter)) leaf_name_data.push_back(nflagclear.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (dom.is_set || is_set(dom.yfilter)) leaf_name_data.push_back(dom.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::IfItems::InternalIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::IfItems::InternalIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(meshgrp_items != nullptr)
    {
        _children["meshgrp-items"] = meshgrp_items;
    }

    if(lvl_items != nullptr)
    {
        _children["lvl-items"] = lvl_items;
    }

    if(traffic_items != nullptr)
    {
        _children["traffic-items"] = traffic_items;
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
    if(value_path == "metricLvl1")
    {
        metriclvl1 = value;
        metriclvl1.value_namespace = name_space;
        metriclvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metricLvl2")
    {
        metriclvl2 = value;
        metriclvl2.value_namespace = name_space;
        metriclvl2.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "authCheck")
    {
        authcheck = value;
        authcheck.value_namespace = name_space;
        authcheck.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPad")
    {
        hellopad = value;
        hellopad.value_namespace = name_space;
        hellopad.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvlLvl1")
    {
        hellointvllvl1 = value;
        hellointvllvl1.value_namespace = name_space;
        hellointvllvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvlLvl2")
    {
        hellointvllvl2 = value;
        hellointvllvl2.value_namespace = name_space;
        hellointvllvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloMult")
    {
        hellomult = value;
        hellomult.value_namespace = name_space;
        hellomult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloMultLvl1")
    {
        hellomultlvl1 = value;
        hellomultlvl1.value_namespace = name_space;
        hellomultlvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloMultLvl2")
    {
        hellomultlvl2 = value;
        hellomultlvl2.value_namespace = name_space;
        hellomultlvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priorityLvl1")
    {
        prioritylvl1 = value;
        prioritylvl1.value_namespace = name_space;
        prioritylvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priorityLvl2")
    {
        prioritylvl2 = value;
        prioritylvl2.value_namespace = name_space;
        prioritylvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt2MetricLvl1")
    {
        mt2metriclvl1 = value;
        mt2metriclvl1.value_namespace = name_space;
        mt2metriclvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt2MetricLvl2")
    {
        mt2metriclvl2 = value;
        mt2metriclvl2.value_namespace = name_space;
        mt2metriclvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpIntvlLvl1")
    {
        csnpintvllvl1 = value;
        csnpintvllvl1.value_namespace = name_space;
        csnpintvllvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpIntvlLvl2")
    {
        csnpintvllvl2 = value;
        csnpintvllvl2.value_namespace = name_space;
        csnpintvllvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authType")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authTypeLvl1")
    {
        authtypelvl1 = value;
        authtypelvl1.value_namespace = name_space;
        authtypelvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authTypeLvl2")
    {
        authtypelvl2 = value;
        authtypelvl2.value_namespace = name_space;
        authtypelvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKey")
    {
        authkey = value;
        authkey.value_namespace = name_space;
        authkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKeyLvl1")
    {
        authkeylvl1 = value;
        authkeylvl1.value_namespace = name_space;
        authkeylvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKeyLvl2")
    {
        authkeylvl2 = value;
        authkeylvl2.value_namespace = name_space;
        authkeylvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtuCheckLvl1")
    {
        mtuchecklvl1 = value;
        mtuchecklvl1.value_namespace = name_space;
        mtuchecklvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtuCheckLvl2")
    {
        mtuchecklvl2 = value;
        mtuchecklvl2.value_namespace = name_space;
        mtuchecklvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtuCheck")
    {
        mtucheck = value;
        mtucheck.value_namespace = name_space;
        mtucheck.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nFlagClear")
    {
        nflagclear = value;
        nflagclear.value_namespace = name_space;
        nflagclear.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "metricLvl1")
    {
        metriclvl1.yfilter = yfilter;
    }
    if(value_path == "metricLvl2")
    {
        metriclvl2.yfilter = yfilter;
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
    if(value_path == "authCheck")
    {
        authcheck.yfilter = yfilter;
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
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "helloPad")
    {
        hellopad.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "helloIntvlLvl1")
    {
        hellointvllvl1.yfilter = yfilter;
    }
    if(value_path == "helloIntvlLvl2")
    {
        hellointvllvl2.yfilter = yfilter;
    }
    if(value_path == "helloMult")
    {
        hellomult.yfilter = yfilter;
    }
    if(value_path == "helloMultLvl1")
    {
        hellomultlvl1.yfilter = yfilter;
    }
    if(value_path == "helloMultLvl2")
    {
        hellomultlvl2.yfilter = yfilter;
    }
    if(value_path == "priorityLvl1")
    {
        prioritylvl1.yfilter = yfilter;
    }
    if(value_path == "priorityLvl2")
    {
        prioritylvl2.yfilter = yfilter;
    }
    if(value_path == "mt2MetricLvl1")
    {
        mt2metriclvl1.yfilter = yfilter;
    }
    if(value_path == "mt2MetricLvl2")
    {
        mt2metriclvl2.yfilter = yfilter;
    }
    if(value_path == "csnpIntvlLvl1")
    {
        csnpintvllvl1.yfilter = yfilter;
    }
    if(value_path == "csnpIntvlLvl2")
    {
        csnpintvllvl2.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "authTypeLvl1")
    {
        authtypelvl1.yfilter = yfilter;
    }
    if(value_path == "authTypeLvl2")
    {
        authtypelvl2.yfilter = yfilter;
    }
    if(value_path == "authKey")
    {
        authkey.yfilter = yfilter;
    }
    if(value_path == "authKeyLvl1")
    {
        authkeylvl1.yfilter = yfilter;
    }
    if(value_path == "authKeyLvl2")
    {
        authkeylvl2.yfilter = yfilter;
    }
    if(value_path == "mtuCheckLvl1")
    {
        mtuchecklvl1.yfilter = yfilter;
    }
    if(value_path == "mtuCheckLvl2")
    {
        mtuchecklvl2.yfilter = yfilter;
    }
    if(value_path == "mtuCheck")
    {
        mtucheck.yfilter = yfilter;
    }
    if(value_path == "nFlagClear")
    {
        nflagclear.yfilter = yfilter;
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
    if(name == "meshgrp-items" || name == "lvl-items" || name == "traffic-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "cktT" || name == "metricLvl1" || name == "metricLvl2" || name == "ctrl" || name == "v4enable" || name == "v6enable" || name == "authCheckLvl1" || name == "authCheckLvl2" || name == "authCheck" || name == "networkTypeP2P" || name == "lspRefreshIntvl" || name == "retransInterval" || name == "retransThrottleInterval" || name == "v4Bfd" || name == "v6Bfd" || name == "passive" || name == "helloPad" || name == "helloIntvl" || name == "helloIntvlLvl1" || name == "helloIntvlLvl2" || name == "helloMult" || name == "helloMultLvl1" || name == "helloMultLvl2" || name == "priorityLvl1" || name == "priorityLvl2" || name == "mt2MetricLvl1" || name == "mt2MetricLvl2" || name == "csnpIntvlLvl1" || name == "csnpIntvlLvl2" || name == "authType" || name == "authTypeLvl1" || name == "authTypeLvl2" || name == "authKey" || name == "authKeyLvl1" || name == "authKeyLvl2" || name == "mtuCheckLvl1" || name == "mtuCheckLvl2" || name == "mtuCheck" || name == "nFlagClear" || name == "instance" || name == "dom")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshgrpItems()
    :
    id{YType::uint32, "id"},
    ctrl{YType::str, "ctrl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "meshgrp-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::MeshgrpItems::~MeshgrpItems()
{
}

bool System::IsisItems::IfItems::InternalIfList::MeshgrpItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ctrl.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::IsisItems::IfItems::InternalIfList::MeshgrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
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

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::IfItems::InternalIfList::MeshgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::IfItems::InternalIfList::MeshgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::IfItems::InternalIfList::MeshgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::IfItems::InternalIfList::MeshgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::IfItems::InternalIfList::MeshgrpItems::has_leaf_or_child_of_name(const std::string & name) const
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

std::shared_ptr<ydk::Entity> System::IsisItems::IfItems::InternalIfList::LvlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfLvl-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList>();
        ent_->parent = this;
        iflvl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::IfItems::InternalIfList::LvlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iflvl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    mt0metriclvl1{YType::uint32, "mt0MetricLvl1"},
    mt0metriclvl2{YType::uint32, "mt0MetricLvl2"},
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
	|| mt0metriclvl1.is_set
	|| mt0metriclvl2.is_set
	|| name.is_set;
}

bool System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mt0metriclvl1.yfilter)
	|| ydk::is_set(mt0metriclvl2.yfilter)
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
    if (mt0metriclvl1.is_set || is_set(mt0metriclvl1.yfilter)) leaf_name_data.push_back(mt0metriclvl1.get_name_leafdata());
    if (mt0metriclvl2.is_set || is_set(mt0metriclvl2.yfilter)) leaf_name_data.push_back(mt0metriclvl2.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt0MetricLvl1")
    {
        mt0metriclvl1 = value;
        mt0metriclvl1.value_namespace = name_space;
        mt0metriclvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt0MetricLvl2")
    {
        mt0metriclvl2 = value;
        mt0metriclvl2.value_namespace = name_space;
        mt0metriclvl2.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mt0MetricLvl1")
    {
        mt0metriclvl1.yfilter = yfilter;
    }
    if(value_path == "mt0MetricLvl2")
    {
        mt0metriclvl2.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "mt0MetricLvl1" || name == "mt0MetricLvl2" || name == "name")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::TrafficItems::TrafficItems()
{

    yang_name = "traffic-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::TrafficItems::~TrafficItems()
{
}

bool System::IsisItems::IfItems::InternalIfList::TrafficItems::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool System::IsisItems::IfItems::InternalIfList::TrafficItems::has_operation() const
{
    return is_set(yfilter);
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


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::IfItems::InternalIfList::TrafficItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::IfItems::InternalIfList::TrafficItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::IfItems::InternalIfList::TrafficItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::IfItems::InternalIfList::TrafficItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::IfItems::InternalIfList::TrafficItems::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::get_children() const
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ItdItems::ItdItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::ItdItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "itd-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ItdItems::~ItdItems()
{
}

bool System::ItdItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::ItdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::ItdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ItdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::ItdItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::ItdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ItdItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ItdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::ItdItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    devgrp_items(std::make_shared<System::ItdItems::InstItems::DevgrpItems>())
    , service_items(std::make_shared<System::ItdItems::InstItems::ServiceItems>())
    , sessiondevgrp_items(std::make_shared<System::ItdItems::InstItems::SessiondevgrpItems>())
    , refreshacl_items(std::make_shared<System::ItdItems::InstItems::RefreshaclItems>())
{
    devgrp_items->parent = this;
    service_items->parent = this;
    sessiondevgrp_items->parent = this;
    refreshacl_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "itd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ItdItems::InstItems::~InstItems()
{
}

bool System::ItdItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (devgrp_items !=  nullptr && devgrp_items->has_data())
	|| (service_items !=  nullptr && service_items->has_data())
	|| (sessiondevgrp_items !=  nullptr && sessiondevgrp_items->has_data())
	|| (refreshacl_items !=  nullptr && refreshacl_items->has_data());
}

bool System::ItdItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (devgrp_items !=  nullptr && devgrp_items->has_operation())
	|| (service_items !=  nullptr && service_items->has_operation())
	|| (sessiondevgrp_items !=  nullptr && sessiondevgrp_items->has_operation())
	|| (refreshacl_items !=  nullptr && refreshacl_items->has_operation());
}

std::string System::ItdItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/itd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ItdItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "devgrp-items")
    {
        if(devgrp_items == nullptr)
        {
            devgrp_items = std::make_shared<System::ItdItems::InstItems::DevgrpItems>();
        }
        return devgrp_items;
    }

    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::ItdItems::InstItems::ServiceItems>();
        }
        return service_items;
    }

    if(child_yang_name == "sessiondevgrp-items")
    {
        if(sessiondevgrp_items == nullptr)
        {
            sessiondevgrp_items = std::make_shared<System::ItdItems::InstItems::SessiondevgrpItems>();
        }
        return sessiondevgrp_items;
    }

    if(child_yang_name == "refreshacl-items")
    {
        if(refreshacl_items == nullptr)
        {
            refreshacl_items = std::make_shared<System::ItdItems::InstItems::RefreshaclItems>();
        }
        return refreshacl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(devgrp_items != nullptr)
    {
        _children["devgrp-items"] = devgrp_items;
    }

    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    if(sessiondevgrp_items != nullptr)
    {
        _children["sessiondevgrp-items"] = sessiondevgrp_items;
    }

    if(refreshacl_items != nullptr)
    {
        _children["refreshacl-items"] = refreshacl_items;
    }

    return _children;
}

void System::ItdItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ItdItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ItdItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "devgrp-items" || name == "service-items" || name == "sessiondevgrp-items" || name == "refreshacl-items" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::ItdItems::InstItems::DevgrpItems::DevgrpItems()
    :
    devicegroup_list(this, {"dgname"})
{

    yang_name = "devgrp-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ItdItems::InstItems::DevgrpItems::~DevgrpItems()
{
}

bool System::ItdItems::InstItems::DevgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<devicegroup_list.len(); index++)
    {
        if(devicegroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ItdItems::InstItems::DevgrpItems::has_operation() const
{
    for (std::size_t index=0; index<devicegroup_list.len(); index++)
    {
        if(devicegroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ItdItems::InstItems::DevgrpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/itd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ItdItems::InstItems::DevgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "devgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::DevgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::DevgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DeviceGroup-list")
    {
        auto ent_ = std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList>();
        ent_->parent = this;
        devicegroup_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::DevgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : devicegroup_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ItdItems::InstItems::DevgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ItdItems::InstItems::DevgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ItdItems::InstItems::DevgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DeviceGroup-list")
        return true;
    return false;
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::DeviceGroupList()
    :
    dgname{YType::str, "dgName"},
    propfaultbitmap{YType::str, "propFaultBitmap"}
        ,
    nodev4_items(std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items>())
    , nodev6_items(std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items>())
    , probe_items(std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems>())
{
    nodev4_items->parent = this;
    nodev6_items->parent = this;
    probe_items->parent = this;

    yang_name = "DeviceGroup-list"; yang_parent_name = "devgrp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::~DeviceGroupList()
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::has_data() const
{
    if (is_presence_container) return true;
    return dgname.is_set
	|| propfaultbitmap.is_set
	|| (nodev4_items !=  nullptr && nodev4_items->has_data())
	|| (nodev6_items !=  nullptr && nodev6_items->has_data())
	|| (probe_items !=  nullptr && probe_items->has_data());
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dgname.yfilter)
	|| ydk::is_set(propfaultbitmap.yfilter)
	|| (nodev4_items !=  nullptr && nodev4_items->has_operation())
	|| (nodev6_items !=  nullptr && nodev6_items->has_operation())
	|| (probe_items !=  nullptr && probe_items->has_operation());
}

std::string System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/itd-items/inst-items/devgrp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DeviceGroup-list";
    ADD_KEY_TOKEN(dgname, "dgName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dgname.is_set || is_set(dgname.yfilter)) leaf_name_data.push_back(dgname.get_name_leafdata());
    if (propfaultbitmap.is_set || is_set(propfaultbitmap.yfilter)) leaf_name_data.push_back(propfaultbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodev4-items")
    {
        if(nodev4_items == nullptr)
        {
            nodev4_items = std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items>();
        }
        return nodev4_items;
    }

    if(child_yang_name == "nodev6-items")
    {
        if(nodev6_items == nullptr)
        {
            nodev6_items = std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items>();
        }
        return nodev6_items;
    }

    if(child_yang_name == "probe-items")
    {
        if(probe_items == nullptr)
        {
            probe_items = std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems>();
        }
        return probe_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodev4_items != nullptr)
    {
        _children["nodev4-items"] = nodev4_items;
    }

    if(nodev6_items != nullptr)
    {
        _children["nodev6-items"] = nodev6_items;
    }

    if(probe_items != nullptr)
    {
        _children["probe-items"] = probe_items;
    }

    return _children;
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dgName")
    {
        dgname = value;
        dgname.value_namespace = name_space;
        dgname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap = value;
        propfaultbitmap.value_namespace = name_space;
        propfaultbitmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dgName")
    {
        dgname.yfilter = yfilter;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodev4-items" || name == "nodev6-items" || name == "probe-items" || name == "dgName" || name == "propFaultBitmap")
        return true;
    return false;
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4Items()
    :
    nodev4_list(this, {"ip"})
{

    yang_name = "nodev4-items"; yang_parent_name = "DeviceGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::~Nodev4Items()
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodev4_list.len(); index++)
    {
        if(nodev4_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::has_operation() const
{
    for (std::size_t index=0; index<nodev4_list.len(); index++)
    {
        if(nodev4_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodev4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nodev4-list")
    {
        auto ent_ = std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List>();
        ent_->parent = this;
        nodev4_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nodev4_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nodev4-list")
        return true;
    return false;
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Nodev4List()
    :
    ip{YType::str, "ip"},
    weight{YType::uint32, "weight"},
    mode{YType::enumeration, "mode"},
    propfaultbitmap{YType::str, "propFaultBitmap"}
        ,
    stbynodev4_items(std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items>())
    , probe_items(std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems>())
{
    stbynodev4_items->parent = this;
    probe_items->parent = this;

    yang_name = "Nodev4-list"; yang_parent_name = "nodev4-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::~Nodev4List()
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| weight.is_set
	|| mode.is_set
	|| propfaultbitmap.is_set
	|| (stbynodev4_items !=  nullptr && stbynodev4_items->has_data())
	|| (probe_items !=  nullptr && probe_items->has_data());
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(propfaultbitmap.yfilter)
	|| (stbynodev4_items !=  nullptr && stbynodev4_items->has_operation())
	|| (probe_items !=  nullptr && probe_items->has_operation());
}

std::string System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nodev4-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (propfaultbitmap.is_set || is_set(propfaultbitmap.yfilter)) leaf_name_data.push_back(propfaultbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stbynodev4-items")
    {
        if(stbynodev4_items == nullptr)
        {
            stbynodev4_items = std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items>();
        }
        return stbynodev4_items;
    }

    if(child_yang_name == "probe-items")
    {
        if(probe_items == nullptr)
        {
            probe_items = std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems>();
        }
        return probe_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stbynodev4_items != nullptr)
    {
        _children["stbynodev4-items"] = stbynodev4_items;
    }

    if(probe_items != nullptr)
    {
        _children["probe-items"] = probe_items;
    }

    return _children;
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap = value;
        propfaultbitmap.value_namespace = name_space;
        propfaultbitmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stbynodev4-items" || name == "probe-items" || name == "ip" || name == "weight" || name == "mode" || name == "propFaultBitmap")
        return true;
    return false;
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::Stbynodev4Items()
    :
    standbynodev4_list(this, {"ip"})
{

    yang_name = "stbynodev4-items"; yang_parent_name = "Nodev4-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::~Stbynodev4Items()
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<standbynodev4_list.len(); index++)
    {
        if(standbynodev4_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::has_operation() const
{
    for (std::size_t index=0; index<standbynodev4_list.len(); index++)
    {
        if(standbynodev4_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stbynodev4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StandbyNodev4-list")
    {
        auto ent_ = std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List>();
        ent_->parent = this;
        standbynodev4_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : standbynodev4_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StandbyNodev4-list")
        return true;
    return false;
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::StandbyNodev4List()
    :
    ip{YType::str, "ip"},
    propfaultbitmap{YType::str, "propFaultBitmap"}
        ,
    probe_items(std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems>())
{
    probe_items->parent = this;

    yang_name = "StandbyNodev4-list"; yang_parent_name = "stbynodev4-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::~StandbyNodev4List()
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| propfaultbitmap.is_set
	|| (probe_items !=  nullptr && probe_items->has_data());
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(propfaultbitmap.yfilter)
	|| (probe_items !=  nullptr && probe_items->has_operation());
}

std::string System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StandbyNodev4-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (propfaultbitmap.is_set || is_set(propfaultbitmap.yfilter)) leaf_name_data.push_back(propfaultbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe-items")
    {
        if(probe_items == nullptr)
        {
            probe_items = std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems>();
        }
        return probe_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(probe_items != nullptr)
    {
        _children["probe-items"] = probe_items;
    }

    return _children;
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-items" || name == "ip" || name == "propFaultBitmap")
        return true;
    return false;
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems::ProbeItems()
    :
    protocol{YType::enumeration, "protocol"},
    port{YType::uint16, "port"},
    frequency{YType::uint32, "frequency"},
    retrydowncount{YType::uint32, "retryDownCount"},
    retryupcount{YType::uint32, "retryUpCount"},
    timeout{YType::uint32, "timeout"},
    dnshost{YType::str, "dnshost"},
    probeip{YType::str, "probeIp"},
    httpgetstr{YType::str, "httpGetStr"},
    ctrlstatusenable{YType::enumeration, "ctrlStatusEnable"},
    propfaultbitmap{YType::str, "propFaultBitmap"}
{

    yang_name = "probe-items"; yang_parent_name = "StandbyNodev4-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems::~ProbeItems()
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| port.is_set
	|| frequency.is_set
	|| retrydowncount.is_set
	|| retryupcount.is_set
	|| timeout.is_set
	|| dnshost.is_set
	|| probeip.is_set
	|| httpgetstr.is_set
	|| ctrlstatusenable.is_set
	|| propfaultbitmap.is_set;
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(retrydowncount.yfilter)
	|| ydk::is_set(retryupcount.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(dnshost.yfilter)
	|| ydk::is_set(probeip.yfilter)
	|| ydk::is_set(httpgetstr.yfilter)
	|| ydk::is_set(ctrlstatusenable.yfilter)
	|| ydk::is_set(propfaultbitmap.yfilter);
}

std::string System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (retrydowncount.is_set || is_set(retrydowncount.yfilter)) leaf_name_data.push_back(retrydowncount.get_name_leafdata());
    if (retryupcount.is_set || is_set(retryupcount.yfilter)) leaf_name_data.push_back(retryupcount.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (dnshost.is_set || is_set(dnshost.yfilter)) leaf_name_data.push_back(dnshost.get_name_leafdata());
    if (probeip.is_set || is_set(probeip.yfilter)) leaf_name_data.push_back(probeip.get_name_leafdata());
    if (httpgetstr.is_set || is_set(httpgetstr.yfilter)) leaf_name_data.push_back(httpgetstr.get_name_leafdata());
    if (ctrlstatusenable.is_set || is_set(ctrlstatusenable.yfilter)) leaf_name_data.push_back(ctrlstatusenable.get_name_leafdata());
    if (propfaultbitmap.is_set || is_set(propfaultbitmap.yfilter)) leaf_name_data.push_back(propfaultbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retryDownCount")
    {
        retrydowncount = value;
        retrydowncount.value_namespace = name_space;
        retrydowncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retryUpCount")
    {
        retryupcount = value;
        retryupcount.value_namespace = name_space;
        retryupcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnshost")
    {
        dnshost = value;
        dnshost.value_namespace = name_space;
        dnshost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeIp")
    {
        probeip = value;
        probeip.value_namespace = name_space;
        probeip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "httpGetStr")
    {
        httpgetstr = value;
        httpgetstr.value_namespace = name_space;
        httpgetstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlStatusEnable")
    {
        ctrlstatusenable = value;
        ctrlstatusenable.value_namespace = name_space;
        ctrlstatusenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap = value;
        propfaultbitmap.value_namespace = name_space;
        propfaultbitmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "retryDownCount")
    {
        retrydowncount.yfilter = yfilter;
    }
    if(value_path == "retryUpCount")
    {
        retryupcount.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "dnshost")
    {
        dnshost.yfilter = yfilter;
    }
    if(value_path == "probeIp")
    {
        probeip.yfilter = yfilter;
    }
    if(value_path == "httpGetStr")
    {
        httpgetstr.yfilter = yfilter;
    }
    if(value_path == "ctrlStatusEnable")
    {
        ctrlstatusenable.yfilter = yfilter;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "port" || name == "frequency" || name == "retryDownCount" || name == "retryUpCount" || name == "timeout" || name == "dnshost" || name == "probeIp" || name == "httpGetStr" || name == "ctrlStatusEnable" || name == "propFaultBitmap")
        return true;
    return false;
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems::ProbeItems()
    :
    protocol{YType::enumeration, "protocol"},
    port{YType::uint16, "port"},
    frequency{YType::uint32, "frequency"},
    retrydowncount{YType::uint32, "retryDownCount"},
    retryupcount{YType::uint32, "retryUpCount"},
    timeout{YType::uint32, "timeout"},
    dnshost{YType::str, "dnshost"},
    probeip{YType::str, "probeIp"},
    httpgetstr{YType::str, "httpGetStr"},
    ctrlstatusenable{YType::enumeration, "ctrlStatusEnable"},
    propfaultbitmap{YType::str, "propFaultBitmap"}
{

    yang_name = "probe-items"; yang_parent_name = "Nodev4-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems::~ProbeItems()
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| port.is_set
	|| frequency.is_set
	|| retrydowncount.is_set
	|| retryupcount.is_set
	|| timeout.is_set
	|| dnshost.is_set
	|| probeip.is_set
	|| httpgetstr.is_set
	|| ctrlstatusenable.is_set
	|| propfaultbitmap.is_set;
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(retrydowncount.yfilter)
	|| ydk::is_set(retryupcount.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(dnshost.yfilter)
	|| ydk::is_set(probeip.yfilter)
	|| ydk::is_set(httpgetstr.yfilter)
	|| ydk::is_set(ctrlstatusenable.yfilter)
	|| ydk::is_set(propfaultbitmap.yfilter);
}

std::string System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (retrydowncount.is_set || is_set(retrydowncount.yfilter)) leaf_name_data.push_back(retrydowncount.get_name_leafdata());
    if (retryupcount.is_set || is_set(retryupcount.yfilter)) leaf_name_data.push_back(retryupcount.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (dnshost.is_set || is_set(dnshost.yfilter)) leaf_name_data.push_back(dnshost.get_name_leafdata());
    if (probeip.is_set || is_set(probeip.yfilter)) leaf_name_data.push_back(probeip.get_name_leafdata());
    if (httpgetstr.is_set || is_set(httpgetstr.yfilter)) leaf_name_data.push_back(httpgetstr.get_name_leafdata());
    if (ctrlstatusenable.is_set || is_set(ctrlstatusenable.yfilter)) leaf_name_data.push_back(ctrlstatusenable.get_name_leafdata());
    if (propfaultbitmap.is_set || is_set(propfaultbitmap.yfilter)) leaf_name_data.push_back(propfaultbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retryDownCount")
    {
        retrydowncount = value;
        retrydowncount.value_namespace = name_space;
        retrydowncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retryUpCount")
    {
        retryupcount = value;
        retryupcount.value_namespace = name_space;
        retryupcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnshost")
    {
        dnshost = value;
        dnshost.value_namespace = name_space;
        dnshost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeIp")
    {
        probeip = value;
        probeip.value_namespace = name_space;
        probeip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "httpGetStr")
    {
        httpgetstr = value;
        httpgetstr.value_namespace = name_space;
        httpgetstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlStatusEnable")
    {
        ctrlstatusenable = value;
        ctrlstatusenable.value_namespace = name_space;
        ctrlstatusenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap = value;
        propfaultbitmap.value_namespace = name_space;
        propfaultbitmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "retryDownCount")
    {
        retrydowncount.yfilter = yfilter;
    }
    if(value_path == "retryUpCount")
    {
        retryupcount.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "dnshost")
    {
        dnshost.yfilter = yfilter;
    }
    if(value_path == "probeIp")
    {
        probeip.yfilter = yfilter;
    }
    if(value_path == "httpGetStr")
    {
        httpgetstr.yfilter = yfilter;
    }
    if(value_path == "ctrlStatusEnable")
    {
        ctrlstatusenable.yfilter = yfilter;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "port" || name == "frequency" || name == "retryDownCount" || name == "retryUpCount" || name == "timeout" || name == "dnshost" || name == "probeIp" || name == "httpGetStr" || name == "ctrlStatusEnable" || name == "propFaultBitmap")
        return true;
    return false;
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6Items()
    :
    nodev6_list(this, {"ip"})
{

    yang_name = "nodev6-items"; yang_parent_name = "DeviceGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::~Nodev6Items()
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodev6_list.len(); index++)
    {
        if(nodev6_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::has_operation() const
{
    for (std::size_t index=0; index<nodev6_list.len(); index++)
    {
        if(nodev6_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodev6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nodev6-list")
    {
        auto ent_ = std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List>();
        ent_->parent = this;
        nodev6_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nodev6_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nodev6-list")
        return true;
    return false;
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Nodev6List()
    :
    ip{YType::str, "ip"},
    weight{YType::uint32, "weight"},
    mode{YType::enumeration, "mode"},
    propfaultbitmap{YType::str, "propFaultBitmap"}
        ,
    stbynodev6_items(std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items>())
    , probe_items(std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems>())
{
    stbynodev6_items->parent = this;
    probe_items->parent = this;

    yang_name = "Nodev6-list"; yang_parent_name = "nodev6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::~Nodev6List()
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| weight.is_set
	|| mode.is_set
	|| propfaultbitmap.is_set
	|| (stbynodev6_items !=  nullptr && stbynodev6_items->has_data())
	|| (probe_items !=  nullptr && probe_items->has_data());
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(propfaultbitmap.yfilter)
	|| (stbynodev6_items !=  nullptr && stbynodev6_items->has_operation())
	|| (probe_items !=  nullptr && probe_items->has_operation());
}

std::string System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nodev6-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (propfaultbitmap.is_set || is_set(propfaultbitmap.yfilter)) leaf_name_data.push_back(propfaultbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stbynodev6-items")
    {
        if(stbynodev6_items == nullptr)
        {
            stbynodev6_items = std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items>();
        }
        return stbynodev6_items;
    }

    if(child_yang_name == "probe-items")
    {
        if(probe_items == nullptr)
        {
            probe_items = std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems>();
        }
        return probe_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stbynodev6_items != nullptr)
    {
        _children["stbynodev6-items"] = stbynodev6_items;
    }

    if(probe_items != nullptr)
    {
        _children["probe-items"] = probe_items;
    }

    return _children;
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap = value;
        propfaultbitmap.value_namespace = name_space;
        propfaultbitmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stbynodev6-items" || name == "probe-items" || name == "ip" || name == "weight" || name == "mode" || name == "propFaultBitmap")
        return true;
    return false;
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::Stbynodev6Items()
    :
    standbynodev6_list(this, {"ip"})
{

    yang_name = "stbynodev6-items"; yang_parent_name = "Nodev6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::~Stbynodev6Items()
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<standbynodev6_list.len(); index++)
    {
        if(standbynodev6_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::has_operation() const
{
    for (std::size_t index=0; index<standbynodev6_list.len(); index++)
    {
        if(standbynodev6_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stbynodev6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StandbyNodev6-list")
    {
        auto ent_ = std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List>();
        ent_->parent = this;
        standbynodev6_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : standbynodev6_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StandbyNodev6-list")
        return true;
    return false;
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::StandbyNodev6List()
    :
    ip{YType::str, "ip"},
    propfaultbitmap{YType::str, "propFaultBitmap"}
        ,
    probe_items(std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems>())
{
    probe_items->parent = this;

    yang_name = "StandbyNodev6-list"; yang_parent_name = "stbynodev6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::~StandbyNodev6List()
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| propfaultbitmap.is_set
	|| (probe_items !=  nullptr && probe_items->has_data());
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(propfaultbitmap.yfilter)
	|| (probe_items !=  nullptr && probe_items->has_operation());
}

std::string System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StandbyNodev6-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (propfaultbitmap.is_set || is_set(propfaultbitmap.yfilter)) leaf_name_data.push_back(propfaultbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe-items")
    {
        if(probe_items == nullptr)
        {
            probe_items = std::make_shared<System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems>();
        }
        return probe_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(probe_items != nullptr)
    {
        _children["probe-items"] = probe_items;
    }

    return _children;
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-items" || name == "ip" || name == "propFaultBitmap")
        return true;
    return false;
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems::ProbeItems()
    :
    protocol{YType::enumeration, "protocol"},
    port{YType::uint16, "port"},
    frequency{YType::uint32, "frequency"},
    retrydowncount{YType::uint32, "retryDownCount"},
    retryupcount{YType::uint32, "retryUpCount"},
    timeout{YType::uint32, "timeout"},
    dnshost{YType::str, "dnshost"},
    probeip{YType::str, "probeIp"},
    httpgetstr{YType::str, "httpGetStr"},
    ctrlstatusenable{YType::enumeration, "ctrlStatusEnable"},
    propfaultbitmap{YType::str, "propFaultBitmap"}
{

    yang_name = "probe-items"; yang_parent_name = "StandbyNodev6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems::~ProbeItems()
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| port.is_set
	|| frequency.is_set
	|| retrydowncount.is_set
	|| retryupcount.is_set
	|| timeout.is_set
	|| dnshost.is_set
	|| probeip.is_set
	|| httpgetstr.is_set
	|| ctrlstatusenable.is_set
	|| propfaultbitmap.is_set;
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(retrydowncount.yfilter)
	|| ydk::is_set(retryupcount.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(dnshost.yfilter)
	|| ydk::is_set(probeip.yfilter)
	|| ydk::is_set(httpgetstr.yfilter)
	|| ydk::is_set(ctrlstatusenable.yfilter)
	|| ydk::is_set(propfaultbitmap.yfilter);
}

std::string System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (retrydowncount.is_set || is_set(retrydowncount.yfilter)) leaf_name_data.push_back(retrydowncount.get_name_leafdata());
    if (retryupcount.is_set || is_set(retryupcount.yfilter)) leaf_name_data.push_back(retryupcount.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (dnshost.is_set || is_set(dnshost.yfilter)) leaf_name_data.push_back(dnshost.get_name_leafdata());
    if (probeip.is_set || is_set(probeip.yfilter)) leaf_name_data.push_back(probeip.get_name_leafdata());
    if (httpgetstr.is_set || is_set(httpgetstr.yfilter)) leaf_name_data.push_back(httpgetstr.get_name_leafdata());
    if (ctrlstatusenable.is_set || is_set(ctrlstatusenable.yfilter)) leaf_name_data.push_back(ctrlstatusenable.get_name_leafdata());
    if (propfaultbitmap.is_set || is_set(propfaultbitmap.yfilter)) leaf_name_data.push_back(propfaultbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retryDownCount")
    {
        retrydowncount = value;
        retrydowncount.value_namespace = name_space;
        retrydowncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retryUpCount")
    {
        retryupcount = value;
        retryupcount.value_namespace = name_space;
        retryupcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnshost")
    {
        dnshost = value;
        dnshost.value_namespace = name_space;
        dnshost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeIp")
    {
        probeip = value;
        probeip.value_namespace = name_space;
        probeip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "httpGetStr")
    {
        httpgetstr = value;
        httpgetstr.value_namespace = name_space;
        httpgetstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlStatusEnable")
    {
        ctrlstatusenable = value;
        ctrlstatusenable.value_namespace = name_space;
        ctrlstatusenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap = value;
        propfaultbitmap.value_namespace = name_space;
        propfaultbitmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "retryDownCount")
    {
        retrydowncount.yfilter = yfilter;
    }
    if(value_path == "retryUpCount")
    {
        retryupcount.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "dnshost")
    {
        dnshost.yfilter = yfilter;
    }
    if(value_path == "probeIp")
    {
        probeip.yfilter = yfilter;
    }
    if(value_path == "httpGetStr")
    {
        httpgetstr.yfilter = yfilter;
    }
    if(value_path == "ctrlStatusEnable")
    {
        ctrlstatusenable.yfilter = yfilter;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "port" || name == "frequency" || name == "retryDownCount" || name == "retryUpCount" || name == "timeout" || name == "dnshost" || name == "probeIp" || name == "httpGetStr" || name == "ctrlStatusEnable" || name == "propFaultBitmap")
        return true;
    return false;
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems::ProbeItems()
    :
    protocol{YType::enumeration, "protocol"},
    port{YType::uint16, "port"},
    frequency{YType::uint32, "frequency"},
    retrydowncount{YType::uint32, "retryDownCount"},
    retryupcount{YType::uint32, "retryUpCount"},
    timeout{YType::uint32, "timeout"},
    dnshost{YType::str, "dnshost"},
    probeip{YType::str, "probeIp"},
    httpgetstr{YType::str, "httpGetStr"},
    ctrlstatusenable{YType::enumeration, "ctrlStatusEnable"},
    propfaultbitmap{YType::str, "propFaultBitmap"}
{

    yang_name = "probe-items"; yang_parent_name = "Nodev6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems::~ProbeItems()
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| port.is_set
	|| frequency.is_set
	|| retrydowncount.is_set
	|| retryupcount.is_set
	|| timeout.is_set
	|| dnshost.is_set
	|| probeip.is_set
	|| httpgetstr.is_set
	|| ctrlstatusenable.is_set
	|| propfaultbitmap.is_set;
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(retrydowncount.yfilter)
	|| ydk::is_set(retryupcount.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(dnshost.yfilter)
	|| ydk::is_set(probeip.yfilter)
	|| ydk::is_set(httpgetstr.yfilter)
	|| ydk::is_set(ctrlstatusenable.yfilter)
	|| ydk::is_set(propfaultbitmap.yfilter);
}

std::string System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (retrydowncount.is_set || is_set(retrydowncount.yfilter)) leaf_name_data.push_back(retrydowncount.get_name_leafdata());
    if (retryupcount.is_set || is_set(retryupcount.yfilter)) leaf_name_data.push_back(retryupcount.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (dnshost.is_set || is_set(dnshost.yfilter)) leaf_name_data.push_back(dnshost.get_name_leafdata());
    if (probeip.is_set || is_set(probeip.yfilter)) leaf_name_data.push_back(probeip.get_name_leafdata());
    if (httpgetstr.is_set || is_set(httpgetstr.yfilter)) leaf_name_data.push_back(httpgetstr.get_name_leafdata());
    if (ctrlstatusenable.is_set || is_set(ctrlstatusenable.yfilter)) leaf_name_data.push_back(ctrlstatusenable.get_name_leafdata());
    if (propfaultbitmap.is_set || is_set(propfaultbitmap.yfilter)) leaf_name_data.push_back(propfaultbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retryDownCount")
    {
        retrydowncount = value;
        retrydowncount.value_namespace = name_space;
        retrydowncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retryUpCount")
    {
        retryupcount = value;
        retryupcount.value_namespace = name_space;
        retryupcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnshost")
    {
        dnshost = value;
        dnshost.value_namespace = name_space;
        dnshost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeIp")
    {
        probeip = value;
        probeip.value_namespace = name_space;
        probeip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "httpGetStr")
    {
        httpgetstr = value;
        httpgetstr.value_namespace = name_space;
        httpgetstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlStatusEnable")
    {
        ctrlstatusenable = value;
        ctrlstatusenable.value_namespace = name_space;
        ctrlstatusenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap = value;
        propfaultbitmap.value_namespace = name_space;
        propfaultbitmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "retryDownCount")
    {
        retrydowncount.yfilter = yfilter;
    }
    if(value_path == "retryUpCount")
    {
        retryupcount.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "dnshost")
    {
        dnshost.yfilter = yfilter;
    }
    if(value_path == "probeIp")
    {
        probeip.yfilter = yfilter;
    }
    if(value_path == "httpGetStr")
    {
        httpgetstr.yfilter = yfilter;
    }
    if(value_path == "ctrlStatusEnable")
    {
        ctrlstatusenable.yfilter = yfilter;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "port" || name == "frequency" || name == "retryDownCount" || name == "retryUpCount" || name == "timeout" || name == "dnshost" || name == "probeIp" || name == "httpGetStr" || name == "ctrlStatusEnable" || name == "propFaultBitmap")
        return true;
    return false;
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems::ProbeItems()
    :
    protocol{YType::enumeration, "protocol"},
    port{YType::uint16, "port"},
    frequency{YType::uint32, "frequency"},
    retrydowncount{YType::uint32, "retryDownCount"},
    retryupcount{YType::uint32, "retryUpCount"},
    timeout{YType::uint32, "timeout"},
    dnshost{YType::str, "dnshost"},
    probeip{YType::str, "probeIp"},
    httpgetstr{YType::str, "httpGetStr"},
    ctrlstatusenable{YType::enumeration, "ctrlStatusEnable"},
    propfaultbitmap{YType::str, "propFaultBitmap"}
{

    yang_name = "probe-items"; yang_parent_name = "DeviceGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems::~ProbeItems()
{
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| port.is_set
	|| frequency.is_set
	|| retrydowncount.is_set
	|| retryupcount.is_set
	|| timeout.is_set
	|| dnshost.is_set
	|| probeip.is_set
	|| httpgetstr.is_set
	|| ctrlstatusenable.is_set
	|| propfaultbitmap.is_set;
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(retrydowncount.yfilter)
	|| ydk::is_set(retryupcount.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(dnshost.yfilter)
	|| ydk::is_set(probeip.yfilter)
	|| ydk::is_set(httpgetstr.yfilter)
	|| ydk::is_set(ctrlstatusenable.yfilter)
	|| ydk::is_set(propfaultbitmap.yfilter);
}

std::string System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (retrydowncount.is_set || is_set(retrydowncount.yfilter)) leaf_name_data.push_back(retrydowncount.get_name_leafdata());
    if (retryupcount.is_set || is_set(retryupcount.yfilter)) leaf_name_data.push_back(retryupcount.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (dnshost.is_set || is_set(dnshost.yfilter)) leaf_name_data.push_back(dnshost.get_name_leafdata());
    if (probeip.is_set || is_set(probeip.yfilter)) leaf_name_data.push_back(probeip.get_name_leafdata());
    if (httpgetstr.is_set || is_set(httpgetstr.yfilter)) leaf_name_data.push_back(httpgetstr.get_name_leafdata());
    if (ctrlstatusenable.is_set || is_set(ctrlstatusenable.yfilter)) leaf_name_data.push_back(ctrlstatusenable.get_name_leafdata());
    if (propfaultbitmap.is_set || is_set(propfaultbitmap.yfilter)) leaf_name_data.push_back(propfaultbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retryDownCount")
    {
        retrydowncount = value;
        retrydowncount.value_namespace = name_space;
        retrydowncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retryUpCount")
    {
        retryupcount = value;
        retryupcount.value_namespace = name_space;
        retryupcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnshost")
    {
        dnshost = value;
        dnshost.value_namespace = name_space;
        dnshost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeIp")
    {
        probeip = value;
        probeip.value_namespace = name_space;
        probeip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "httpGetStr")
    {
        httpgetstr = value;
        httpgetstr.value_namespace = name_space;
        httpgetstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlStatusEnable")
    {
        ctrlstatusenable = value;
        ctrlstatusenable.value_namespace = name_space;
        ctrlstatusenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap = value;
        propfaultbitmap.value_namespace = name_space;
        propfaultbitmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "retryDownCount")
    {
        retrydowncount.yfilter = yfilter;
    }
    if(value_path == "retryUpCount")
    {
        retryupcount.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "dnshost")
    {
        dnshost.yfilter = yfilter;
    }
    if(value_path == "probeIp")
    {
        probeip.yfilter = yfilter;
    }
    if(value_path == "httpGetStr")
    {
        httpgetstr.yfilter = yfilter;
    }
    if(value_path == "ctrlStatusEnable")
    {
        ctrlstatusenable.yfilter = yfilter;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "port" || name == "frequency" || name == "retryDownCount" || name == "retryUpCount" || name == "timeout" || name == "dnshost" || name == "probeIp" || name == "httpGetStr" || name == "ctrlStatusEnable" || name == "propFaultBitmap")
        return true;
    return false;
}

System::ItdItems::InstItems::ServiceItems::ServiceItems()
    :
    service_list(this, {"name"})
{

    yang_name = "service-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ItdItems::InstItems::ServiceItems::~ServiceItems()
{
}

bool System::ItdItems::InstItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_list.len(); index++)
    {
        if(service_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ItdItems::InstItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<service_list.len(); index++)
    {
        if(service_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ItdItems::InstItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/itd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ItdItems::InstItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Service-list")
    {
        auto ent_ = std::make_shared<System::ItdItems::InstItems::ServiceItems::ServiceList>();
        ent_->parent = this;
        service_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ItdItems::InstItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ItdItems::InstItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ItdItems::InstItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Service-list")
        return true;
    return false;
}

System::ItdItems::InstItems::ServiceItems::ServiceList::ServiceList()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    defaultdevgroup{YType::str, "defaultDevGroup"},
    excludeacl{YType::str, "excludeACL"},
    vrf{YType::str, "vrf"},
    failactionmode{YType::enumeration, "failactionMode"},
    lbmethod{YType::enumeration, "lbMethod"},
    lbprotocol{YType::enumeration, "lbProtocol"},
    rangex{YType::uint16, "rangeX"},
    rangey{YType::uint16, "rangeY"},
    bucket{YType::uint32, "bucket"},
    maskposition{YType::uint32, "maskPosition"},
    natdestination{YType::enumeration, "natDestination"},
    peerlocalservicename{YType::str, "peerLocalServiceName"},
    sourceintf{YType::str, "sourceIntf"},
    propfaultbitmap{YType::str, "propFaultBitmap"}
        ,
    if_items(std::make_shared<System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems>())
    , acl_items(std::make_shared<System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems>())
    , vipv4_items(std::make_shared<System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items>())
    , vipv6_items(std::make_shared<System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items>())
{
    if_items->parent = this;
    acl_items->parent = this;
    vipv4_items->parent = this;
    vipv6_items->parent = this;

    yang_name = "Service-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ItdItems::InstItems::ServiceItems::ServiceList::~ServiceList()
{
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| defaultdevgroup.is_set
	|| excludeacl.is_set
	|| vrf.is_set
	|| failactionmode.is_set
	|| lbmethod.is_set
	|| lbprotocol.is_set
	|| rangex.is_set
	|| rangey.is_set
	|| bucket.is_set
	|| maskposition.is_set
	|| natdestination.is_set
	|| peerlocalservicename.is_set
	|| sourceintf.is_set
	|| propfaultbitmap.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (vipv4_items !=  nullptr && vipv4_items->has_data())
	|| (vipv6_items !=  nullptr && vipv6_items->has_data());
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(defaultdevgroup.yfilter)
	|| ydk::is_set(excludeacl.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(failactionmode.yfilter)
	|| ydk::is_set(lbmethod.yfilter)
	|| ydk::is_set(lbprotocol.yfilter)
	|| ydk::is_set(rangex.yfilter)
	|| ydk::is_set(rangey.yfilter)
	|| ydk::is_set(bucket.yfilter)
	|| ydk::is_set(maskposition.yfilter)
	|| ydk::is_set(natdestination.yfilter)
	|| ydk::is_set(peerlocalservicename.yfilter)
	|| ydk::is_set(sourceintf.yfilter)
	|| ydk::is_set(propfaultbitmap.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (acl_items !=  nullptr && acl_items->has_operation())
	|| (vipv4_items !=  nullptr && vipv4_items->has_operation())
	|| (vipv6_items !=  nullptr && vipv6_items->has_operation());
}

std::string System::ItdItems::InstItems::ServiceItems::ServiceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/itd-items/inst-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ItdItems::InstItems::ServiceItems::ServiceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Service-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::ServiceItems::ServiceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (defaultdevgroup.is_set || is_set(defaultdevgroup.yfilter)) leaf_name_data.push_back(defaultdevgroup.get_name_leafdata());
    if (excludeacl.is_set || is_set(excludeacl.yfilter)) leaf_name_data.push_back(excludeacl.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (failactionmode.is_set || is_set(failactionmode.yfilter)) leaf_name_data.push_back(failactionmode.get_name_leafdata());
    if (lbmethod.is_set || is_set(lbmethod.yfilter)) leaf_name_data.push_back(lbmethod.get_name_leafdata());
    if (lbprotocol.is_set || is_set(lbprotocol.yfilter)) leaf_name_data.push_back(lbprotocol.get_name_leafdata());
    if (rangex.is_set || is_set(rangex.yfilter)) leaf_name_data.push_back(rangex.get_name_leafdata());
    if (rangey.is_set || is_set(rangey.yfilter)) leaf_name_data.push_back(rangey.get_name_leafdata());
    if (bucket.is_set || is_set(bucket.yfilter)) leaf_name_data.push_back(bucket.get_name_leafdata());
    if (maskposition.is_set || is_set(maskposition.yfilter)) leaf_name_data.push_back(maskposition.get_name_leafdata());
    if (natdestination.is_set || is_set(natdestination.yfilter)) leaf_name_data.push_back(natdestination.get_name_leafdata());
    if (peerlocalservicename.is_set || is_set(peerlocalservicename.yfilter)) leaf_name_data.push_back(peerlocalservicename.get_name_leafdata());
    if (sourceintf.is_set || is_set(sourceintf.yfilter)) leaf_name_data.push_back(sourceintf.get_name_leafdata());
    if (propfaultbitmap.is_set || is_set(propfaultbitmap.yfilter)) leaf_name_data.push_back(propfaultbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::ServiceItems::ServiceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems>();
        }
        return acl_items;
    }

    if(child_yang_name == "vipv4-items")
    {
        if(vipv4_items == nullptr)
        {
            vipv4_items = std::make_shared<System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items>();
        }
        return vipv4_items;
    }

    if(child_yang_name == "vipv6-items")
    {
        if(vipv6_items == nullptr)
        {
            vipv6_items = std::make_shared<System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items>();
        }
        return vipv6_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::ServiceItems::ServiceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    if(vipv4_items != nullptr)
    {
        _children["vipv4-items"] = vipv4_items;
    }

    if(vipv6_items != nullptr)
    {
        _children["vipv6-items"] = vipv6_items;
    }

    return _children;
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "defaultDevGroup")
    {
        defaultdevgroup = value;
        defaultdevgroup.value_namespace = name_space;
        defaultdevgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excludeACL")
    {
        excludeacl = value;
        excludeacl.value_namespace = name_space;
        excludeacl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failactionMode")
    {
        failactionmode = value;
        failactionmode.value_namespace = name_space;
        failactionmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbMethod")
    {
        lbmethod = value;
        lbmethod.value_namespace = name_space;
        lbmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbProtocol")
    {
        lbprotocol = value;
        lbprotocol.value_namespace = name_space;
        lbprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rangeX")
    {
        rangex = value;
        rangex.value_namespace = name_space;
        rangex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rangeY")
    {
        rangey = value;
        rangey.value_namespace = name_space;
        rangey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket")
    {
        bucket = value;
        bucket.value_namespace = name_space;
        bucket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskPosition")
    {
        maskposition = value;
        maskposition.value_namespace = name_space;
        maskposition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "natDestination")
    {
        natdestination = value;
        natdestination.value_namespace = name_space;
        natdestination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerLocalServiceName")
    {
        peerlocalservicename = value;
        peerlocalservicename.value_namespace = name_space;
        peerlocalservicename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceIntf")
    {
        sourceintf = value;
        sourceintf.value_namespace = name_space;
        sourceintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap = value;
        propfaultbitmap.value_namespace = name_space;
        propfaultbitmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "defaultDevGroup")
    {
        defaultdevgroup.yfilter = yfilter;
    }
    if(value_path == "excludeACL")
    {
        excludeacl.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "failactionMode")
    {
        failactionmode.yfilter = yfilter;
    }
    if(value_path == "lbMethod")
    {
        lbmethod.yfilter = yfilter;
    }
    if(value_path == "lbProtocol")
    {
        lbprotocol.yfilter = yfilter;
    }
    if(value_path == "rangeX")
    {
        rangex.yfilter = yfilter;
    }
    if(value_path == "rangeY")
    {
        rangey.yfilter = yfilter;
    }
    if(value_path == "bucket")
    {
        bucket.yfilter = yfilter;
    }
    if(value_path == "maskPosition")
    {
        maskposition.yfilter = yfilter;
    }
    if(value_path == "natDestination")
    {
        natdestination.yfilter = yfilter;
    }
    if(value_path == "peerLocalServiceName")
    {
        peerlocalservicename.yfilter = yfilter;
    }
    if(value_path == "sourceIntf")
    {
        sourceintf.yfilter = yfilter;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "acl-items" || name == "vipv4-items" || name == "vipv6-items" || name == "name" || name == "adminSt" || name == "defaultDevGroup" || name == "excludeACL" || name == "vrf" || name == "failactionMode" || name == "lbMethod" || name == "lbProtocol" || name == "rangeX" || name == "rangeY" || name == "bucket" || name == "maskPosition" || name == "natDestination" || name == "peerLocalServiceName" || name == "sourceIntf" || name == "propFaultBitmap")
        return true;
    return false;
}

System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IfItems()
    :
    ingressif_list(this, {"name"})
{

    yang_name = "if-items"; yang_parent_name = "Service-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::~IfItems()
{
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ingressif_list.len(); index++)
    {
        if(ingressif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<ingressif_list.len(); index++)
    {
        if(ingressif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IngressIf-list")
    {
        auto ent_ = std::make_shared<System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IngressIfList>();
        ent_->parent = this;
        ingressif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ingressif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IngressIf-list")
        return true;
    return false;
}

System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IngressIfList::IngressIfList()
    :
    name{YType::str, "name"},
    propfaultbitmap{YType::str, "propFaultBitmap"}
{

    yang_name = "IngressIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IngressIfList::~IngressIfList()
{
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IngressIfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| propfaultbitmap.is_set;
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IngressIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(propfaultbitmap.yfilter);
}

std::string System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IngressIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IngressIf-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IngressIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (propfaultbitmap.is_set || is_set(propfaultbitmap.yfilter)) leaf_name_data.push_back(propfaultbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IngressIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IngressIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IngressIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap = value;
        propfaultbitmap.value_namespace = name_space;
        propfaultbitmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IngressIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "propFaultBitmap")
    {
        propfaultbitmap.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IngressIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "propFaultBitmap")
        return true;
    return false;
}

System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AclItems()
    :
    accesslist_list(this, {"name"})
{

    yang_name = "acl-items"; yang_parent_name = "Service-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::~AclItems()
{
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<accesslist_list.len(); index++)
    {
        if(accesslist_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::has_operation() const
{
    for (std::size_t index=0; index<accesslist_list.len(); index++)
    {
        if(accesslist_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Accesslist-list")
    {
        auto ent_ = std::make_shared<System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AccesslistList>();
        ent_->parent = this;
        accesslist_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : accesslist_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Accesslist-list")
        return true;
    return false;
}

System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AccesslistList::AccesslistList()
    :
    name{YType::str, "name"},
    devicegroup{YType::str, "deviceGroup"},
    isipv6{YType::boolean, "isIPv6"}
{

    yang_name = "Accesslist-list"; yang_parent_name = "acl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AccesslistList::~AccesslistList()
{
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AccesslistList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| devicegroup.is_set
	|| isipv6.is_set;
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AccesslistList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(devicegroup.yfilter)
	|| ydk::is_set(isipv6.yfilter);
}

std::string System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AccesslistList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Accesslist-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AccesslistList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (devicegroup.is_set || is_set(devicegroup.yfilter)) leaf_name_data.push_back(devicegroup.get_name_leafdata());
    if (isipv6.is_set || is_set(isipv6.yfilter)) leaf_name_data.push_back(isipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AccesslistList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AccesslistList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AccesslistList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deviceGroup")
    {
        devicegroup = value;
        devicegroup.value_namespace = name_space;
        devicegroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isIPv6")
    {
        isipv6 = value;
        isipv6.value_namespace = name_space;
        isipv6.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AccesslistList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "deviceGroup")
    {
        devicegroup.yfilter = yfilter;
    }
    if(value_path == "isIPv6")
    {
        isipv6.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AccesslistList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "deviceGroup" || name == "isIPv6")
        return true;
    return false;
}

System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::Vipv4Items()
    :
    virtualipv4_list(this, {"ip", "subnet", "protocol", "port"})
{

    yang_name = "vipv4-items"; yang_parent_name = "Service-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::~Vipv4Items()
{
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<virtualipv4_list.len(); index++)
    {
        if(virtualipv4_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::has_operation() const
{
    for (std::size_t index=0; index<virtualipv4_list.len(); index++)
    {
        if(virtualipv4_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vipv4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VirtualIPv4-list")
    {
        auto ent_ = std::make_shared<System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::VirtualIPv4List>();
        ent_->parent = this;
        virtualipv4_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : virtualipv4_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VirtualIPv4-list")
        return true;
    return false;
}

System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::VirtualIPv4List::VirtualIPv4List()
    :
    ip{YType::str, "ip"},
    subnet{YType::str, "subnet"},
    protocol{YType::enumeration, "protocol"},
    port{YType::uint16, "port"},
    advertise{YType::boolean, "advertise"},
    active{YType::boolean, "active"},
    devicegroup{YType::str, "deviceGroup"}
{

    yang_name = "VirtualIPv4-list"; yang_parent_name = "vipv4-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::VirtualIPv4List::~VirtualIPv4List()
{
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::VirtualIPv4List::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| subnet.is_set
	|| protocol.is_set
	|| port.is_set
	|| advertise.is_set
	|| active.is_set
	|| devicegroup.is_set;
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::VirtualIPv4List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(advertise.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(devicegroup.yfilter);
}

std::string System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::VirtualIPv4List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VirtualIPv4-list";
    ADD_KEY_TOKEN(ip, "ip");
    ADD_KEY_TOKEN(subnet, "subnet");
    ADD_KEY_TOKEN(protocol, "protocol");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::VirtualIPv4List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (devicegroup.is_set || is_set(devicegroup.yfilter)) leaf_name_data.push_back(devicegroup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::VirtualIPv4List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::VirtualIPv4List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::VirtualIPv4List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deviceGroup")
    {
        devicegroup = value;
        devicegroup.value_namespace = name_space;
        devicegroup.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::VirtualIPv4List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "deviceGroup")
    {
        devicegroup.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::VirtualIPv4List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "subnet" || name == "protocol" || name == "port" || name == "advertise" || name == "active" || name == "deviceGroup")
        return true;
    return false;
}

System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::Vipv6Items()
    :
    virtualipv6_list(this, {"ip", "prefix", "protocol", "port"})
{

    yang_name = "vipv6-items"; yang_parent_name = "Service-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::~Vipv6Items()
{
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<virtualipv6_list.len(); index++)
    {
        if(virtualipv6_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::has_operation() const
{
    for (std::size_t index=0; index<virtualipv6_list.len(); index++)
    {
        if(virtualipv6_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vipv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VirtualIPv6-list")
    {
        auto ent_ = std::make_shared<System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::VirtualIPv6List>();
        ent_->parent = this;
        virtualipv6_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : virtualipv6_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VirtualIPv6-list")
        return true;
    return false;
}

System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::VirtualIPv6List::VirtualIPv6List()
    :
    ip{YType::str, "ip"},
    prefix{YType::uint32, "prefix"},
    protocol{YType::enumeration, "protocol"},
    port{YType::uint16, "port"},
    advertise{YType::boolean, "advertise"},
    active{YType::boolean, "active"},
    devicegroup{YType::str, "deviceGroup"}
{

    yang_name = "VirtualIPv6-list"; yang_parent_name = "vipv6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::VirtualIPv6List::~VirtualIPv6List()
{
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::VirtualIPv6List::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| prefix.is_set
	|| protocol.is_set
	|| port.is_set
	|| advertise.is_set
	|| active.is_set
	|| devicegroup.is_set;
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::VirtualIPv6List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(advertise.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(devicegroup.yfilter);
}

std::string System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::VirtualIPv6List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VirtualIPv6-list";
    ADD_KEY_TOKEN(ip, "ip");
    ADD_KEY_TOKEN(prefix, "prefix");
    ADD_KEY_TOKEN(protocol, "protocol");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::VirtualIPv6List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (devicegroup.is_set || is_set(devicegroup.yfilter)) leaf_name_data.push_back(devicegroup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::VirtualIPv6List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::VirtualIPv6List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::VirtualIPv6List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deviceGroup")
    {
        devicegroup = value;
        devicegroup.value_namespace = name_space;
        devicegroup.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::VirtualIPv6List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "deviceGroup")
    {
        devicegroup.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::VirtualIPv6List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "prefix" || name == "protocol" || name == "port" || name == "advertise" || name == "active" || name == "deviceGroup")
        return true;
    return false;
}

System::ItdItems::InstItems::SessiondevgrpItems::SessiondevgrpItems()
    :
    sessiondevgrp_list(this, {"devgroupname"})
{

    yang_name = "sessiondevgrp-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ItdItems::InstItems::SessiondevgrpItems::~SessiondevgrpItems()
{
}

bool System::ItdItems::InstItems::SessiondevgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sessiondevgrp_list.len(); index++)
    {
        if(sessiondevgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ItdItems::InstItems::SessiondevgrpItems::has_operation() const
{
    for (std::size_t index=0; index<sessiondevgrp_list.len(); index++)
    {
        if(sessiondevgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ItdItems::InstItems::SessiondevgrpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/itd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ItdItems::InstItems::SessiondevgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessiondevgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::SessiondevgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::SessiondevgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SessionDevGrp-list")
    {
        auto ent_ = std::make_shared<System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList>();
        ent_->parent = this;
        sessiondevgrp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::SessiondevgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sessiondevgrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ItdItems::InstItems::SessiondevgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ItdItems::InstItems::SessiondevgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ItdItems::InstItems::SessiondevgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SessionDevGrp-list")
        return true;
    return false;
}

System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::SessionDevGrpList()
    :
    devgroupname{YType::str, "devGroupName"},
    sessaction{YType::enumeration, "sessAction"},
    actionset{YType::boolean, "actionSet"}
        ,
    nodev4_items(std::make_shared<System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items>())
    , nodev6_items(std::make_shared<System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items>())
{
    nodev4_items->parent = this;
    nodev6_items->parent = this;

    yang_name = "SessionDevGrp-list"; yang_parent_name = "sessiondevgrp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::~SessionDevGrpList()
{
}

bool System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::has_data() const
{
    if (is_presence_container) return true;
    return devgroupname.is_set
	|| sessaction.is_set
	|| actionset.is_set
	|| (nodev4_items !=  nullptr && nodev4_items->has_data())
	|| (nodev6_items !=  nullptr && nodev6_items->has_data());
}

bool System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devgroupname.yfilter)
	|| ydk::is_set(sessaction.yfilter)
	|| ydk::is_set(actionset.yfilter)
	|| (nodev4_items !=  nullptr && nodev4_items->has_operation())
	|| (nodev6_items !=  nullptr && nodev6_items->has_operation());
}

std::string System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/itd-items/inst-items/sessiondevgrp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SessionDevGrp-list";
    ADD_KEY_TOKEN(devgroupname, "devGroupName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devgroupname.is_set || is_set(devgroupname.yfilter)) leaf_name_data.push_back(devgroupname.get_name_leafdata());
    if (sessaction.is_set || is_set(sessaction.yfilter)) leaf_name_data.push_back(sessaction.get_name_leafdata());
    if (actionset.is_set || is_set(actionset.yfilter)) leaf_name_data.push_back(actionset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodev4-items")
    {
        if(nodev4_items == nullptr)
        {
            nodev4_items = std::make_shared<System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items>();
        }
        return nodev4_items;
    }

    if(child_yang_name == "nodev6-items")
    {
        if(nodev6_items == nullptr)
        {
            nodev6_items = std::make_shared<System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items>();
        }
        return nodev6_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodev4_items != nullptr)
    {
        _children["nodev4-items"] = nodev4_items;
    }

    if(nodev6_items != nullptr)
    {
        _children["nodev6-items"] = nodev6_items;
    }

    return _children;
}

void System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devGroupName")
    {
        devgroupname = value;
        devgroupname.value_namespace = name_space;
        devgroupname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessAction")
    {
        sessaction = value;
        sessaction.value_namespace = name_space;
        sessaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actionSet")
    {
        actionset = value;
        actionset.value_namespace = name_space;
        actionset.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devGroupName")
    {
        devgroupname.yfilter = yfilter;
    }
    if(value_path == "sessAction")
    {
        sessaction.yfilter = yfilter;
    }
    if(value_path == "actionSet")
    {
        actionset.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodev4-items" || name == "nodev6-items" || name == "devGroupName" || name == "sessAction" || name == "actionSet")
        return true;
    return false;
}

System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::Nodev4Items()
    :
    sessnodev4_list(this, {"ip"})
{

    yang_name = "nodev4-items"; yang_parent_name = "SessionDevGrp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::~Nodev4Items()
{
}

bool System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sessnodev4_list.len(); index++)
    {
        if(sessnodev4_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::has_operation() const
{
    for (std::size_t index=0; index<sessnodev4_list.len(); index++)
    {
        if(sessnodev4_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodev4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SessNodev4-list")
    {
        auto ent_ = std::make_shared<System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::SessNodev4List>();
        ent_->parent = this;
        sessnodev4_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sessnodev4_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SessNodev4-list")
        return true;
    return false;
}

System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::SessNodev4List::SessNodev4List()
    :
    ip{YType::str, "ip"},
    action{YType::enumeration, "action"}
{

    yang_name = "SessNodev4-list"; yang_parent_name = "nodev4-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::SessNodev4List::~SessNodev4List()
{
}

bool System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::SessNodev4List::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| action.is_set;
}

bool System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::SessNodev4List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::SessNodev4List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SessNodev4-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::SessNodev4List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::SessNodev4List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::SessNodev4List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::SessNodev4List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::SessNodev4List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::SessNodev4List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "action")
        return true;
    return false;
}

System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::Nodev6Items()
    :
    sessnodev6_list(this, {"ip"})
{

    yang_name = "nodev6-items"; yang_parent_name = "SessionDevGrp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::~Nodev6Items()
{
}

bool System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sessnodev6_list.len(); index++)
    {
        if(sessnodev6_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::has_operation() const
{
    for (std::size_t index=0; index<sessnodev6_list.len(); index++)
    {
        if(sessnodev6_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodev6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SessNodev6-list")
    {
        auto ent_ = std::make_shared<System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::SessNodev6List>();
        ent_->parent = this;
        sessnodev6_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sessnodev6_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SessNodev6-list")
        return true;
    return false;
}

System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::SessNodev6List::SessNodev6List()
    :
    ip{YType::str, "ip"},
    action{YType::enumeration, "action"}
{

    yang_name = "SessNodev6-list"; yang_parent_name = "nodev6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::SessNodev6List::~SessNodev6List()
{
}

bool System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::SessNodev6List::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| action.is_set;
}

bool System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::SessNodev6List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::SessNodev6List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SessNodev6-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::SessNodev6List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::SessNodev6List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::SessNodev6List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::SessNodev6List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::SessNodev6List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::SessNodev6List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "action")
        return true;
    return false;
}

System::ItdItems::InstItems::RefreshaclItems::RefreshaclItems()
    :
    aclaction_list(this, {"aclname"})
{

    yang_name = "refreshacl-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ItdItems::InstItems::RefreshaclItems::~RefreshaclItems()
{
}

bool System::ItdItems::InstItems::RefreshaclItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aclaction_list.len(); index++)
    {
        if(aclaction_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ItdItems::InstItems::RefreshaclItems::has_operation() const
{
    for (std::size_t index=0; index<aclaction_list.len(); index++)
    {
        if(aclaction_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ItdItems::InstItems::RefreshaclItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/itd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ItdItems::InstItems::RefreshaclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refreshacl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::RefreshaclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::RefreshaclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AclAction-list")
    {
        auto ent_ = std::make_shared<System::ItdItems::InstItems::RefreshaclItems::AclActionList>();
        ent_->parent = this;
        aclaction_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::RefreshaclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : aclaction_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ItdItems::InstItems::RefreshaclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ItdItems::InstItems::RefreshaclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ItdItems::InstItems::RefreshaclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AclAction-list")
        return true;
    return false;
}

System::ItdItems::InstItems::RefreshaclItems::AclActionList::AclActionList()
    :
    aclname{YType::str, "aclName"},
    refreshset{YType::boolean, "refreshSet"}
{

    yang_name = "AclAction-list"; yang_parent_name = "refreshacl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ItdItems::InstItems::RefreshaclItems::AclActionList::~AclActionList()
{
}

bool System::ItdItems::InstItems::RefreshaclItems::AclActionList::has_data() const
{
    if (is_presence_container) return true;
    return aclname.is_set
	|| refreshset.is_set;
}

bool System::ItdItems::InstItems::RefreshaclItems::AclActionList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aclname.yfilter)
	|| ydk::is_set(refreshset.yfilter);
}

std::string System::ItdItems::InstItems::RefreshaclItems::AclActionList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/itd-items/inst-items/refreshacl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ItdItems::InstItems::RefreshaclItems::AclActionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AclAction-list";
    ADD_KEY_TOKEN(aclname, "aclName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ItdItems::InstItems::RefreshaclItems::AclActionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aclname.is_set || is_set(aclname.yfilter)) leaf_name_data.push_back(aclname.get_name_leafdata());
    if (refreshset.is_set || is_set(refreshset.yfilter)) leaf_name_data.push_back(refreshset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ItdItems::InstItems::RefreshaclItems::AclActionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ItdItems::InstItems::RefreshaclItems::AclActionList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ItdItems::InstItems::RefreshaclItems::AclActionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aclName")
    {
        aclname = value;
        aclname.value_namespace = name_space;
        aclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refreshSet")
    {
        refreshset = value;
        refreshset.value_namespace = name_space;
        refreshset.value_namespace_prefix = name_space_prefix;
    }
}

void System::ItdItems::InstItems::RefreshaclItems::AclActionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aclName")
    {
        aclname.yfilter = yfilter;
    }
    if(value_path == "refreshSet")
    {
        refreshset.yfilter = yfilter;
    }
}

bool System::ItdItems::InstItems::RefreshaclItems::AclActionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aclName" || name == "refreshSet")
        return true;
    return false;
}

System::LacpItems::LacpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
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
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::LacpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LacpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LacpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
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
}

bool System::LacpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
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

std::shared_ptr<ydk::Entity> System::LacpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LacpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::LacpItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::LacpItems::InstItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LacpItems::InstItems::IfItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::LacpItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LacpItems::InstItems::IfItems::IfList::get_children() const
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

std::shared_ptr<ydk::Entity> System::LacpItems::InstItems::IfItems::IfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LacpItems::InstItems::IfItems::IfList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    errpktrcvd{YType::uint64, "errPktRcvd"},
    pdutimeoutcount{YType::uint64, "pduTimeoutCount"},
    flapcount{YType::uint64, "flapCount"}
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
	|| errpktrcvd.is_set
	|| pdutimeoutcount.is_set
	|| flapcount.is_set;
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
	|| ydk::is_set(errpktrcvd.yfilter)
	|| ydk::is_set(pdutimeoutcount.yfilter)
	|| ydk::is_set(flapcount.yfilter);
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
    if (pdutimeoutcount.is_set || is_set(pdutimeoutcount.yfilter)) leaf_name_data.push_back(pdutimeoutcount.get_name_leafdata());
    if (flapcount.is_set || is_set(flapcount.yfilter)) leaf_name_data.push_back(flapcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "pduTimeoutCount")
    {
        pdutimeoutcount = value;
        pdutimeoutcount.value_namespace = name_space;
        pdutimeoutcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flapCount")
    {
        flapcount = value;
        flapcount.value_namespace = name_space;
        flapcount.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pduTimeoutCount")
    {
        pdutimeoutcount.yfilter = yfilter;
    }
    if(value_path == "flapCount")
    {
        flapcount.yfilter = yfilter;
    }
}

bool System::LacpItems::InstItems::IfItems::IfList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pduSent" || name == "pduRcvd" || name == "markerSent" || name == "markerRcvd" || name == "markerRspSent" || name == "markerRspRcvd" || name == "errPktRcvd" || name == "pduTimeoutCount" || name == "flapCount")
        return true;
    return false;
}

System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::MgmtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MgmtIf-list")
    {
        auto ent_ = std::make_shared<System::MgmtItems::MgmtIfList>();
        ent_->parent = this;
        mgmtif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mgmtif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (autoneg.is_set || is_set(autoneg.yfilter)) leaf_name_data.push_back(autoneg.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (snmptrapst.is_set || is_set(snmptrapst.yfilter)) leaf_name_data.push_back(snmptrapst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mgmt_items != nullptr)
    {
        _children["mgmt-items"] = mgmt_items;
    }

    if(portcap_items != nullptr)
    {
        _children["portcap-items"] = portcap_items;
    }

    if(rtrtdmgmtconf_items != nullptr)
    {
        _children["rtrtdMgmtConf-items"] = rtrtdmgmtconf_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    if(dbgifin_items != nullptr)
    {
        _children["dbgIfIn-items"] = dbgifin_items;
    }

    if(dbgifout_items != nullptr)
    {
        _children["dbgIfOut-items"] = dbgifout_items;
    }

    if(dbgipin_items != nullptr)
    {
        _children["dbgIpIn-items"] = dbgipin_items;
    }

    if(dbgdot1d_items != nullptr)
    {
        _children["dbgDot1d-items"] = dbgdot1d_items;
    }

    if(dbgetherstats_items != nullptr)
    {
        _children["dbgEtherStats-items"] = dbgetherstats_items;
    }

    if(dbgdot3stats_items != nullptr)
    {
        _children["dbgDot3Stats-items"] = dbgdot3stats_items;
    }

    if(dbgifhcin_items != nullptr)
    {
        _children["dbgIfHCIn-items"] = dbgifhcin_items;
    }

    if(dbgifhcout_items != nullptr)
    {
        _children["dbgIfHCOut-items"] = dbgifhcout_items;
    }

    if(dbgipv6ifstats_items != nullptr)
    {
        _children["dbgIpv6IfStats-items"] = dbgipv6ifstats_items;
    }

    if(dbgifstorm_items != nullptr)
    {
        _children["dbgIfStorm-items"] = dbgifstorm_items;
    }

    return _children;
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
    if(name == "mgmt-items" || name == "portcap-items" || name == "rtrtdMgmtConf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "dbgIfIn-items" || name == "dbgIfOut-items" || name == "dbgIpIn-items" || name == "dbgDot1d-items" || name == "dbgEtherStats-items" || name == "dbgDot3Stats-items" || name == "dbgIfHCIn-items" || name == "dbgIfHCOut-items" || name == "dbgIpv6IfStats-items" || name == "dbgIfStorm-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "speed" || name == "duplex" || name == "autoNeg" || name == "mtu" || name == "snmpTrapSt")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::MgmtItems_::MgmtItems_()
    :
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
    return operst.is_set
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
	|| lastlinkstchg.is_set;
}

bool System::MgmtItems::MgmtIfList::MgmtItems_::has_operation() const
{
    return is_set(yfilter)
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
    if (lastlinkstchg.is_set || is_set(lastlinkstchg.yfilter)) leaf_name_data.push_back(lastlinkstchg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::MgmtItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::MgmtItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::MgmtItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg = value;
        lastlinkstchg.value_namespace = name_space;
        lastlinkstchg.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::MgmtItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::MgmtItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operSt" || name == "operStQual" || name == "operSpeed" || name == "operDuplex" || name == "operPhyLayer" || name == "backplaneMac" || name == "operRouterMac" || name == "portInitEvalFlag" || name == "operMtu" || name == "iod" || name == "vdcId" || name == "lastLinkStChg")
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

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::PortcapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::PortcapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "rtrtdMgmtConf-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::~RtrtdMgmtConfItems()
{
}

bool System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::MgmtItems::MgmtIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "MgmtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::MgmtItems::MgmtIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::MgmtItems::MgmtIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::RtnwPathToIfItems::get_children() const
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgIfInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgIfInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgIfOutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgIfOutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgIpInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgIpInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgDot1dItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgDot1dItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    giantpkts{YType::uint64, "giantPkts"},
    stormsupressedpkts{YType::uint64, "stormSupressedPkts"},
    fragments{YType::uint64, "fragments"},
    pkts64octets{YType::uint64, "pkts64Octets"},
    pkts65to127octets{YType::uint64, "pkts65to127Octets"},
    pkts128to255octets{YType::uint64, "pkts128to255Octets"},
    pkts256to511octets{YType::uint64, "pkts256to511Octets"},
    pkts512to1023octets{YType::uint64, "pkts512to1023Octets"},
    pkts1024to1518octets{YType::uint64, "pkts1024to1518Octets"},
    pkts1519to1548octets{YType::uint64, "pkts1519to1548Octets"},
    rxpkts64octets{YType::uint64, "rxPkts64Octets"},
    txpkts64octets{YType::uint64, "txPkts64Octets"},
    rxpkts65to127octets{YType::uint64, "rxPkts65to127Octets"},
    txpkts65to127octets{YType::uint64, "txPkts65to127Octets"},
    rxpkts128to255octets{YType::uint64, "rxPkts128to255Octets"},
    txpkts128to255octets{YType::uint64, "txPkts128to255Octets"},
    rxpkts256to511octets{YType::uint64, "rxPkts256to511Octets"},
    txpkts256to511octets{YType::uint64, "txPkts256to511Octets"},
    rxpkts512to1023octets{YType::uint64, "rxPkts512to1023Octets"},
    txpkts512to1023octets{YType::uint64, "txPkts512to1023Octets"},
    rxpkts1024to1518octets{YType::uint64, "rxPkts1024to1518Octets"},
    txpkts1024to1518octets{YType::uint64, "txPkts1024to1518Octets"},
    rxpkts1519to1548octets{YType::uint64, "rxPkts1519to1548Octets"},
    txpkts1519to1548octets{YType::uint64, "txPkts1519to1548Octets"},
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
	|| giantpkts.is_set
	|| stormsupressedpkts.is_set
	|| fragments.is_set
	|| pkts64octets.is_set
	|| pkts65to127octets.is_set
	|| pkts128to255octets.is_set
	|| pkts256to511octets.is_set
	|| pkts512to1023octets.is_set
	|| pkts1024to1518octets.is_set
	|| pkts1519to1548octets.is_set
	|| rxpkts64octets.is_set
	|| txpkts64octets.is_set
	|| rxpkts65to127octets.is_set
	|| txpkts65to127octets.is_set
	|| rxpkts128to255octets.is_set
	|| txpkts128to255octets.is_set
	|| rxpkts256to511octets.is_set
	|| txpkts256to511octets.is_set
	|| rxpkts512to1023octets.is_set
	|| txpkts512to1023octets.is_set
	|| rxpkts1024to1518octets.is_set
	|| txpkts1024to1518octets.is_set
	|| rxpkts1519to1548octets.is_set
	|| txpkts1519to1548octets.is_set
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
	|| ydk::is_set(giantpkts.yfilter)
	|| ydk::is_set(stormsupressedpkts.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(pkts64octets.yfilter)
	|| ydk::is_set(pkts65to127octets.yfilter)
	|| ydk::is_set(pkts128to255octets.yfilter)
	|| ydk::is_set(pkts256to511octets.yfilter)
	|| ydk::is_set(pkts512to1023octets.yfilter)
	|| ydk::is_set(pkts1024to1518octets.yfilter)
	|| ydk::is_set(pkts1519to1548octets.yfilter)
	|| ydk::is_set(rxpkts64octets.yfilter)
	|| ydk::is_set(txpkts64octets.yfilter)
	|| ydk::is_set(rxpkts65to127octets.yfilter)
	|| ydk::is_set(txpkts65to127octets.yfilter)
	|| ydk::is_set(rxpkts128to255octets.yfilter)
	|| ydk::is_set(txpkts128to255octets.yfilter)
	|| ydk::is_set(rxpkts256to511octets.yfilter)
	|| ydk::is_set(txpkts256to511octets.yfilter)
	|| ydk::is_set(rxpkts512to1023octets.yfilter)
	|| ydk::is_set(txpkts512to1023octets.yfilter)
	|| ydk::is_set(rxpkts1024to1518octets.yfilter)
	|| ydk::is_set(txpkts1024to1518octets.yfilter)
	|| ydk::is_set(rxpkts1519to1548octets.yfilter)
	|| ydk::is_set(txpkts1519to1548octets.yfilter)
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
    if (giantpkts.is_set || is_set(giantpkts.yfilter)) leaf_name_data.push_back(giantpkts.get_name_leafdata());
    if (stormsupressedpkts.is_set || is_set(stormsupressedpkts.yfilter)) leaf_name_data.push_back(stormsupressedpkts.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (pkts64octets.is_set || is_set(pkts64octets.yfilter)) leaf_name_data.push_back(pkts64octets.get_name_leafdata());
    if (pkts65to127octets.is_set || is_set(pkts65to127octets.yfilter)) leaf_name_data.push_back(pkts65to127octets.get_name_leafdata());
    if (pkts128to255octets.is_set || is_set(pkts128to255octets.yfilter)) leaf_name_data.push_back(pkts128to255octets.get_name_leafdata());
    if (pkts256to511octets.is_set || is_set(pkts256to511octets.yfilter)) leaf_name_data.push_back(pkts256to511octets.get_name_leafdata());
    if (pkts512to1023octets.is_set || is_set(pkts512to1023octets.yfilter)) leaf_name_data.push_back(pkts512to1023octets.get_name_leafdata());
    if (pkts1024to1518octets.is_set || is_set(pkts1024to1518octets.yfilter)) leaf_name_data.push_back(pkts1024to1518octets.get_name_leafdata());
    if (pkts1519to1548octets.is_set || is_set(pkts1519to1548octets.yfilter)) leaf_name_data.push_back(pkts1519to1548octets.get_name_leafdata());
    if (rxpkts64octets.is_set || is_set(rxpkts64octets.yfilter)) leaf_name_data.push_back(rxpkts64octets.get_name_leafdata());
    if (txpkts64octets.is_set || is_set(txpkts64octets.yfilter)) leaf_name_data.push_back(txpkts64octets.get_name_leafdata());
    if (rxpkts65to127octets.is_set || is_set(rxpkts65to127octets.yfilter)) leaf_name_data.push_back(rxpkts65to127octets.get_name_leafdata());
    if (txpkts65to127octets.is_set || is_set(txpkts65to127octets.yfilter)) leaf_name_data.push_back(txpkts65to127octets.get_name_leafdata());
    if (rxpkts128to255octets.is_set || is_set(rxpkts128to255octets.yfilter)) leaf_name_data.push_back(rxpkts128to255octets.get_name_leafdata());
    if (txpkts128to255octets.is_set || is_set(txpkts128to255octets.yfilter)) leaf_name_data.push_back(txpkts128to255octets.get_name_leafdata());
    if (rxpkts256to511octets.is_set || is_set(rxpkts256to511octets.yfilter)) leaf_name_data.push_back(rxpkts256to511octets.get_name_leafdata());
    if (txpkts256to511octets.is_set || is_set(txpkts256to511octets.yfilter)) leaf_name_data.push_back(txpkts256to511octets.get_name_leafdata());
    if (rxpkts512to1023octets.is_set || is_set(rxpkts512to1023octets.yfilter)) leaf_name_data.push_back(rxpkts512to1023octets.get_name_leafdata());
    if (txpkts512to1023octets.is_set || is_set(txpkts512to1023octets.yfilter)) leaf_name_data.push_back(txpkts512to1023octets.get_name_leafdata());
    if (rxpkts1024to1518octets.is_set || is_set(rxpkts1024to1518octets.yfilter)) leaf_name_data.push_back(rxpkts1024to1518octets.get_name_leafdata());
    if (txpkts1024to1518octets.is_set || is_set(txpkts1024to1518octets.yfilter)) leaf_name_data.push_back(txpkts1024to1518octets.get_name_leafdata());
    if (rxpkts1519to1548octets.is_set || is_set(rxpkts1519to1548octets.yfilter)) leaf_name_data.push_back(rxpkts1519to1548octets.get_name_leafdata());
    if (txpkts1519to1548octets.is_set || is_set(txpkts1519to1548octets.yfilter)) leaf_name_data.push_back(txpkts1519to1548octets.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgEtherStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgEtherStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "giantPkts")
    {
        giantpkts = value;
        giantpkts.value_namespace = name_space;
        giantpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormSupressedPkts")
    {
        stormsupressedpkts = value;
        stormsupressedpkts.value_namespace = name_space;
        stormsupressedpkts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pkts1519to1548Octets")
    {
        pkts1519to1548octets = value;
        pkts1519to1548octets.value_namespace = name_space;
        pkts1519to1548octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts64Octets")
    {
        rxpkts64octets = value;
        rxpkts64octets.value_namespace = name_space;
        rxpkts64octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts64Octets")
    {
        txpkts64octets = value;
        txpkts64octets.value_namespace = name_space;
        txpkts64octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts65to127Octets")
    {
        rxpkts65to127octets = value;
        rxpkts65to127octets.value_namespace = name_space;
        rxpkts65to127octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts65to127Octets")
    {
        txpkts65to127octets = value;
        txpkts65to127octets.value_namespace = name_space;
        txpkts65to127octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts128to255Octets")
    {
        rxpkts128to255octets = value;
        rxpkts128to255octets.value_namespace = name_space;
        rxpkts128to255octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts128to255Octets")
    {
        txpkts128to255octets = value;
        txpkts128to255octets.value_namespace = name_space;
        txpkts128to255octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts256to511Octets")
    {
        rxpkts256to511octets = value;
        rxpkts256to511octets.value_namespace = name_space;
        rxpkts256to511octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts256to511Octets")
    {
        txpkts256to511octets = value;
        txpkts256to511octets.value_namespace = name_space;
        txpkts256to511octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts512to1023Octets")
    {
        rxpkts512to1023octets = value;
        rxpkts512to1023octets.value_namespace = name_space;
        rxpkts512to1023octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts512to1023Octets")
    {
        txpkts512to1023octets = value;
        txpkts512to1023octets.value_namespace = name_space;
        txpkts512to1023octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts1024to1518Octets")
    {
        rxpkts1024to1518octets = value;
        rxpkts1024to1518octets.value_namespace = name_space;
        rxpkts1024to1518octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts1024to1518Octets")
    {
        txpkts1024to1518octets = value;
        txpkts1024to1518octets.value_namespace = name_space;
        txpkts1024to1518octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts1519to1548Octets")
    {
        rxpkts1519to1548octets = value;
        rxpkts1519to1548octets.value_namespace = name_space;
        rxpkts1519to1548octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts1519to1548Octets")
    {
        txpkts1519to1548octets = value;
        txpkts1519to1548octets.value_namespace = name_space;
        txpkts1519to1548octets.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "giantPkts")
    {
        giantpkts.yfilter = yfilter;
    }
    if(value_path == "stormSupressedPkts")
    {
        stormsupressedpkts.yfilter = yfilter;
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
    if(value_path == "pkts1519to1548Octets")
    {
        pkts1519to1548octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts64Octets")
    {
        rxpkts64octets.yfilter = yfilter;
    }
    if(value_path == "txPkts64Octets")
    {
        txpkts64octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts65to127Octets")
    {
        rxpkts65to127octets.yfilter = yfilter;
    }
    if(value_path == "txPkts65to127Octets")
    {
        txpkts65to127octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts128to255Octets")
    {
        rxpkts128to255octets.yfilter = yfilter;
    }
    if(value_path == "txPkts128to255Octets")
    {
        txpkts128to255octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts256to511Octets")
    {
        rxpkts256to511octets.yfilter = yfilter;
    }
    if(value_path == "txPkts256to511Octets")
    {
        txpkts256to511octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts512to1023Octets")
    {
        rxpkts512to1023octets.yfilter = yfilter;
    }
    if(value_path == "txPkts512to1023Octets")
    {
        txpkts512to1023octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts1024to1518Octets")
    {
        rxpkts1024to1518octets.yfilter = yfilter;
    }
    if(value_path == "txPkts1024to1518Octets")
    {
        txpkts1024to1518octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts1519to1548Octets")
    {
        rxpkts1519to1548octets.yfilter = yfilter;
    }
    if(value_path == "txPkts1519to1548Octets")
    {
        txpkts1519to1548octets.yfilter = yfilter;
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
    if(name == "dropEvents" || name == "multicastPkts" || name == "broadcastPkts" || name == "undersizePkts" || name == "giantPkts" || name == "stormSupressedPkts" || name == "fragments" || name == "pkts64Octets" || name == "pkts65to127Octets" || name == "pkts128to255Octets" || name == "pkts256to511Octets" || name == "pkts512to1023Octets" || name == "pkts1024to1518Octets" || name == "pkts1519to1548Octets" || name == "rxPkts64Octets" || name == "txPkts64Octets" || name == "rxPkts65to127Octets" || name == "txPkts65to127Octets" || name == "rxPkts128to255Octets" || name == "txPkts128to255Octets" || name == "rxPkts256to511Octets" || name == "txPkts256to511Octets" || name == "rxPkts512to1023Octets" || name == "txPkts512to1023Octets" || name == "rxPkts1024to1518Octets" || name == "txPkts1024to1518Octets" || name == "rxPkts1519to1548Octets" || name == "txPkts1519to1548Octets" || name == "oversizePkts" || name == "jabbers" || name == "octets" || name == "pkts" || name == "collisions" || name == "cRCAlignErrors" || name == "tXNoErrors" || name == "rXNoErrors" || name == "rxOversizePkts" || name == "txOversizePkts" || name == "overrun" || name == "underrun" || name == "ignored" || name == "watchdog" || name == "ifdowndrop")
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

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgDot3StatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgDot3StatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgIfHCInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgIfHCInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgIfHCOutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgIfHCOutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::MgmtItems::MgmtIfList::DbgIfStormItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MgmtItems::MgmtIfList::DbgIfStormItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

System::SnmpItems::SnmpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::SnmpItems::InstItems>())
    , servershutdown_items(std::make_shared<System::SnmpItems::ServershutdownItems>())
{
    inst_items->parent = this;
    servershutdown_items->parent = this;

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
	|| (inst_items !=  nullptr && inst_items->has_data())
	|| (servershutdown_items !=  nullptr && servershutdown_items->has_data());
}

bool System::SnmpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation())
	|| (servershutdown_items !=  nullptr && servershutdown_items->has_operation());
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

std::shared_ptr<ydk::Entity> System::SnmpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::SnmpItems::InstItems>();
        }
        return inst_items;
    }

    if(child_yang_name == "servershutdown-items")
    {
        if(servershutdown_items == nullptr)
        {
            servershutdown_items = std::make_shared<System::SnmpItems::ServershutdownItems>();
        }
        return servershutdown_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    if(servershutdown_items != nullptr)
    {
        _children["servershutdown-items"] = servershutdown_items;
    }

    return _children;
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
    if(name == "inst-items" || name == "servershutdown-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::SnmpItems::InstItems::InstItems()
    :
    logginglevel{YType::enumeration, "loggingLevel"},
    engid{YType::str, "engId"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
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
    return logginglevel.is_set
	|| engid.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| adminst.is_set
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
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(engid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
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

    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (engid.is_set || is_set(engid.yfilter)) leaf_name_data.push_back(engid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clgrp_items != nullptr)
    {
        _children["clgrp-items"] = clgrp_items;
    }

    if(globals_items != nullptr)
    {
        _children["globals-items"] = globals_items;
    }

    if(host_items != nullptr)
    {
        _children["host-items"] = host_items;
    }

    if(rmon_items != nullptr)
    {
        _children["rmon-items"] = rmon_items;
    }

    if(community_items != nullptr)
    {
        _children["community-items"] = community_items;
    }

    if(user_items != nullptr)
    {
        _children["user-items"] = user_items;
    }

    if(ctx_items != nullptr)
    {
        _children["ctx-items"] = ctx_items;
    }

    if(sysinfo_items != nullptr)
    {
        _children["sysinfo-items"] = sysinfo_items;
    }

    if(traps_items != nullptr)
    {
        _children["traps-items"] = traps_items;
    }

    if(rmtuser_items != nullptr)
    {
        _children["rmtUser-items"] = rmtuser_items;
    }

    if(lcluser_items != nullptr)
    {
        _children["lclUser-items"] = lcluser_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engId")
    {
        engid = value;
        engid.value_namespace = name_space;
        engid.value_namespace_prefix = name_space_prefix;
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
}

void System::SnmpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "engId")
    {
        engid.yfilter = yfilter;
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
}

bool System::SnmpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clgrp-items" || name == "globals-items" || name == "host-items" || name == "rmon-items" || name == "community-items" || name == "user-items" || name == "ctx-items" || name == "sysinfo-items" || name == "traps-items" || name == "rmtUser-items" || name == "lclUser-items" || name == "loggingLevel" || name == "engId" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "adminSt")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::ClgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ClientGrp-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList>();
        ent_->parent = this;
        clientgrp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::ClgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clientgrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_items != nullptr)
    {
        _children["client-items"] = client_items;
    }

    if(rscommsecpclientgrpatt_items != nullptr)
    {
        _children["rscommSecPClientGrpAtt-items"] = rscommsecpclientgrpatt_items;
    }

    return _children;
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
    if(name == "client-items" || name == "rscommSecPClientGrpAtt-items" || name == "name" || name == "vrf" || name == "operSt" || name == "descr" || name == "epgDn")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Client-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList>();
        ent_->parent = this;
        client_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
	|| name.is_set;
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(operst.yfilter)
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
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "operSt" || name == "name")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsCommSecPClientGrpAtt-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList>();
        ent_->parent = this;
        rscommsecpclientgrpatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rscommsecpclientgrpatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RsCommSecPClientGrpAtt-list"; yang_parent_name = "rscommSecPClientGrpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::~RsCommSecPClientGrpAttList()
{
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::SnmpItems::InstItems::GlobalsItems::GlobalsItems()
    :
    aaausercachetimeout{YType::uint32, "aaaUserCacheTimeout"},
    protocolenable{YType::enumeration, "protocolEnable"},
    countercacheenable{YType::enumeration, "counterCacheEnable"},
    countercachetimeout{YType::uint16, "counterCacheTimeout"},
    enableifaliaslong{YType::enumeration, "enableIfAliasLong"},
    enforceprivacy{YType::enumeration, "enforcePrivacy"},
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
	|| enableifaliaslong.is_set
	|| enforceprivacy.is_set
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
	|| ydk::is_set(enableifaliaslong.yfilter)
	|| ydk::is_set(enforceprivacy.yfilter)
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
    if (enableifaliaslong.is_set || is_set(enableifaliaslong.yfilter)) leaf_name_data.push_back(enableifaliaslong.get_name_leafdata());
    if (enforceprivacy.is_set || is_set(enforceprivacy.yfilter)) leaf_name_data.push_back(enforceprivacy.get_name_leafdata());
    if (pktsize.is_set || is_set(pktsize.yfilter)) leaf_name_data.push_back(pktsize.get_name_leafdata());
    if (tcpsessionauth.is_set || is_set(tcpsessionauth.yfilter)) leaf_name_data.push_back(tcpsessionauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::GlobalsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::GlobalsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(srcinterfacetraps_items != nullptr)
    {
        _children["srcInterfaceTraps-items"] = srcinterfacetraps_items;
    }

    if(srcinterfaceinforms_items != nullptr)
    {
        _children["srcInterfaceInforms-items"] = srcinterfaceinforms_items;
    }

    return _children;
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
    if(value_path == "enableIfAliasLong")
    {
        enableifaliaslong = value;
        enableifaliaslong.value_namespace = name_space;
        enableifaliaslong.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforcePrivacy")
    {
        enforceprivacy = value;
        enforceprivacy.value_namespace = name_space;
        enforceprivacy.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "enableIfAliasLong")
    {
        enableifaliaslong.yfilter = yfilter;
    }
    if(value_path == "enforcePrivacy")
    {
        enforceprivacy.yfilter = yfilter;
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
    if(name == "srcInterfaceTraps-items" || name == "srcInterfaceInforms-items" || name == "aaaUserCacheTimeout" || name == "protocolEnable" || name == "counterCacheEnable" || name == "counterCacheTimeout" || name == "enableIfAliasLong" || name == "enforcePrivacy" || name == "pktSize" || name == "tcpSessionAuth")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::HostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Host-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::HostItems::HostList>();
        ent_->parent = this;
        host_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::HostItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    commname{YType::str, "commName"},
    notiftype{YType::enumeration, "notifType"},
    version{YType::enumeration, "version"},
    seclevel{YType::enumeration, "secLevel"}
        ,
    hostsourceinterface_items(std::make_shared<System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems>())
    , usevrf_items(std::make_shared<System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems>())
    , filtervrf_items(std::make_shared<System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems>())
{
    hostsourceinterface_items->parent = this;
    usevrf_items->parent = this;
    filtervrf_items->parent = this;

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
	|| commname.is_set
	|| notiftype.is_set
	|| version.is_set
	|| seclevel.is_set
	|| (hostsourceinterface_items !=  nullptr && hostsourceinterface_items->has_data())
	|| (usevrf_items !=  nullptr && usevrf_items->has_data())
	|| (filtervrf_items !=  nullptr && filtervrf_items->has_data());
}

bool System::SnmpItems::InstItems::HostItems::HostList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(udpportid.yfilter)
	|| ydk::is_set(commname.yfilter)
	|| ydk::is_set(notiftype.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(seclevel.yfilter)
	|| (hostsourceinterface_items !=  nullptr && hostsourceinterface_items->has_operation())
	|| (usevrf_items !=  nullptr && usevrf_items->has_operation())
	|| (filtervrf_items !=  nullptr && filtervrf_items->has_operation());
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
    if (commname.is_set || is_set(commname.yfilter)) leaf_name_data.push_back(commname.get_name_leafdata());
    if (notiftype.is_set || is_set(notiftype.yfilter)) leaf_name_data.push_back(notiftype.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (seclevel.is_set || is_set(seclevel.yfilter)) leaf_name_data.push_back(seclevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::HostItems::HostList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostsourceinterface-items")
    {
        if(hostsourceinterface_items == nullptr)
        {
            hostsourceinterface_items = std::make_shared<System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems>();
        }
        return hostsourceinterface_items;
    }

    if(child_yang_name == "usevrf-items")
    {
        if(usevrf_items == nullptr)
        {
            usevrf_items = std::make_shared<System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems>();
        }
        return usevrf_items;
    }

    if(child_yang_name == "filtervrf-items")
    {
        if(filtervrf_items == nullptr)
        {
            filtervrf_items = std::make_shared<System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems>();
        }
        return filtervrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::HostItems::HostList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hostsourceinterface_items != nullptr)
    {
        _children["hostsourceinterface-items"] = hostsourceinterface_items;
    }

    if(usevrf_items != nullptr)
    {
        _children["usevrf-items"] = usevrf_items;
    }

    if(filtervrf_items != nullptr)
    {
        _children["filtervrf-items"] = filtervrf_items;
    }

    return _children;
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
}

bool System::SnmpItems::InstItems::HostItems::HostList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostsourceinterface-items" || name == "usevrf-items" || name == "filtervrf-items" || name == "hostName" || name == "udpPortID" || name == "commName" || name == "notifType" || name == "version" || name == "secLevel")
        return true;
    return false;
}

System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems::HostsourceinterfaceItems()
    :
    ifname{YType::str, "ifName"}
{

    yang_name = "hostsourceinterface-items"; yang_parent_name = "Host-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems::~HostsourceinterfaceItems()
{
}

bool System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems::has_data() const
{
    if (is_presence_container) return true;
    return ifname.is_set;
}

bool System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifname.yfilter);
}

std::string System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostsourceinterface-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifName")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifName")
    {
        ifname.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifName")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UseVrf-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList>();
        ent_->parent = this;
        usevrf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : usevrf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FiltervrfItems()
    :
    filtervrf_list(this, {"vrfname"})
{

    yang_name = "filtervrf-items"; yang_parent_name = "Host-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::~FiltervrfItems()
{
}

bool System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filtervrf_list.len(); index++)
    {
        if(filtervrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::has_operation() const
{
    for (std::size_t index=0; index<filtervrf_list.len(); index++)
    {
        if(filtervrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filtervrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FilterVrf-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FilterVrfList>();
        ent_->parent = this;
        filtervrf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : filtervrf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FilterVrf-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FilterVrfList::FilterVrfList()
    :
    vrfname{YType::str, "vrfName"}
{

    yang_name = "FilterVrf-list"; yang_parent_name = "filtervrf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FilterVrfList::~FilterVrfList()
{
}

bool System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FilterVrfList::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set;
}

bool System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FilterVrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter);
}

std::string System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FilterVrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FilterVrf-list";
    ADD_KEY_TOKEN(vrfname, "vrfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FilterVrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FilterVrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FilterVrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FilterVrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FilterVrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FilterVrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfName")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmonItems::RmonItems()
    :
    event_items(std::make_shared<System::SnmpItems::InstItems::RmonItems::EventItems>())
    , alarm_items(std::make_shared<System::SnmpItems::InstItems::RmonItems::AlarmItems>())
    , hcalarm_items(std::make_shared<System::SnmpItems::InstItems::RmonItems::HcalarmItems>())
{
    event_items->parent = this;
    alarm_items->parent = this;
    hcalarm_items->parent = this;

    yang_name = "rmon-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmonItems::~RmonItems()
{
}

bool System::SnmpItems::InstItems::RmonItems::has_data() const
{
    if (is_presence_container) return true;
    return (event_items !=  nullptr && event_items->has_data())
	|| (alarm_items !=  nullptr && alarm_items->has_data())
	|| (hcalarm_items !=  nullptr && hcalarm_items->has_data());
}

bool System::SnmpItems::InstItems::RmonItems::has_operation() const
{
    return is_set(yfilter)
	|| (event_items !=  nullptr && event_items->has_operation())
	|| (alarm_items !=  nullptr && alarm_items->has_operation())
	|| (hcalarm_items !=  nullptr && hcalarm_items->has_operation());
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


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::RmonItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    if(child_yang_name == "hcalarm-items")
    {
        if(hcalarm_items == nullptr)
        {
            hcalarm_items = std::make_shared<System::SnmpItems::InstItems::RmonItems::HcalarmItems>();
        }
        return hcalarm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::RmonItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(event_items != nullptr)
    {
        _children["event-items"] = event_items;
    }

    if(alarm_items != nullptr)
    {
        _children["alarm-items"] = alarm_items;
    }

    if(hcalarm_items != nullptr)
    {
        _children["hcalarm-items"] = hcalarm_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::RmonItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::RmonItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::RmonItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-items" || name == "alarm-items" || name == "hcalarm-items")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::RmonItems::EventItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Event-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::RmonItems::EventItems::EventList>();
        ent_->parent = this;
        event_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::RmonItems::EventItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::RmonItems::EventItems::EventList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::RmonItems::EventItems::EventList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::RmonItems::AlarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Alarm-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList>();
        ent_->parent = this;
        alarm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::RmonItems::AlarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : alarm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    owner{YType::str, "owner"}
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
	|| owner.is_set;
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
	|| ydk::is_set(owner.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num" || name == "oid" || name == "sampleInterval" || name == "sampleType" || name == "risingThr" || name == "risingEvntIndx" || name == "fallingThr" || name == "fallingEvntIndx" || name == "owner")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcalarmItems()
    :
    hcalarm_list(this, {"num"})
{

    yang_name = "hcalarm-items"; yang_parent_name = "rmon-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmonItems::HcalarmItems::~HcalarmItems()
{
}

bool System::SnmpItems::InstItems::RmonItems::HcalarmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hcalarm_list.len(); index++)
    {
        if(hcalarm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::RmonItems::HcalarmItems::has_operation() const
{
    for (std::size_t index=0; index<hcalarm_list.len(); index++)
    {
        if(hcalarm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::RmonItems::HcalarmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/rmon-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmonItems::HcalarmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hcalarm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmonItems::HcalarmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::RmonItems::HcalarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HcAlarm-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList>();
        ent_->parent = this;
        hcalarm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::RmonItems::HcalarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hcalarm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SnmpItems::InstItems::RmonItems::HcalarmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::RmonItems::HcalarmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::RmonItems::HcalarmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HcAlarm-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList::HcAlarmList()
    :
    num{YType::uint16, "num"},
    oid{YType::str, "oid"},
    sampleinterval{YType::uint32, "sampleInterval"},
    sampletype{YType::enumeration, "sampleType"},
    startupalarm{YType::enumeration, "startupAlarm"},
    risingthr{YType::uint64, "risingThr"},
    risingevntindx{YType::uint16, "risingEvntIndx"},
    fallingthr{YType::uint64, "fallingThr"},
    fallingevntindx{YType::uint16, "fallingEvntIndx"},
    owner{YType::str, "owner"}
{

    yang_name = "HcAlarm-list"; yang_parent_name = "hcalarm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList::~HcAlarmList()
{
}

bool System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList::has_data() const
{
    if (is_presence_container) return true;
    return num.is_set
	|| oid.is_set
	|| sampleinterval.is_set
	|| sampletype.is_set
	|| startupalarm.is_set
	|| risingthr.is_set
	|| risingevntindx.is_set
	|| fallingthr.is_set
	|| fallingevntindx.is_set
	|| owner.is_set;
}

bool System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num.yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(sampleinterval.yfilter)
	|| ydk::is_set(sampletype.yfilter)
	|| ydk::is_set(startupalarm.yfilter)
	|| ydk::is_set(risingthr.yfilter)
	|| ydk::is_set(risingevntindx.yfilter)
	|| ydk::is_set(fallingthr.yfilter)
	|| ydk::is_set(fallingevntindx.yfilter)
	|| ydk::is_set(owner.yfilter);
}

std::string System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/rmon-items/hcalarm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "HcAlarm-list";
    ADD_KEY_TOKEN(num, "num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num.is_set || is_set(num.yfilter)) leaf_name_data.push_back(num.get_name_leafdata());
    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (sampleinterval.is_set || is_set(sampleinterval.yfilter)) leaf_name_data.push_back(sampleinterval.get_name_leafdata());
    if (sampletype.is_set || is_set(sampletype.yfilter)) leaf_name_data.push_back(sampletype.get_name_leafdata());
    if (startupalarm.is_set || is_set(startupalarm.yfilter)) leaf_name_data.push_back(startupalarm.get_name_leafdata());
    if (risingthr.is_set || is_set(risingthr.yfilter)) leaf_name_data.push_back(risingthr.get_name_leafdata());
    if (risingevntindx.is_set || is_set(risingevntindx.yfilter)) leaf_name_data.push_back(risingevntindx.get_name_leafdata());
    if (fallingthr.is_set || is_set(fallingthr.yfilter)) leaf_name_data.push_back(fallingthr.get_name_leafdata());
    if (fallingevntindx.is_set || is_set(fallingevntindx.yfilter)) leaf_name_data.push_back(fallingevntindx.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "startupAlarm")
    {
        startupalarm = value;
        startupalarm.value_namespace = name_space;
        startupalarm.value_namespace_prefix = name_space_prefix;
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
}

void System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "startupAlarm")
    {
        startupalarm.yfilter = yfilter;
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
}

bool System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num" || name == "oid" || name == "sampleInterval" || name == "sampleType" || name == "startupAlarm" || name == "risingThr" || name == "risingEvntIndx" || name == "fallingThr" || name == "fallingEvntIndx" || name == "owner")
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

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::CommunityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CommSecP-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::CommunityItems::CommSecPList>();
        ent_->parent = this;
        commsecp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::CommunityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : commsecp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    contextname{YType::str, "contextName"},
    commacess{YType::enumeration, "commAcess"},
    operst{YType::enumeration, "operSt"},
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
	|| contextname.is_set
	|| commacess.is_set
	|| operst.is_set
	|| descr.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (rscommtoctxatt_items !=  nullptr && rscommtoctxatt_items->has_data());
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(grpname.yfilter)
	|| ydk::is_set(contextname.yfilter)
	|| ydk::is_set(commacess.yfilter)
	|| ydk::is_set(operst.yfilter)
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
    if (contextname.is_set || is_set(contextname.yfilter)) leaf_name_data.push_back(contextname.get_name_leafdata());
    if (commacess.is_set || is_set(commacess.yfilter)) leaf_name_data.push_back(commacess.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::CommunityItems::CommSecPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::CommunityItems::CommSecPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    if(rscommtoctxatt_items != nullptr)
    {
        _children["rscommToCtxAtt-items"] = rscommtoctxatt_items;
    }

    return _children;
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
    if(value_path == "contextName")
    {
        contextname = value;
        contextname.value_namespace = name_space;
        contextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commAcess")
    {
        commacess = value;
        commacess.value_namespace = name_space;
        commacess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "contextName")
    {
        contextname.yfilter = yfilter;
    }
    if(value_path == "commAcess")
    {
        commacess.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "rscommToCtxAtt-items" || name == "name" || name == "grpName" || name == "contextName" || name == "commAcess" || name == "operSt" || name == "descr")
        return true;
    return false;
}


}
}

