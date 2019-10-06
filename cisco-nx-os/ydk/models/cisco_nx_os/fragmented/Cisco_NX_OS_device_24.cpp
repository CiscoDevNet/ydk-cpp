
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_24.hpp"
#include "Cisco_NX_OS_device_25.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RemoteFloodListEntryList()
    :
    vtep{YType::str, "vtep"}
        ,
    rsvtepatt_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems>())
{
    rsvtepatt_items->parent = this;

    yang_name = "RemoteFloodListEntry-list"; yang_parent_name = "vtep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::~RemoteFloodListEntryList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vtep.is_set
	|| (rsvtepatt_items !=  nullptr && rsvtepatt_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vtep.yfilter)
	|| (rsvtepatt_items !=  nullptr && rsvtepatt_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RemoteFloodListEntry-list";
    ADD_KEY_TOKEN(vtep, "vtep");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vtep.is_set || is_set(vtep.yfilter)) leaf_name_data.push_back(vtep.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvtepAtt-items")
    {
        if(rsvtepatt_items == nullptr)
        {
            rsvtepatt_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems>();
        }
        return rsvtepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvtepatt_items != nullptr)
    {
        _children["rsvtepAtt-items"] = rsvtepatt_items;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vtep")
    {
        vtep = value;
        vtep.value_namespace = name_space;
        vtep.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vtep")
    {
        vtep.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvtepAtt-items" || name == "vtep")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsvtepAttItems()
    :
    rsvtepatt_list(this, {"tdn"})
{

    yang_name = "rsvtepAtt-items"; yang_parent_name = "RemoteFloodListEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::~RsvtepAttItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvtepatt_list.len(); index++)
    {
        if(rsvtepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsvtepatt_list.len(); index++)
    {
        if(rsvtepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvtepAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVtepAtt-list")
    {
        auto ent_ = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList>();
        ent_->parent = this;
        rsvtepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvtepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVtepAtt-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::RsVtepAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsVtepAtt-list"; yang_parent_name = "rsvtepAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::~RsVtepAttList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVtepAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::AfItems()
    :
    domainaf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "BdEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::~AfItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domainaf_list.len(); index++)
    {
        if(domainaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<domainaf_list.len(); index++)
    {
        if(domainaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomainAf-list")
    {
        auto ent_ = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList>();
        ent_->parent = this;
        domainaf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domainaf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomainAf-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::DomainAfList()
    :
    type{YType::enumeration, "type"},
    vrf{YType::str, "vrf"},
    rd{YType::str, "rd"}
        ,
    rttp_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems>())
    , ctrl_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems>())
{
    rttp_items->parent = this;
    ctrl_items->parent = this;

    yang_name = "DomainAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::~DomainAfList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| vrf.is_set
	|| rd.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data())
	|| (ctrl_items !=  nullptr && ctrl_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation())
	|| (ctrl_items !=  nullptr && ctrl_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomainAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems>();
        }
        return rttp_items;
    }

    if(child_yang_name == "ctrl-items")
    {
        if(ctrl_items == nullptr)
        {
            ctrl_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems>();
        }
        return ctrl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rttp_items != nullptr)
    {
        _children["rttp-items"] = rttp_items;
    }

    if(ctrl_items != nullptr)
    {
        _children["ctrl-items"] = ctrl_items;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "ctrl-items" || name == "type" || name == "vrf" || name == "rd")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttpItems()
    :
    rttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "DomainAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::~RttpItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttP-list")
    {
        auto ent_ = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList>();
        ent_->parent = this;
        rttp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttP-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::RttPList()
    :
    type{YType::enumeration, "type"},
    isl3{YType::enumeration, "isL3"}
        ,
    ent_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems>())
{
    ent_items->parent = this;

    yang_name = "RttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::~RttPList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| isl3.is_set
	|| (ent_items !=  nullptr && ent_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(isl3.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (isl3.is_set || is_set(isl3.yfilter)) leaf_name_data.push_back(isl3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems>();
        }
        return ent_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ent_items != nullptr)
    {
        _children["ent-items"] = ent_items;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isL3")
    {
        isl3 = value;
        isl3.value_namespace = name_space;
        isl3.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "isL3")
    {
        isl3.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "type" || name == "isL3")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::EntItems()
    :
    rttentry_list(this, {"rtt"})
{

    yang_name = "ent-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::~EntItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttEntry-list")
    {
        auto ent_ = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList>();
        ent_->parent = this;
        rttentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttEntry-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::RttEntryList()
    :
    rtt{YType::str, "rtt"}
{

    yang_name = "RttEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::~RttEntryList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::CtrlItems()
    :
    afctrl_list(this, {"type"})
{

    yang_name = "ctrl-items"; yang_parent_name = "DomainAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::~CtrlItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<afctrl_list.len(); index++)
    {
        if(afctrl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::has_operation() const
{
    for (std::size_t index=0; index<afctrl_list.len(); index++)
    {
        if(afctrl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AfCtrl-list")
    {
        auto ent_ = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList>();
        ent_->parent = this;
        afctrl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : afctrl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AfCtrl-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::AfCtrlList()
    :
    type{YType::enumeration, "type"}
        ,
    rttp_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems>())
{
    rttp_items->parent = this;

    yang_name = "AfCtrl-list"; yang_parent_name = "ctrl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::~AfCtrlList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AfCtrl-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems>();
        }
        return rttp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rttp_items != nullptr)
    {
        _children["rttp-items"] = rttp_items;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "type")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttpItems()
    :
    rttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "AfCtrl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::~RttpItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttP-list")
    {
        auto ent_ = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList>();
        ent_->parent = this;
        rttp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttP-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RttPList()
    :
    type{YType::enumeration, "type"},
    isl3{YType::enumeration, "isL3"}
        ,
    ent_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems>())
{
    ent_items->parent = this;

    yang_name = "RttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::~RttPList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| isl3.is_set
	|| (ent_items !=  nullptr && ent_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(isl3.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (isl3.is_set || is_set(isl3.yfilter)) leaf_name_data.push_back(isl3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems>();
        }
        return ent_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ent_items != nullptr)
    {
        _children["ent-items"] = ent_items;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isL3")
    {
        isl3 = value;
        isl3.value_namespace = name_space;
        isl3.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "isL3")
    {
        isl3.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "type" || name == "isL3")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::EntItems()
    :
    rttentry_list(this, {"rtt"})
{

    yang_name = "ent-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::~EntItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttEntry-list")
    {
        auto ent_ = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList>();
        ent_->parent = this;
        rttentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttEntry-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::RttEntryList()
    :
    rtt{YType::str, "rtt"}
{

    yang_name = "RttEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::~RttEntryList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtaggregateVlanMemberAttItems()
    :
    rtaggregatevlanmemberatt_list(this, {"tdn"})
{

    yang_name = "rtaggregateVlanMemberAtt-items"; yang_parent_name = "BdEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::~RtaggregateVlanMemberAttItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtaggregatevlanmemberatt_list.len(); index++)
    {
        if(rtaggregatevlanmemberatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtaggregatevlanmemberatt_list.len(); index++)
    {
        if(rtaggregatevlanmemberatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtaggregateVlanMemberAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtAggregateVlanMemberAtt-list")
    {
        auto ent_ = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList>();
        ent_->parent = this;
        rtaggregatevlanmemberatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtaggregatevlanmemberatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtAggregateVlanMemberAtt-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::RtAggregateVlanMemberAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtAggregateVlanMemberAtt-list"; yang_parent_name = "rtaggregateVlanMemberAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::~RtAggregateVlanMemberAttList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtAggregateVlanMemberAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::GlobalConfTableItems::GlobalConfTableItems()
    :
    vxlanmc{YType::enumeration, "vxLanMC"},
    agmac{YType::str, "agMac"}
{

    yang_name = "globalConfTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::GlobalConfTableItems::~GlobalConfTableItems()
{
}

bool System::GlobalConfTableItems::has_data() const
{
    if (is_presence_container) return true;
    return vxlanmc.is_set
	|| agmac.is_set;
}

bool System::GlobalConfTableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vxlanmc.yfilter)
	|| ydk::is_set(agmac.yfilter);
}

std::string System::GlobalConfTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::GlobalConfTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "globalConfTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::GlobalConfTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vxlanmc.is_set || is_set(vxlanmc.yfilter)) leaf_name_data.push_back(vxlanmc.get_name_leafdata());
    if (agmac.is_set || is_set(agmac.yfilter)) leaf_name_data.push_back(agmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::GlobalConfTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::GlobalConfTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::GlobalConfTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vxLanMC")
    {
        vxlanmc = value;
        vxlanmc.value_namespace = name_space;
        vxlanmc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agMac")
    {
        agmac = value;
        agmac.value_namespace = name_space;
        agmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::GlobalConfTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vxLanMC")
    {
        vxlanmc.yfilter = yfilter;
    }
    if(value_path == "agMac")
    {
        agmac.yfilter = yfilter;
    }
}

bool System::GlobalConfTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vxLanMC" || name == "agMac")
        return true;
    return false;
}

System::IntfTableItems::IntfTableItems()
    :
    intf_items(std::make_shared<System::IntfTableItems::IntfItems>())
    , svi_items(std::make_shared<System::IntfTableItems::SviItems>())
{
    intf_items->parent = this;
    svi_items->parent = this;

    yang_name = "intfTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfTableItems::~IntfTableItems()
{
}

bool System::IntfTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (svi_items !=  nullptr && svi_items->has_data());
}

bool System::IntfTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (svi_items !=  nullptr && svi_items->has_operation());
}

std::string System::IntfTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intfTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::IntfTableItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "svi-items")
    {
        if(svi_items == nullptr)
        {
            svi_items = std::make_shared<System::IntfTableItems::SviItems>();
        }
        return svi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    if(svi_items != nullptr)
    {
        _children["svi-items"] = svi_items;
    }

    return _children;
}

void System::IntfTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "svi-items")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfItems()
    :
    intfentry_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "intfTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfTableItems::IntfItems::~IntfItems()
{
}

bool System::IntfTableItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<intfentry_list.len(); index++)
    {
        if(intfentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfTableItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<intfentry_list.len(); index++)
    {
        if(intfentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfTableItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intfTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfTableItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfTableItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IntfEntry-list")
    {
        auto ent_ = std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList>();
        ent_->parent = this;
        intfentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfTableItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : intfentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfTableItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfTableItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfTableItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IntfEntry-list")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfEntryList::IntfEntryList()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    adminstate{YType::enumeration, "adminState"},
    operstate{YType::enumeration, "operState"},
    trunkvlans{YType::str, "trunkVlans"},
    iscontrollerownedintf{YType::boolean, "isControllerOwnedIntf"},
    ownercontrollersidlist{YType::str, "ownerControllersIdList"},
    untaggedvlan{YType::str, "untaggedVlan"},
    untaggedvlanctrluse{YType::boolean, "untaggedVlanCtrlUse"},
    untaggedvlanexplicitmap{YType::boolean, "untaggedVlanExplicitMap"}
        ,
    vlanmembertable_items(std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems>())
    , rtvpcintfentryatt_items(std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems>())
{
    vlanmembertable_items->parent = this;
    rtvpcintfentryatt_items->parent = this;

    yang_name = "IntfEntry-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfTableItems::IntfItems::IntfEntryList::~IntfEntryList()
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| adminstate.is_set
	|| operstate.is_set
	|| trunkvlans.is_set
	|| iscontrollerownedintf.is_set
	|| ownercontrollersidlist.is_set
	|| untaggedvlan.is_set
	|| untaggedvlanctrluse.is_set
	|| untaggedvlanexplicitmap.is_set
	|| (vlanmembertable_items !=  nullptr && vlanmembertable_items->has_data())
	|| (rtvpcintfentryatt_items !=  nullptr && rtvpcintfentryatt_items->has_data());
}

bool System::IntfTableItems::IntfItems::IntfEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(trunkvlans.yfilter)
	|| ydk::is_set(iscontrollerownedintf.yfilter)
	|| ydk::is_set(ownercontrollersidlist.yfilter)
	|| ydk::is_set(untaggedvlan.yfilter)
	|| ydk::is_set(untaggedvlanctrluse.yfilter)
	|| ydk::is_set(untaggedvlanexplicitmap.yfilter)
	|| (vlanmembertable_items !=  nullptr && vlanmembertable_items->has_operation())
	|| (rtvpcintfentryatt_items !=  nullptr && rtvpcintfentryatt_items->has_operation());
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intfTable-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IntfEntry-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::IntfEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (trunkvlans.is_set || is_set(trunkvlans.yfilter)) leaf_name_data.push_back(trunkvlans.get_name_leafdata());
    if (iscontrollerownedintf.is_set || is_set(iscontrollerownedintf.yfilter)) leaf_name_data.push_back(iscontrollerownedintf.get_name_leafdata());
    if (ownercontrollersidlist.is_set || is_set(ownercontrollersidlist.yfilter)) leaf_name_data.push_back(ownercontrollersidlist.get_name_leafdata());
    if (untaggedvlan.is_set || is_set(untaggedvlan.yfilter)) leaf_name_data.push_back(untaggedvlan.get_name_leafdata());
    if (untaggedvlanctrluse.is_set || is_set(untaggedvlanctrluse.yfilter)) leaf_name_data.push_back(untaggedvlanctrluse.get_name_leafdata());
    if (untaggedvlanexplicitmap.is_set || is_set(untaggedvlanexplicitmap.yfilter)) leaf_name_data.push_back(untaggedvlanexplicitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfTableItems::IntfItems::IntfEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlanMemberTable-items")
    {
        if(vlanmembertable_items == nullptr)
        {
            vlanmembertable_items = std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems>();
        }
        return vlanmembertable_items;
    }

    if(child_yang_name == "rtvpcIntfEntryAtt-items")
    {
        if(rtvpcintfentryatt_items == nullptr)
        {
            rtvpcintfentryatt_items = std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems>();
        }
        return rtvpcintfentryatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfTableItems::IntfItems::IntfEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlanmembertable_items != nullptr)
    {
        _children["vlanMemberTable-items"] = vlanmembertable_items;
    }

    if(rtvpcintfentryatt_items != nullptr)
    {
        _children["rtvpcIntfEntryAtt-items"] = rtvpcintfentryatt_items;
    }

    return _children;
}

void System::IntfTableItems::IntfItems::IntfEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "trunkVlans")
    {
        trunkvlans = value;
        trunkvlans.value_namespace = name_space;
        trunkvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isControllerOwnedIntf")
    {
        iscontrollerownedintf = value;
        iscontrollerownedintf.value_namespace = name_space;
        iscontrollerownedintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerControllersIdList")
    {
        ownercontrollersidlist = value;
        ownercontrollersidlist.value_namespace = name_space;
        ownercontrollersidlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "untaggedVlan")
    {
        untaggedvlan = value;
        untaggedvlan.value_namespace = name_space;
        untaggedvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "untaggedVlanCtrlUse")
    {
        untaggedvlanctrluse = value;
        untaggedvlanctrluse.value_namespace = name_space;
        untaggedvlanctrluse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "untaggedVlanExplicitMap")
    {
        untaggedvlanexplicitmap = value;
        untaggedvlanexplicitmap.value_namespace = name_space;
        untaggedvlanexplicitmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfTableItems::IntfItems::IntfEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "trunkVlans")
    {
        trunkvlans.yfilter = yfilter;
    }
    if(value_path == "isControllerOwnedIntf")
    {
        iscontrollerownedintf.yfilter = yfilter;
    }
    if(value_path == "ownerControllersIdList")
    {
        ownercontrollersidlist.yfilter = yfilter;
    }
    if(value_path == "untaggedVlan")
    {
        untaggedvlan.yfilter = yfilter;
    }
    if(value_path == "untaggedVlanCtrlUse")
    {
        untaggedvlanctrluse.yfilter = yfilter;
    }
    if(value_path == "untaggedVlanExplicitMap")
    {
        untaggedvlanexplicitmap.yfilter = yfilter;
    }
}

bool System::IntfTableItems::IntfItems::IntfEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanMemberTable-items" || name == "rtvpcIntfEntryAtt-items" || name == "name" || name == "type" || name == "adminState" || name == "operState" || name == "trunkVlans" || name == "isControllerOwnedIntf" || name == "ownerControllersIdList" || name == "untaggedVlan" || name == "untaggedVlanCtrlUse" || name == "untaggedVlanExplicitMap")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::VlanMemberTableItems()
    :
    member_items(std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems>())
    , rsvlanmemberatt_items(std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems>())
{
    member_items->parent = this;
    rsvlanmemberatt_items->parent = this;

    yang_name = "vlanMemberTable-items"; yang_parent_name = "IntfEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::~VlanMemberTableItems()
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (member_items !=  nullptr && member_items->has_data())
	|| (rsvlanmemberatt_items !=  nullptr && rsvlanmemberatt_items->has_data());
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (member_items !=  nullptr && member_items->has_operation())
	|| (rsvlanmemberatt_items !=  nullptr && rsvlanmemberatt_items->has_operation());
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanMemberTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-items")
    {
        if(member_items == nullptr)
        {
            member_items = std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems>();
        }
        return member_items;
    }

    if(child_yang_name == "rsvlanMemberAtt-items")
    {
        if(rsvlanmemberatt_items == nullptr)
        {
            rsvlanmemberatt_items = std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems>();
        }
        return rsvlanmemberatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_items != nullptr)
    {
        _children["member-items"] = member_items;
    }

    if(rsvlanmemberatt_items != nullptr)
    {
        _children["rsvlanMemberAtt-items"] = rsvlanmemberatt_items;
    }

    return _children;
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-items" || name == "rsvlanMemberAtt-items")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::MemberItems()
    :
    vlanmemberentry_list(this, {"vlan"})
{

    yang_name = "member-items"; yang_parent_name = "vlanMemberTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::~MemberItems()
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanmemberentry_list.len(); index++)
    {
        if(vlanmemberentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::has_operation() const
{
    for (std::size_t index=0; index<vlanmemberentry_list.len(); index++)
    {
        if(vlanmemberentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanMemberEntry-list")
    {
        auto ent_ = std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList>();
        ent_->parent = this;
        vlanmemberentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlanmemberentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanMemberEntry-list")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::VlanMemberEntryList()
    :
    vlan{YType::str, "vlan"}
{

    yang_name = "VlanMemberEntry-list"; yang_parent_name = "member-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::~VlanMemberEntryList()
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanMemberEntry-list";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsvlanMemberAttItems()
    :
    rsvlanmemberatt_list(this, {"tdn"})
{

    yang_name = "rsvlanMemberAtt-items"; yang_parent_name = "vlanMemberTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::~RsvlanMemberAttItems()
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvlanmemberatt_list.len(); index++)
    {
        if(rsvlanmemberatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsvlanmemberatt_list.len(); index++)
    {
        if(rsvlanmemberatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvlanMemberAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVlanMemberAtt-list")
    {
        auto ent_ = std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList>();
        ent_->parent = this;
        rsvlanmemberatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvlanmemberatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVlanMemberAtt-list")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::RsVlanMemberAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsVlanMemberAtt-list"; yang_parent_name = "rsvlanMemberAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::~RsVlanMemberAttList()
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVlanMemberAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::RtvpcIntfEntryAttItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvpcIntfEntryAtt-items"; yang_parent_name = "IntfEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::~RtvpcIntfEntryAttItems()
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvpcIntfEntryAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfTableItems::SviItems::SviItems()
    :
    svi_list(this, {"intf"})
{

    yang_name = "svi-items"; yang_parent_name = "intfTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfTableItems::SviItems::~SviItems()
{
}

bool System::IntfTableItems::SviItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<svi_list.len(); index++)
    {
        if(svi_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfTableItems::SviItems::has_operation() const
{
    for (std::size_t index=0; index<svi_list.len(); index++)
    {
        if(svi_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfTableItems::SviItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intfTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfTableItems::SviItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "svi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::SviItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfTableItems::SviItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Svi-list")
    {
        auto ent_ = std::make_shared<System::IntfTableItems::SviItems::SviList>();
        ent_->parent = this;
        svi_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfTableItems::SviItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : svi_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfTableItems::SviItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfTableItems::SviItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfTableItems::SviItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Svi-list")
        return true;
    return false;
}

System::IntfTableItems::SviItems::SviList::SviList()
    :
    intf{YType::str, "intf"},
    adminstate{YType::enumeration, "adminState"},
    operstate{YType::enumeration, "operState"},
    ip{YType::str, "ip"},
    ownerctrlrsidlist{YType::str, "ownerCtrlrsIdList"},
    mtu{YType::uint32, "mtu"},
    bw{YType::uint32, "bw"},
    fwdmode{YType::enumeration, "fwdMode"},
    vrf{YType::str, "vrf"}
{

    yang_name = "Svi-list"; yang_parent_name = "svi-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfTableItems::SviItems::SviList::~SviList()
{
}

bool System::IntfTableItems::SviItems::SviList::has_data() const
{
    if (is_presence_container) return true;
    return intf.is_set
	|| adminstate.is_set
	|| operstate.is_set
	|| ip.is_set
	|| ownerctrlrsidlist.is_set
	|| mtu.is_set
	|| bw.is_set
	|| fwdmode.is_set
	|| vrf.is_set;
}

bool System::IntfTableItems::SviItems::SviList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ownerctrlrsidlist.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(fwdmode.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string System::IntfTableItems::SviItems::SviList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intfTable-items/svi-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfTableItems::SviItems::SviList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Svi-list";
    ADD_KEY_TOKEN(intf, "intf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::SviItems::SviList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ownerctrlrsidlist.is_set || is_set(ownerctrlrsidlist.yfilter)) leaf_name_data.push_back(ownerctrlrsidlist.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (fwdmode.is_set || is_set(fwdmode.yfilter)) leaf_name_data.push_back(fwdmode.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfTableItems::SviItems::SviList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfTableItems::SviItems::SviList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfTableItems::SviItems::SviList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerCtrlrsIdList")
    {
        ownerctrlrsidlist = value;
        ownerctrlrsidlist.value_namespace = name_space;
        ownerctrlrsidlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdMode")
    {
        fwdmode = value;
        fwdmode.value_namespace = name_space;
        fwdmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfTableItems::SviItems::SviList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ownerCtrlrsIdList")
    {
        ownerctrlrsidlist.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "fwdMode")
    {
        fwdmode.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool System::IntfTableItems::SviItems::SviList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf" || name == "adminState" || name == "operState" || name == "ip" || name == "ownerCtrlrsIdList" || name == "mtu" || name == "bw" || name == "fwdMode" || name == "vrf")
        return true;
    return false;
}

System::MacTableItems::MacTableItems()
    :
    dynamic_items(std::make_shared<System::MacTableItems::DynamicItems>())
    , static_items(std::make_shared<System::MacTableItems::StaticItems>())
{
    dynamic_items->parent = this;
    static_items->parent = this;

    yang_name = "macTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacTableItems::~MacTableItems()
{
}

bool System::MacTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic_items !=  nullptr && dynamic_items->has_data())
	|| (static_items !=  nullptr && static_items->has_data());
}

bool System::MacTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic_items !=  nullptr && dynamic_items->has_operation())
	|| (static_items !=  nullptr && static_items->has_operation());
}

std::string System::MacTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-items")
    {
        if(dynamic_items == nullptr)
        {
            dynamic_items = std::make_shared<System::MacTableItems::DynamicItems>();
        }
        return dynamic_items;
    }

    if(child_yang_name == "static-items")
    {
        if(static_items == nullptr)
        {
            static_items = std::make_shared<System::MacTableItems::StaticItems>();
        }
        return static_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic_items != nullptr)
    {
        _children["dynamic-items"] = dynamic_items;
    }

    if(static_items != nullptr)
    {
        _children["static-items"] = static_items;
    }

    return _children;
}

void System::MacTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-items" || name == "static-items")
        return true;
    return false;
}

System::MacTableItems::DynamicItems::DynamicItems()
    :
    mac_items(std::make_shared<System::MacTableItems::DynamicItems::MacItems>())
{
    mac_items->parent = this;

    yang_name = "dynamic-items"; yang_parent_name = "macTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacTableItems::DynamicItems::~DynamicItems()
{
}

bool System::MacTableItems::DynamicItems::has_data() const
{
    if (is_presence_container) return true;
    return (mac_items !=  nullptr && mac_items->has_data());
}

bool System::MacTableItems::DynamicItems::has_operation() const
{
    return is_set(yfilter)
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::MacTableItems::DynamicItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacTableItems::DynamicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::DynamicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacTableItems::DynamicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::MacTableItems::DynamicItems::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacTableItems::DynamicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_items != nullptr)
    {
        _children["mac-items"] = mac_items;
    }

    return _children;
}

void System::MacTableItems::DynamicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacTableItems::DynamicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacTableItems::DynamicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-items")
        return true;
    return false;
}

System::MacTableItems::DynamicItems::MacItems::MacItems()
    :
    macentry_list(this, {"mac", "vlan"})
{

    yang_name = "mac-items"; yang_parent_name = "dynamic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacTableItems::DynamicItems::MacItems::~MacItems()
{
}

bool System::MacTableItems::DynamicItems::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macentry_list.len(); index++)
    {
        if(macentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MacTableItems::DynamicItems::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macentry_list.len(); index++)
    {
        if(macentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MacTableItems::DynamicItems::MacItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macTable-items/dynamic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacTableItems::DynamicItems::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::DynamicItems::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacTableItems::DynamicItems::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEntry-list")
    {
        auto ent_ = std::make_shared<System::MacTableItems::DynamicItems::MacItems::MacEntryList>();
        ent_->parent = this;
        macentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacTableItems::DynamicItems::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MacTableItems::DynamicItems::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacTableItems::DynamicItems::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacTableItems::DynamicItems::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEntry-list")
        return true;
    return false;
}

System::MacTableItems::DynamicItems::MacItems::MacEntryList::MacEntryList()
    :
    mac{YType::str, "mac"},
    vlan{YType::str, "vlan"},
    intf{YType::str, "intf"},
    tunneldstip{YType::str, "tunnelDstIp"},
    isintf{YType::boolean, "isIntf"},
    type{YType::enumeration, "type"},
    pushedmactobackend{YType::boolean, "pushedMacToBackEnd"}
        ,
    rtmac_items(std::make_shared<System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems>())
{
    rtmac_items->parent = this;

    yang_name = "MacEntry-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacTableItems::DynamicItems::MacItems::MacEntryList::~MacEntryList()
{
}

bool System::MacTableItems::DynamicItems::MacItems::MacEntryList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| vlan.is_set
	|| intf.is_set
	|| tunneldstip.is_set
	|| isintf.is_set
	|| type.is_set
	|| pushedmactobackend.is_set
	|| (rtmac_items !=  nullptr && rtmac_items->has_data());
}

bool System::MacTableItems::DynamicItems::MacItems::MacEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(tunneldstip.yfilter)
	|| ydk::is_set(isintf.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(pushedmactobackend.yfilter)
	|| (rtmac_items !=  nullptr && rtmac_items->has_operation());
}

std::string System::MacTableItems::DynamicItems::MacItems::MacEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macTable-items/dynamic-items/mac-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacTableItems::DynamicItems::MacItems::MacEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEntry-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::DynamicItems::MacItems::MacEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (tunneldstip.is_set || is_set(tunneldstip.yfilter)) leaf_name_data.push_back(tunneldstip.get_name_leafdata());
    if (isintf.is_set || is_set(isintf.yfilter)) leaf_name_data.push_back(isintf.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (pushedmactobackend.is_set || is_set(pushedmactobackend.yfilter)) leaf_name_data.push_back(pushedmactobackend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacTableItems::DynamicItems::MacItems::MacEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtmac-items")
    {
        if(rtmac_items == nullptr)
        {
            rtmac_items = std::make_shared<System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems>();
        }
        return rtmac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacTableItems::DynamicItems::MacItems::MacEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtmac_items != nullptr)
    {
        _children["rtmac-items"] = rtmac_items;
    }

    return _children;
}

void System::MacTableItems::DynamicItems::MacItems::MacEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelDstIp")
    {
        tunneldstip = value;
        tunneldstip.value_namespace = name_space;
        tunneldstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isIntf")
    {
        isintf = value;
        isintf.value_namespace = name_space;
        isintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pushedMacToBackEnd")
    {
        pushedmactobackend = value;
        pushedmactobackend.value_namespace = name_space;
        pushedmactobackend.value_namespace_prefix = name_space_prefix;
    }
}

void System::MacTableItems::DynamicItems::MacItems::MacEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "tunnelDstIp")
    {
        tunneldstip.yfilter = yfilter;
    }
    if(value_path == "isIntf")
    {
        isintf.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "pushedMacToBackEnd")
    {
        pushedmactobackend.yfilter = yfilter;
    }
}

bool System::MacTableItems::DynamicItems::MacItems::MacEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtmac-items" || name == "mac" || name == "vlan" || name == "intf" || name == "tunnelDstIp" || name == "isIntf" || name == "type" || name == "pushedMacToBackEnd")
        return true;
    return false;
}

System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::RtmacItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtmac-items"; yang_parent_name = "MacEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::~RtmacItems()
{
}

bool System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtmac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::MacTableItems::StaticItems::StaticItems()
    :
    mac_items(std::make_shared<System::MacTableItems::StaticItems::MacItems>())
{
    mac_items->parent = this;

    yang_name = "static-items"; yang_parent_name = "macTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacTableItems::StaticItems::~StaticItems()
{
}

bool System::MacTableItems::StaticItems::has_data() const
{
    if (is_presence_container) return true;
    return (mac_items !=  nullptr && mac_items->has_data());
}

bool System::MacTableItems::StaticItems::has_operation() const
{
    return is_set(yfilter)
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::MacTableItems::StaticItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacTableItems::StaticItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::StaticItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacTableItems::StaticItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::MacTableItems::StaticItems::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacTableItems::StaticItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_items != nullptr)
    {
        _children["mac-items"] = mac_items;
    }

    return _children;
}

void System::MacTableItems::StaticItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacTableItems::StaticItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacTableItems::StaticItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-items")
        return true;
    return false;
}

System::MacTableItems::StaticItems::MacItems::MacItems()
    :
    macentry_list(this, {"mac", "vlan"})
{

    yang_name = "mac-items"; yang_parent_name = "static-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacTableItems::StaticItems::MacItems::~MacItems()
{
}

bool System::MacTableItems::StaticItems::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macentry_list.len(); index++)
    {
        if(macentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MacTableItems::StaticItems::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macentry_list.len(); index++)
    {
        if(macentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MacTableItems::StaticItems::MacItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macTable-items/static-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacTableItems::StaticItems::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::StaticItems::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacTableItems::StaticItems::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEntry-list")
    {
        auto ent_ = std::make_shared<System::MacTableItems::StaticItems::MacItems::MacEntryList>();
        ent_->parent = this;
        macentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacTableItems::StaticItems::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MacTableItems::StaticItems::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacTableItems::StaticItems::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacTableItems::StaticItems::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEntry-list")
        return true;
    return false;
}

System::MacTableItems::StaticItems::MacItems::MacEntryList::MacEntryList()
    :
    mac{YType::str, "mac"},
    vlan{YType::str, "vlan"},
    intf{YType::str, "intf"},
    tunneldstip{YType::str, "tunnelDstIp"},
    isintf{YType::boolean, "isIntf"},
    type{YType::enumeration, "type"},
    pushedmactobackend{YType::boolean, "pushedMacToBackEnd"}
        ,
    rtmac_items(std::make_shared<System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems>())
{
    rtmac_items->parent = this;

    yang_name = "MacEntry-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacTableItems::StaticItems::MacItems::MacEntryList::~MacEntryList()
{
}

bool System::MacTableItems::StaticItems::MacItems::MacEntryList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| vlan.is_set
	|| intf.is_set
	|| tunneldstip.is_set
	|| isintf.is_set
	|| type.is_set
	|| pushedmactobackend.is_set
	|| (rtmac_items !=  nullptr && rtmac_items->has_data());
}

bool System::MacTableItems::StaticItems::MacItems::MacEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(tunneldstip.yfilter)
	|| ydk::is_set(isintf.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(pushedmactobackend.yfilter)
	|| (rtmac_items !=  nullptr && rtmac_items->has_operation());
}

std::string System::MacTableItems::StaticItems::MacItems::MacEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macTable-items/static-items/mac-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacTableItems::StaticItems::MacItems::MacEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEntry-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::StaticItems::MacItems::MacEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (tunneldstip.is_set || is_set(tunneldstip.yfilter)) leaf_name_data.push_back(tunneldstip.get_name_leafdata());
    if (isintf.is_set || is_set(isintf.yfilter)) leaf_name_data.push_back(isintf.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (pushedmactobackend.is_set || is_set(pushedmactobackend.yfilter)) leaf_name_data.push_back(pushedmactobackend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacTableItems::StaticItems::MacItems::MacEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtmac-items")
    {
        if(rtmac_items == nullptr)
        {
            rtmac_items = std::make_shared<System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems>();
        }
        return rtmac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacTableItems::StaticItems::MacItems::MacEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtmac_items != nullptr)
    {
        _children["rtmac-items"] = rtmac_items;
    }

    return _children;
}

void System::MacTableItems::StaticItems::MacItems::MacEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelDstIp")
    {
        tunneldstip = value;
        tunneldstip.value_namespace = name_space;
        tunneldstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isIntf")
    {
        isintf = value;
        isintf.value_namespace = name_space;
        isintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pushedMacToBackEnd")
    {
        pushedmactobackend = value;
        pushedmactobackend.value_namespace = name_space;
        pushedmactobackend.value_namespace_prefix = name_space_prefix;
    }
}

void System::MacTableItems::StaticItems::MacItems::MacEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "tunnelDstIp")
    {
        tunneldstip.yfilter = yfilter;
    }
    if(value_path == "isIntf")
    {
        isintf.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "pushedMacToBackEnd")
    {
        pushedmactobackend.yfilter = yfilter;
    }
}

bool System::MacTableItems::StaticItems::MacItems::MacEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtmac-items" || name == "mac" || name == "vlan" || name == "intf" || name == "tunnelDstIp" || name == "isIntf" || name == "type" || name == "pushedMacToBackEnd")
        return true;
    return false;
}

System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::RtmacItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtmac-items"; yang_parent_name = "MacEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::~RtmacItems()
{
}

bool System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtmac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::SystemTableItems::SystemTableItems()
    :
    sttime{YType::str, "stTime"},
    mgmtip{YType::str, "mgmtIp"},
    switchtype{YType::str, "switchType"},
    purgedbrequest{YType::str, "purgeDBRequest"},
    iscontrollerconfigured{YType::boolean, "isControllerConfigured"},
    nxdbenabled{YType::boolean, "nxdbEnabled"}
        ,
    controllertable_items(std::make_shared<System::SystemTableItems::ControllerTableItems>())
    , cputable_items(std::make_shared<System::SystemTableItems::CpuTableItems>())
    , moduletable_items(std::make_shared<System::SystemTableItems::ModuleTableItems>())
    , vxlantable_items(std::make_shared<System::SystemTableItems::VxlanTableItems>())
    , shadowvxlantable_items(std::make_shared<System::SystemTableItems::ShadowVxlanTableItems>())
{
    controllertable_items->parent = this;
    cputable_items->parent = this;
    moduletable_items->parent = this;
    vxlantable_items->parent = this;
    shadowvxlantable_items->parent = this;

    yang_name = "systemTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::~SystemTableItems()
{
}

bool System::SystemTableItems::has_data() const
{
    if (is_presence_container) return true;
    return sttime.is_set
	|| mgmtip.is_set
	|| switchtype.is_set
	|| purgedbrequest.is_set
	|| iscontrollerconfigured.is_set
	|| nxdbenabled.is_set
	|| (controllertable_items !=  nullptr && controllertable_items->has_data())
	|| (cputable_items !=  nullptr && cputable_items->has_data())
	|| (moduletable_items !=  nullptr && moduletable_items->has_data())
	|| (vxlantable_items !=  nullptr && vxlantable_items->has_data())
	|| (shadowvxlantable_items !=  nullptr && shadowvxlantable_items->has_data());
}

bool System::SystemTableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sttime.yfilter)
	|| ydk::is_set(mgmtip.yfilter)
	|| ydk::is_set(switchtype.yfilter)
	|| ydk::is_set(purgedbrequest.yfilter)
	|| ydk::is_set(iscontrollerconfigured.yfilter)
	|| ydk::is_set(nxdbenabled.yfilter)
	|| (controllertable_items !=  nullptr && controllertable_items->has_operation())
	|| (cputable_items !=  nullptr && cputable_items->has_operation())
	|| (moduletable_items !=  nullptr && moduletable_items->has_operation())
	|| (vxlantable_items !=  nullptr && vxlantable_items->has_operation())
	|| (shadowvxlantable_items !=  nullptr && shadowvxlantable_items->has_operation());
}

std::string System::SystemTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "systemTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sttime.is_set || is_set(sttime.yfilter)) leaf_name_data.push_back(sttime.get_name_leafdata());
    if (mgmtip.is_set || is_set(mgmtip.yfilter)) leaf_name_data.push_back(mgmtip.get_name_leafdata());
    if (switchtype.is_set || is_set(switchtype.yfilter)) leaf_name_data.push_back(switchtype.get_name_leafdata());
    if (purgedbrequest.is_set || is_set(purgedbrequest.yfilter)) leaf_name_data.push_back(purgedbrequest.get_name_leafdata());
    if (iscontrollerconfigured.is_set || is_set(iscontrollerconfigured.yfilter)) leaf_name_data.push_back(iscontrollerconfigured.get_name_leafdata());
    if (nxdbenabled.is_set || is_set(nxdbenabled.yfilter)) leaf_name_data.push_back(nxdbenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllerTable-items")
    {
        if(controllertable_items == nullptr)
        {
            controllertable_items = std::make_shared<System::SystemTableItems::ControllerTableItems>();
        }
        return controllertable_items;
    }

    if(child_yang_name == "cpuTable-items")
    {
        if(cputable_items == nullptr)
        {
            cputable_items = std::make_shared<System::SystemTableItems::CpuTableItems>();
        }
        return cputable_items;
    }

    if(child_yang_name == "moduleTable-items")
    {
        if(moduletable_items == nullptr)
        {
            moduletable_items = std::make_shared<System::SystemTableItems::ModuleTableItems>();
        }
        return moduletable_items;
    }

    if(child_yang_name == "vxlanTable-items")
    {
        if(vxlantable_items == nullptr)
        {
            vxlantable_items = std::make_shared<System::SystemTableItems::VxlanTableItems>();
        }
        return vxlantable_items;
    }

    if(child_yang_name == "shadowVxlanTable-items")
    {
        if(shadowvxlantable_items == nullptr)
        {
            shadowvxlantable_items = std::make_shared<System::SystemTableItems::ShadowVxlanTableItems>();
        }
        return shadowvxlantable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(controllertable_items != nullptr)
    {
        _children["controllerTable-items"] = controllertable_items;
    }

    if(cputable_items != nullptr)
    {
        _children["cpuTable-items"] = cputable_items;
    }

    if(moduletable_items != nullptr)
    {
        _children["moduleTable-items"] = moduletable_items;
    }

    if(vxlantable_items != nullptr)
    {
        _children["vxlanTable-items"] = vxlantable_items;
    }

    if(shadowvxlantable_items != nullptr)
    {
        _children["shadowVxlanTable-items"] = shadowvxlantable_items;
    }

    return _children;
}

void System::SystemTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stTime")
    {
        sttime = value;
        sttime.value_namespace = name_space;
        sttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtIp")
    {
        mgmtip = value;
        mgmtip.value_namespace = name_space;
        mgmtip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchType")
    {
        switchtype = value;
        switchtype.value_namespace = name_space;
        switchtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purgeDBRequest")
    {
        purgedbrequest = value;
        purgedbrequest.value_namespace = name_space;
        purgedbrequest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isControllerConfigured")
    {
        iscontrollerconfigured = value;
        iscontrollerconfigured.value_namespace = name_space;
        iscontrollerconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nxdbEnabled")
    {
        nxdbenabled = value;
        nxdbenabled.value_namespace = name_space;
        nxdbenabled.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stTime")
    {
        sttime.yfilter = yfilter;
    }
    if(value_path == "mgmtIp")
    {
        mgmtip.yfilter = yfilter;
    }
    if(value_path == "switchType")
    {
        switchtype.yfilter = yfilter;
    }
    if(value_path == "purgeDBRequest")
    {
        purgedbrequest.yfilter = yfilter;
    }
    if(value_path == "isControllerConfigured")
    {
        iscontrollerconfigured.yfilter = yfilter;
    }
    if(value_path == "nxdbEnabled")
    {
        nxdbenabled.yfilter = yfilter;
    }
}

bool System::SystemTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllerTable-items" || name == "cpuTable-items" || name == "moduleTable-items" || name == "vxlanTable-items" || name == "shadowVxlanTable-items" || name == "stTime" || name == "mgmtIp" || name == "switchType" || name == "purgeDBRequest" || name == "isControllerConfigured" || name == "nxdbEnabled")
        return true;
    return false;
}

System::SystemTableItems::ControllerTableItems::ControllerTableItems()
    :
    controller_items(std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems>())
{
    controller_items->parent = this;

    yang_name = "controllerTable-items"; yang_parent_name = "systemTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ControllerTableItems::~ControllerTableItems()
{
}

bool System::SystemTableItems::ControllerTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (controller_items !=  nullptr && controller_items->has_data());
}

bool System::SystemTableItems::ControllerTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (controller_items !=  nullptr && controller_items->has_operation());
}

std::string System::SystemTableItems::ControllerTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ControllerTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllerTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ControllerTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::ControllerTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller-items")
    {
        if(controller_items == nullptr)
        {
            controller_items = std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems>();
        }
        return controller_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::ControllerTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(controller_items != nullptr)
    {
        _children["controller-items"] = controller_items;
    }

    return _children;
}

void System::SystemTableItems::ControllerTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ControllerTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ControllerTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller-items")
        return true;
    return false;
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerItems()
    :
    controllerentry_list(this, {"id"})
{

    yang_name = "controller-items"; yang_parent_name = "controllerTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ControllerTableItems::ControllerItems::~ControllerItems()
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controllerentry_list.len(); index++)
    {
        if(controllerentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::has_operation() const
{
    for (std::size_t index=0; index<controllerentry_list.len(); index++)
    {
        if(controllerentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SystemTableItems::ControllerTableItems::ControllerItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/controllerTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ControllerTableItems::ControllerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ControllerTableItems::ControllerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::ControllerTableItems::ControllerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ControllerEntry-list")
    {
        auto ent_ = std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList>();
        ent_->parent = this;
        controllerentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::ControllerTableItems::ControllerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : controllerentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ControllerEntry-list")
        return true;
    return false;
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerEntryList()
    :
    id{YType::uint32, "id"},
    readrole{YType::str, "readRole"},
    writerole{YType::str, "writeRole"},
    controllertype{YType::str, "controllerType"},
    configuredvlans{YType::str, "configuredVlans"},
    dedicatedvlans{YType::str, "dedicatedVlans"},
    publishedvlans{YType::str, "publishedVlans"},
    vlanresourcestatus{YType::enumeration, "vlanResourceStatus"},
    intfresourcestatus{YType::enumeration, "intfResourceStatus"},
    issystemreadyforcontroller{YType::enumeration, "isSystemReadyForController"},
    type{YType::enumeration, "type"},
    vrfprefix{YType::str, "vrfPrefix"},
    numvrf{YType::uint32, "numVrf"},
    publishvrf{YType::boolean, "publishVrf"},
    publishnumvrf{YType::uint32, "publishNumVrf"}
        ,
    controllerassignedintftable_items(std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems>())
{
    controllerassignedintftable_items->parent = this;

    yang_name = "ControllerEntry-list"; yang_parent_name = "controller-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::~ControllerEntryList()
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| readrole.is_set
	|| writerole.is_set
	|| controllertype.is_set
	|| configuredvlans.is_set
	|| dedicatedvlans.is_set
	|| publishedvlans.is_set
	|| vlanresourcestatus.is_set
	|| intfresourcestatus.is_set
	|| issystemreadyforcontroller.is_set
	|| type.is_set
	|| vrfprefix.is_set
	|| numvrf.is_set
	|| publishvrf.is_set
	|| publishnumvrf.is_set
	|| (controllerassignedintftable_items !=  nullptr && controllerassignedintftable_items->has_data());
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(readrole.yfilter)
	|| ydk::is_set(writerole.yfilter)
	|| ydk::is_set(controllertype.yfilter)
	|| ydk::is_set(configuredvlans.yfilter)
	|| ydk::is_set(dedicatedvlans.yfilter)
	|| ydk::is_set(publishedvlans.yfilter)
	|| ydk::is_set(vlanresourcestatus.yfilter)
	|| ydk::is_set(intfresourcestatus.yfilter)
	|| ydk::is_set(issystemreadyforcontroller.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(vrfprefix.yfilter)
	|| ydk::is_set(numvrf.yfilter)
	|| ydk::is_set(publishvrf.yfilter)
	|| ydk::is_set(publishnumvrf.yfilter)
	|| (controllerassignedintftable_items !=  nullptr && controllerassignedintftable_items->has_operation());
}

std::string System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/controllerTable-items/controller-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ControllerEntry-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (readrole.is_set || is_set(readrole.yfilter)) leaf_name_data.push_back(readrole.get_name_leafdata());
    if (writerole.is_set || is_set(writerole.yfilter)) leaf_name_data.push_back(writerole.get_name_leafdata());
    if (controllertype.is_set || is_set(controllertype.yfilter)) leaf_name_data.push_back(controllertype.get_name_leafdata());
    if (configuredvlans.is_set || is_set(configuredvlans.yfilter)) leaf_name_data.push_back(configuredvlans.get_name_leafdata());
    if (dedicatedvlans.is_set || is_set(dedicatedvlans.yfilter)) leaf_name_data.push_back(dedicatedvlans.get_name_leafdata());
    if (publishedvlans.is_set || is_set(publishedvlans.yfilter)) leaf_name_data.push_back(publishedvlans.get_name_leafdata());
    if (vlanresourcestatus.is_set || is_set(vlanresourcestatus.yfilter)) leaf_name_data.push_back(vlanresourcestatus.get_name_leafdata());
    if (intfresourcestatus.is_set || is_set(intfresourcestatus.yfilter)) leaf_name_data.push_back(intfresourcestatus.get_name_leafdata());
    if (issystemreadyforcontroller.is_set || is_set(issystemreadyforcontroller.yfilter)) leaf_name_data.push_back(issystemreadyforcontroller.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vrfprefix.is_set || is_set(vrfprefix.yfilter)) leaf_name_data.push_back(vrfprefix.get_name_leafdata());
    if (numvrf.is_set || is_set(numvrf.yfilter)) leaf_name_data.push_back(numvrf.get_name_leafdata());
    if (publishvrf.is_set || is_set(publishvrf.yfilter)) leaf_name_data.push_back(publishvrf.get_name_leafdata());
    if (publishnumvrf.is_set || is_set(publishnumvrf.yfilter)) leaf_name_data.push_back(publishnumvrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllerAssignedIntfTable-items")
    {
        if(controllerassignedintftable_items == nullptr)
        {
            controllerassignedintftable_items = std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems>();
        }
        return controllerassignedintftable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(controllerassignedintftable_items != nullptr)
    {
        _children["controllerAssignedIntfTable-items"] = controllerassignedintftable_items;
    }

    return _children;
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "readRole")
    {
        readrole = value;
        readrole.value_namespace = name_space;
        readrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "writeRole")
    {
        writerole = value;
        writerole.value_namespace = name_space;
        writerole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerType")
    {
        controllertype = value;
        controllertype.value_namespace = name_space;
        controllertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuredVlans")
    {
        configuredvlans = value;
        configuredvlans.value_namespace = name_space;
        configuredvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dedicatedVlans")
    {
        dedicatedvlans = value;
        dedicatedvlans.value_namespace = name_space;
        dedicatedvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "publishedVlans")
    {
        publishedvlans = value;
        publishedvlans.value_namespace = name_space;
        publishedvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanResourceStatus")
    {
        vlanresourcestatus = value;
        vlanresourcestatus.value_namespace = name_space;
        vlanresourcestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intfResourceStatus")
    {
        intfresourcestatus = value;
        intfresourcestatus.value_namespace = name_space;
        intfresourcestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isSystemReadyForController")
    {
        issystemreadyforcontroller = value;
        issystemreadyforcontroller.value_namespace = name_space;
        issystemreadyforcontroller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfPrefix")
    {
        vrfprefix = value;
        vrfprefix.value_namespace = name_space;
        vrfprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numVrf")
    {
        numvrf = value;
        numvrf.value_namespace = name_space;
        numvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "publishVrf")
    {
        publishvrf = value;
        publishvrf.value_namespace = name_space;
        publishvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "publishNumVrf")
    {
        publishnumvrf = value;
        publishnumvrf.value_namespace = name_space;
        publishnumvrf.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "readRole")
    {
        readrole.yfilter = yfilter;
    }
    if(value_path == "writeRole")
    {
        writerole.yfilter = yfilter;
    }
    if(value_path == "controllerType")
    {
        controllertype.yfilter = yfilter;
    }
    if(value_path == "configuredVlans")
    {
        configuredvlans.yfilter = yfilter;
    }
    if(value_path == "dedicatedVlans")
    {
        dedicatedvlans.yfilter = yfilter;
    }
    if(value_path == "publishedVlans")
    {
        publishedvlans.yfilter = yfilter;
    }
    if(value_path == "vlanResourceStatus")
    {
        vlanresourcestatus.yfilter = yfilter;
    }
    if(value_path == "intfResourceStatus")
    {
        intfresourcestatus.yfilter = yfilter;
    }
    if(value_path == "isSystemReadyForController")
    {
        issystemreadyforcontroller.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "vrfPrefix")
    {
        vrfprefix.yfilter = yfilter;
    }
    if(value_path == "numVrf")
    {
        numvrf.yfilter = yfilter;
    }
    if(value_path == "publishVrf")
    {
        publishvrf.yfilter = yfilter;
    }
    if(value_path == "publishNumVrf")
    {
        publishnumvrf.yfilter = yfilter;
    }
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllerAssignedIntfTable-items" || name == "id" || name == "readRole" || name == "writeRole" || name == "controllerType" || name == "configuredVlans" || name == "dedicatedVlans" || name == "publishedVlans" || name == "vlanResourceStatus" || name == "intfResourceStatus" || name == "isSystemReadyForController" || name == "type" || name == "vrfPrefix" || name == "numVrf" || name == "publishVrf" || name == "publishNumVrf")
        return true;
    return false;
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfTableItems()
    :
    controllerassignedintfentry_items(std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems>())
{
    controllerassignedintfentry_items->parent = this;

    yang_name = "controllerAssignedIntfTable-items"; yang_parent_name = "ControllerEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::~ControllerAssignedIntfTableItems()
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (controllerassignedintfentry_items !=  nullptr && controllerassignedintfentry_items->has_data());
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (controllerassignedintfentry_items !=  nullptr && controllerassignedintfentry_items->has_operation());
}

std::string System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllerAssignedIntfTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllerAssignedIntfEntry-items")
    {
        if(controllerassignedintfentry_items == nullptr)
        {
            controllerassignedintfentry_items = std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems>();
        }
        return controllerassignedintfentry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(controllerassignedintfentry_items != nullptr)
    {
        _children["controllerAssignedIntfEntry-items"] = controllerassignedintfentry_items;
    }

    return _children;
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllerAssignedIntfEntry-items")
        return true;
    return false;
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryItems()
    :
    controllerassignedintfentry_list(this, {"intfname"})
{

    yang_name = "controllerAssignedIntfEntry-items"; yang_parent_name = "controllerAssignedIntfTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::~ControllerAssignedIntfEntryItems()
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controllerassignedintfentry_list.len(); index++)
    {
        if(controllerassignedintfentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::has_operation() const
{
    for (std::size_t index=0; index<controllerassignedintfentry_list.len(); index++)
    {
        if(controllerassignedintfentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllerAssignedIntfEntry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ControllerAssignedIntfEntry-list")
    {
        auto ent_ = std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList>();
        ent_->parent = this;
        controllerassignedintfentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : controllerassignedintfentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ControllerAssignedIntfEntry-list")
        return true;
    return false;
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::ControllerAssignedIntfEntryList()
    :
    intfname{YType::str, "intfName"},
    pcid{YType::uint16, "pcId"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    published{YType::boolean, "published"}
{

    yang_name = "ControllerAssignedIntfEntry-list"; yang_parent_name = "controllerAssignedIntfEntry-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::~ControllerAssignedIntfEntryList()
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::has_data() const
{
    if (is_presence_container) return true;
    return intfname.is_set
	|| pcid.is_set
	|| type.is_set
	|| mode.is_set
	|| published.is_set;
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intfname.yfilter)
	|| ydk::is_set(pcid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(published.yfilter);
}

std::string System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ControllerAssignedIntfEntry-list";
    ADD_KEY_TOKEN(intfname, "intfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intfname.is_set || is_set(intfname.yfilter)) leaf_name_data.push_back(intfname.get_name_leafdata());
    if (pcid.is_set || is_set(pcid.yfilter)) leaf_name_data.push_back(pcid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (published.is_set || is_set(published.yfilter)) leaf_name_data.push_back(published.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intfName")
    {
        intfname = value;
        intfname.value_namespace = name_space;
        intfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcId")
    {
        pcid = value;
        pcid.value_namespace = name_space;
        pcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "published")
    {
        published = value;
        published.value_namespace = name_space;
        published.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intfName")
    {
        intfname.yfilter = yfilter;
    }
    if(value_path == "pcId")
    {
        pcid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "published")
    {
        published.yfilter = yfilter;
    }
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intfName" || name == "pcId" || name == "type" || name == "mode" || name == "published")
        return true;
    return false;
}

System::SystemTableItems::CpuTableItems::CpuTableItems()
    :
    cpuentry_items(std::make_shared<System::SystemTableItems::CpuTableItems::CpuEntryItems>())
{
    cpuentry_items->parent = this;

    yang_name = "cpuTable-items"; yang_parent_name = "systemTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::CpuTableItems::~CpuTableItems()
{
}

bool System::SystemTableItems::CpuTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (cpuentry_items !=  nullptr && cpuentry_items->has_data());
}

bool System::SystemTableItems::CpuTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (cpuentry_items !=  nullptr && cpuentry_items->has_operation());
}

std::string System::SystemTableItems::CpuTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::CpuTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpuTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::CpuTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::CpuTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpuEntry-items")
    {
        if(cpuentry_items == nullptr)
        {
            cpuentry_items = std::make_shared<System::SystemTableItems::CpuTableItems::CpuEntryItems>();
        }
        return cpuentry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::CpuTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cpuentry_items != nullptr)
    {
        _children["cpuEntry-items"] = cpuentry_items;
    }

    return _children;
}

void System::SystemTableItems::CpuTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::CpuTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::CpuTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpuEntry-items")
        return true;
    return false;
}

System::SystemTableItems::CpuTableItems::CpuEntryItems::CpuEntryItems()
    :
    cpuentry_list(this, {"type"})
{

    yang_name = "cpuEntry-items"; yang_parent_name = "cpuTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::CpuTableItems::CpuEntryItems::~CpuEntryItems()
{
}

bool System::SystemTableItems::CpuTableItems::CpuEntryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpuentry_list.len(); index++)
    {
        if(cpuentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SystemTableItems::CpuTableItems::CpuEntryItems::has_operation() const
{
    for (std::size_t index=0; index<cpuentry_list.len(); index++)
    {
        if(cpuentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SystemTableItems::CpuTableItems::CpuEntryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/cpuTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::CpuTableItems::CpuEntryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpuEntry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::CpuTableItems::CpuEntryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::CpuTableItems::CpuEntryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CPUEntry-list")
    {
        auto ent_ = std::make_shared<System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList>();
        ent_->parent = this;
        cpuentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::CpuTableItems::CpuEntryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpuentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SystemTableItems::CpuTableItems::CpuEntryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::CpuTableItems::CpuEntryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::CpuTableItems::CpuEntryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CPUEntry-list")
        return true;
    return false;
}

System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::CPUEntryList()
    :
    type{YType::str, "type"}
{

    yang_name = "CPUEntry-list"; yang_parent_name = "cpuEntry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::~CPUEntryList()
{
}

bool System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/cpuTable-items/cpuEntry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CPUEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

System::SystemTableItems::ModuleTableItems::ModuleTableItems()
    :
    moduleentry_items(std::make_shared<System::SystemTableItems::ModuleTableItems::ModuleEntryItems>())
{
    moduleentry_items->parent = this;

    yang_name = "moduleTable-items"; yang_parent_name = "systemTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ModuleTableItems::~ModuleTableItems()
{
}

bool System::SystemTableItems::ModuleTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (moduleentry_items !=  nullptr && moduleentry_items->has_data());
}

bool System::SystemTableItems::ModuleTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (moduleentry_items !=  nullptr && moduleentry_items->has_operation());
}

std::string System::SystemTableItems::ModuleTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ModuleTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moduleTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ModuleTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::ModuleTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "moduleEntry-items")
    {
        if(moduleentry_items == nullptr)
        {
            moduleentry_items = std::make_shared<System::SystemTableItems::ModuleTableItems::ModuleEntryItems>();
        }
        return moduleentry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::ModuleTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(moduleentry_items != nullptr)
    {
        _children["moduleEntry-items"] = moduleentry_items;
    }

    return _children;
}

void System::SystemTableItems::ModuleTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ModuleTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ModuleTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "moduleEntry-items")
        return true;
    return false;
}

System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryItems()
    :
    moduleentry_list(this, {"type"})
{

    yang_name = "moduleEntry-items"; yang_parent_name = "moduleTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ModuleTableItems::ModuleEntryItems::~ModuleEntryItems()
{
}

bool System::SystemTableItems::ModuleTableItems::ModuleEntryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<moduleentry_list.len(); index++)
    {
        if(moduleentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SystemTableItems::ModuleTableItems::ModuleEntryItems::has_operation() const
{
    for (std::size_t index=0; index<moduleentry_list.len(); index++)
    {
        if(moduleentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SystemTableItems::ModuleTableItems::ModuleEntryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/moduleTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ModuleTableItems::ModuleEntryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moduleEntry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ModuleTableItems::ModuleEntryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::ModuleTableItems::ModuleEntryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ModuleEntry-list")
    {
        auto ent_ = std::make_shared<System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList>();
        ent_->parent = this;
        moduleentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::ModuleTableItems::ModuleEntryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : moduleentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SystemTableItems::ModuleTableItems::ModuleEntryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ModuleTableItems::ModuleEntryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ModuleTableItems::ModuleEntryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ModuleEntry-list")
        return true;
    return false;
}

System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::ModuleEntryList()
    :
    type{YType::str, "type"}
{

    yang_name = "ModuleEntry-list"; yang_parent_name = "moduleEntry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::~ModuleEntryList()
{
}

bool System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/moduleTable-items/moduleEntry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ModuleEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

System::SystemTableItems::VxlanTableItems::VxlanTableItems()
    :
    intf_items(std::make_shared<System::SystemTableItems::VxlanTableItems::IntfItems>())
{
    intf_items->parent = this;

    yang_name = "vxlanTable-items"; yang_parent_name = "systemTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::VxlanTableItems::~VxlanTableItems()
{
}

bool System::SystemTableItems::VxlanTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data());
}

bool System::SystemTableItems::VxlanTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation());
}

std::string System::SystemTableItems::VxlanTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::VxlanTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vxlanTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::VxlanTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::VxlanTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::SystemTableItems::VxlanTableItems::IntfItems>();
        }
        return intf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::VxlanTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    return _children;
}

void System::SystemTableItems::VxlanTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::VxlanTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::VxlanTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items")
        return true;
    return false;
}

System::SystemTableItems::VxlanTableItems::IntfItems::IntfItems()
    :
    vxlaninterfaceentry_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "vxlanTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::VxlanTableItems::IntfItems::~IntfItems()
{
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vxlaninterfaceentry_list.len(); index++)
    {
        if(vxlaninterfaceentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<vxlaninterfaceentry_list.len(); index++)
    {
        if(vxlaninterfaceentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SystemTableItems::VxlanTableItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/vxlanTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::VxlanTableItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::VxlanTableItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::VxlanTableItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VxlanInterfaceEntry-list")
    {
        auto ent_ = std::make_shared<System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList>();
        ent_->parent = this;
        vxlaninterfaceentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::VxlanTableItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vxlaninterfaceentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SystemTableItems::VxlanTableItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::VxlanTableItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VxlanInterfaceEntry-list")
        return true;
    return false;
}

System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::VxlanInterfaceEntryList()
    :
    name{YType::str, "name"},
    mytepstatus{YType::enumeration, "myTepStatus"},
    hostreachability{YType::enumeration, "hostReachability"},
    controllerid{YType::uint32, "controllerId"},
    configsource{YType::enumeration, "configSource"},
    primarytunnelip{YType::str, "primaryTunnelIp"},
    secondarytunnelip{YType::str, "secondaryTunnelIp"}
        ,
    localbfd_items(std::make_shared<System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems>())
{
    localbfd_items->parent = this;

    yang_name = "VxlanInterfaceEntry-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::~VxlanInterfaceEntryList()
{
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| mytepstatus.is_set
	|| hostreachability.is_set
	|| controllerid.is_set
	|| configsource.is_set
	|| primarytunnelip.is_set
	|| secondarytunnelip.is_set
	|| (localbfd_items !=  nullptr && localbfd_items->has_data());
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mytepstatus.yfilter)
	|| ydk::is_set(hostreachability.yfilter)
	|| ydk::is_set(controllerid.yfilter)
	|| ydk::is_set(configsource.yfilter)
	|| ydk::is_set(primarytunnelip.yfilter)
	|| ydk::is_set(secondarytunnelip.yfilter)
	|| (localbfd_items !=  nullptr && localbfd_items->has_operation());
}

std::string System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/vxlanTable-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VxlanInterfaceEntry-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mytepstatus.is_set || is_set(mytepstatus.yfilter)) leaf_name_data.push_back(mytepstatus.get_name_leafdata());
    if (hostreachability.is_set || is_set(hostreachability.yfilter)) leaf_name_data.push_back(hostreachability.get_name_leafdata());
    if (controllerid.is_set || is_set(controllerid.yfilter)) leaf_name_data.push_back(controllerid.get_name_leafdata());
    if (configsource.is_set || is_set(configsource.yfilter)) leaf_name_data.push_back(configsource.get_name_leafdata());
    if (primarytunnelip.is_set || is_set(primarytunnelip.yfilter)) leaf_name_data.push_back(primarytunnelip.get_name_leafdata());
    if (secondarytunnelip.is_set || is_set(secondarytunnelip.yfilter)) leaf_name_data.push_back(secondarytunnelip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localBfd-items")
    {
        if(localbfd_items == nullptr)
        {
            localbfd_items = std::make_shared<System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems>();
        }
        return localbfd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(localbfd_items != nullptr)
    {
        _children["localBfd-items"] = localbfd_items;
    }

    return _children;
}

void System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "myTepStatus")
    {
        mytepstatus = value;
        mytepstatus.value_namespace = name_space;
        mytepstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostReachability")
    {
        hostreachability = value;
        hostreachability.value_namespace = name_space;
        hostreachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerId")
    {
        controllerid = value;
        controllerid.value_namespace = name_space;
        controllerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configSource")
    {
        configsource = value;
        configsource.value_namespace = name_space;
        configsource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primaryTunnelIp")
    {
        primarytunnelip = value;
        primarytunnelip.value_namespace = name_space;
        primarytunnelip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondaryTunnelIp")
    {
        secondarytunnelip = value;
        secondarytunnelip.value_namespace = name_space;
        secondarytunnelip.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "myTepStatus")
    {
        mytepstatus.yfilter = yfilter;
    }
    if(value_path == "hostReachability")
    {
        hostreachability.yfilter = yfilter;
    }
    if(value_path == "controllerId")
    {
        controllerid.yfilter = yfilter;
    }
    if(value_path == "configSource")
    {
        configsource.yfilter = yfilter;
    }
    if(value_path == "primaryTunnelIp")
    {
        primarytunnelip.yfilter = yfilter;
    }
    if(value_path == "secondaryTunnelIp")
    {
        secondarytunnelip.yfilter = yfilter;
    }
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localBfd-items" || name == "name" || name == "myTepStatus" || name == "hostReachability" || name == "controllerId" || name == "configSource" || name == "primaryTunnelIp" || name == "secondaryTunnelIp")
        return true;
    return false;
}

System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::LocalBfdItems()
    :
    mac{YType::str, "mac"},
    ip{YType::str, "ip"},
    mintxintvl{YType::uint16, "minTxIntvl"},
    minrxintvl{YType::uint16, "minRxIntvl"}
{

    yang_name = "localBfd-items"; yang_parent_name = "VxlanInterfaceEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::~LocalBfdItems()
{
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| ip.is_set
	|| mintxintvl.is_set
	|| minrxintvl.is_set;
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mintxintvl.yfilter)
	|| ydk::is_set(minrxintvl.yfilter);
}

std::string System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localBfd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mintxintvl.is_set || is_set(mintxintvl.yfilter)) leaf_name_data.push_back(mintxintvl.get_name_leafdata());
    if (minrxintvl.is_set || is_set(minrxintvl.yfilter)) leaf_name_data.push_back(minrxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "minTxIntvl")
    {
        mintxintvl = value;
        mintxintvl.value_namespace = name_space;
        mintxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl = value;
        minrxintvl.value_namespace = name_space;
        minrxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "minTxIntvl")
    {
        mintxintvl.yfilter = yfilter;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl.yfilter = yfilter;
    }
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip" || name == "minTxIntvl" || name == "minRxIntvl")
        return true;
    return false;
}

System::SystemTableItems::ShadowVxlanTableItems::ShadowVxlanTableItems()
    :
    intf_items(std::make_shared<System::SystemTableItems::ShadowVxlanTableItems::IntfItems>())
{
    intf_items->parent = this;

    yang_name = "shadowVxlanTable-items"; yang_parent_name = "systemTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ShadowVxlanTableItems::~ShadowVxlanTableItems()
{
}

bool System::SystemTableItems::ShadowVxlanTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data());
}

bool System::SystemTableItems::ShadowVxlanTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation());
}

std::string System::SystemTableItems::ShadowVxlanTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ShadowVxlanTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shadowVxlanTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ShadowVxlanTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::ShadowVxlanTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::SystemTableItems::ShadowVxlanTableItems::IntfItems>();
        }
        return intf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::ShadowVxlanTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    return _children;
}

void System::SystemTableItems::ShadowVxlanTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ShadowVxlanTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ShadowVxlanTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items")
        return true;
    return false;
}

System::SystemTableItems::ShadowVxlanTableItems::IntfItems::IntfItems()
    :
    shadowvxlaninterfaceentry_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "shadowVxlanTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ShadowVxlanTableItems::IntfItems::~IntfItems()
{
}

bool System::SystemTableItems::ShadowVxlanTableItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<shadowvxlaninterfaceentry_list.len(); index++)
    {
        if(shadowvxlaninterfaceentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SystemTableItems::ShadowVxlanTableItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<shadowvxlaninterfaceentry_list.len(); index++)
    {
        if(shadowvxlaninterfaceentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SystemTableItems::ShadowVxlanTableItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/shadowVxlanTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ShadowVxlanTableItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ShadowVxlanTableItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::ShadowVxlanTableItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ShadowVxlanInterfaceEntry-list")
    {
        auto ent_ = std::make_shared<System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList>();
        ent_->parent = this;
        shadowvxlaninterfaceentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::ShadowVxlanTableItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : shadowvxlaninterfaceentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SystemTableItems::ShadowVxlanTableItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ShadowVxlanTableItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ShadowVxlanTableItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ShadowVxlanInterfaceEntry-list")
        return true;
    return false;
}

System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::ShadowVxlanInterfaceEntryList()
    :
    name{YType::str, "name"},
    mytepstatus{YType::enumeration, "myTepStatus"},
    hostreachability{YType::enumeration, "hostReachability"},
    controllerid{YType::uint32, "controllerId"},
    configsource{YType::enumeration, "configSource"},
    primarytunnelip{YType::str, "primaryTunnelIp"},
    secondarytunnelip{YType::str, "secondaryTunnelIp"}
{

    yang_name = "ShadowVxlanInterfaceEntry-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::~ShadowVxlanInterfaceEntryList()
{
}

bool System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| mytepstatus.is_set
	|| hostreachability.is_set
	|| controllerid.is_set
	|| configsource.is_set
	|| primarytunnelip.is_set
	|| secondarytunnelip.is_set;
}

bool System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mytepstatus.yfilter)
	|| ydk::is_set(hostreachability.yfilter)
	|| ydk::is_set(controllerid.yfilter)
	|| ydk::is_set(configsource.yfilter)
	|| ydk::is_set(primarytunnelip.yfilter)
	|| ydk::is_set(secondarytunnelip.yfilter);
}

std::string System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/shadowVxlanTable-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ShadowVxlanInterfaceEntry-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mytepstatus.is_set || is_set(mytepstatus.yfilter)) leaf_name_data.push_back(mytepstatus.get_name_leafdata());
    if (hostreachability.is_set || is_set(hostreachability.yfilter)) leaf_name_data.push_back(hostreachability.get_name_leafdata());
    if (controllerid.is_set || is_set(controllerid.yfilter)) leaf_name_data.push_back(controllerid.get_name_leafdata());
    if (configsource.is_set || is_set(configsource.yfilter)) leaf_name_data.push_back(configsource.get_name_leafdata());
    if (primarytunnelip.is_set || is_set(primarytunnelip.yfilter)) leaf_name_data.push_back(primarytunnelip.get_name_leafdata());
    if (secondarytunnelip.is_set || is_set(secondarytunnelip.yfilter)) leaf_name_data.push_back(secondarytunnelip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "myTepStatus")
    {
        mytepstatus = value;
        mytepstatus.value_namespace = name_space;
        mytepstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostReachability")
    {
        hostreachability = value;
        hostreachability.value_namespace = name_space;
        hostreachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerId")
    {
        controllerid = value;
        controllerid.value_namespace = name_space;
        controllerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configSource")
    {
        configsource = value;
        configsource.value_namespace = name_space;
        configsource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primaryTunnelIp")
    {
        primarytunnelip = value;
        primarytunnelip.value_namespace = name_space;
        primarytunnelip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondaryTunnelIp")
    {
        secondarytunnelip = value;
        secondarytunnelip.value_namespace = name_space;
        secondarytunnelip.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "myTepStatus")
    {
        mytepstatus.yfilter = yfilter;
    }
    if(value_path == "hostReachability")
    {
        hostreachability.yfilter = yfilter;
    }
    if(value_path == "controllerId")
    {
        controllerid.yfilter = yfilter;
    }
    if(value_path == "configSource")
    {
        configsource.yfilter = yfilter;
    }
    if(value_path == "primaryTunnelIp")
    {
        primarytunnelip.yfilter = yfilter;
    }
    if(value_path == "secondaryTunnelIp")
    {
        secondarytunnelip.yfilter = yfilter;
    }
}

bool System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "myTepStatus" || name == "hostReachability" || name == "controllerId" || name == "configSource" || name == "primaryTunnelIp" || name == "secondaryTunnelIp")
        return true;
    return false;
}

System::TunnelIntfTableItems::TunnelIntfTableItems()
    :
    intf_items(std::make_shared<System::TunnelIntfTableItems::IntfItems>())
{
    intf_items->parent = this;

    yang_name = "tunnelIntfTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TunnelIntfTableItems::~TunnelIntfTableItems()
{
}

bool System::TunnelIntfTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data());
}

bool System::TunnelIntfTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation());
}

std::string System::TunnelIntfTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TunnelIntfTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelIntfTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelIntfTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::TunnelIntfTableItems::IntfItems>();
        }
        return intf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelIntfTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    return _children;
}

void System::TunnelIntfTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelIntfTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelIntfTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::IntfItems()
    :
    tunnelintfentry_list(this, {"destip"})
{

    yang_name = "intf-items"; yang_parent_name = "tunnelIntfTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TunnelIntfTableItems::IntfItems::~IntfItems()
{
}

bool System::TunnelIntfTableItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnelintfentry_list.len(); index++)
    {
        if(tunnelintfentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelIntfTableItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<tunnelintfentry_list.len(); index++)
    {
        if(tunnelintfentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tunnelIntfTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TunnelIntfTableItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelIntfTableItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TunnelIntfEntry-list")
    {
        auto ent_ = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList>();
        ent_->parent = this;
        tunnelintfentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelIntfTableItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnelintfentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TunnelIntfTableItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelIntfTableItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelIntfTableItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TunnelIntfEntry-list")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunnelIntfEntryList()
    :
    destip{YType::str, "destIp"},
    description{YType::str, "description"},
    ifid{YType::str, "ifId"},
    type{YType::enumeration, "type"},
    srcip{YType::str, "srcIp"},
    mtu{YType::uint32, "mtu"},
    state{YType::enumeration, "state"},
    vrf{YType::str, "vrf"},
    ipvnidbinding{YType::enumeration, "ipVnidBinding"},
    istunnelcreated{YType::boolean, "isTunnelCreated"},
    istunnelcreatedbycontroller{YType::boolean, "isTunnelCreatedByController"},
    noofmacsseenbeforetunnelcreatedbycontroller{YType::uint32, "noOfMacsSeenBeforeTunnelCreatedbyController"},
    eptype{YType::str, "epType"}
        ,
    tunmactable_items(std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems>())
    , vnidtable_items(std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems>())
    , remotebfd_items(std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems>())
    , rtaggregatevtepatt_items(std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems>())
{
    tunmactable_items->parent = this;
    vnidtable_items->parent = this;
    remotebfd_items->parent = this;
    rtaggregatevtepatt_items->parent = this;

    yang_name = "TunnelIntfEntry-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::~TunnelIntfEntryList()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::has_data() const
{
    if (is_presence_container) return true;
    return destip.is_set
	|| description.is_set
	|| ifid.is_set
	|| type.is_set
	|| srcip.is_set
	|| mtu.is_set
	|| state.is_set
	|| vrf.is_set
	|| ipvnidbinding.is_set
	|| istunnelcreated.is_set
	|| istunnelcreatedbycontroller.is_set
	|| noofmacsseenbeforetunnelcreatedbycontroller.is_set
	|| eptype.is_set
	|| (tunmactable_items !=  nullptr && tunmactable_items->has_data())
	|| (vnidtable_items !=  nullptr && vnidtable_items->has_data())
	|| (remotebfd_items !=  nullptr && remotebfd_items->has_data())
	|| (rtaggregatevtepatt_items !=  nullptr && rtaggregatevtepatt_items->has_data());
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destip.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(ipvnidbinding.yfilter)
	|| ydk::is_set(istunnelcreated.yfilter)
	|| ydk::is_set(istunnelcreatedbycontroller.yfilter)
	|| ydk::is_set(noofmacsseenbeforetunnelcreatedbycontroller.yfilter)
	|| ydk::is_set(eptype.yfilter)
	|| (tunmactable_items !=  nullptr && tunmactable_items->has_operation())
	|| (vnidtable_items !=  nullptr && vnidtable_items->has_operation())
	|| (remotebfd_items !=  nullptr && remotebfd_items->has_operation())
	|| (rtaggregatevtepatt_items !=  nullptr && rtaggregatevtepatt_items->has_operation());
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tunnelIntfTable-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TunnelIntfEntry-list";
    ADD_KEY_TOKEN(destip, "destIp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destip.is_set || is_set(destip.yfilter)) leaf_name_data.push_back(destip.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (ipvnidbinding.is_set || is_set(ipvnidbinding.yfilter)) leaf_name_data.push_back(ipvnidbinding.get_name_leafdata());
    if (istunnelcreated.is_set || is_set(istunnelcreated.yfilter)) leaf_name_data.push_back(istunnelcreated.get_name_leafdata());
    if (istunnelcreatedbycontroller.is_set || is_set(istunnelcreatedbycontroller.yfilter)) leaf_name_data.push_back(istunnelcreatedbycontroller.get_name_leafdata());
    if (noofmacsseenbeforetunnelcreatedbycontroller.is_set || is_set(noofmacsseenbeforetunnelcreatedbycontroller.yfilter)) leaf_name_data.push_back(noofmacsseenbeforetunnelcreatedbycontroller.get_name_leafdata());
    if (eptype.is_set || is_set(eptype.yfilter)) leaf_name_data.push_back(eptype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunMacTable-items")
    {
        if(tunmactable_items == nullptr)
        {
            tunmactable_items = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems>();
        }
        return tunmactable_items;
    }

    if(child_yang_name == "vnidTable-items")
    {
        if(vnidtable_items == nullptr)
        {
            vnidtable_items = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems>();
        }
        return vnidtable_items;
    }

    if(child_yang_name == "remoteBfd-items")
    {
        if(remotebfd_items == nullptr)
        {
            remotebfd_items = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems>();
        }
        return remotebfd_items;
    }

    if(child_yang_name == "rtaggregateVtepAtt-items")
    {
        if(rtaggregatevtepatt_items == nullptr)
        {
            rtaggregatevtepatt_items = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems>();
        }
        return rtaggregatevtepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tunmactable_items != nullptr)
    {
        _children["tunMacTable-items"] = tunmactable_items;
    }

    if(vnidtable_items != nullptr)
    {
        _children["vnidTable-items"] = vnidtable_items;
    }

    if(remotebfd_items != nullptr)
    {
        _children["remoteBfd-items"] = remotebfd_items;
    }

    if(rtaggregatevtepatt_items != nullptr)
    {
        _children["rtaggregateVtepAtt-items"] = rtaggregatevtepatt_items;
    }

    return _children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destIp")
    {
        destip = value;
        destip.value_namespace = name_space;
        destip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipVnidBinding")
    {
        ipvnidbinding = value;
        ipvnidbinding.value_namespace = name_space;
        ipvnidbinding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isTunnelCreated")
    {
        istunnelcreated = value;
        istunnelcreated.value_namespace = name_space;
        istunnelcreated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isTunnelCreatedByController")
    {
        istunnelcreatedbycontroller = value;
        istunnelcreatedbycontroller.value_namespace = name_space;
        istunnelcreatedbycontroller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOfMacsSeenBeforeTunnelCreatedbyController")
    {
        noofmacsseenbeforetunnelcreatedbycontroller = value;
        noofmacsseenbeforetunnelcreatedbycontroller.value_namespace = name_space;
        noofmacsseenbeforetunnelcreatedbycontroller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epType")
    {
        eptype = value;
        eptype.value_namespace = name_space;
        eptype.value_namespace_prefix = name_space_prefix;
    }
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destIp")
    {
        destip.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "ipVnidBinding")
    {
        ipvnidbinding.yfilter = yfilter;
    }
    if(value_path == "isTunnelCreated")
    {
        istunnelcreated.yfilter = yfilter;
    }
    if(value_path == "isTunnelCreatedByController")
    {
        istunnelcreatedbycontroller.yfilter = yfilter;
    }
    if(value_path == "noOfMacsSeenBeforeTunnelCreatedbyController")
    {
        noofmacsseenbeforetunnelcreatedbycontroller.yfilter = yfilter;
    }
    if(value_path == "epType")
    {
        eptype.yfilter = yfilter;
    }
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunMacTable-items" || name == "vnidTable-items" || name == "remoteBfd-items" || name == "rtaggregateVtepAtt-items" || name == "destIp" || name == "description" || name == "ifId" || name == "type" || name == "srcIp" || name == "mtu" || name == "state" || name == "vrf" || name == "ipVnidBinding" || name == "isTunnelCreated" || name == "isTunnelCreatedByController" || name == "noOfMacsSeenBeforeTunnelCreatedbyController" || name == "epType")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::TunMacTableItems()
    :
    rsmac_items(std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems>())
{
    rsmac_items->parent = this;

    yang_name = "tunMacTable-items"; yang_parent_name = "TunnelIntfEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::~TunMacTableItems()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (rsmac_items !=  nullptr && rsmac_items->has_data());
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (rsmac_items !=  nullptr && rsmac_items->has_operation());
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunMacTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmac-items")
    {
        if(rsmac_items == nullptr)
        {
            rsmac_items = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems>();
        }
        return rsmac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsmac_items != nullptr)
    {
        _children["rsmac-items"] = rsmac_items;
    }

    return _children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmac-items")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsmacItems()
    :
    rsmac_list(this, {"tdn"})
{

    yang_name = "rsmac-items"; yang_parent_name = "tunMacTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::~RsmacItems()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmac_list.len(); index++)
    {
        if(rsmac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::has_operation() const
{
    for (std::size_t index=0; index<rsmac_list.len(); index++)
    {
        if(rsmac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMac-list")
    {
        auto ent_ = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList>();
        ent_->parent = this;
        rsmac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmac_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMac-list")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::RsMacList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsMac-list"; yang_parent_name = "rsmac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::~RsMacList()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMac-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidTableItems()
    :
    vnid_items(std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems>())
{
    vnid_items->parent = this;

    yang_name = "vnidTable-items"; yang_parent_name = "TunnelIntfEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::~VnidTableItems()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vnid_items !=  nullptr && vnid_items->has_data());
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vnid_items !=  nullptr && vnid_items->has_operation());
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnidTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vnid-items")
    {
        if(vnid_items == nullptr)
        {
            vnid_items = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems>();
        }
        return vnid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vnid_items != nullptr)
    {
        _children["vnid-items"] = vnid_items;
    }

    return _children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vnid-items")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidItems()
    :
    vnidentry_list(this, {"vnid"})
{

    yang_name = "vnid-items"; yang_parent_name = "vnidTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::~VnidItems()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vnidentry_list.len(); index++)
    {
        if(vnidentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::has_operation() const
{
    for (std::size_t index=0; index<vnidentry_list.len(); index++)
    {
        if(vnidentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VnidEntry-list")
    {
        auto ent_ = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList>();
        ent_->parent = this;
        vnidentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vnidentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VnidEntry-list")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::VnidEntryList()
    :
    vnid{YType::str, "vnid"},
    groupaddr{YType::str, "groupAddr"}
{

    yang_name = "VnidEntry-list"; yang_parent_name = "vnid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::~VnidEntryList()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vnid.is_set
	|| groupaddr.is_set;
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vnid.yfilter)
	|| ydk::is_set(groupaddr.yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VnidEntry-list";
    ADD_KEY_TOKEN(vnid, "vnid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vnid.is_set || is_set(vnid.yfilter)) leaf_name_data.push_back(vnid.get_name_leafdata());
    if (groupaddr.is_set || is_set(groupaddr.yfilter)) leaf_name_data.push_back(groupaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vnid")
    {
        vnid = value;
        vnid.value_namespace = name_space;
        vnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupAddr")
    {
        groupaddr = value;
        groupaddr.value_namespace = name_space;
        groupaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vnid")
    {
        vnid.yfilter = yfilter;
    }
    if(value_path == "groupAddr")
    {
        groupaddr.yfilter = yfilter;
    }
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vnid" || name == "groupAddr")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::RemoteBfdItems()
    :
    bfdstatus{YType::enumeration, "bfdStatus"},
    mac{YType::str, "mac"},
    ip{YType::str, "ip"},
    mintxintvl{YType::uint16, "minTxIntvl"},
    minrxintvl{YType::uint16, "minRxIntvl"}
{

    yang_name = "remoteBfd-items"; yang_parent_name = "TunnelIntfEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::~RemoteBfdItems()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::has_data() const
{
    if (is_presence_container) return true;
    return bfdstatus.is_set
	|| mac.is_set
	|| ip.is_set
	|| mintxintvl.is_set
	|| minrxintvl.is_set;
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfdstatus.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mintxintvl.yfilter)
	|| ydk::is_set(minrxintvl.yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remoteBfd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfdstatus.is_set || is_set(bfdstatus.yfilter)) leaf_name_data.push_back(bfdstatus.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mintxintvl.is_set || is_set(mintxintvl.yfilter)) leaf_name_data.push_back(mintxintvl.get_name_leafdata());
    if (minrxintvl.is_set || is_set(minrxintvl.yfilter)) leaf_name_data.push_back(minrxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfdStatus")
    {
        bfdstatus = value;
        bfdstatus.value_namespace = name_space;
        bfdstatus.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "minTxIntvl")
    {
        mintxintvl = value;
        mintxintvl.value_namespace = name_space;
        mintxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl = value;
        minrxintvl.value_namespace = name_space;
        minrxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfdStatus")
    {
        bfdstatus.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "minTxIntvl")
    {
        mintxintvl.yfilter = yfilter;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl.yfilter = yfilter;
    }
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfdStatus" || name == "mac" || name == "ip" || name == "minTxIntvl" || name == "minRxIntvl")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtaggregateVtepAttItems()
    :
    rtaggregatevtepatt_list(this, {"tdn"})
{

    yang_name = "rtaggregateVtepAtt-items"; yang_parent_name = "TunnelIntfEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::~RtaggregateVtepAttItems()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtaggregatevtepatt_list.len(); index++)
    {
        if(rtaggregatevtepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtaggregatevtepatt_list.len(); index++)
    {
        if(rtaggregatevtepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtaggregateVtepAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtAggregateVtepAtt-list")
    {
        auto ent_ = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList>();
        ent_->parent = this;
        rtaggregatevtepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtaggregatevtepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtAggregateVtepAtt-list")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::RtAggregateVtepAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtAggregateVtepAtt-list"; yang_parent_name = "rtaggregateVtepAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::~RtAggregateVtepAttList()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtAggregateVtepAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::VlanTableItems::VlanTableItems()
    :
    vlan_items(std::make_shared<System::VlanTableItems::VlanItems>())
{
    vlan_items->parent = this;

    yang_name = "vlanTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VlanTableItems::~VlanTableItems()
{
}

bool System::VlanTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::VlanTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::VlanTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VlanTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VlanTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VlanTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::VlanTableItems::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VlanTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    return _children;
}

void System::VlanTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VlanTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VlanTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items")
        return true;
    return false;
}

System::VlanTableItems::VlanItems::VlanItems()
    :
    vlanentry_list(this, {"id"})
{

    yang_name = "vlan-items"; yang_parent_name = "vlanTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VlanTableItems::VlanItems::~VlanItems()
{
}

bool System::VlanTableItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanentry_list.len(); index++)
    {
        if(vlanentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VlanTableItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<vlanentry_list.len(); index++)
    {
        if(vlanentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VlanTableItems::VlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vlanTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VlanTableItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VlanTableItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VlanTableItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanEntry-list")
    {
        auto ent_ = std::make_shared<System::VlanTableItems::VlanItems::VlanEntryList>();
        ent_->parent = this;
        vlanentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VlanTableItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlanentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VlanTableItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VlanTableItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VlanTableItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanEntry-list")
        return true;
    return false;
}

System::VlanTableItems::VlanItems::VlanEntryList::VlanEntryList()
    :
    id{YType::str, "id"},
    adminstate{YType::enumeration, "adminState"}
{

    yang_name = "VlanEntry-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VlanTableItems::VlanItems::VlanEntryList::~VlanEntryList()
{
}

bool System::VlanTableItems::VlanItems::VlanEntryList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| adminstate.is_set;
}

bool System::VlanTableItems::VlanItems::VlanEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(adminstate.yfilter);
}

std::string System::VlanTableItems::VlanItems::VlanEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vlanTable-items/vlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VlanTableItems::VlanItems::VlanEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanEntry-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VlanTableItems::VlanItems::VlanEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VlanTableItems::VlanItems::VlanEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VlanTableItems::VlanItems::VlanEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VlanTableItems::VlanItems::VlanEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
}

void System::VlanTableItems::VlanItems::VlanEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
}

bool System::VlanTableItems::VlanItems::VlanEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "adminState")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomTableItems()
    :
    vpcdom_items(std::make_shared<System::VpcDomTableItems::VpcDomItems>())
{
    vpcdom_items->parent = this;

    yang_name = "vpcDomTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcDomTableItems::~VpcDomTableItems()
{
}

bool System::VpcDomTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vpcdom_items !=  nullptr && vpcdom_items->has_data());
}

bool System::VpcDomTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vpcdom_items !=  nullptr && vpcdom_items->has_operation());
}

std::string System::VpcDomTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcDomTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpcDomTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcDomTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpcDom-items")
    {
        if(vpcdom_items == nullptr)
        {
            vpcdom_items = std::make_shared<System::VpcDomTableItems::VpcDomItems>();
        }
        return vpcdom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcDomTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vpcdom_items != nullptr)
    {
        _children["vpcDom-items"] = vpcdom_items;
    }

    return _children;
}

void System::VpcDomTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcDomTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcDomTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpcDom-items")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomItems::VpcDomItems()
    :
    vpcdomentry_list(this, {"domainid"})
{

    yang_name = "vpcDom-items"; yang_parent_name = "vpcDomTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcDomTableItems::VpcDomItems::~VpcDomItems()
{
}

bool System::VpcDomTableItems::VpcDomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vpcdomentry_list.len(); index++)
    {
        if(vpcdomentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VpcDomTableItems::VpcDomItems::has_operation() const
{
    for (std::size_t index=0; index<vpcdomentry_list.len(); index++)
    {
        if(vpcdomentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VpcDomTableItems::VpcDomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpcDomTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcDomTableItems::VpcDomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpcDom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::VpcDomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcDomTableItems::VpcDomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VpcDomEntry-list")
    {
        auto ent_ = std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList>();
        ent_->parent = this;
        vpcdomentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcDomTableItems::VpcDomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vpcdomentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VpcDomTableItems::VpcDomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcDomTableItems::VpcDomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcDomTableItems::VpcDomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VpcDomEntry-list")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcDomEntryList()
    :
    domainid{YType::uint16, "domainId"},
    keepalivedestip{YType::str, "keepaliveDestIp"},
    keepalivesrcip{YType::str, "keepaliveSrcIp"},
    virtualip{YType::str, "virtualIp"},
    peerip{YType::str, "peerIp"},
    keepalivests{YType::enumeration, "keepaliveSts"},
    peerlinksts{YType::enumeration, "peerLinkSts"},
    vpcrole{YType::enumeration, "vpcRole"},
    peergw{YType::boolean, "peerGW"},
    dualactive{YType::boolean, "dualActive"},
    peerlinkif{YType::str, "peerLinkIf"}
        ,
    vpctable_items(std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems>())
{
    vpctable_items->parent = this;

    yang_name = "VpcDomEntry-list"; yang_parent_name = "vpcDom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::~VpcDomEntryList()
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::has_data() const
{
    if (is_presence_container) return true;
    return domainid.is_set
	|| keepalivedestip.is_set
	|| keepalivesrcip.is_set
	|| virtualip.is_set
	|| peerip.is_set
	|| keepalivests.is_set
	|| peerlinksts.is_set
	|| vpcrole.is_set
	|| peergw.is_set
	|| dualactive.is_set
	|| peerlinkif.is_set
	|| (vpctable_items !=  nullptr && vpctable_items->has_data());
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domainid.yfilter)
	|| ydk::is_set(keepalivedestip.yfilter)
	|| ydk::is_set(keepalivesrcip.yfilter)
	|| ydk::is_set(virtualip.yfilter)
	|| ydk::is_set(peerip.yfilter)
	|| ydk::is_set(keepalivests.yfilter)
	|| ydk::is_set(peerlinksts.yfilter)
	|| ydk::is_set(vpcrole.yfilter)
	|| ydk::is_set(peergw.yfilter)
	|| ydk::is_set(dualactive.yfilter)
	|| ydk::is_set(peerlinkif.yfilter)
	|| (vpctable_items !=  nullptr && vpctable_items->has_operation());
}

std::string System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpcDomTable-items/vpcDom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VpcDomEntry-list";
    ADD_KEY_TOKEN(domainid, "domainId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domainid.is_set || is_set(domainid.yfilter)) leaf_name_data.push_back(domainid.get_name_leafdata());
    if (keepalivedestip.is_set || is_set(keepalivedestip.yfilter)) leaf_name_data.push_back(keepalivedestip.get_name_leafdata());
    if (keepalivesrcip.is_set || is_set(keepalivesrcip.yfilter)) leaf_name_data.push_back(keepalivesrcip.get_name_leafdata());
    if (virtualip.is_set || is_set(virtualip.yfilter)) leaf_name_data.push_back(virtualip.get_name_leafdata());
    if (peerip.is_set || is_set(peerip.yfilter)) leaf_name_data.push_back(peerip.get_name_leafdata());
    if (keepalivests.is_set || is_set(keepalivests.yfilter)) leaf_name_data.push_back(keepalivests.get_name_leafdata());
    if (peerlinksts.is_set || is_set(peerlinksts.yfilter)) leaf_name_data.push_back(peerlinksts.get_name_leafdata());
    if (vpcrole.is_set || is_set(vpcrole.yfilter)) leaf_name_data.push_back(vpcrole.get_name_leafdata());
    if (peergw.is_set || is_set(peergw.yfilter)) leaf_name_data.push_back(peergw.get_name_leafdata());
    if (dualactive.is_set || is_set(dualactive.yfilter)) leaf_name_data.push_back(dualactive.get_name_leafdata());
    if (peerlinkif.is_set || is_set(peerlinkif.yfilter)) leaf_name_data.push_back(peerlinkif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpcTable-items")
    {
        if(vpctable_items == nullptr)
        {
            vpctable_items = std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems>();
        }
        return vpctable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vpctable_items != nullptr)
    {
        _children["vpcTable-items"] = vpctable_items;
    }

    return _children;
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domainId")
    {
        domainid = value;
        domainid.value_namespace = name_space;
        domainid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepaliveDestIp")
    {
        keepalivedestip = value;
        keepalivedestip.value_namespace = name_space;
        keepalivedestip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepaliveSrcIp")
    {
        keepalivesrcip = value;
        keepalivesrcip.value_namespace = name_space;
        keepalivesrcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualIp")
    {
        virtualip = value;
        virtualip.value_namespace = name_space;
        virtualip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerIp")
    {
        peerip = value;
        peerip.value_namespace = name_space;
        peerip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepaliveSts")
    {
        keepalivests = value;
        keepalivests.value_namespace = name_space;
        keepalivests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerLinkSts")
    {
        peerlinksts = value;
        peerlinksts.value_namespace = name_space;
        peerlinksts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcRole")
    {
        vpcrole = value;
        vpcrole.value_namespace = name_space;
        vpcrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerGW")
    {
        peergw = value;
        peergw.value_namespace = name_space;
        peergw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dualActive")
    {
        dualactive = value;
        dualactive.value_namespace = name_space;
        dualactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerLinkIf")
    {
        peerlinkif = value;
        peerlinkif.value_namespace = name_space;
        peerlinkif.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domainId")
    {
        domainid.yfilter = yfilter;
    }
    if(value_path == "keepaliveDestIp")
    {
        keepalivedestip.yfilter = yfilter;
    }
    if(value_path == "keepaliveSrcIp")
    {
        keepalivesrcip.yfilter = yfilter;
    }
    if(value_path == "virtualIp")
    {
        virtualip.yfilter = yfilter;
    }
    if(value_path == "peerIp")
    {
        peerip.yfilter = yfilter;
    }
    if(value_path == "keepaliveSts")
    {
        keepalivests.yfilter = yfilter;
    }
    if(value_path == "peerLinkSts")
    {
        peerlinksts.yfilter = yfilter;
    }
    if(value_path == "vpcRole")
    {
        vpcrole.yfilter = yfilter;
    }
    if(value_path == "peerGW")
    {
        peergw.yfilter = yfilter;
    }
    if(value_path == "dualActive")
    {
        dualactive.yfilter = yfilter;
    }
    if(value_path == "peerLinkIf")
    {
        peerlinkif.yfilter = yfilter;
    }
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpcTable-items" || name == "domainId" || name == "keepaliveDestIp" || name == "keepaliveSrcIp" || name == "virtualIp" || name == "peerIp" || name == "keepaliveSts" || name == "peerLinkSts" || name == "vpcRole" || name == "peerGW" || name == "dualActive" || name == "peerLinkIf")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcTableItems()
    :
    vpc_items(std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems>())
{
    vpc_items->parent = this;

    yang_name = "vpcTable-items"; yang_parent_name = "VpcDomEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::~VpcTableItems()
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vpc_items !=  nullptr && vpc_items->has_data());
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vpc_items !=  nullptr && vpc_items->has_operation());
}

std::string System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpcTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpc-items")
    {
        if(vpc_items == nullptr)
        {
            vpc_items = std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems>();
        }
        return vpc_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vpc_items != nullptr)
    {
        _children["vpc-items"] = vpc_items;
    }

    return _children;
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpc-items")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcItems()
    :
    vpcentry_list(this, {"vpcnum"})
{

    yang_name = "vpc-items"; yang_parent_name = "vpcTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::~VpcItems()
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vpcentry_list.len(); index++)
    {
        if(vpcentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::has_operation() const
{
    for (std::size_t index=0; index<vpcentry_list.len(); index++)
    {
        if(vpcentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VpcEntry-list")
    {
        auto ent_ = std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList>();
        ent_->parent = this;
        vpcentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vpcentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VpcEntry-list")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcEntryList()
    :
    vpcnum{YType::uint16, "vpcnum"},
    ifid{YType::str, "ifId"},
    operstate{YType::enumeration, "operState"},
    conschecksts{YType::enumeration, "consCheckSts"},
    conscheckreason{YType::uint32, "consCheckReason"}
        ,
    vpcintf_items(std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems>())
{
    vpcintf_items->parent = this;

    yang_name = "VpcEntry-list"; yang_parent_name = "vpc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::~VpcEntryList()
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vpcnum.is_set
	|| ifid.is_set
	|| operstate.is_set
	|| conschecksts.is_set
	|| conscheckreason.is_set
	|| (vpcintf_items !=  nullptr && vpcintf_items->has_data());
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpcnum.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(conschecksts.yfilter)
	|| ydk::is_set(conscheckreason.yfilter)
	|| (vpcintf_items !=  nullptr && vpcintf_items->has_operation());
}

std::string System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VpcEntry-list";
    ADD_KEY_TOKEN(vpcnum, "vpcnum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpcnum.is_set || is_set(vpcnum.yfilter)) leaf_name_data.push_back(vpcnum.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (conschecksts.is_set || is_set(conschecksts.yfilter)) leaf_name_data.push_back(conschecksts.get_name_leafdata());
    if (conscheckreason.is_set || is_set(conscheckreason.yfilter)) leaf_name_data.push_back(conscheckreason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpcintf-items")
    {
        if(vpcintf_items == nullptr)
        {
            vpcintf_items = std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems>();
        }
        return vpcintf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vpcintf_items != nullptr)
    {
        _children["vpcintf-items"] = vpcintf_items;
    }

    return _children;
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpcnum")
    {
        vpcnum = value;
        vpcnum.value_namespace = name_space;
        vpcnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "consCheckSts")
    {
        conschecksts = value;
        conschecksts.value_namespace = name_space;
        conschecksts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "consCheckReason")
    {
        conscheckreason = value;
        conscheckreason.value_namespace = name_space;
        conscheckreason.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpcnum")
    {
        vpcnum.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "consCheckSts")
    {
        conschecksts.yfilter = yfilter;
    }
    if(value_path == "consCheckReason")
    {
        conscheckreason.yfilter = yfilter;
    }
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpcintf-items" || name == "vpcnum" || name == "ifId" || name == "operState" || name == "consCheckSts" || name == "consCheckReason")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::VpcintfItems()
    :
    rsvpcintfentryatt_items(std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems>())
{
    rsvpcintfentryatt_items->parent = this;

    yang_name = "vpcintf-items"; yang_parent_name = "VpcEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::~VpcintfItems()
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::has_data() const
{
    if (is_presence_container) return true;
    return (rsvpcintfentryatt_items !=  nullptr && rsvpcintfentryatt_items->has_data());
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::has_operation() const
{
    return is_set(yfilter)
	|| (rsvpcintfentryatt_items !=  nullptr && rsvpcintfentryatt_items->has_operation());
}

std::string System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpcintf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpcIntfEntryAtt-items")
    {
        if(rsvpcintfentryatt_items == nullptr)
        {
            rsvpcintfentryatt_items = std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems>();
        }
        return rsvpcintfentryatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvpcintfentryatt_items != nullptr)
    {
        _children["rsvpcIntfEntryAtt-items"] = rsvpcintfentryatt_items;
    }

    return _children;
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpcIntfEntryAtt-items")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::RsvpcIntfEntryAttItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rsvpcIntfEntryAtt-items"; yang_parent_name = "vpcintf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::~RsvpcIntfEntryAttItems()
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpcIntfEntryAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::VrfTableItems::VrfTableItems()
    :
    vrf_items(std::make_shared<System::VrfTableItems::VrfItems>())
{
    vrf_items->parent = this;

    yang_name = "vrfTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VrfTableItems::~VrfTableItems()
{
}

bool System::VrfTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vrf_items !=  nullptr && vrf_items->has_data());
}

bool System::VrfTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation());
}

std::string System::VrfTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VrfTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrfTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::VrfTableItems::VrfItems>();
        }
        return vrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrfTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    return _children;
}

void System::VrfTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfItems()
    :
    vrfentry_list(this, {"name"})
{

    yang_name = "vrf-items"; yang_parent_name = "vrfTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VrfTableItems::VrfItems::~VrfItems()
{
}

bool System::VrfTableItems::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrfentry_list.len(); index++)
    {
        if(vrfentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrfTableItems::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<vrfentry_list.len(); index++)
    {
        if(vrfentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrfTableItems::VrfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vrfTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VrfTableItems::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrfTableItems::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VrfEntry-list")
    {
        auto ent_ = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList>();
        ent_->parent = this;
        vrfentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrfTableItems::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrfentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VrfTableItems::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VrfEntry-list")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::VrfEntryList()
    :
    name{YType::str, "name"},
    genname{YType::str, "genName"},
    ctrlrid{YType::uint32, "ctrlrId"},
    vnid{YType::str, "vnid"},
    rd{YType::str, "rd"},
    genextrart{YType::boolean, "genExtraRt"},
    templatename{YType::str, "templateName"},
    templatestatus{YType::enumeration, "templateStatus"},
    shdwtemplatename{YType::str, "shdwTemplateName"},
    shdwvrfgenname{YType::str, "shdwVrfGenName"}
        ,
    af_items(std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems>())
{
    af_items->parent = this;

    yang_name = "VrfEntry-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VrfTableItems::VrfItems::VrfEntryList::~VrfEntryList()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| genname.is_set
	|| ctrlrid.is_set
	|| vnid.is_set
	|| rd.is_set
	|| genextrart.is_set
	|| templatename.is_set
	|| templatestatus.is_set
	|| shdwtemplatename.is_set
	|| shdwvrfgenname.is_set
	|| (af_items !=  nullptr && af_items->has_data());
}

bool System::VrfTableItems::VrfItems::VrfEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(genname.yfilter)
	|| ydk::is_set(ctrlrid.yfilter)
	|| ydk::is_set(vnid.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(genextrart.yfilter)
	|| ydk::is_set(templatename.yfilter)
	|| ydk::is_set(templatestatus.yfilter)
	|| ydk::is_set(shdwtemplatename.yfilter)
	|| ydk::is_set(shdwvrfgenname.yfilter)
	|| (af_items !=  nullptr && af_items->has_operation());
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vrfTable-items/vrf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VrfEntry-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (genname.is_set || is_set(genname.yfilter)) leaf_name_data.push_back(genname.get_name_leafdata());
    if (ctrlrid.is_set || is_set(ctrlrid.yfilter)) leaf_name_data.push_back(ctrlrid.get_name_leafdata());
    if (vnid.is_set || is_set(vnid.yfilter)) leaf_name_data.push_back(vnid.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (genextrart.is_set || is_set(genextrart.yfilter)) leaf_name_data.push_back(genextrart.get_name_leafdata());
    if (templatename.is_set || is_set(templatename.yfilter)) leaf_name_data.push_back(templatename.get_name_leafdata());
    if (templatestatus.is_set || is_set(templatestatus.yfilter)) leaf_name_data.push_back(templatestatus.get_name_leafdata());
    if (shdwtemplatename.is_set || is_set(shdwtemplatename.yfilter)) leaf_name_data.push_back(shdwtemplatename.get_name_leafdata());
    if (shdwvrfgenname.is_set || is_set(shdwvrfgenname.yfilter)) leaf_name_data.push_back(shdwvrfgenname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrfTableItems::VrfItems::VrfEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems>();
        }
        return af_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrfTableItems::VrfItems::VrfEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(af_items != nullptr)
    {
        _children["af-items"] = af_items;
    }

    return _children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genName")
    {
        genname = value;
        genname.value_namespace = name_space;
        genname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlrId")
    {
        ctrlrid = value;
        ctrlrid.value_namespace = name_space;
        ctrlrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vnid")
    {
        vnid = value;
        vnid.value_namespace = name_space;
        vnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genExtraRt")
    {
        genextrart = value;
        genextrart.value_namespace = name_space;
        genextrart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "templateName")
    {
        templatename = value;
        templatename.value_namespace = name_space;
        templatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "templateStatus")
    {
        templatestatus = value;
        templatestatus.value_namespace = name_space;
        templatestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shdwTemplateName")
    {
        shdwtemplatename = value;
        shdwtemplatename.value_namespace = name_space;
        shdwtemplatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shdwVrfGenName")
    {
        shdwvrfgenname = value;
        shdwvrfgenname.value_namespace = name_space;
        shdwvrfgenname.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrfTableItems::VrfItems::VrfEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "genName")
    {
        genname.yfilter = yfilter;
    }
    if(value_path == "ctrlrId")
    {
        ctrlrid.yfilter = yfilter;
    }
    if(value_path == "vnid")
    {
        vnid.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "genExtraRt")
    {
        genextrart.yfilter = yfilter;
    }
    if(value_path == "templateName")
    {
        templatename.yfilter = yfilter;
    }
    if(value_path == "templateStatus")
    {
        templatestatus.yfilter = yfilter;
    }
    if(value_path == "shdwTemplateName")
    {
        shdwtemplatename.yfilter = yfilter;
    }
    if(value_path == "shdwVrfGenName")
    {
        shdwvrfgenname.yfilter = yfilter;
    }
}

bool System::VrfTableItems::VrfItems::VrfEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-items" || name == "name" || name == "genName" || name == "ctrlrId" || name == "vnid" || name == "rd" || name == "genExtraRt" || name == "templateName" || name == "templateStatus" || name == "shdwTemplateName" || name == "shdwVrfGenName")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::AfItems()
    :
    domainaf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "VrfEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::~AfItems()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domainaf_list.len(); index++)
    {
        if(domainaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<domainaf_list.len(); index++)
    {
        if(domainaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomainAf-list")
    {
        auto ent_ = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList>();
        ent_->parent = this;
        domainaf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domainaf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomainAf-list")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::DomainAfList()
    :
    type{YType::enumeration, "type"},
    vrf{YType::str, "vrf"},
    rd{YType::str, "rd"}
        ,
    rttp_items(std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems>())
    , ctrl_items(std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems>())
{
    rttp_items->parent = this;
    ctrl_items->parent = this;

    yang_name = "DomainAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::~DomainAfList()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| vrf.is_set
	|| rd.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data())
	|| (ctrl_items !=  nullptr && ctrl_items->has_data());
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation())
	|| (ctrl_items !=  nullptr && ctrl_items->has_operation());
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomainAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems>();
        }
        return rttp_items;
    }

    if(child_yang_name == "ctrl-items")
    {
        if(ctrl_items == nullptr)
        {
            ctrl_items = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems>();
        }
        return ctrl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rttp_items != nullptr)
    {
        _children["rttp-items"] = rttp_items;
    }

    if(ctrl_items != nullptr)
    {
        _children["ctrl-items"] = ctrl_items;
    }

    return _children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "ctrl-items" || name == "type" || name == "vrf" || name == "rd")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttpItems()
    :
    rttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "DomainAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::~RttpItems()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttP-list")
    {
        auto ent_ = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList>();
        ent_->parent = this;
        rttp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttP-list")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::RttPList()
    :
    type{YType::enumeration, "type"},
    isl3{YType::enumeration, "isL3"}
        ,
    ent_items(std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems>())
{
    ent_items->parent = this;

    yang_name = "RttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::~RttPList()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| isl3.is_set
	|| (ent_items !=  nullptr && ent_items->has_data());
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(isl3.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation());
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (isl3.is_set || is_set(isl3.yfilter)) leaf_name_data.push_back(isl3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems>();
        }
        return ent_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ent_items != nullptr)
    {
        _children["ent-items"] = ent_items;
    }

    return _children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isL3")
    {
        isl3 = value;
        isl3.value_namespace = name_space;
        isl3.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "isL3")
    {
        isl3.yfilter = yfilter;
    }
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "type" || name == "isL3")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::EntItems()
    :
    rttentry_list(this, {"rtt"})
{

    yang_name = "ent-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::~EntItems()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttEntry-list")
    {
        auto ent_ = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList>();
        ent_->parent = this;
        rttentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttEntry-list")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::RttEntryList()
    :
    rtt{YType::str, "rtt"}
{

    yang_name = "RttEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::~RttEntryList()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::CtrlItems()
    :
    afctrl_list(this, {"type"})
{

    yang_name = "ctrl-items"; yang_parent_name = "DomainAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::~CtrlItems()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<afctrl_list.len(); index++)
    {
        if(afctrl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::has_operation() const
{
    for (std::size_t index=0; index<afctrl_list.len(); index++)
    {
        if(afctrl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AfCtrl-list")
    {
        auto ent_ = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList>();
        ent_->parent = this;
        afctrl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : afctrl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AfCtrl-list")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::AfCtrlList()
    :
    type{YType::enumeration, "type"}
        ,
    rttp_items(std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems>())
{
    rttp_items->parent = this;

    yang_name = "AfCtrl-list"; yang_parent_name = "ctrl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::~AfCtrlList()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data());
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation());
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AfCtrl-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems>();
        }
        return rttp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rttp_items != nullptr)
    {
        _children["rttp-items"] = rttp_items;
    }

    return _children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "type")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttpItems()
    :
    rttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "AfCtrl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::~RttpItems()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttP-list")
    {
        auto ent_ = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList>();
        ent_->parent = this;
        rttp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttP-list")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RttPList()
    :
    type{YType::enumeration, "type"},
    isl3{YType::enumeration, "isL3"}
        ,
    ent_items(std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems>())
{
    ent_items->parent = this;

    yang_name = "RttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::~RttPList()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| isl3.is_set
	|| (ent_items !=  nullptr && ent_items->has_data());
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(isl3.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation());
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (isl3.is_set || is_set(isl3.yfilter)) leaf_name_data.push_back(isl3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems>();
        }
        return ent_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ent_items != nullptr)
    {
        _children["ent-items"] = ent_items;
    }

    return _children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isL3")
    {
        isl3 = value;
        isl3.value_namespace = name_space;
        isl3.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "isL3")
    {
        isl3.yfilter = yfilter;
    }
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "type" || name == "isL3")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::EntItems()
    :
    rttentry_list(this, {"rtt"})
{

    yang_name = "ent-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::~EntItems()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttEntry-list")
    {
        auto ent_ = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList>();
        ent_->parent = this;
        rttentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttEntry-list")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::RttEntryList()
    :
    rtt{YType::str, "rtt"}
{

    yang_name = "RttEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::~RttEntryList()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt")
        return true;
    return false;
}

System::AclItems::AclItems()
    :
    upid{YType::uint32, "upid"}
        ,
    oname_items(std::make_shared<System::AclItems::ONameItems>())
    , vlan_items(std::make_shared<System::AclItems::VlanItems>())
    , mac_items(std::make_shared<System::AclItems::MacItems>())
    , ipv4_items(std::make_shared<System::AclItems::Ipv4Items>())
    , ipv6_items(std::make_shared<System::AclItems::Ipv6Items>())
{
    oname_items->parent = this;
    vlan_items->parent = this;
    mac_items->parent = this;
    ipv4_items->parent = this;
    ipv6_items->parent = this;

    yang_name = "acl-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::~AclItems()
{
}

bool System::AclItems::has_data() const
{
    if (is_presence_container) return true;
    return upid.is_set
	|| (oname_items !=  nullptr && oname_items->has_data())
	|| (vlan_items !=  nullptr && vlan_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data())
	|| (ipv4_items !=  nullptr && ipv4_items->has_data())
	|| (ipv6_items !=  nullptr && ipv6_items->has_data());
}

bool System::AclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
	|| (oname_items !=  nullptr && oname_items->has_operation())
	|| (vlan_items !=  nullptr && vlan_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation())
	|| (ipv4_items !=  nullptr && ipv4_items->has_operation())
	|| (ipv6_items !=  nullptr && ipv6_items->has_operation());
}

std::string System::AclItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oName-items")
    {
        if(oname_items == nullptr)
        {
            oname_items = std::make_shared<System::AclItems::ONameItems>();
        }
        return oname_items;
    }

    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::AclItems::VlanItems>();
        }
        return vlan_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::AclItems::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "ipv4-items")
    {
        if(ipv4_items == nullptr)
        {
            ipv4_items = std::make_shared<System::AclItems::Ipv4Items>();
        }
        return ipv4_items;
    }

    if(child_yang_name == "ipv6-items")
    {
        if(ipv6_items == nullptr)
        {
            ipv6_items = std::make_shared<System::AclItems::Ipv6Items>();
        }
        return ipv6_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oname_items != nullptr)
    {
        _children["oName-items"] = oname_items;
    }

    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    if(mac_items != nullptr)
    {
        _children["mac-items"] = mac_items;
    }

    if(ipv4_items != nullptr)
    {
        _children["ipv4-items"] = ipv4_items;
    }

    if(ipv6_items != nullptr)
    {
        _children["ipv6-items"] = ipv6_items;
    }

    return _children;
}

void System::AclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oName-items" || name == "vlan-items" || name == "mac-items" || name == "ipv4-items" || name == "ipv6-items" || name == "upid")
        return true;
    return false;
}

System::AclItems::ONameItems::ONameItems()
    :
    portgroup_list(this, {"name"})
{

    yang_name = "oName-items"; yang_parent_name = "acl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::ONameItems::~ONameItems()
{
}

bool System::AclItems::ONameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<portgroup_list.len(); index++)
    {
        if(portgroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::ONameItems::has_operation() const
{
    for (std::size_t index=0; index<portgroup_list.len(); index++)
    {
        if(portgroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::ONameItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::ONameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oName-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::ONameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::ONameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PortGroup-list")
    {
        auto ent_ = std::make_shared<System::AclItems::ONameItems::PortGroupList>();
        ent_->parent = this;
        portgroup_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::ONameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : portgroup_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AclItems::ONameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::ONameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::ONameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PortGroup-list")
        return true;
    return false;
}

System::AclItems::ONameItems::PortGroupList::PortGroupList()
    :
    name{YType::str, "name"}
        ,
    seq_items(std::make_shared<System::AclItems::ONameItems::PortGroupList::SeqItems>())
{
    seq_items->parent = this;

    yang_name = "PortGroup-list"; yang_parent_name = "oName-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::ONameItems::PortGroupList::~PortGroupList()
{
}

bool System::AclItems::ONameItems::PortGroupList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (seq_items !=  nullptr && seq_items->has_data());
}

bool System::AclItems::ONameItems::PortGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (seq_items !=  nullptr && seq_items->has_operation());
}

std::string System::AclItems::ONameItems::PortGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/oName-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::ONameItems::PortGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PortGroup-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::ONameItems::PortGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::ONameItems::PortGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-items")
    {
        if(seq_items == nullptr)
        {
            seq_items = std::make_shared<System::AclItems::ONameItems::PortGroupList::SeqItems>();
        }
        return seq_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::ONameItems::PortGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(seq_items != nullptr)
    {
        _children["seq-items"] = seq_items;
    }

    return _children;
}

void System::AclItems::ONameItems::PortGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::ONameItems::PortGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::AclItems::ONameItems::PortGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-items" || name == "name")
        return true;
    return false;
}

System::AclItems::ONameItems::PortGroupList::SeqItems::SeqItems()
    :
    portmember_list(this, {"seqnum"})
{

    yang_name = "seq-items"; yang_parent_name = "PortGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::ONameItems::PortGroupList::SeqItems::~SeqItems()
{
}

bool System::AclItems::ONameItems::PortGroupList::SeqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<portmember_list.len(); index++)
    {
        if(portmember_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::ONameItems::PortGroupList::SeqItems::has_operation() const
{
    for (std::size_t index=0; index<portmember_list.len(); index++)
    {
        if(portmember_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::ONameItems::PortGroupList::SeqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::ONameItems::PortGroupList::SeqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::ONameItems::PortGroupList::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PortMember-list")
    {
        auto ent_ = std::make_shared<System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList>();
        ent_->parent = this;
        portmember_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::ONameItems::PortGroupList::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : portmember_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AclItems::ONameItems::PortGroupList::SeqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::ONameItems::PortGroupList::SeqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::ONameItems::PortGroupList::SeqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PortMember-list")
        return true;
    return false;
}

System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::PortMemberList()
    :
    seqnum{YType::uint32, "seqNum"},
    portop{YType::uint8, "portOp"},
    port1{YType::uint16, "port1"},
    port2{YType::uint16, "port2"},
    configstatus{YType::uint8, "configStatus"}
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
	|| configstatus.is_set;
}

bool System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(portop.yfilter)
	|| ydk::is_set(port1.yfilter)
	|| ydk::is_set(port2.yfilter)
	|| ydk::is_set(configstatus.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "portOp" || name == "port1" || name == "port2" || name == "configStatus")
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

std::shared_ptr<ydk::Entity> System::AclItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VLANACL-list")
    {
        auto ent_ = std::make_shared<System::AclItems::VlanItems::VLANACLList>();
        ent_->parent = this;
        vlanacl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlanacl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    maxseq{YType::uint32, "maxseq"},
    upid{YType::uint32, "upid"}
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
	|| upid.is_set
	|| (seq_items !=  nullptr && seq_items->has_data())
	|| (vlanlist_items !=  nullptr && vlanlist_items->has_data());
}

bool System::AclItems::VlanItems::VLANACLList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(maxseq.yfilter)
	|| ydk::is_set(upid.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::VlanItems::VLANACLList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::VlanItems::VLANACLList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(seq_items != nullptr)
    {
        _children["seq-items"] = seq_items;
    }

    if(vlanlist_items != nullptr)
    {
        _children["vlanlist-items"] = vlanlist_items;
    }

    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::VlanItems::VLANACLList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-items" || name == "vlanlist-items" || name == "name" || name == "maxseq" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::VlanItems::VLANACLList::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VLANSeq-list")
    {
        auto ent_ = std::make_shared<System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList>();
        ent_->parent = this;
        vlanseq_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::VlanItems::VLANACLList::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlanseq_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    peracestatistics{YType::uint8, "perACEStatistics"},
    upid{YType::uint32, "upid"}
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
	|| upid.is_set
	|| (match_items !=  nullptr && match_items->has_data())
	|| (action_items !=  nullptr && action_items->has_data());
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(peracestatistics.yfilter)
	|| ydk::is_set(upid.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match_items != nullptr)
    {
        _children["match-items"] = match_items;
    }

    if(action_items != nullptr)
    {
        _children["action-items"] = action_items;
    }

    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-items" || name == "action-items" || name == "seqNum" || name == "perACEStatistics" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VLANACLMatch-list")
    {
        auto ent_ = std::make_shared<System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList>();
        ent_->parent = this;
        vlanaclmatch_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlanaclmatch_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    aclname{YType::str, "aclname"},
    upid{YType::uint32, "upid"}
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
	|| aclname.is_set
	|| upid.is_set;
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acltype.yfilter)
	|| ydk::is_set(aclname.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acltype" || name == "aclname" || name == "upid")
        return true;
    return false;
}

System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::ActionItems()
    :
    actiontype{YType::enumeration, "actiontype"},
    log{YType::uint8, "log"},
    redirectintf{YType::str, "redirectintf"},
    upid{YType::uint32, "upid"}
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
	|| redirectintf.is_set
	|| upid.is_set;
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actiontype.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(redirectintf.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actiontype" || name == "log" || name == "redirectintf" || name == "upid")
        return true;
    return false;
}

System::AclItems::VlanItems::VLANACLList::VlanlistItems::VlanlistItems()
    :
    list{YType::str, "list"},
    operation_{YType::uint8, "operation"},
    listoper{YType::str, "listoper"},
    listerr{YType::str, "listerr"},
    timestamp{YType::str, "timeStamp"},
    upid{YType::uint32, "upid"}
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
	|| timestamp.is_set
	|| upid.is_set;
}

bool System::AclItems::VlanItems::VLANACLList::VlanlistItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(operation_.yfilter)
	|| ydk::is_set(listoper.yfilter)
	|| ydk::is_set(listerr.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::VlanItems::VLANACLList::VlanlistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::VlanItems::VLANACLList::VlanlistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::VlanItems::VLANACLList::VlanlistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "operation" || name == "listoper" || name == "listerr" || name == "timeStamp" || name == "upid")
        return true;
    return false;
}

System::AclItems::MacItems::MacItems()
    :
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (statclear_items !=  nullptr && statclear_items->has_data())
	|| (policy_items !=  nullptr && policy_items->has_data())
	|| (name_items !=  nullptr && name_items->has_data());
}

bool System::AclItems::MacItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::get_children() const
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

    return _children;
}

void System::AclItems::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statClear-items" || name == "policy-items" || name == "name-items" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::StatClearItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::StatClearItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (ingress_items !=  nullptr && ingress_items->has_data())
	|| (egress_items !=  nullptr && egress_items->has_data());
}

bool System::AclItems::MacItems::PolicyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::PolicyItems::get_children() const
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

void System::AclItems::MacItems::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-items" || name == "egress-items" || name == "upid")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::IngressItems::IngressItems()
    :
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (intf_items !=  nullptr && intf_items->has_data())
	|| (vty_items !=  nullptr && vty_items->has_data());
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::PolicyItems::IngressItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::PolicyItems::IngressItems::get_children() const
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

void System::AclItems::MacItems::PolicyItems::IngressItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::PolicyItems::IngressItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "vty-items" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::get_children() const
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
    name{YType::str, "name"},
    upid{YType::uint32, "upid"}
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
	|| upid.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (portacl_items !=  nullptr && portacl_items->has_data());
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(upid.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::get_children() const
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

void System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "portacl-items" || name == "name" || name == "upid")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::PortaclItems()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::VtyItems()
    :
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (acl_items !=  nullptr && acl_items->has_data());
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    return _children;
}

void System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "upid")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::EgressItems::EgressItems()
    :
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (intf_items !=  nullptr && intf_items->has_data())
	|| (vty_items !=  nullptr && vty_items->has_data());
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::PolicyItems::EgressItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::PolicyItems::EgressItems::get_children() const
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

void System::AclItems::MacItems::PolicyItems::EgressItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::PolicyItems::EgressItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "vty-items" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::get_children() const
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
    name{YType::str, "name"},
    upid{YType::uint32, "upid"}
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
	|| upid.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (portacl_items !=  nullptr && portacl_items->has_data());
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(upid.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::get_children() const
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

void System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "portacl-items" || name == "name" || name == "upid")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::PortaclItems()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::VtyItems()
    :
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (acl_items !=  nullptr && acl_items->has_data());
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    return _children;
}

void System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "upid")
        return true;
    return false;
}

System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACL-list")
    {
        auto ent_ = std::make_shared<System::AclItems::MacItems::NameItems::ACLList>();
        ent_->parent = this;
        acl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::NameItems::get_children() const
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
    upid{YType::uint32, "upid"},
    peracestatistics{YType::uint8, "perACEStatistics"}
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
	|| upid.is_set
	|| peracestatistics.is_set
	|| (reseq_items !=  nullptr && reseq_items->has_data())
	|| (seq_items !=  nullptr && seq_items->has_data());
}

bool System::AclItems::MacItems::NameItems::ACLList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(upid.yfilter)
	|| ydk::is_set(peracestatistics.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());
    if (peracestatistics.is_set || is_set(peracestatistics.yfilter)) leaf_name_data.push_back(peracestatistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::NameItems::ACLList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::NameItems::ACLList::get_children() const
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

void System::AclItems::MacItems::NameItems::ACLList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::AclItems::MacItems::NameItems::ACLList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::AclItems::MacItems::NameItems::ACLList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reseq-items" || name == "seq-items" || name == "name" || name == "upid" || name == "perACEStatistics")
        return true;
    return false;
}

System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems()
    :
    start{YType::uint32, "start"},
    step{YType::uint32, "step"}
{

    yang_name = "reseq-items"; yang_parent_name = "ACL-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::MacItems::NameItems::ACLList::ReseqItems::~ReseqItems()
{
}

bool System::AclItems::MacItems::NameItems::ACLList::ReseqItems::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| step.is_set;
}

bool System::AclItems::MacItems::NameItems::ACLList::ReseqItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(step.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::NameItems::ACLList::ReseqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::NameItems::ACLList::ReseqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool System::AclItems::MacItems::NameItems::ACLList::ReseqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "step")
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

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::NameItems::ACLList::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SEQ-list")
    {
        auto ent_ = std::make_shared<System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList>();
        ent_->parent = this;
        seq_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::NameItems::ACLList::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : seq_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    seqnum{YType::uint32, "seqNum"},
    upid{YType::uint32, "upid"}
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
	|| upid.is_set
	|| (ace_items !=  nullptr && ace_items->has_data())
	|| (remark_items !=  nullptr && remark_items->has_data());
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(upid.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ace_items != nullptr)
    {
        _children["ace-items"] = ace_items;
    }

    if(remark_items != nullptr)
    {
        _children["remark-items"] = remark_items;
    }

    return _children;
}

void System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-items" || name == "remark-items" || name == "seqNum" || name == "upid")
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
    upid{YType::uint32, "upid"},
    action{YType::enumeration, "action"},
    srcprefix{YType::str, "srcPrefix"},
    srcprefixmask{YType::str, "srcPrefixMask"},
    dstprefix{YType::str, "dstPrefix"},
    dstprefixmask{YType::str, "dstPrefixMask"},
    packets{YType::uint64, "packets"}
        ,
    udf_items(std::make_shared<System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems>())
{
    udf_items->parent = this;

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
	|| upid.is_set
	|| action.is_set
	|| srcprefix.is_set
	|| srcprefixmask.is_set
	|| dstprefix.is_set
	|| dstprefixmask.is_set
	|| packets.is_set
	|| (udf_items !=  nullptr && udf_items->has_data());
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
	|| ydk::is_set(upid.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(srcprefix.yfilter)
	|| ydk::is_set(srcprefixmask.yfilter)
	|| ydk::is_set(dstprefix.yfilter)
	|| ydk::is_set(dstprefixmask.yfilter)
	|| ydk::is_set(packets.yfilter)
	|| (udf_items !=  nullptr && udf_items->has_operation());
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (srcprefix.is_set || is_set(srcprefix.yfilter)) leaf_name_data.push_back(srcprefix.get_name_leafdata());
    if (srcprefixmask.is_set || is_set(srcprefixmask.yfilter)) leaf_name_data.push_back(srcprefixmask.get_name_leafdata());
    if (dstprefix.is_set || is_set(dstprefix.yfilter)) leaf_name_data.push_back(dstprefix.get_name_leafdata());
    if (dstprefixmask.is_set || is_set(dstprefixmask.yfilter)) leaf_name_data.push_back(dstprefixmask.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udf-items")
    {
        if(udf_items == nullptr)
        {
            udf_items = std::make_shared<System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems>();
        }
        return udf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udf_items != nullptr)
    {
        _children["udf-items"] = udf_items;
    }

    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
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
    if(name == "udf-items" || name == "protocol" || name == "cos" || name == "redirect" || name == "timeRange" || name == "vlan" || name == "erspanDscp" || name == "erspanGre" || name == "upid" || name == "action" || name == "srcPrefix" || name == "srcPrefixMask" || name == "dstPrefix" || name == "dstPrefixMask" || name == "packets")
        return true;
    return false;
}

System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems::UdfItems()
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

    yang_name = "udf-items"; yang_parent_name = "ace-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems::~UdfItems()
{
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems::has_data() const
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

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems::has_operation() const
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

std::string System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems::UdfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udf1Name" || name == "udf1Val" || name == "udf1Mask" || name == "udf2Name" || name == "udf2Val" || name == "udf2Mask" || name == "udf3Name" || name == "udf3Val" || name == "udf3Mask" || name == "udf4Name" || name == "udf4Val" || name == "udf4Mask" || name == "udf5Name" || name == "udf5Val" || name == "udf5Mask" || name == "udf6Name" || name == "udf6Val" || name == "udf6Mask" || name == "udf7Name" || name == "udf7Val" || name == "udf7Mask" || name == "udf8Name" || name == "udf8Val" || name == "udf8Mask" || name == "udf9Name" || name == "udf9Val" || name == "udf9Mask" || name == "udf10Name" || name == "udf10Val" || name == "udf10Mask" || name == "udf11Name" || name == "udf11Val" || name == "udf11Mask" || name == "udf12Name" || name == "udf12Val" || name == "udf12Mask" || name == "udf13Name" || name == "udf13Val" || name == "udf13Mask" || name == "udf14Name" || name == "udf14Val" || name == "udf14Mask" || name == "udf15Name" || name == "udf15Val" || name == "udf15Mask" || name == "udf16Name" || name == "udf16Val" || name == "udf16Mask" || name == "udf17Name" || name == "udf17Val" || name == "udf17Mask" || name == "udf18Name" || name == "udf18Val" || name == "udf18Mask")
        return true;
    return false;
}

System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::RemarkItems()
    :
    seqnum{YType::uint32, "seqNum"},
    remark{YType::str, "remark"},
    upid{YType::uint32, "upid"}
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
	|| remark.is_set
	|| upid.is_set;
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "remark" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv4Items::Ipv4Items()
    :
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (statclear_items !=  nullptr && statclear_items->has_data())
	|| (policy_items !=  nullptr && policy_items->has_data())
	|| (name_items !=  nullptr && name_items->has_data())
	|| (oname_items !=  nullptr && oname_items->has_data());
}

bool System::AclItems::Ipv4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::get_children() const
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

void System::AclItems::Ipv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statClear-items" || name == "policy-items" || name == "name-items" || name == "oName-items" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::StatClearItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::StatClearItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (ingress_items !=  nullptr && ingress_items->has_data())
	|| (egress_items !=  nullptr && egress_items->has_data());
}

bool System::AclItems::Ipv4Items::PolicyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::PolicyItems::get_children() const
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

void System::AclItems::Ipv4Items::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-items" || name == "egress-items" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::IngressItems()
    :
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (intf_items !=  nullptr && intf_items->has_data())
	|| (vty_items !=  nullptr && vty_items->has_data());
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::PolicyItems::IngressItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::PolicyItems::IngressItems::get_children() const
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

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "vty-items" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::get_children() const
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
    name{YType::str, "name"},
    upid{YType::uint32, "upid"}
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
	|| upid.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (portacl_items !=  nullptr && portacl_items->has_data());
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(upid.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::get_children() const
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

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "portacl-items" || name == "name" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::PortaclItems()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::VtyItems()
    :
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (acl_items !=  nullptr && acl_items->has_data());
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    return _children;
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::EgressItems()
    :
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (intf_items !=  nullptr && intf_items->has_data())
	|| (vty_items !=  nullptr && vty_items->has_data());
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::PolicyItems::EgressItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::PolicyItems::EgressItems::get_children() const
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

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "vty-items" || name == "upid")
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

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::get_children() const
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
    name{YType::str, "name"},
    upid{YType::uint32, "upid"}
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
	|| upid.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (portacl_items !=  nullptr && portacl_items->has_data());
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(upid.yfilter)
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::get_children() const
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

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "portacl-items" || name == "name" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::AclItems_()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::PortaclItems()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"},
    upid{YType::uint32, "upid"}
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
	|| configstatus.is_set
	|| upid.is_set;
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(upid.yfilter);
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
    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus" || name == "upid")
        return true;
    return false;
}

System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::VtyItems()
    :
    upid{YType::uint32, "upid"}
        ,
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
    return upid.is_set
	|| (acl_items !=  nullptr && acl_items->has_data());
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upid.yfilter)
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

    if (upid.is_set || is_set(upid.yfilter)) leaf_name_data.push_back(upid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    return _children;
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upid")
    {
        upid = value;
        upid.value_namespace = name_space;
        upid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upid")
    {
        upid.yfilter = yfilter;
    }
}

bool System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "upid")
        return true;
    return false;
}


}
}

