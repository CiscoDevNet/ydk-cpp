
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_44.hpp"
#include "Cisco_NX_OS_device_45.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifItems()
    :
    oif_list(this, {"oifname"})
{

    yang_name = "oif-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::~OifItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Oif-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList>();
        ent_->parent = this;
        oif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Oif-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifList()
    :
    oifname{YType::str, "oifName"},
    oifuptime{YType::str, "oifUptime"},
    oifrpf{YType::boolean, "oifRPF"},
    oiflispencapentries{YType::uint32, "oifLispEncapEntries"}
        ,
    lispencap_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems>())
    , oifmpib_items(std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems>())
{
    lispencap_items->parent = this;
    oifmpib_items->parent = this;

    yang_name = "Oif-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::~OifList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_data() const
{
    if (is_presence_container) return true;
    return oifname.is_set
	|| oifuptime.is_set
	|| oifrpf.is_set
	|| oiflispencapentries.is_set
	|| (lispencap_items !=  nullptr && lispencap_items->has_data())
	|| (oifmpib_items !=  nullptr && oifmpib_items->has_data());
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifname.yfilter)
	|| ydk::is_set(oifuptime.yfilter)
	|| ydk::is_set(oifrpf.yfilter)
	|| ydk::is_set(oiflispencapentries.yfilter)
	|| (lispencap_items !=  nullptr && lispencap_items->has_operation())
	|| (oifmpib_items !=  nullptr && oifmpib_items->has_operation());
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Oif-list";
    ADD_KEY_TOKEN(oifname, "oifName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifname.is_set || is_set(oifname.yfilter)) leaf_name_data.push_back(oifname.get_name_leafdata());
    if (oifuptime.is_set || is_set(oifuptime.yfilter)) leaf_name_data.push_back(oifuptime.get_name_leafdata());
    if (oifrpf.is_set || is_set(oifrpf.yfilter)) leaf_name_data.push_back(oifrpf.get_name_leafdata());
    if (oiflispencapentries.is_set || is_set(oiflispencapentries.yfilter)) leaf_name_data.push_back(oiflispencapentries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lispencap-items")
    {
        if(lispencap_items == nullptr)
        {
            lispencap_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems>();
        }
        return lispencap_items;
    }

    if(child_yang_name == "oifmpib-items")
    {
        if(oifmpib_items == nullptr)
        {
            oifmpib_items = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems>();
        }
        return oifmpib_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lispencap_items != nullptr)
    {
        _children["lispencap-items"] = lispencap_items;
    }

    if(oifmpib_items != nullptr)
    {
        _children["oifmpib-items"] = oifmpib_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oifName")
    {
        oifname = value;
        oifname.value_namespace = name_space;
        oifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifUptime")
    {
        oifuptime = value;
        oifuptime.value_namespace = name_space;
        oifuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifRPF")
    {
        oifrpf = value;
        oifrpf.value_namespace = name_space;
        oifrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries = value;
        oiflispencapentries.value_namespace = name_space;
        oiflispencapentries.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oifName")
    {
        oifname.yfilter = yfilter;
    }
    if(value_path == "oifUptime")
    {
        oifuptime.yfilter = yfilter;
    }
    if(value_path == "oifRPF")
    {
        oifrpf.yfilter = yfilter;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lispencap-items" || name == "oifmpib-items" || name == "oifName" || name == "oifUptime" || name == "oifRPF" || name == "oifLispEncapEntries")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispencapItems()
    :
    lispencap_list(this, {"index_"})
{

    yang_name = "lispencap-items"; yang_parent_name = "Oif-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::~LispencapItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lispencap_list.len(); index++)
    {
        if(lispencap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::has_operation() const
{
    for (std::size_t index=0; index<lispencap_list.len(); index++)
    {
        if(lispencap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lispencap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LispEncap-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList>();
        ent_->parent = this;
        lispencap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lispencap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LispEncap-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::LispEncapList()
    :
    index_{YType::uint32, "index"},
    srcrloc{YType::str, "srcRloc"},
    dstrloc{YType::str, "dstRloc"}
{

    yang_name = "LispEncap-list"; yang_parent_name = "lispencap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::~LispEncapList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| srcrloc.is_set
	|| dstrloc.is_set;
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(srcrloc.yfilter)
	|| ydk::is_set(dstrloc.yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LispEncap-list";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (srcrloc.is_set || is_set(srcrloc.yfilter)) leaf_name_data.push_back(srcrloc.get_name_leafdata());
    if (dstrloc.is_set || is_set(dstrloc.yfilter)) leaf_name_data.push_back(dstrloc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcRloc")
    {
        srcrloc = value;
        srcrloc.value_namespace = name_space;
        srcrloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstRloc")
    {
        dstrloc = value;
        dstrloc.value_namespace = name_space;
        dstrloc.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "srcRloc")
    {
        srcrloc.yfilter = yfilter;
    }
    if(value_path == "dstRloc")
    {
        dstrloc.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "srcRloc" || name == "dstRloc")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifmpibItems()
    :
    oifmpib_list(this, {"oifmpibname"})
{

    yang_name = "oifmpib-items"; yang_parent_name = "Oif-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::~OifmpibItems()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oifmpib_list.len(); index++)
    {
        if(oifmpib_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::has_operation() const
{
    for (std::size_t index=0; index<oifmpib_list.len(); index++)
    {
        if(oifmpib_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifmpib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifMpib-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList>();
        ent_->parent = this;
        oifmpib_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oifmpib_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifMpib-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::OifMpibList()
    :
    oifmpibname{YType::str, "oifMpibName"},
    staleoif{YType::boolean, "staleOif"},
    vpcsvi{YType::boolean, "vpcSvi"}
{

    yang_name = "OifMpib-list"; yang_parent_name = "oifmpib-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::~OifMpibList()
{
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::has_data() const
{
    if (is_presence_container) return true;
    return oifmpibname.is_set
	|| staleoif.is_set
	|| vpcsvi.is_set;
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifmpibname.yfilter)
	|| ydk::is_set(staleoif.yfilter)
	|| ydk::is_set(vpcsvi.yfilter);
}

std::string System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifMpib-list";
    ADD_KEY_TOKEN(oifmpibname, "oifMpibName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifmpibname.is_set || is_set(oifmpibname.yfilter)) leaf_name_data.push_back(oifmpibname.get_name_leafdata());
    if (staleoif.is_set || is_set(staleoif.yfilter)) leaf_name_data.push_back(staleoif.get_name_leafdata());
    if (vpcsvi.is_set || is_set(vpcsvi.yfilter)) leaf_name_data.push_back(vpcsvi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oifMpibName")
    {
        oifmpibname = value;
        oifmpibname.value_namespace = name_space;
        oifmpibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleOif")
    {
        staleoif = value;
        staleoif.value_namespace = name_space;
        staleoif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcSvi")
    {
        vpcsvi = value;
        vpcsvi.value_namespace = name_space;
        vpcsvi.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oifMpibName")
    {
        oifmpibname.yfilter = yfilter;
    }
    if(value_path == "staleOif")
    {
        staleoif.yfilter = yfilter;
    }
    if(value_path == "vpcSvi")
    {
        vpcsvi.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oifMpibName" || name == "staleOif" || name == "vpcSvi")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::M6ribItems::InstItems::DomItems::~DomItems()
{
}

bool System::M6ribItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/m6rib-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::M6ribItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    mtu{YType::uint32, "mtu"},
    autoenable{YType::boolean, "autoEnable"},
    lognbhchng{YType::boolean, "logNbhChng"},
    flushroutes{YType::boolean, "flushRoutes"},
    bfd{YType::boolean, "bfd"},
    jpdelay{YType::uint32, "jpDelay"},
    regratelmt{YType::uint32, "regRateLmt"},
    rfcstrict{YType::boolean, "rfcStrict"}
        ,
    config_items(std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::ConfigItems>())
    , rpfmeter_items(std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems>())
    , lasthopmeter_items(std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems>())
    , eventhist_items(std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::EventhistItems>())
    , loglevel_items(std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems>())
    , notify_items(std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::NotifyItems>())
{
    config_items->parent = this;
    rpfmeter_items->parent = this;
    lasthopmeter_items->parent = this;
    eventhist_items->parent = this;
    loglevel_items->parent = this;
    notify_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::M6ribItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| mtu.is_set
	|| autoenable.is_set
	|| lognbhchng.is_set
	|| flushroutes.is_set
	|| bfd.is_set
	|| jpdelay.is_set
	|| regratelmt.is_set
	|| rfcstrict.is_set
	|| (config_items !=  nullptr && config_items->has_data())
	|| (rpfmeter_items !=  nullptr && rpfmeter_items->has_data())
	|| (lasthopmeter_items !=  nullptr && lasthopmeter_items->has_data())
	|| (eventhist_items !=  nullptr && eventhist_items->has_data())
	|| (loglevel_items !=  nullptr && loglevel_items->has_data())
	|| (notify_items !=  nullptr && notify_items->has_data());
}

bool System::M6ribItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(autoenable.yfilter)
	|| ydk::is_set(lognbhchng.yfilter)
	|| ydk::is_set(flushroutes.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(jpdelay.yfilter)
	|| ydk::is_set(regratelmt.yfilter)
	|| ydk::is_set(rfcstrict.yfilter)
	|| (config_items !=  nullptr && config_items->has_operation())
	|| (rpfmeter_items !=  nullptr && rpfmeter_items->has_operation())
	|| (lasthopmeter_items !=  nullptr && lasthopmeter_items->has_operation())
	|| (eventhist_items !=  nullptr && eventhist_items->has_operation())
	|| (loglevel_items !=  nullptr && loglevel_items->has_operation())
	|| (notify_items !=  nullptr && notify_items->has_operation());
}

std::string System::M6ribItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/m6rib-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::M6ribItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (autoenable.is_set || is_set(autoenable.yfilter)) leaf_name_data.push_back(autoenable.get_name_leafdata());
    if (lognbhchng.is_set || is_set(lognbhchng.yfilter)) leaf_name_data.push_back(lognbhchng.get_name_leafdata());
    if (flushroutes.is_set || is_set(flushroutes.yfilter)) leaf_name_data.push_back(flushroutes.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (jpdelay.is_set || is_set(jpdelay.yfilter)) leaf_name_data.push_back(jpdelay.get_name_leafdata());
    if (regratelmt.is_set || is_set(regratelmt.yfilter)) leaf_name_data.push_back(regratelmt.get_name_leafdata());
    if (rfcstrict.is_set || is_set(rfcstrict.yfilter)) leaf_name_data.push_back(rfcstrict.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-items")
    {
        if(config_items == nullptr)
        {
            config_items = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::ConfigItems>();
        }
        return config_items;
    }

    if(child_yang_name == "rpfmeter-items")
    {
        if(rpfmeter_items == nullptr)
        {
            rpfmeter_items = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems>();
        }
        return rpfmeter_items;
    }

    if(child_yang_name == "lasthopmeter-items")
    {
        if(lasthopmeter_items == nullptr)
        {
            lasthopmeter_items = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems>();
        }
        return lasthopmeter_items;
    }

    if(child_yang_name == "eventhist-items")
    {
        if(eventhist_items == nullptr)
        {
            eventhist_items = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::EventhistItems>();
        }
        return eventhist_items;
    }

    if(child_yang_name == "loglevel-items")
    {
        if(loglevel_items == nullptr)
        {
            loglevel_items = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems>();
        }
        return loglevel_items;
    }

    if(child_yang_name == "notify-items")
    {
        if(notify_items == nullptr)
        {
            notify_items = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::NotifyItems>();
        }
        return notify_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_items != nullptr)
    {
        _children["config-items"] = config_items;
    }

    if(rpfmeter_items != nullptr)
    {
        _children["rpfmeter-items"] = rpfmeter_items;
    }

    if(lasthopmeter_items != nullptr)
    {
        _children["lasthopmeter-items"] = lasthopmeter_items;
    }

    if(eventhist_items != nullptr)
    {
        _children["eventhist-items"] = eventhist_items;
    }

    if(loglevel_items != nullptr)
    {
        _children["loglevel-items"] = loglevel_items;
    }

    if(notify_items != nullptr)
    {
        _children["notify-items"] = notify_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoEnable")
    {
        autoenable = value;
        autoenable.value_namespace = name_space;
        autoenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng = value;
        lognbhchng.value_namespace = name_space;
        lognbhchng.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes = value;
        flushroutes.value_namespace = name_space;
        flushroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpDelay")
    {
        jpdelay = value;
        jpdelay.value_namespace = name_space;
        jpdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRateLmt")
    {
        regratelmt = value;
        regratelmt.value_namespace = name_space;
        regratelmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rfcStrict")
    {
        rfcstrict = value;
        rfcstrict.value_namespace = name_space;
        rfcstrict.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "autoEnable")
    {
        autoenable.yfilter = yfilter;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng.yfilter = yfilter;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "jpDelay")
    {
        jpdelay.yfilter = yfilter;
    }
    if(value_path == "regRateLmt")
    {
        regratelmt.yfilter = yfilter;
    }
    if(value_path == "rfcStrict")
    {
        rfcstrict.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-items" || name == "rpfmeter-items" || name == "lasthopmeter-items" || name == "eventhist-items" || name == "loglevel-items" || name == "notify-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "mtu" || name == "autoEnable" || name == "logNbhChng" || name == "flushRoutes" || name == "bfd" || name == "jpDelay" || name == "regRateLmt" || name == "rfcStrict")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::ConfigItems()
    :
    holdenable{YType::enumeration, "holdEnable"},
    holddown{YType::uint16, "holddown"},
    compressbit{YType::boolean, "compressBit"}
{

    yang_name = "config-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::~ConfigItems()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::has_data() const
{
    if (is_presence_container) return true;
    return holdenable.is_set
	|| holddown.is_set
	|| compressbit.is_set;
}

bool System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdenable.yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(compressbit.yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdenable.is_set || is_set(holdenable.yfilter)) leaf_name_data.push_back(holdenable.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (compressbit.is_set || is_set(compressbit.yfilter)) leaf_name_data.push_back(compressbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdEnable")
    {
        holdenable = value;
        holdenable.value_namespace = name_space;
        holdenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compressBit")
    {
        compressbit = value;
        compressbit.value_namespace = name_space;
        compressbit.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdEnable")
    {
        holdenable.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "compressBit")
    {
        compressbit.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DomItems::DomList::ConfigItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdEnable" || name == "holddown" || name == "compressBit")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::RpfmeterItems()
    :
    hwdropall{YType::boolean, "hwDropAll"},
    kbps{YType::uint32, "kbps"},
    burstsize{YType::uint32, "burstSize"}
{

    yang_name = "rpfmeter-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::~RpfmeterItems()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::has_data() const
{
    if (is_presence_container) return true;
    return hwdropall.is_set
	|| kbps.is_set
	|| burstsize.is_set;
}

bool System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hwdropall.yfilter)
	|| ydk::is_set(kbps.yfilter)
	|| ydk::is_set(burstsize.yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfmeter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hwdropall.is_set || is_set(hwdropall.yfilter)) leaf_name_data.push_back(hwdropall.get_name_leafdata());
    if (kbps.is_set || is_set(kbps.yfilter)) leaf_name_data.push_back(kbps.get_name_leafdata());
    if (burstsize.is_set || is_set(burstsize.yfilter)) leaf_name_data.push_back(burstsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hwDropAll")
    {
        hwdropall = value;
        hwdropall.value_namespace = name_space;
        hwdropall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kbps")
    {
        kbps = value;
        kbps.value_namespace = name_space;
        kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstSize")
    {
        burstsize = value;
        burstsize.value_namespace = name_space;
        burstsize.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hwDropAll")
    {
        hwdropall.yfilter = yfilter;
    }
    if(value_path == "kbps")
    {
        kbps.yfilter = yfilter;
    }
    if(value_path == "burstSize")
    {
        burstsize.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hwDropAll" || name == "kbps" || name == "burstSize")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::LasthopmeterItems()
    :
    kbps{YType::uint32, "kbps"},
    burstsize{YType::uint32, "burstSize"}
{

    yang_name = "lasthopmeter-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::~LasthopmeterItems()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::has_data() const
{
    if (is_presence_container) return true;
    return kbps.is_set
	|| burstsize.is_set;
}

bool System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kbps.yfilter)
	|| ydk::is_set(burstsize.yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lasthopmeter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbps.is_set || is_set(kbps.yfilter)) leaf_name_data.push_back(kbps.get_name_leafdata());
    if (burstsize.is_set || is_set(burstsize.yfilter)) leaf_name_data.push_back(burstsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kbps")
    {
        kbps = value;
        kbps.value_namespace = name_space;
        kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstSize")
    {
        burstsize = value;
        burstsize.value_namespace = name_space;
        burstsize.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kbps")
    {
        kbps.yfilter = yfilter;
    }
    if(value_path == "burstSize")
    {
        burstsize.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kbps" || name == "burstSize")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventhistItems()
    :
    eventhistory_list(this, {"type"})
{

    yang_name = "eventhist-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::~EventhistItems()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::has_operation() const
{
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventhist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventHistory-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList>();
        ent_->parent = this;
        eventhistory_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eventhistory_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventHistory-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::EventHistoryList()
    :
    type{YType::enumeration, "type"},
    size{YType::uint32, "size"}
{

    yang_name = "EventHistory-list"; yang_parent_name = "eventhist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::~EventHistoryList()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| size.is_set;
}

bool System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventHistory-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "size")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::LoglevelItems()
    :
    level{YType::uint16, "level"},
    type{YType::str, "type"}
{

    yang_name = "loglevel-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::~LoglevelItems()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| type.is_set;
}

bool System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loglevel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type")
        return true;
    return false;
}

System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::NotifyItems()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "notify-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::~NotifyItems()
{
}

bool System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::DomItems::DomList::NotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::RoutedbItems()
    :
    vrf_items(std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems>())
{
    vrf_items->parent = this;

    yang_name = "routedb-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::M6ribItems::InstItems::RoutedbItems::~RoutedbItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::has_data() const
{
    if (is_presence_container) return true;
    return (vrf_items !=  nullptr && vrf_items->has_data());
}

bool System::M6ribItems::InstItems::RoutedbItems::has_operation() const
{
    return is_set(yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation());
}

std::string System::M6ribItems::InstItems::RoutedbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/m6rib-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::M6ribItems::InstItems::RoutedbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routedb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems>();
        }
        return vrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfItems()
    :
    vrf_list(this, {"name"})
{

    yang_name = "vrf-items"; yang_parent_name = "routedb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::~VrfItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/m6rib-items/inst-items/routedb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vrf-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList>();
        ent_->parent = this;
        vrf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vrf-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::VrfList()
    :
    name{YType::str, "name"},
    cid{YType::uint32, "cid"},
    tableid{YType::str, "tableId"},
    totalnumroutes{YType::uint32, "totalNumRoutes"},
    totalnumgroups{YType::uint32, "totalNumGroups"},
    stargroute{YType::uint32, "starGRoute"},
    sgroute{YType::uint32, "sgRoute"},
    stargprfx{YType::uint32, "starGPrfx"}
        ,
    group_items(std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems>())
{
    group_items->parent = this;

    yang_name = "Vrf-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::~VrfList()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| cid.is_set
	|| tableid.is_set
	|| totalnumroutes.is_set
	|| totalnumgroups.is_set
	|| stargroute.is_set
	|| sgroute.is_set
	|| stargprfx.is_set
	|| (group_items !=  nullptr && group_items->has_data());
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cid.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(totalnumroutes.yfilter)
	|| ydk::is_set(totalnumgroups.yfilter)
	|| ydk::is_set(stargroute.yfilter)
	|| ydk::is_set(sgroute.yfilter)
	|| ydk::is_set(stargprfx.yfilter)
	|| (group_items !=  nullptr && group_items->has_operation());
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/m6rib-items/inst-items/routedb-items/vrf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vrf-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cid.is_set || is_set(cid.yfilter)) leaf_name_data.push_back(cid.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (totalnumroutes.is_set || is_set(totalnumroutes.yfilter)) leaf_name_data.push_back(totalnumroutes.get_name_leafdata());
    if (totalnumgroups.is_set || is_set(totalnumgroups.yfilter)) leaf_name_data.push_back(totalnumgroups.get_name_leafdata());
    if (stargroute.is_set || is_set(stargroute.yfilter)) leaf_name_data.push_back(stargroute.get_name_leafdata());
    if (sgroute.is_set || is_set(sgroute.yfilter)) leaf_name_data.push_back(sgroute.get_name_leafdata());
    if (stargprfx.is_set || is_set(stargprfx.yfilter)) leaf_name_data.push_back(stargprfx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems>();
        }
        return group_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_items != nullptr)
    {
        _children["group-items"] = group_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cid")
    {
        cid = value;
        cid.value_namespace = name_space;
        cid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes = value;
        totalnumroutes.value_namespace = name_space;
        totalnumroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalNumGroups")
    {
        totalnumgroups = value;
        totalnumgroups.value_namespace = name_space;
        totalnumgroups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starGRoute")
    {
        stargroute = value;
        stargroute.value_namespace = name_space;
        stargroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgRoute")
    {
        sgroute = value;
        sgroute.value_namespace = name_space;
        sgroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starGPrfx")
    {
        stargprfx = value;
        stargprfx.value_namespace = name_space;
        stargprfx.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "cid")
    {
        cid.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes.yfilter = yfilter;
    }
    if(value_path == "totalNumGroups")
    {
        totalnumgroups.yfilter = yfilter;
    }
    if(value_path == "starGRoute")
    {
        stargroute.yfilter = yfilter;
    }
    if(value_path == "sgRoute")
    {
        sgroute.yfilter = yfilter;
    }
    if(value_path == "starGPrfx")
    {
        stargprfx.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-items" || name == "name" || name == "cid" || name == "tableId" || name == "totalNumRoutes" || name == "totalNumGroups" || name == "starGRoute" || name == "sgRoute" || name == "starGPrfx")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupItems()
    :
    group_list(this, {"grpaddr"})
{

    yang_name = "group-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::~GroupItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Group-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList>();
        ent_->parent = this;
        group_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Group-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::GroupList()
    :
    grpaddr{YType::str, "grpAddr"},
    grpmasklen{YType::uint32, "grpMasklen"},
    bidir{YType::boolean, "bidir"}
        ,
    source_items(std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems>())
{
    source_items->parent = this;

    yang_name = "Group-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::~GroupList()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return grpaddr.is_set
	|| grpmasklen.is_set
	|| bidir.is_set
	|| (source_items !=  nullptr && source_items->has_data());
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| ydk::is_set(grpmasklen.yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Group-list";
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());
    if (grpmasklen.is_set || is_set(grpmasklen.yfilter)) leaf_name_data.push_back(grpmasklen.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_items != nullptr)
    {
        _children["source-items"] = source_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpAddr")
    {
        grpaddr = value;
        grpaddr.value_namespace = name_space;
        grpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpMasklen")
    {
        grpmasklen = value;
        grpmasklen.value_namespace = name_space;
        grpmasklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpAddr")
    {
        grpaddr.yfilter = yfilter;
    }
    if(value_path == "grpMasklen")
    {
        grpmasklen.yfilter = yfilter;
    }
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-items" || name == "grpAddr" || name == "grpMasklen" || name == "bidir")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceItems()
    :
    source_list(this, {"srcaddr"})
{

    yang_name = "source-items"; yang_parent_name = "Group-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::~SourceItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Source-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList>();
        ent_->parent = this;
        source_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : source_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Source-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::SourceList()
    :
    srcaddr{YType::str, "srcAddr"},
    pending{YType::boolean, "pending"},
    uptime{YType::str, "uptime"},
    oifcount{YType::uint32, "oifcount"},
    statspkts{YType::uint32, "statsPkts"},
    statsbytes{YType::uint32, "statsBytes"},
    statsratebuf{YType::str, "statsRateBuf"},
    lispsrcrloc{YType::str, "lispSrcRloc"},
    routeiif{YType::str, "routeIif"},
    rpfnbr{YType::str, "rpfNbr"},
    internal{YType::boolean, "internal"},
    rpfnbruptime{YType::str, "rpfNbrUptime"},
    fabricoif{YType::boolean, "fabricOif"},
    fabricloser{YType::boolean, "fabricLoser"},
    numvpcsvioifs{YType::uint32, "numVpcSviOifs"},
    routemdtiod{YType::boolean, "routeMdtIod"},
    mdtencapindex{YType::uint32, "mdtEncapIndex"}
        ,
    mpib_items(std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems>())
    , oif_items(std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>())
{
    mpib_items->parent = this;
    oif_items->parent = this;

    yang_name = "Source-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::~SourceList()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| pending.is_set
	|| uptime.is_set
	|| oifcount.is_set
	|| statspkts.is_set
	|| statsbytes.is_set
	|| statsratebuf.is_set
	|| lispsrcrloc.is_set
	|| routeiif.is_set
	|| rpfnbr.is_set
	|| internal.is_set
	|| rpfnbruptime.is_set
	|| fabricoif.is_set
	|| fabricloser.is_set
	|| numvpcsvioifs.is_set
	|| routemdtiod.is_set
	|| mdtencapindex.is_set
	|| (mpib_items !=  nullptr && mpib_items->has_data())
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(pending.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(oifcount.yfilter)
	|| ydk::is_set(statspkts.yfilter)
	|| ydk::is_set(statsbytes.yfilter)
	|| ydk::is_set(statsratebuf.yfilter)
	|| ydk::is_set(lispsrcrloc.yfilter)
	|| ydk::is_set(routeiif.yfilter)
	|| ydk::is_set(rpfnbr.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(rpfnbruptime.yfilter)
	|| ydk::is_set(fabricoif.yfilter)
	|| ydk::is_set(fabricloser.yfilter)
	|| ydk::is_set(numvpcsvioifs.yfilter)
	|| ydk::is_set(routemdtiod.yfilter)
	|| ydk::is_set(mdtencapindex.yfilter)
	|| (mpib_items !=  nullptr && mpib_items->has_operation())
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Source-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (pending.is_set || is_set(pending.yfilter)) leaf_name_data.push_back(pending.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());
    if (statspkts.is_set || is_set(statspkts.yfilter)) leaf_name_data.push_back(statspkts.get_name_leafdata());
    if (statsbytes.is_set || is_set(statsbytes.yfilter)) leaf_name_data.push_back(statsbytes.get_name_leafdata());
    if (statsratebuf.is_set || is_set(statsratebuf.yfilter)) leaf_name_data.push_back(statsratebuf.get_name_leafdata());
    if (lispsrcrloc.is_set || is_set(lispsrcrloc.yfilter)) leaf_name_data.push_back(lispsrcrloc.get_name_leafdata());
    if (routeiif.is_set || is_set(routeiif.yfilter)) leaf_name_data.push_back(routeiif.get_name_leafdata());
    if (rpfnbr.is_set || is_set(rpfnbr.yfilter)) leaf_name_data.push_back(rpfnbr.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (rpfnbruptime.is_set || is_set(rpfnbruptime.yfilter)) leaf_name_data.push_back(rpfnbruptime.get_name_leafdata());
    if (fabricoif.is_set || is_set(fabricoif.yfilter)) leaf_name_data.push_back(fabricoif.get_name_leafdata());
    if (fabricloser.is_set || is_set(fabricloser.yfilter)) leaf_name_data.push_back(fabricloser.get_name_leafdata());
    if (numvpcsvioifs.is_set || is_set(numvpcsvioifs.yfilter)) leaf_name_data.push_back(numvpcsvioifs.get_name_leafdata());
    if (routemdtiod.is_set || is_set(routemdtiod.yfilter)) leaf_name_data.push_back(routemdtiod.get_name_leafdata());
    if (mdtencapindex.is_set || is_set(mdtencapindex.yfilter)) leaf_name_data.push_back(mdtencapindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpib-items")
    {
        if(mpib_items == nullptr)
        {
            mpib_items = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems>();
        }
        return mpib_items;
    }

    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpib_items != nullptr)
    {
        _children["mpib-items"] = mpib_items;
    }

    if(oif_items != nullptr)
    {
        _children["oif-items"] = oif_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending")
    {
        pending = value;
        pending.value_namespace = name_space;
        pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifcount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsPkts")
    {
        statspkts = value;
        statspkts.value_namespace = name_space;
        statspkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsBytes")
    {
        statsbytes = value;
        statsbytes.value_namespace = name_space;
        statsbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsRateBuf")
    {
        statsratebuf = value;
        statsratebuf.value_namespace = name_space;
        statsratebuf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lispSrcRloc")
    {
        lispsrcrloc = value;
        lispsrcrloc.value_namespace = name_space;
        lispsrcrloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeIif")
    {
        routeiif = value;
        routeiif.value_namespace = name_space;
        routeiif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr = value;
        rpfnbr.value_namespace = name_space;
        rpfnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbrUptime")
    {
        rpfnbruptime = value;
        rpfnbruptime.value_namespace = name_space;
        rpfnbruptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricOif")
    {
        fabricoif = value;
        fabricoif.value_namespace = name_space;
        fabricoif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricLoser")
    {
        fabricloser = value;
        fabricloser.value_namespace = name_space;
        fabricloser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numVpcSviOifs")
    {
        numvpcsvioifs = value;
        numvpcsvioifs.value_namespace = name_space;
        numvpcsvioifs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeMdtIod")
    {
        routemdtiod = value;
        routemdtiod.value_namespace = name_space;
        routemdtiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdtEncapIndex")
    {
        mdtencapindex = value;
        mdtencapindex.value_namespace = name_space;
        mdtencapindex.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "pending")
    {
        pending.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "oifcount")
    {
        oifcount.yfilter = yfilter;
    }
    if(value_path == "statsPkts")
    {
        statspkts.yfilter = yfilter;
    }
    if(value_path == "statsBytes")
    {
        statsbytes.yfilter = yfilter;
    }
    if(value_path == "statsRateBuf")
    {
        statsratebuf.yfilter = yfilter;
    }
    if(value_path == "lispSrcRloc")
    {
        lispsrcrloc.yfilter = yfilter;
    }
    if(value_path == "routeIif")
    {
        routeiif.yfilter = yfilter;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "rpfNbrUptime")
    {
        rpfnbruptime.yfilter = yfilter;
    }
    if(value_path == "fabricOif")
    {
        fabricoif.yfilter = yfilter;
    }
    if(value_path == "fabricLoser")
    {
        fabricloser.yfilter = yfilter;
    }
    if(value_path == "numVpcSviOifs")
    {
        numvpcsvioifs.yfilter = yfilter;
    }
    if(value_path == "routeMdtIod")
    {
        routemdtiod.yfilter = yfilter;
    }
    if(value_path == "mdtEncapIndex")
    {
        mdtencapindex.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpib-items" || name == "oif-items" || name == "srcAddr" || name == "pending" || name == "uptime" || name == "oifcount" || name == "statsPkts" || name == "statsBytes" || name == "statsRateBuf" || name == "lispSrcRloc" || name == "routeIif" || name == "rpfNbr" || name == "internal" || name == "rpfNbrUptime" || name == "fabricOif" || name == "fabricLoser" || name == "numVpcSviOifs" || name == "routeMdtIod" || name == "mdtEncapIndex")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibItems()
    :
    mpib_list(this, {"mpibname"})
{

    yang_name = "mpib-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::~MpibItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mpib_list.len(); index++)
    {
        if(mpib_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::has_operation() const
{
    for (std::size_t index=0; index<mpib_list.len(); index++)
    {
        if(mpib_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mpib-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList>();
        ent_->parent = this;
        mpib_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mpib_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mpib-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::MpibList()
    :
    mpibname{YType::str, "mpibName"},
    oifcount{YType::uint32, "oifCount"},
    staleroute{YType::boolean, "staleRoute"}
{

    yang_name = "Mpib-list"; yang_parent_name = "mpib-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::~MpibList()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::has_data() const
{
    if (is_presence_container) return true;
    return mpibname.is_set
	|| oifcount.is_set
	|| staleroute.is_set;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpibname.yfilter)
	|| ydk::is_set(oifcount.yfilter)
	|| ydk::is_set(staleroute.yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mpib-list";
    ADD_KEY_TOKEN(mpibname, "mpibName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpibname.is_set || is_set(mpibname.yfilter)) leaf_name_data.push_back(mpibname.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());
    if (staleroute.is_set || is_set(staleroute.yfilter)) leaf_name_data.push_back(staleroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpibName")
    {
        mpibname = value;
        mpibname.value_namespace = name_space;
        mpibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifCount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleRoute")
    {
        staleroute = value;
        staleroute.value_namespace = name_space;
        staleroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpibName")
    {
        mpibname.yfilter = yfilter;
    }
    if(value_path == "oifCount")
    {
        oifcount.yfilter = yfilter;
    }
    if(value_path == "staleRoute")
    {
        staleroute.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpibName" || name == "oifCount" || name == "staleRoute")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifItems()
    :
    oif_list(this, {"oifname"})
{

    yang_name = "oif-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::~OifItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Oif-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList>();
        ent_->parent = this;
        oif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Oif-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifList()
    :
    oifname{YType::str, "oifName"},
    oifuptime{YType::str, "oifUptime"},
    oifrpf{YType::boolean, "oifRPF"},
    oiflispencapentries{YType::uint32, "oifLispEncapEntries"}
        ,
    lispencap_items(std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems>())
    , oifmpib_items(std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems>())
{
    lispencap_items->parent = this;
    oifmpib_items->parent = this;

    yang_name = "Oif-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::~OifList()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_data() const
{
    if (is_presence_container) return true;
    return oifname.is_set
	|| oifuptime.is_set
	|| oifrpf.is_set
	|| oiflispencapentries.is_set
	|| (lispencap_items !=  nullptr && lispencap_items->has_data())
	|| (oifmpib_items !=  nullptr && oifmpib_items->has_data());
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifname.yfilter)
	|| ydk::is_set(oifuptime.yfilter)
	|| ydk::is_set(oifrpf.yfilter)
	|| ydk::is_set(oiflispencapentries.yfilter)
	|| (lispencap_items !=  nullptr && lispencap_items->has_operation())
	|| (oifmpib_items !=  nullptr && oifmpib_items->has_operation());
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Oif-list";
    ADD_KEY_TOKEN(oifname, "oifName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifname.is_set || is_set(oifname.yfilter)) leaf_name_data.push_back(oifname.get_name_leafdata());
    if (oifuptime.is_set || is_set(oifuptime.yfilter)) leaf_name_data.push_back(oifuptime.get_name_leafdata());
    if (oifrpf.is_set || is_set(oifrpf.yfilter)) leaf_name_data.push_back(oifrpf.get_name_leafdata());
    if (oiflispencapentries.is_set || is_set(oiflispencapentries.yfilter)) leaf_name_data.push_back(oiflispencapentries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lispencap-items")
    {
        if(lispencap_items == nullptr)
        {
            lispencap_items = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems>();
        }
        return lispencap_items;
    }

    if(child_yang_name == "oifmpib-items")
    {
        if(oifmpib_items == nullptr)
        {
            oifmpib_items = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems>();
        }
        return oifmpib_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lispencap_items != nullptr)
    {
        _children["lispencap-items"] = lispencap_items;
    }

    if(oifmpib_items != nullptr)
    {
        _children["oifmpib-items"] = oifmpib_items;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oifName")
    {
        oifname = value;
        oifname.value_namespace = name_space;
        oifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifUptime")
    {
        oifuptime = value;
        oifuptime.value_namespace = name_space;
        oifuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifRPF")
    {
        oifrpf = value;
        oifrpf.value_namespace = name_space;
        oifrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries = value;
        oiflispencapentries.value_namespace = name_space;
        oiflispencapentries.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oifName")
    {
        oifname.yfilter = yfilter;
    }
    if(value_path == "oifUptime")
    {
        oifuptime.yfilter = yfilter;
    }
    if(value_path == "oifRPF")
    {
        oifrpf.yfilter = yfilter;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lispencap-items" || name == "oifmpib-items" || name == "oifName" || name == "oifUptime" || name == "oifRPF" || name == "oifLispEncapEntries")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispencapItems()
    :
    lispencap_list(this, {"index_"})
{

    yang_name = "lispencap-items"; yang_parent_name = "Oif-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::~LispencapItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lispencap_list.len(); index++)
    {
        if(lispencap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::has_operation() const
{
    for (std::size_t index=0; index<lispencap_list.len(); index++)
    {
        if(lispencap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lispencap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LispEncap-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList>();
        ent_->parent = this;
        lispencap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lispencap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LispEncap-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::LispEncapList()
    :
    index_{YType::uint32, "index"},
    srcrloc{YType::str, "srcRloc"},
    dstrloc{YType::str, "dstRloc"}
{

    yang_name = "LispEncap-list"; yang_parent_name = "lispencap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::~LispEncapList()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| srcrloc.is_set
	|| dstrloc.is_set;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(srcrloc.yfilter)
	|| ydk::is_set(dstrloc.yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LispEncap-list";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (srcrloc.is_set || is_set(srcrloc.yfilter)) leaf_name_data.push_back(srcrloc.get_name_leafdata());
    if (dstrloc.is_set || is_set(dstrloc.yfilter)) leaf_name_data.push_back(dstrloc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcRloc")
    {
        srcrloc = value;
        srcrloc.value_namespace = name_space;
        srcrloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstRloc")
    {
        dstrloc = value;
        dstrloc.value_namespace = name_space;
        dstrloc.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "srcRloc")
    {
        srcrloc.yfilter = yfilter;
    }
    if(value_path == "dstRloc")
    {
        dstrloc.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "srcRloc" || name == "dstRloc")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifmpibItems()
    :
    oifmpib_list(this, {"oifmpibname"})
{

    yang_name = "oifmpib-items"; yang_parent_name = "Oif-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::~OifmpibItems()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oifmpib_list.len(); index++)
    {
        if(oifmpib_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::has_operation() const
{
    for (std::size_t index=0; index<oifmpib_list.len(); index++)
    {
        if(oifmpib_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifmpib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifMpib-list")
    {
        auto ent_ = std::make_shared<System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList>();
        ent_->parent = this;
        oifmpib_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oifmpib_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifMpib-list")
        return true;
    return false;
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::OifMpibList()
    :
    oifmpibname{YType::str, "oifMpibName"},
    staleoif{YType::boolean, "staleOif"},
    vpcsvi{YType::boolean, "vpcSvi"}
{

    yang_name = "OifMpib-list"; yang_parent_name = "oifmpib-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::~OifMpibList()
{
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::has_data() const
{
    if (is_presence_container) return true;
    return oifmpibname.is_set
	|| staleoif.is_set
	|| vpcsvi.is_set;
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifmpibname.yfilter)
	|| ydk::is_set(staleoif.yfilter)
	|| ydk::is_set(vpcsvi.yfilter);
}

std::string System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifMpib-list";
    ADD_KEY_TOKEN(oifmpibname, "oifMpibName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifmpibname.is_set || is_set(oifmpibname.yfilter)) leaf_name_data.push_back(oifmpibname.get_name_leafdata());
    if (staleoif.is_set || is_set(staleoif.yfilter)) leaf_name_data.push_back(staleoif.get_name_leafdata());
    if (vpcsvi.is_set || is_set(vpcsvi.yfilter)) leaf_name_data.push_back(vpcsvi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oifMpibName")
    {
        oifmpibname = value;
        oifmpibname.value_namespace = name_space;
        oifmpibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleOif")
    {
        staleoif = value;
        staleoif.value_namespace = name_space;
        staleoif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcSvi")
    {
        vpcsvi = value;
        vpcsvi.value_namespace = name_space;
        vpcsvi.value_namespace_prefix = name_space_prefix;
    }
}

void System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oifMpibName")
    {
        oifmpibname.yfilter = yfilter;
    }
    if(value_path == "staleOif")
    {
        staleoif.yfilter = yfilter;
    }
    if(value_path == "vpcSvi")
    {
        vpcsvi.yfilter = yfilter;
    }
}

bool System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oifMpibName" || name == "staleOif" || name == "vpcSvi")
        return true;
    return false;
}

System::MacsecItems::MacsecItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::MacsecItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "macsec-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacsecItems::~MacsecItems()
{
}

bool System::MacsecItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::MacsecItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::MacsecItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacsecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacsecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::MacsecItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacsecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::MacsecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MacsecItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MacsecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::MacsecItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
{

    yang_name = "inst-items"; yang_parent_name = "macsec-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacsecItems::InstItems::~InstItems()
{
}

bool System::MacsecItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set;
}

bool System::MacsecItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter);
}

std::string System::MacsecItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macsec-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacsecItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MacsecItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MacsecItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MacsecItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MacsecItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MacsecItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::McastfwdItems::McastfwdItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::McastfwdItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "mcastfwd-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McastfwdItems::~McastfwdItems()
{
}

bool System::McastfwdItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::McastfwdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::McastfwdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McastfwdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcastfwd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McastfwdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McastfwdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::McastfwdItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McastfwdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::McastfwdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::McastfwdItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::McastfwdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::McastfwdItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"},
    jpdelay{YType::uint32, "jpDelay"},
    nrdelay{YType::uint16, "nrDelay"},
    nrnumrt{YType::uint16, "nrNumRt"},
    regstop{YType::boolean, "regStop"}
        ,
    dom_items(std::make_shared<System::McastfwdItems::InstItems::DomItems>())
    , eventhist_items(std::make_shared<System::McastfwdItems::InstItems::EventhistItems>())
    , loglevel_items(std::make_shared<System::McastfwdItems::InstItems::LoglevelItems>())
    , swrepli_items(std::make_shared<System::McastfwdItems::InstItems::SwrepliItems>())
{
    dom_items->parent = this;
    eventhist_items->parent = this;
    loglevel_items->parent = this;
    swrepli_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "mcastfwd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McastfwdItems::InstItems::~InstItems()
{
}

bool System::McastfwdItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| jpdelay.is_set
	|| nrdelay.is_set
	|| nrnumrt.is_set
	|| regstop.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (eventhist_items !=  nullptr && eventhist_items->has_data())
	|| (loglevel_items !=  nullptr && loglevel_items->has_data())
	|| (swrepli_items !=  nullptr && swrepli_items->has_data());
}

bool System::McastfwdItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| ydk::is_set(jpdelay.yfilter)
	|| ydk::is_set(nrdelay.yfilter)
	|| ydk::is_set(nrnumrt.yfilter)
	|| ydk::is_set(regstop.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (eventhist_items !=  nullptr && eventhist_items->has_operation())
	|| (loglevel_items !=  nullptr && loglevel_items->has_operation())
	|| (swrepli_items !=  nullptr && swrepli_items->has_operation());
}

std::string System::McastfwdItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mcastfwd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McastfwdItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McastfwdItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());
    if (jpdelay.is_set || is_set(jpdelay.yfilter)) leaf_name_data.push_back(jpdelay.get_name_leafdata());
    if (nrdelay.is_set || is_set(nrdelay.yfilter)) leaf_name_data.push_back(nrdelay.get_name_leafdata());
    if (nrnumrt.is_set || is_set(nrnumrt.yfilter)) leaf_name_data.push_back(nrnumrt.get_name_leafdata());
    if (regstop.is_set || is_set(regstop.yfilter)) leaf_name_data.push_back(regstop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McastfwdItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::McastfwdItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "eventhist-items")
    {
        if(eventhist_items == nullptr)
        {
            eventhist_items = std::make_shared<System::McastfwdItems::InstItems::EventhistItems>();
        }
        return eventhist_items;
    }

    if(child_yang_name == "loglevel-items")
    {
        if(loglevel_items == nullptr)
        {
            loglevel_items = std::make_shared<System::McastfwdItems::InstItems::LoglevelItems>();
        }
        return loglevel_items;
    }

    if(child_yang_name == "swrepli-items")
    {
        if(swrepli_items == nullptr)
        {
            swrepli_items = std::make_shared<System::McastfwdItems::InstItems::SwrepliItems>();
        }
        return swrepli_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McastfwdItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(eventhist_items != nullptr)
    {
        _children["eventhist-items"] = eventhist_items;
    }

    if(loglevel_items != nullptr)
    {
        _children["loglevel-items"] = loglevel_items;
    }

    if(swrepli_items != nullptr)
    {
        _children["swrepli-items"] = swrepli_items;
    }

    return _children;
}

void System::McastfwdItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "jpDelay")
    {
        jpdelay = value;
        jpdelay.value_namespace = name_space;
        jpdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nrDelay")
    {
        nrdelay = value;
        nrdelay.value_namespace = name_space;
        nrdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nrNumRt")
    {
        nrnumrt = value;
        nrnumrt.value_namespace = name_space;
        nrnumrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStop")
    {
        regstop = value;
        regstop.value_namespace = name_space;
        regstop.value_namespace_prefix = name_space_prefix;
    }
}

void System::McastfwdItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "jpDelay")
    {
        jpdelay.yfilter = yfilter;
    }
    if(value_path == "nrDelay")
    {
        nrdelay.yfilter = yfilter;
    }
    if(value_path == "nrNumRt")
    {
        nrnumrt.yfilter = yfilter;
    }
    if(value_path == "regStop")
    {
        regstop.yfilter = yfilter;
    }
}

bool System::McastfwdItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "eventhist-items" || name == "loglevel-items" || name == "swrepli-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr" || name == "jpDelay" || name == "nrDelay" || name == "nrNumRt" || name == "regStop")
        return true;
    return false;
}

System::McastfwdItems::InstItems::DomItems::DomItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    mtu{YType::uint32, "mtu"},
    autoenable{YType::boolean, "autoEnable"},
    lognbhchng{YType::boolean, "logNbhChng"},
    flushroutes{YType::boolean, "flushRoutes"},
    bfd{YType::boolean, "bfd"},
    jpdelay{YType::uint32, "jpDelay"},
    regratelmt{YType::uint32, "regRateLmt"},
    rfcstrict{YType::boolean, "rfcStrict"}
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McastfwdItems::InstItems::DomItems::~DomItems()
{
}

bool System::McastfwdItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| mtu.is_set
	|| autoenable.is_set
	|| lognbhchng.is_set
	|| flushroutes.is_set
	|| bfd.is_set
	|| jpdelay.is_set
	|| regratelmt.is_set
	|| rfcstrict.is_set;
}

bool System::McastfwdItems::InstItems::DomItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(autoenable.yfilter)
	|| ydk::is_set(lognbhchng.yfilter)
	|| ydk::is_set(flushroutes.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(jpdelay.yfilter)
	|| ydk::is_set(regratelmt.yfilter)
	|| ydk::is_set(rfcstrict.yfilter);
}

std::string System::McastfwdItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mcastfwd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McastfwdItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McastfwdItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (autoenable.is_set || is_set(autoenable.yfilter)) leaf_name_data.push_back(autoenable.get_name_leafdata());
    if (lognbhchng.is_set || is_set(lognbhchng.yfilter)) leaf_name_data.push_back(lognbhchng.get_name_leafdata());
    if (flushroutes.is_set || is_set(flushroutes.yfilter)) leaf_name_data.push_back(flushroutes.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (jpdelay.is_set || is_set(jpdelay.yfilter)) leaf_name_data.push_back(jpdelay.get_name_leafdata());
    if (regratelmt.is_set || is_set(regratelmt.yfilter)) leaf_name_data.push_back(regratelmt.get_name_leafdata());
    if (rfcstrict.is_set || is_set(rfcstrict.yfilter)) leaf_name_data.push_back(rfcstrict.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McastfwdItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McastfwdItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::McastfwdItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoEnable")
    {
        autoenable = value;
        autoenable.value_namespace = name_space;
        autoenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng = value;
        lognbhchng.value_namespace = name_space;
        lognbhchng.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes = value;
        flushroutes.value_namespace = name_space;
        flushroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpDelay")
    {
        jpdelay = value;
        jpdelay.value_namespace = name_space;
        jpdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRateLmt")
    {
        regratelmt = value;
        regratelmt.value_namespace = name_space;
        regratelmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rfcStrict")
    {
        rfcstrict = value;
        rfcstrict.value_namespace = name_space;
        rfcstrict.value_namespace_prefix = name_space_prefix;
    }
}

void System::McastfwdItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "autoEnable")
    {
        autoenable.yfilter = yfilter;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng.yfilter = yfilter;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "jpDelay")
    {
        jpdelay.yfilter = yfilter;
    }
    if(value_path == "regRateLmt")
    {
        regratelmt.yfilter = yfilter;
    }
    if(value_path == "rfcStrict")
    {
        rfcstrict.yfilter = yfilter;
    }
}

bool System::McastfwdItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "adminSt" || name == "ctrl" || name == "mtu" || name == "autoEnable" || name == "logNbhChng" || name == "flushRoutes" || name == "bfd" || name == "jpDelay" || name == "regRateLmt" || name == "rfcStrict")
        return true;
    return false;
}

System::McastfwdItems::InstItems::EventhistItems::EventhistItems()
    :
    eventhistory_list(this, {"type"})
{

    yang_name = "eventhist-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McastfwdItems::InstItems::EventhistItems::~EventhistItems()
{
}

bool System::McastfwdItems::InstItems::EventhistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::McastfwdItems::InstItems::EventhistItems::has_operation() const
{
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::McastfwdItems::InstItems::EventhistItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mcastfwd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McastfwdItems::InstItems::EventhistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventhist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McastfwdItems::InstItems::EventhistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McastfwdItems::InstItems::EventhistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventHistory-list")
    {
        auto ent_ = std::make_shared<System::McastfwdItems::InstItems::EventhistItems::EventHistoryList>();
        ent_->parent = this;
        eventhistory_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McastfwdItems::InstItems::EventhistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eventhistory_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::McastfwdItems::InstItems::EventhistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::McastfwdItems::InstItems::EventhistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::McastfwdItems::InstItems::EventhistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventHistory-list")
        return true;
    return false;
}

System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::EventHistoryList()
    :
    type{YType::enumeration, "type"},
    size{YType::uint32, "size"}
{

    yang_name = "EventHistory-list"; yang_parent_name = "eventhist-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::~EventHistoryList()
{
}

bool System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| size.is_set;
}

bool System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mcastfwd-items/inst-items/eventhist-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventHistory-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::McastfwdItems::InstItems::EventhistItems::EventHistoryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "size")
        return true;
    return false;
}

System::McastfwdItems::InstItems::LoglevelItems::LoglevelItems()
    :
    lvltype{YType::enumeration, "lvltype"},
    level{YType::uint32, "level"}
{

    yang_name = "loglevel-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McastfwdItems::InstItems::LoglevelItems::~LoglevelItems()
{
}

bool System::McastfwdItems::InstItems::LoglevelItems::has_data() const
{
    if (is_presence_container) return true;
    return lvltype.is_set
	|| level.is_set;
}

bool System::McastfwdItems::InstItems::LoglevelItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lvltype.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string System::McastfwdItems::InstItems::LoglevelItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mcastfwd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McastfwdItems::InstItems::LoglevelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loglevel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McastfwdItems::InstItems::LoglevelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lvltype.is_set || is_set(lvltype.yfilter)) leaf_name_data.push_back(lvltype.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McastfwdItems::InstItems::LoglevelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McastfwdItems::InstItems::LoglevelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::McastfwdItems::InstItems::LoglevelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lvltype")
    {
        lvltype = value;
        lvltype.value_namespace = name_space;
        lvltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void System::McastfwdItems::InstItems::LoglevelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lvltype")
    {
        lvltype.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool System::McastfwdItems::InstItems::LoglevelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lvltype" || name == "level")
        return true;
    return false;
}

System::McastfwdItems::InstItems::SwrepliItems::SwrepliItems()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "swrepli-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::McastfwdItems::InstItems::SwrepliItems::~SwrepliItems()
{
}

bool System::McastfwdItems::InstItems::SwrepliItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool System::McastfwdItems::InstItems::SwrepliItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::McastfwdItems::InstItems::SwrepliItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mcastfwd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::McastfwdItems::InstItems::SwrepliItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swrepli-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::McastfwdItems::InstItems::SwrepliItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::McastfwdItems::InstItems::SwrepliItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::McastfwdItems::InstItems::SwrepliItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::McastfwdItems::InstItems::SwrepliItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::McastfwdItems::InstItems::SwrepliItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::McastfwdItems::InstItems::SwrepliItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

System::MldsnoopItems::MldsnoopItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::MldsnoopItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "mldsnoop-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MldsnoopItems::~MldsnoopItems()
{
}

bool System::MldsnoopItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::MldsnoopItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::MldsnoopItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MldsnoopItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mldsnoop-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::MldsnoopItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::MldsnoopItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    allrtrmcastencap{YType::str, "allRtrMcastEncap"},
    flags{YType::str, "flags"}
        ,
    dom_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems>())
    , inststats_items(std::make_shared<System::MldsnoopItems::InstItems::InststatsItems>())
{
    dom_items->parent = this;
    inststats_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "mldsnoop-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MldsnoopItems::InstItems::~InstItems()
{
}

bool System::MldsnoopItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| allrtrmcastencap.is_set
	|| flags.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (inststats_items !=  nullptr && inststats_items->has_data());
}

bool System::MldsnoopItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(allrtrmcastencap.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (inststats_items !=  nullptr && inststats_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mldsnoop-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MldsnoopItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (allrtrmcastencap.is_set || is_set(allrtrmcastencap.yfilter)) leaf_name_data.push_back(allrtrmcastencap.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "inststats-items")
    {
        if(inststats_items == nullptr)
        {
            inststats_items = std::make_shared<System::MldsnoopItems::InstItems::InststatsItems>();
        }
        return inststats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(inststats_items != nullptr)
    {
        _children["inststats-items"] = inststats_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "allRtrMcastEncap")
    {
        allrtrmcastencap = value;
        allrtrmcastencap.value_namespace = name_space;
        allrtrmcastencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "allRtrMcastEncap")
    {
        allrtrmcastencap.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "inststats-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "allRtrMcastEncap" || name == "flags")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"encap"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MldsnoopItems::InstItems::DomItems::~DomItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mldsnoop-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MldsnoopItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DomList()
    :
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    flags{YType::str, "flags"}
        ,
    db_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems>())
    , domstats_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems>())
    , strtrif_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems>())
    , rtrif_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems>())
    , querierp_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems>())
    , querierst_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems>())
{
    db_items->parent = this;
    domstats_items->parent = this;
    strtrif_items->parent = this;
    rtrif_items->parent = this;
    querierp_items->parent = this;
    querierst_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| name.is_set
	|| id.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| flags.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (domstats_items !=  nullptr && domstats_items->has_data())
	|| (strtrif_items !=  nullptr && strtrif_items->has_data())
	|| (rtrif_items !=  nullptr && rtrif_items->has_data())
	|| (querierp_items !=  nullptr && querierp_items->has_data())
	|| (querierst_items !=  nullptr && querierst_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (domstats_items !=  nullptr && domstats_items->has_operation())
	|| (strtrif_items !=  nullptr && strtrif_items->has_operation())
	|| (rtrif_items !=  nullptr && rtrif_items->has_operation())
	|| (querierp_items !=  nullptr && querierp_items->has_operation())
	|| (querierst_items !=  nullptr && querierst_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mldsnoop-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "domstats-items")
    {
        if(domstats_items == nullptr)
        {
            domstats_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems>();
        }
        return domstats_items;
    }

    if(child_yang_name == "strtrif-items")
    {
        if(strtrif_items == nullptr)
        {
            strtrif_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems>();
        }
        return strtrif_items;
    }

    if(child_yang_name == "rtrif-items")
    {
        if(rtrif_items == nullptr)
        {
            rtrif_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems>();
        }
        return rtrif_items;
    }

    if(child_yang_name == "querierp-items")
    {
        if(querierp_items == nullptr)
        {
            querierp_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems>();
        }
        return querierp_items;
    }

    if(child_yang_name == "querierst-items")
    {
        if(querierst_items == nullptr)
        {
            querierst_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems>();
        }
        return querierst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(domstats_items != nullptr)
    {
        _children["domstats-items"] = domstats_items;
    }

    if(strtrif_items != nullptr)
    {
        _children["strtrif-items"] = strtrif_items;
    }

    if(rtrif_items != nullptr)
    {
        _children["rtrif-items"] = rtrif_items;
    }

    if(querierp_items != nullptr)
    {
        _children["querierp-items"] = querierp_items;
    }

    if(querierst_items != nullptr)
    {
        _children["querierst-items"] = querierst_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "domstats-items" || name == "strtrif-items" || name == "rtrif-items" || name == "querierp-items" || name == "querierst-items" || name == "encap" || name == "name" || name == "id" || name == "adminSt" || name == "ctrl" || name == "flags")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::get_children() const
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"},
    totalmaccount{YType::uint32, "totalMacCount"}
        ,
    mcgrp_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems>())
{
    mcgrp_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| totalmaccount.is_set
	|| (mcgrp_items !=  nullptr && mcgrp_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(totalmaccount.yfilter)
	|| (mcgrp_items !=  nullptr && mcgrp_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (totalmaccount.is_set || is_set(totalmaccount.yfilter)) leaf_name_data.push_back(totalmaccount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcgrp-items")
    {
        if(mcgrp_items == nullptr)
        {
            mcgrp_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems>();
        }
        return mcgrp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mcgrp_items != nullptr)
    {
        _children["mcgrp-items"] = mcgrp_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "totalMacCount")
    {
        totalmaccount = value;
        totalmaccount.value_namespace = name_space;
        totalmaccount.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "totalMacCount")
    {
        totalmaccount.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcgrp-items" || name == "type" || name == "name" || name == "totalMacCount")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McgrpItems()
    :
    mcgrprec_list(this, {"addr"})
{

    yang_name = "mcgrp-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::~McgrpItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcgrprec_list.len(); index++)
    {
        if(mcgrprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::has_operation() const
{
    for (std::size_t index=0; index<mcgrprec_list.len(); index++)
    {
        if(mcgrprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McGrpRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList>();
        ent_->parent = this;
        mcgrprec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mcgrprec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McGrpRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::McGrpRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ver{YType::enumeration, "ver"}
        ,
    epg_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems>())
    , rep_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems>())
{
    epg_items->parent = this;
    rep_items->parent = this;

    yang_name = "McGrpRec-list"; yang_parent_name = "mcgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::~McGrpRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ver.is_set
	|| (epg_items !=  nullptr && epg_items->has_data())
	|| (rep_items !=  nullptr && rep_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| (epg_items !=  nullptr && epg_items->has_operation())
	|| (rep_items !=  nullptr && rep_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McGrpRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "epg-items")
    {
        if(epg_items == nullptr)
        {
            epg_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems>();
        }
        return epg_items;
    }

    if(child_yang_name == "rep-items")
    {
        if(rep_items == nullptr)
        {
            rep_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems>();
        }
        return rep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(epg_items != nullptr)
    {
        _children["epg-items"] = epg_items;
    }

    if(rep_items != nullptr)
    {
        _children["rep-items"] = rep_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "epg-items" || name == "rep-items" || name == "addr" || name == "name" || name == "ver")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgItems()
    :
    epgrec_list(this, {"fabencap"})
{

    yang_name = "epg-items"; yang_parent_name = "McGrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::~EpgItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<epgrec_list.len(); index++)
    {
        if(epgrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::has_operation() const
{
    for (std::size_t index=0; index<epgrec_list.len(); index++)
    {
        if(epgrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EpgRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList>();
        ent_->parent = this;
        epgrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : epgrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EpgRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::EpgRecList()
    :
    fabencap{YType::str, "fabEncap"},
    name{YType::str, "name"},
    id{YType::uint32, "id"}
        ,
    rep_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems>())
{
    rep_items->parent = this;

    yang_name = "EpgRec-list"; yang_parent_name = "epg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::~EpgRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::has_data() const
{
    if (is_presence_container) return true;
    return fabencap.is_set
	|| name.is_set
	|| id.is_set
	|| (rep_items !=  nullptr && rep_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabencap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (rep_items !=  nullptr && rep_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EpgRec-list";
    ADD_KEY_TOKEN(fabencap, "fabEncap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabencap.is_set || is_set(fabencap.yfilter)) leaf_name_data.push_back(fabencap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rep-items")
    {
        if(rep_items == nullptr)
        {
            rep_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems>();
        }
        return rep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rep_items != nullptr)
    {
        _children["rep-items"] = rep_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabEncap")
    {
        fabencap = value;
        fabencap.value_namespace = name_space;
        fabencap.value_namespace_prefix = name_space_prefix;
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabEncap")
    {
        fabencap.yfilter = yfilter;
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rep-items" || name == "fabEncap" || name == "name" || name == "id")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::RepItems()
    :
    reportrec_list(this, {"mcastsrc", "ver"})
{

    yang_name = "rep-items"; yang_parent_name = "EpgRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::~RepItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::has_operation() const
{
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReportRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList>();
        ent_->parent = this;
        reportrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reportrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReportRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::ReportRecList()
    :
    mcastsrc{YType::str, "mcastSrc"},
    ver{YType::enumeration, "ver"},
    name{YType::str, "name"},
    filtmode{YType::enumeration, "filtMode"},
    flags{YType::str, "flags"}
        ,
    oif_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "ReportRec-list"; yang_parent_name = "rep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::~ReportRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::has_data() const
{
    if (is_presence_container) return true;
    return mcastsrc.is_set
	|| ver.is_set
	|| name.is_set
	|| filtmode.is_set
	|| flags.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcastsrc.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(filtmode.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReportRec-list";
    ADD_KEY_TOKEN(mcastsrc, "mcastSrc");
    ADD_KEY_TOKEN(ver, "ver");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcastsrc.is_set || is_set(mcastsrc.yfilter)) leaf_name_data.push_back(mcastsrc.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (filtmode.is_set || is_set(filtmode.yfilter)) leaf_name_data.push_back(filtmode.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oif_items != nullptr)
    {
        _children["oif-items"] = oif_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcastSrc")
    {
        mcastsrc = value;
        mcastsrc.value_namespace = name_space;
        mcastsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filtMode")
    {
        filtmode = value;
        filtmode.value_namespace = name_space;
        filtmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcastSrc")
    {
        mcastsrc.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "filtMode")
    {
        filtmode.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "mcastSrc" || name == "ver" || name == "name" || name == "filtMode" || name == "flags")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OifItems()
    :
    oifrec_list(this, {"id"})
{

    yang_name = "oif-items"; yang_parent_name = "ReportRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::~OifItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OIFRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList>();
        ent_->parent = this;
        oifrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oifrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OIFRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::OIFRecList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"}
        ,
    host_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>())
{
    host_items->parent = this;

    yang_name = "OIFRec-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::~OIFRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| (host_items !=  nullptr && host_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (host_items !=  nullptr && host_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OIFRec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-items")
    {
        if(host_items == nullptr)
        {
            host_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>();
        }
        return host_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host_items != nullptr)
    {
        _children["host-items"] = host_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-items" || name == "id" || name == "name")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostItems()
    :
    hostrec_list(this, {"addr"})
{

    yang_name = "host-items"; yang_parent_name = "OIFRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::~HostItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_operation() const
{
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HostRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList>();
        ent_->parent = this;
        hostrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hostrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HostRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::HostRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{

    yang_name = "HostRec-list"; yang_parent_name = "host-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::~HostRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "HostRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::RepItems()
    :
    reportrec_list(this, {"mcastsrc", "ver"})
{

    yang_name = "rep-items"; yang_parent_name = "McGrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::~RepItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::has_operation() const
{
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReportRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList>();
        ent_->parent = this;
        reportrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reportrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReportRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::ReportRecList()
    :
    mcastsrc{YType::str, "mcastSrc"},
    ver{YType::enumeration, "ver"},
    name{YType::str, "name"},
    filtmode{YType::enumeration, "filtMode"},
    flags{YType::str, "flags"}
        ,
    oif_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "ReportRec-list"; yang_parent_name = "rep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::~ReportRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::has_data() const
{
    if (is_presence_container) return true;
    return mcastsrc.is_set
	|| ver.is_set
	|| name.is_set
	|| filtmode.is_set
	|| flags.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcastsrc.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(filtmode.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReportRec-list";
    ADD_KEY_TOKEN(mcastsrc, "mcastSrc");
    ADD_KEY_TOKEN(ver, "ver");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcastsrc.is_set || is_set(mcastsrc.yfilter)) leaf_name_data.push_back(mcastsrc.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (filtmode.is_set || is_set(filtmode.yfilter)) leaf_name_data.push_back(filtmode.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oif_items != nullptr)
    {
        _children["oif-items"] = oif_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcastSrc")
    {
        mcastsrc = value;
        mcastsrc.value_namespace = name_space;
        mcastsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filtMode")
    {
        filtmode = value;
        filtmode.value_namespace = name_space;
        filtmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcastSrc")
    {
        mcastsrc.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "filtMode")
    {
        filtmode.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "mcastSrc" || name == "ver" || name == "name" || name == "filtMode" || name == "flags")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OifItems()
    :
    oifrec_list(this, {"id"})
{

    yang_name = "oif-items"; yang_parent_name = "ReportRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::~OifItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OIFRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList>();
        ent_->parent = this;
        oifrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oifrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OIFRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::OIFRecList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"}
        ,
    host_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>())
{
    host_items->parent = this;

    yang_name = "OIFRec-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::~OIFRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| (host_items !=  nullptr && host_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (host_items !=  nullptr && host_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OIFRec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-items")
    {
        if(host_items == nullptr)
        {
            host_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>();
        }
        return host_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host_items != nullptr)
    {
        _children["host-items"] = host_items;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-items" || name == "id" || name == "name")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostItems()
    :
    hostrec_list(this, {"addr"})
{

    yang_name = "host-items"; yang_parent_name = "OIFRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::~HostItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_operation() const
{
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HostRec-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList>();
        ent_->parent = this;
        hostrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hostrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HostRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::HostRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{

    yang_name = "HostRec-list"; yang_parent_name = "host-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::~HostRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "HostRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::DomstatsItems()
{

    yang_name = "domstats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::~DomstatsItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::has_operation() const
{
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StrtrifItems()
    :
    strtrif_list(this, {"id"})
{

    yang_name = "strtrif-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::~StrtrifItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<strtrif_list.len(); index++)
    {
        if(strtrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::has_operation() const
{
    for (std::size_t index=0; index<strtrif_list.len(); index++)
    {
        if(strtrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strtrif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StRtrIf-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList>();
        ent_->parent = this;
        strtrif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : strtrif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StRtrIf-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::StRtrIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    encap{YType::str, "encap"}
        ,
    rtvrfmbr_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "StRtrIf-list"; yang_parent_name = "strtrif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::~StRtrIfList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| encap.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StRtrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::get_children() const
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

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "encap")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "StRtrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "StRtrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_children() const
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

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrifItems()
    :
    rtrif_list(this, {"id"})
{

    yang_name = "rtrif-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::~RtrifItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtrif_list.len(); index++)
    {
        if(rtrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::has_operation() const
{
    for (std::size_t index=0; index<rtrif_list.len(); index++)
    {
        if(rtrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtrif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtrIf-list")
    {
        auto ent_ = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList>();
        ent_->parent = this;
        rtrif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtrif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtrIf-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::RtrIfList()
    :
    id{YType::str, "id"}
{

    yang_name = "RtrIf-list"; yang_parent_name = "rtrif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::~RtrIfList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::QuerierpItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ver{YType::enumeration, "ver"},
    addr{YType::str, "addr"},
    queryintvl{YType::uint16, "queryIntvl"},
    rspintvl{YType::uint16, "rspIntvl"},
    robustfac{YType::uint8, "robustFac"},
    startqueryintvl{YType::uint16, "startQueryIntvl"},
    startquerycnt{YType::uint8, "startQueryCnt"},
    lastmbrintvl{YType::uint16, "lastMbrIntvl"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "querierp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::~QuerierpItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ver.is_set
	|| addr.is_set
	|| queryintvl.is_set
	|| rspintvl.is_set
	|| robustfac.is_set
	|| startqueryintvl.is_set
	|| startquerycnt.is_set
	|| lastmbrintvl.is_set
	|| timeout.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(queryintvl.yfilter)
	|| ydk::is_set(rspintvl.yfilter)
	|| ydk::is_set(robustfac.yfilter)
	|| ydk::is_set(startqueryintvl.yfilter)
	|| ydk::is_set(startquerycnt.yfilter)
	|| ydk::is_set(lastmbrintvl.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querierp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (queryintvl.is_set || is_set(queryintvl.yfilter)) leaf_name_data.push_back(queryintvl.get_name_leafdata());
    if (rspintvl.is_set || is_set(rspintvl.yfilter)) leaf_name_data.push_back(rspintvl.get_name_leafdata());
    if (robustfac.is_set || is_set(robustfac.yfilter)) leaf_name_data.push_back(robustfac.get_name_leafdata());
    if (startqueryintvl.is_set || is_set(startqueryintvl.yfilter)) leaf_name_data.push_back(startqueryintvl.get_name_leafdata());
    if (startquerycnt.is_set || is_set(startquerycnt.yfilter)) leaf_name_data.push_back(startquerycnt.get_name_leafdata());
    if (lastmbrintvl.is_set || is_set(lastmbrintvl.yfilter)) leaf_name_data.push_back(lastmbrintvl.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queryIntvl")
    {
        queryintvl = value;
        queryintvl.value_namespace = name_space;
        queryintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rspIntvl")
    {
        rspintvl = value;
        rspintvl.value_namespace = name_space;
        rspintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustFac")
    {
        robustfac = value;
        robustfac.value_namespace = name_space;
        robustfac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startQueryIntvl")
    {
        startqueryintvl = value;
        startqueryintvl.value_namespace = name_space;
        startqueryintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startQueryCnt")
    {
        startquerycnt = value;
        startquerycnt.value_namespace = name_space;
        startquerycnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastMbrIntvl")
    {
        lastmbrintvl = value;
        lastmbrintvl.value_namespace = name_space;
        lastmbrintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "queryIntvl")
    {
        queryintvl.yfilter = yfilter;
    }
    if(value_path == "rspIntvl")
    {
        rspintvl.yfilter = yfilter;
    }
    if(value_path == "robustFac")
    {
        robustfac.yfilter = yfilter;
    }
    if(value_path == "startQueryIntvl")
    {
        startqueryintvl.yfilter = yfilter;
    }
    if(value_path == "startQueryCnt")
    {
        startquerycnt.yfilter = yfilter;
    }
    if(value_path == "lastMbrIntvl")
    {
        lastmbrintvl.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ver" || name == "addr" || name == "queryIntvl" || name == "rspIntvl" || name == "robustFac" || name == "startQueryIntvl" || name == "startQueryCnt" || name == "lastMbrIntvl" || name == "timeout")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::QuerierstItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ver{YType::enumeration, "ver"},
    addr{YType::str, "addr"},
    queryintvl{YType::uint16, "queryIntvl"},
    rspintvl{YType::uint16, "rspIntvl"},
    robustfac{YType::uint8, "robustFac"},
    startqueryintvl{YType::uint16, "startQueryIntvl"},
    startquerycnt{YType::uint8, "startQueryCnt"},
    lastmbrintvl{YType::uint16, "lastMbrIntvl"},
    flags{YType::str, "flags"}
{

    yang_name = "querierst-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::~QuerierstItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ver.is_set
	|| addr.is_set
	|| queryintvl.is_set
	|| rspintvl.is_set
	|| robustfac.is_set
	|| startqueryintvl.is_set
	|| startquerycnt.is_set
	|| lastmbrintvl.is_set
	|| flags.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(queryintvl.yfilter)
	|| ydk::is_set(rspintvl.yfilter)
	|| ydk::is_set(robustfac.yfilter)
	|| ydk::is_set(startqueryintvl.yfilter)
	|| ydk::is_set(startquerycnt.yfilter)
	|| ydk::is_set(lastmbrintvl.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querierst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (queryintvl.is_set || is_set(queryintvl.yfilter)) leaf_name_data.push_back(queryintvl.get_name_leafdata());
    if (rspintvl.is_set || is_set(rspintvl.yfilter)) leaf_name_data.push_back(rspintvl.get_name_leafdata());
    if (robustfac.is_set || is_set(robustfac.yfilter)) leaf_name_data.push_back(robustfac.get_name_leafdata());
    if (startqueryintvl.is_set || is_set(startqueryintvl.yfilter)) leaf_name_data.push_back(startqueryintvl.get_name_leafdata());
    if (startquerycnt.is_set || is_set(startquerycnt.yfilter)) leaf_name_data.push_back(startquerycnt.get_name_leafdata());
    if (lastmbrintvl.is_set || is_set(lastmbrintvl.yfilter)) leaf_name_data.push_back(lastmbrintvl.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queryIntvl")
    {
        queryintvl = value;
        queryintvl.value_namespace = name_space;
        queryintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rspIntvl")
    {
        rspintvl = value;
        rspintvl.value_namespace = name_space;
        rspintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustFac")
    {
        robustfac = value;
        robustfac.value_namespace = name_space;
        robustfac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startQueryIntvl")
    {
        startqueryintvl = value;
        startqueryintvl.value_namespace = name_space;
        startqueryintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startQueryCnt")
    {
        startquerycnt = value;
        startquerycnt.value_namespace = name_space;
        startquerycnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastMbrIntvl")
    {
        lastmbrintvl = value;
        lastmbrintvl.value_namespace = name_space;
        lastmbrintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "queryIntvl")
    {
        queryintvl.yfilter = yfilter;
    }
    if(value_path == "rspIntvl")
    {
        rspintvl.yfilter = yfilter;
    }
    if(value_path == "robustFac")
    {
        robustfac.yfilter = yfilter;
    }
    if(value_path == "startQueryIntvl")
    {
        startqueryintvl.yfilter = yfilter;
    }
    if(value_path == "startQueryCnt")
    {
        startquerycnt.yfilter = yfilter;
    }
    if(value_path == "lastMbrIntvl")
    {
        lastmbrintvl.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ver" || name == "addr" || name == "queryIntvl" || name == "rspIntvl" || name == "robustFac" || name == "startQueryIntvl" || name == "startQueryCnt" || name == "lastMbrIntvl" || name == "flags")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::InststatsItems::InststatsItems()
{

    yang_name = "inststats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MldsnoopItems::InstItems::InststatsItems::~InststatsItems()
{
}

bool System::MldsnoopItems::InstItems::InststatsItems::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool System::MldsnoopItems::InstItems::InststatsItems::has_operation() const
{
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::InststatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mldsnoop-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MldsnoopItems::InstItems::InststatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inststats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::InststatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MldsnoopItems::InstItems::InststatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MldsnoopItems::InstItems::InststatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MldsnoopItems::InstItems::InststatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::InststatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::InststatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

System::MplsItems::MplsItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    if_items(std::make_shared<System::MplsItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "mpls-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsItems::~MplsItems()
{
}

bool System::MplsItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::MplsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::MplsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::MplsItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["If-items"] = if_items;
    }

    return _children;
}

void System::MplsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MplsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MplsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::MplsItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "If-items"; yang_parent_name = "mpls-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsItems::IfItems::~IfItems()
{
}

bool System::MplsItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mpls-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::MplsItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsItems::IfItems::get_children() const
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

void System::MplsItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::MplsItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    operst{YType::enumeration, "operSt"},
    deleted{YType::boolean, "deleted"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtvrfmbr_items(std::make_shared<System::MplsItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::MplsItems::IfItems::IfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "If-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsItems::IfItems::IfList::~IfList()
{
}

bool System::MplsItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| deleted.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::MplsItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(deleted.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::MplsItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mpls-items/If-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (deleted.is_set || is_set(deleted.yfilter)) leaf_name_data.push_back(deleted.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::MplsItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::MplsItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsItems::IfItems::IfList::get_children() const
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

void System::MplsItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "deleted")
    {
        deleted = value;
        deleted.value_namespace = name_space;
        deleted.value_namespace_prefix = name_space_prefix;
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

void System::MplsItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "deleted")
    {
        deleted.yfilter = yfilter;
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

bool System::MplsItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "operSt" || name == "deleted" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::MplsItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::MplsItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::MplsItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::MplsItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MplsItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::MplsItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::MplsItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::MplsstaticItems::MplsstaticItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    af_items(std::make_shared<System::MplsstaticItems::AfItems>())
{
    af_items->parent = this;

    yang_name = "mplsstatic-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsstaticItems::~MplsstaticItems()
{
}

bool System::MplsstaticItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (af_items !=  nullptr && af_items->has_data());
}

bool System::MplsstaticItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (af_items !=  nullptr && af_items->has_operation());
}

std::string System::MplsstaticItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsstaticItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsstatic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::MplsstaticItems::AfItems>();
        }
        return af_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(af_items != nullptr)
    {
        _children["af-items"] = af_items;
    }

    return _children;
}

void System::MplsstaticItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MplsstaticItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MplsstaticItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfItems()
    :
    af_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "mplsstatic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsstaticItems::AfItems::~AfItems()
{
}

bool System::MplsstaticItems::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af_list.len(); index++)
    {
        if(af_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::has_operation() const
{
    for (std::size_t index=0; index<af_list.len(); index++)
    {
        if(af_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mplsstatic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsstaticItems::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Af-list")
    {
        auto ent_ = std::make_shared<System::MplsstaticItems::AfItems::AfList>();
        ent_->parent = this;
        af_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Af-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::AfList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    pfxlabel_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems>())
    , lsp_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems>())
{
    pfxlabel_items->parent = this;
    lsp_items->parent = this;

    yang_name = "Af-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsstaticItems::AfItems::AfList::~AfList()
{
}

bool System::MplsstaticItems::AfItems::AfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (pfxlabel_items !=  nullptr && pfxlabel_items->has_data())
	|| (lsp_items !=  nullptr && lsp_items->has_data());
}

bool System::MplsstaticItems::AfItems::AfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (pfxlabel_items !=  nullptr && pfxlabel_items->has_operation())
	|| (lsp_items !=  nullptr && lsp_items->has_operation());
}

std::string System::MplsstaticItems::AfItems::AfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mplsstatic-items/af-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsstaticItems::AfItems::AfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Af-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfxlabel-items")
    {
        if(pfxlabel_items == nullptr)
        {
            pfxlabel_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems>();
        }
        return pfxlabel_items;
    }

    if(child_yang_name == "lsp-items")
    {
        if(lsp_items == nullptr)
        {
            lsp_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems>();
        }
        return lsp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pfxlabel_items != nullptr)
    {
        _children["pfxlabel-items"] = pfxlabel_items;
    }

    if(lsp_items != nullptr)
    {
        _children["lsp-items"] = lsp_items;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MplsstaticItems::AfItems::AfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MplsstaticItems::AfItems::AfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxlabel-items" || name == "lsp-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxlabelItems()
    :
    pfxlcllbl_list(this, {"label"})
{

    yang_name = "pfxlabel-items"; yang_parent_name = "Af-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::~PfxlabelItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxlcllbl_list.len(); index++)
    {
        if(pfxlcllbl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::has_operation() const
{
    for (std::size_t index=0; index<pfxlcllbl_list.len(); index++)
    {
        if(pfxlcllbl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::PfxlabelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxlabel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::PfxlabelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxLclLbl-list")
    {
        auto ent_ = std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList>();
        ent_->parent = this;
        pfxlcllbl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pfxlcllbl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxLclLbl-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::PfxLclLblList()
    :
    label{YType::uint32, "label"},
    pfx{YType::str, "pfx"}
        ,
    nh_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems>())
    , autoresolvenh_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems>())
    , backupnh_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems>())
{
    nh_items->parent = this;
    autoresolvenh_items->parent = this;
    backupnh_items->parent = this;

    yang_name = "PfxLclLbl-list"; yang_parent_name = "pfxlabel-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::~PfxLclLblList()
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| pfx.is_set
	|| (nh_items !=  nullptr && nh_items->has_data())
	|| (autoresolvenh_items !=  nullptr && autoresolvenh_items->has_data())
	|| (backupnh_items !=  nullptr && backupnh_items->has_data());
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation())
	|| (autoresolvenh_items !=  nullptr && autoresolvenh_items->has_operation())
	|| (backupnh_items !=  nullptr && backupnh_items->has_operation());
}

std::string System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxLclLbl-list";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems>();
        }
        return nh_items;
    }

    if(child_yang_name == "autoresolvenh-items")
    {
        if(autoresolvenh_items == nullptr)
        {
            autoresolvenh_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems>();
        }
        return autoresolvenh_items;
    }

    if(child_yang_name == "backupnh-items")
    {
        if(backupnh_items == nullptr)
        {
            backupnh_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems>();
        }
        return backupnh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    if(autoresolvenh_items != nullptr)
    {
        _children["autoresolvenh-items"] = autoresolvenh_items;
    }

    if(backupnh_items != nullptr)
    {
        _children["backupnh-items"] = backupnh_items;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "autoresolvenh-items" || name == "backupnh-items" || name == "label" || name == "pfx")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::NhItems()
    :
    outlbl{YType::uint32, "outLbl"},
    nhaddr{YType::str, "nhAddr"}
{

    yang_name = "nh-items"; yang_parent_name = "PfxLclLbl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::~NhItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    return outlbl.is_set
	|| nhaddr.is_set;
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outlbl.yfilter)
	|| ydk::is_set(nhaddr.yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outlbl.is_set || is_set(outlbl.yfilter)) leaf_name_data.push_back(outlbl.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outLbl")
    {
        outlbl = value;
        outlbl.value_namespace = name_space;
        outlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outLbl")
    {
        outlbl.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outLbl" || name == "nhAddr")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::AutoresolvenhItems()
    :
    outlbl{YType::uint32, "outLbl"}
{

    yang_name = "autoresolvenh-items"; yang_parent_name = "PfxLclLbl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::~AutoresolvenhItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::has_data() const
{
    if (is_presence_container) return true;
    return outlbl.is_set;
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outlbl.yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoresolvenh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outlbl.is_set || is_set(outlbl.yfilter)) leaf_name_data.push_back(outlbl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outLbl")
    {
        outlbl = value;
        outlbl.value_namespace = name_space;
        outlbl.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outLbl")
    {
        outlbl.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outLbl")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::BackupnhItems()
    :
    outlbl{YType::uint32, "outLbl"},
    nhaddr{YType::str, "nhAddr"},
    if_{YType::str, "if"}
{

    yang_name = "backupnh-items"; yang_parent_name = "PfxLclLbl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::~BackupnhItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::has_data() const
{
    if (is_presence_container) return true;
    return outlbl.is_set
	|| nhaddr.is_set
	|| if_.is_set;
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outlbl.yfilter)
	|| ydk::is_set(nhaddr.yfilter)
	|| ydk::is_set(if_.yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backupnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outlbl.is_set || is_set(outlbl.yfilter)) leaf_name_data.push_back(outlbl.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outLbl")
    {
        outlbl = value;
        outlbl.value_namespace = name_space;
        outlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outLbl")
    {
        outlbl.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outLbl" || name == "nhAddr" || name == "if")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::LspItems()
    :
    namedlsp_list(this, {"name"})
{

    yang_name = "lsp-items"; yang_parent_name = "Af-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::~LspItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<namedlsp_list.len(); index++)
    {
        if(namedlsp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::has_operation() const
{
    for (std::size_t index=0; index<namedlsp_list.len(); index++)
    {
        if(namedlsp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NamedLSP-list")
    {
        auto ent_ = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList>();
        ent_->parent = this;
        namedlsp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : namedlsp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::LspItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NamedLSP-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::NamedLSPList()
    :
    name{YType::str, "name"}
        ,
    xclabel_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems>())
    , pollabel_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems>())
{
    xclabel_items->parent = this;
    pollabel_items->parent = this;

    yang_name = "NamedLSP-list"; yang_parent_name = "lsp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::~NamedLSPList()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (xclabel_items !=  nullptr && xclabel_items->has_data())
	|| (pollabel_items !=  nullptr && pollabel_items->has_data());
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (xclabel_items !=  nullptr && xclabel_items->has_operation())
	|| (pollabel_items !=  nullptr && pollabel_items->has_operation());
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NamedLSP-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xclabel-items")
    {
        if(xclabel_items == nullptr)
        {
            xclabel_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems>();
        }
        return xclabel_items;
    }

    if(child_yang_name == "pollabel-items")
    {
        if(pollabel_items == nullptr)
        {
            pollabel_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems>();
        }
        return pollabel_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xclabel_items != nullptr)
    {
        _children["xclabel-items"] = xclabel_items;
    }

    if(pollabel_items != nullptr)
    {
        _children["pollabel-items"] = pollabel_items;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xclabel-items" || name == "pollabel-items" || name == "name")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XclabelItems()
    :
    xclcllbl_list(this, {"label"})
{

    yang_name = "xclabel-items"; yang_parent_name = "NamedLSP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::~XclabelItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xclcllbl_list.len(); index++)
    {
        if(xclcllbl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::has_operation() const
{
    for (std::size_t index=0; index<xclcllbl_list.len(); index++)
    {
        if(xclcllbl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xclabel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "XcLclLbl-list")
    {
        auto ent_ = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList>();
        ent_->parent = this;
        xclcllbl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : xclcllbl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "XcLclLbl-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::XcLclLblList()
    :
    label{YType::uint32, "label"},
    name{YType::str, "name"}
        ,
    nh_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems>())
{
    nh_items->parent = this;

    yang_name = "XcLclLbl-list"; yang_parent_name = "xclabel-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::~XcLclLblList()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| name.is_set
	|| (nh_items !=  nullptr && nh_items->has_data());
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation());
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "XcLclLbl-list";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems>();
        }
        return nh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "label" || name == "name")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::NhItems()
    :
    xcnh_list(this, {"pathid"})
{

    yang_name = "nh-items"; yang_parent_name = "XcLclLbl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::~NhItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xcnh_list.len(); index++)
    {
        if(xcnh_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<xcnh_list.len(); index++)
    {
        if(xcnh_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "XcNh-list")
    {
        auto ent_ = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList>();
        ent_->parent = this;
        xcnh_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : xcnh_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "XcNh-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::XcNhList()
    :
    pathid{YType::uint16, "pathId"},
    outlblstack{YType::str, "outLblStack"},
    nhaddr{YType::str, "nhAddr"}
{

    yang_name = "XcNh-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::~XcNhList()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::has_data() const
{
    if (is_presence_container) return true;
    return pathid.is_set
	|| outlblstack.is_set
	|| nhaddr.is_set;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(outlblstack.yfilter)
	|| ydk::is_set(nhaddr.yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "XcNh-list";
    ADD_KEY_TOKEN(pathid, "pathId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (outlblstack.is_set || is_set(outlblstack.yfilter)) leaf_name_data.push_back(outlblstack.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pathId")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outLblStack")
    {
        outlblstack = value;
        outlblstack.value_namespace = name_space;
        outlblstack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pathId")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "outLblStack")
    {
        outlblstack.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pathId" || name == "outLblStack" || name == "nhAddr")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PollabelItems()
    :
    policylcllbl_list(this, {"label"})
{

    yang_name = "pollabel-items"; yang_parent_name = "NamedLSP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::~PollabelItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policylcllbl_list.len(); index++)
    {
        if(policylcllbl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::has_operation() const
{
    for (std::size_t index=0; index<policylcllbl_list.len(); index++)
    {
        if(policylcllbl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pollabel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PolicyLclLbl-list")
    {
        auto ent_ = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList>();
        ent_->parent = this;
        policylcllbl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policylcllbl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PolicyLclLbl-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::PolicyLclLblList()
    :
    label{YType::uint32, "label"},
    pfx{YType::str, "pfx"},
    name{YType::str, "name"}
        ,
    nh_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems>())
{
    nh_items->parent = this;

    yang_name = "PolicyLclLbl-list"; yang_parent_name = "pollabel-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::~PolicyLclLblList()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| pfx.is_set
	|| name.is_set
	|| (nh_items !=  nullptr && nh_items->has_data());
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation());
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PolicyLclLbl-list";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems>();
        }
        return nh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
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

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "label" || name == "pfx" || name == "name")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::NhItems()
    :
    polnh_list(this, {"pathid"})
{

    yang_name = "nh-items"; yang_parent_name = "PolicyLclLbl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::~NhItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<polnh_list.len(); index++)
    {
        if(polnh_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<polnh_list.len(); index++)
    {
        if(polnh_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PolNh-list")
    {
        auto ent_ = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList>();
        ent_->parent = this;
        polnh_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : polnh_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PolNh-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::PolNhList()
    :
    pathid{YType::uint16, "pathId"},
    outlblstack{YType::str, "outLblStack"},
    nhaddr{YType::str, "nhAddr"}
{

    yang_name = "PolNh-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::~PolNhList()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::has_data() const
{
    if (is_presence_container) return true;
    return pathid.is_set
	|| outlblstack.is_set
	|| nhaddr.is_set;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(outlblstack.yfilter)
	|| ydk::is_set(nhaddr.yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PolNh-list";
    ADD_KEY_TOKEN(pathid, "pathId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (outlblstack.is_set || is_set(outlblstack.yfilter)) leaf_name_data.push_back(outlblstack.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pathId")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outLblStack")
    {
        outlblstack = value;
        outlblstack.value_namespace = name_space;
        outlblstack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pathId")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "outLblStack")
    {
        outlblstack.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pathId" || name == "outLblStack" || name == "nhAddr")
        return true;
    return false;
}

System::LabeltableItems::LabeltableItems()
    :
    operlabels{YType::uint32, "operLabels"},
    operipv4prefixes{YType::uint32, "operIPv4Prefixes"},
    operipv6prefixes{YType::uint32, "operIPv6Prefixes"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    client_items(std::make_shared<System::LabeltableItems::ClientItems>())
    , lblrange_items(std::make_shared<System::LabeltableItems::LblrangeItems>())
    , lbl_items(std::make_shared<System::LabeltableItems::LblItems>())
{
    client_items->parent = this;
    lblrange_items->parent = this;
    lbl_items->parent = this;

    yang_name = "labeltable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::~LabeltableItems()
{
}

bool System::LabeltableItems::has_data() const
{
    if (is_presence_container) return true;
    return operlabels.is_set
	|| operipv4prefixes.is_set
	|| operipv6prefixes.is_set
	|| name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (client_items !=  nullptr && client_items->has_data())
	|| (lblrange_items !=  nullptr && lblrange_items->has_data())
	|| (lbl_items !=  nullptr && lbl_items->has_data());
}

bool System::LabeltableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operlabels.yfilter)
	|| ydk::is_set(operipv4prefixes.yfilter)
	|| ydk::is_set(operipv6prefixes.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (client_items !=  nullptr && client_items->has_operation())
	|| (lblrange_items !=  nullptr && lblrange_items->has_operation())
	|| (lbl_items !=  nullptr && lbl_items->has_operation());
}

std::string System::LabeltableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeltable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operlabels.is_set || is_set(operlabels.yfilter)) leaf_name_data.push_back(operlabels.get_name_leafdata());
    if (operipv4prefixes.is_set || is_set(operipv4prefixes.yfilter)) leaf_name_data.push_back(operipv4prefixes.get_name_leafdata());
    if (operipv6prefixes.is_set || is_set(operipv6prefixes.yfilter)) leaf_name_data.push_back(operipv6prefixes.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-items")
    {
        if(client_items == nullptr)
        {
            client_items = std::make_shared<System::LabeltableItems::ClientItems>();
        }
        return client_items;
    }

    if(child_yang_name == "lblrange-items")
    {
        if(lblrange_items == nullptr)
        {
            lblrange_items = std::make_shared<System::LabeltableItems::LblrangeItems>();
        }
        return lblrange_items;
    }

    if(child_yang_name == "lbl-items")
    {
        if(lbl_items == nullptr)
        {
            lbl_items = std::make_shared<System::LabeltableItems::LblItems>();
        }
        return lbl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_items != nullptr)
    {
        _children["client-items"] = client_items;
    }

    if(lblrange_items != nullptr)
    {
        _children["lblrange-items"] = lblrange_items;
    }

    if(lbl_items != nullptr)
    {
        _children["lbl-items"] = lbl_items;
    }

    return _children;
}

void System::LabeltableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operLabels")
    {
        operlabels = value;
        operlabels.value_namespace = name_space;
        operlabels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operIPv4Prefixes")
    {
        operipv4prefixes = value;
        operipv4prefixes.value_namespace = name_space;
        operipv4prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operIPv6Prefixes")
    {
        operipv6prefixes = value;
        operipv6prefixes.value_namespace = name_space;
        operipv6prefixes.value_namespace_prefix = name_space_prefix;
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
}

void System::LabeltableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operLabels")
    {
        operlabels.yfilter = yfilter;
    }
    if(value_path == "operIPv4Prefixes")
    {
        operipv4prefixes.yfilter = yfilter;
    }
    if(value_path == "operIPv6Prefixes")
    {
        operipv6prefixes.yfilter = yfilter;
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
}

bool System::LabeltableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-items" || name == "lblrange-items" || name == "lbl-items" || name == "operLabels" || name == "operIPv4Prefixes" || name == "operIPv6Prefixes" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::LabeltableItems::ClientItems::ClientItems()
    :
    clients_list(this, {"name"})
{

    yang_name = "client-items"; yang_parent_name = "labeltable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::ClientItems::~ClientItems()
{
}

bool System::LabeltableItems::ClientItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clients_list.len(); index++)
    {
        if(clients_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LabeltableItems::ClientItems::has_operation() const
{
    for (std::size_t index=0; index<clients_list.len(); index++)
    {
        if(clients_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LabeltableItems::ClientItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/labeltable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::ClientItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::ClientItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::ClientItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Clients-list")
    {
        auto ent_ = std::make_shared<System::LabeltableItems::ClientItems::ClientsList>();
        ent_->parent = this;
        clients_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::ClientItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clients_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::LabeltableItems::ClientItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LabeltableItems::ClientItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LabeltableItems::ClientItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Clients-list")
        return true;
    return false;
}

System::LabeltableItems::ClientItems::ClientsList::ClientsList()
    :
    name{YType::str, "name"},
    index_{YType::uint32, "index"},
    uuid{YType::uint32, "uuid"},
    mtssap{YType::uint32, "mtsSap"},
    staletime{YType::str, "staleTime"},
    flag{YType::str, "flag"},
    regmsg{YType::uint32, "regMsg"},
    convmsg{YType::uint32, "convMsg"},
    fecmsg{YType::uint32, "fecMsg"},
    fecadd{YType::uint32, "fecAdd"},
    ileadd{YType::uint32, "ileAdd"},
    fecdel{YType::uint32, "fecDel"},
    iledel{YType::uint32, "ileDel"},
    lastxid{YType::uint32, "lastXid"},
    fecack{YType::uint32, "fecAck"}
{

    yang_name = "Clients-list"; yang_parent_name = "client-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::ClientItems::ClientsList::~ClientsList()
{
}

bool System::LabeltableItems::ClientItems::ClientsList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| index_.is_set
	|| uuid.is_set
	|| mtssap.is_set
	|| staletime.is_set
	|| flag.is_set
	|| regmsg.is_set
	|| convmsg.is_set
	|| fecmsg.is_set
	|| fecadd.is_set
	|| ileadd.is_set
	|| fecdel.is_set
	|| iledel.is_set
	|| lastxid.is_set
	|| fecack.is_set;
}

bool System::LabeltableItems::ClientItems::ClientsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(uuid.yfilter)
	|| ydk::is_set(mtssap.yfilter)
	|| ydk::is_set(staletime.yfilter)
	|| ydk::is_set(flag.yfilter)
	|| ydk::is_set(regmsg.yfilter)
	|| ydk::is_set(convmsg.yfilter)
	|| ydk::is_set(fecmsg.yfilter)
	|| ydk::is_set(fecadd.yfilter)
	|| ydk::is_set(ileadd.yfilter)
	|| ydk::is_set(fecdel.yfilter)
	|| ydk::is_set(iledel.yfilter)
	|| ydk::is_set(lastxid.yfilter)
	|| ydk::is_set(fecack.yfilter);
}

std::string System::LabeltableItems::ClientItems::ClientsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/labeltable-items/client-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::ClientItems::ClientsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Clients-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::ClientItems::ClientsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());
    if (mtssap.is_set || is_set(mtssap.yfilter)) leaf_name_data.push_back(mtssap.get_name_leafdata());
    if (staletime.is_set || is_set(staletime.yfilter)) leaf_name_data.push_back(staletime.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());
    if (regmsg.is_set || is_set(regmsg.yfilter)) leaf_name_data.push_back(regmsg.get_name_leafdata());
    if (convmsg.is_set || is_set(convmsg.yfilter)) leaf_name_data.push_back(convmsg.get_name_leafdata());
    if (fecmsg.is_set || is_set(fecmsg.yfilter)) leaf_name_data.push_back(fecmsg.get_name_leafdata());
    if (fecadd.is_set || is_set(fecadd.yfilter)) leaf_name_data.push_back(fecadd.get_name_leafdata());
    if (ileadd.is_set || is_set(ileadd.yfilter)) leaf_name_data.push_back(ileadd.get_name_leafdata());
    if (fecdel.is_set || is_set(fecdel.yfilter)) leaf_name_data.push_back(fecdel.get_name_leafdata());
    if (iledel.is_set || is_set(iledel.yfilter)) leaf_name_data.push_back(iledel.get_name_leafdata());
    if (lastxid.is_set || is_set(lastxid.yfilter)) leaf_name_data.push_back(lastxid.get_name_leafdata());
    if (fecack.is_set || is_set(fecack.yfilter)) leaf_name_data.push_back(fecack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::ClientItems::ClientsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::ClientItems::ClientsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::ClientItems::ClientsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtsSap")
    {
        mtssap = value;
        mtssap.value_namespace = name_space;
        mtssap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleTime")
    {
        staletime = value;
        staletime.value_namespace = name_space;
        staletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regMsg")
    {
        regmsg = value;
        regmsg.value_namespace = name_space;
        regmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "convMsg")
    {
        convmsg = value;
        convmsg.value_namespace = name_space;
        convmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecMsg")
    {
        fecmsg = value;
        fecmsg.value_namespace = name_space;
        fecmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecAdd")
    {
        fecadd = value;
        fecadd.value_namespace = name_space;
        fecadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ileAdd")
    {
        ileadd = value;
        ileadd.value_namespace = name_space;
        ileadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecDel")
    {
        fecdel = value;
        fecdel.value_namespace = name_space;
        fecdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ileDel")
    {
        iledel = value;
        iledel.value_namespace = name_space;
        iledel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastXid")
    {
        lastxid = value;
        lastxid.value_namespace = name_space;
        lastxid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecAck")
    {
        fecack = value;
        fecack.value_namespace = name_space;
        fecack.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::ClientItems::ClientsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
    if(value_path == "mtsSap")
    {
        mtssap.yfilter = yfilter;
    }
    if(value_path == "staleTime")
    {
        staletime.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
    if(value_path == "regMsg")
    {
        regmsg.yfilter = yfilter;
    }
    if(value_path == "convMsg")
    {
        convmsg.yfilter = yfilter;
    }
    if(value_path == "fecMsg")
    {
        fecmsg.yfilter = yfilter;
    }
    if(value_path == "fecAdd")
    {
        fecadd.yfilter = yfilter;
    }
    if(value_path == "ileAdd")
    {
        ileadd.yfilter = yfilter;
    }
    if(value_path == "fecDel")
    {
        fecdel.yfilter = yfilter;
    }
    if(value_path == "ileDel")
    {
        iledel.yfilter = yfilter;
    }
    if(value_path == "lastXid")
    {
        lastxid.yfilter = yfilter;
    }
    if(value_path == "fecAck")
    {
        fecack.yfilter = yfilter;
    }
}

bool System::LabeltableItems::ClientItems::ClientsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "index" || name == "uuid" || name == "mtsSap" || name == "staleTime" || name == "flag" || name == "regMsg" || name == "convMsg" || name == "fecMsg" || name == "fecAdd" || name == "ileAdd" || name == "fecDel" || name == "ileDel" || name == "lastXid" || name == "fecAck")
        return true;
    return false;
}

System::LabeltableItems::LblrangeItems::LblrangeItems()
    :
    dynlblmin{YType::uint32, "dynLblMin"},
    dynlblmax{YType::uint32, "dynLblMax"},
    staticlblmin{YType::uint32, "staticLblMin"},
    staticlblmax{YType::uint32, "staticLblMax"},
    operdynlblmin{YType::uint32, "operDynLblMin"},
    operdynlblmax{YType::uint32, "operDynLblMax"},
    operstaticlblmin{YType::uint32, "operStaticLblMin"},
    operstaticlblmax{YType::uint32, "operStaticLblMax"},
    operstaticlblsoutofrange{YType::uint32, "operStaticLblsOutOfRange"}
{

    yang_name = "lblrange-items"; yang_parent_name = "labeltable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::LblrangeItems::~LblrangeItems()
{
}

bool System::LabeltableItems::LblrangeItems::has_data() const
{
    if (is_presence_container) return true;
    return dynlblmin.is_set
	|| dynlblmax.is_set
	|| staticlblmin.is_set
	|| staticlblmax.is_set
	|| operdynlblmin.is_set
	|| operdynlblmax.is_set
	|| operstaticlblmin.is_set
	|| operstaticlblmax.is_set
	|| operstaticlblsoutofrange.is_set;
}

bool System::LabeltableItems::LblrangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynlblmin.yfilter)
	|| ydk::is_set(dynlblmax.yfilter)
	|| ydk::is_set(staticlblmin.yfilter)
	|| ydk::is_set(staticlblmax.yfilter)
	|| ydk::is_set(operdynlblmin.yfilter)
	|| ydk::is_set(operdynlblmax.yfilter)
	|| ydk::is_set(operstaticlblmin.yfilter)
	|| ydk::is_set(operstaticlblmax.yfilter)
	|| ydk::is_set(operstaticlblsoutofrange.yfilter);
}

std::string System::LabeltableItems::LblrangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/labeltable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::LblrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lblrange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynlblmin.is_set || is_set(dynlblmin.yfilter)) leaf_name_data.push_back(dynlblmin.get_name_leafdata());
    if (dynlblmax.is_set || is_set(dynlblmax.yfilter)) leaf_name_data.push_back(dynlblmax.get_name_leafdata());
    if (staticlblmin.is_set || is_set(staticlblmin.yfilter)) leaf_name_data.push_back(staticlblmin.get_name_leafdata());
    if (staticlblmax.is_set || is_set(staticlblmax.yfilter)) leaf_name_data.push_back(staticlblmax.get_name_leafdata());
    if (operdynlblmin.is_set || is_set(operdynlblmin.yfilter)) leaf_name_data.push_back(operdynlblmin.get_name_leafdata());
    if (operdynlblmax.is_set || is_set(operdynlblmax.yfilter)) leaf_name_data.push_back(operdynlblmax.get_name_leafdata());
    if (operstaticlblmin.is_set || is_set(operstaticlblmin.yfilter)) leaf_name_data.push_back(operstaticlblmin.get_name_leafdata());
    if (operstaticlblmax.is_set || is_set(operstaticlblmax.yfilter)) leaf_name_data.push_back(operstaticlblmax.get_name_leafdata());
    if (operstaticlblsoutofrange.is_set || is_set(operstaticlblsoutofrange.yfilter)) leaf_name_data.push_back(operstaticlblsoutofrange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynLblMin")
    {
        dynlblmin = value;
        dynlblmin.value_namespace = name_space;
        dynlblmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynLblMax")
    {
        dynlblmax = value;
        dynlblmax.value_namespace = name_space;
        dynlblmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staticLblMin")
    {
        staticlblmin = value;
        staticlblmin.value_namespace = name_space;
        staticlblmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staticLblMax")
    {
        staticlblmax = value;
        staticlblmax.value_namespace = name_space;
        staticlblmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDynLblMin")
    {
        operdynlblmin = value;
        operdynlblmin.value_namespace = name_space;
        operdynlblmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDynLblMax")
    {
        operdynlblmax = value;
        operdynlblmax.value_namespace = name_space;
        operdynlblmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStaticLblMin")
    {
        operstaticlblmin = value;
        operstaticlblmin.value_namespace = name_space;
        operstaticlblmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStaticLblMax")
    {
        operstaticlblmax = value;
        operstaticlblmax.value_namespace = name_space;
        operstaticlblmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStaticLblsOutOfRange")
    {
        operstaticlblsoutofrange = value;
        operstaticlblsoutofrange.value_namespace = name_space;
        operstaticlblsoutofrange.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynLblMin")
    {
        dynlblmin.yfilter = yfilter;
    }
    if(value_path == "dynLblMax")
    {
        dynlblmax.yfilter = yfilter;
    }
    if(value_path == "staticLblMin")
    {
        staticlblmin.yfilter = yfilter;
    }
    if(value_path == "staticLblMax")
    {
        staticlblmax.yfilter = yfilter;
    }
    if(value_path == "operDynLblMin")
    {
        operdynlblmin.yfilter = yfilter;
    }
    if(value_path == "operDynLblMax")
    {
        operdynlblmax.yfilter = yfilter;
    }
    if(value_path == "operStaticLblMin")
    {
        operstaticlblmin.yfilter = yfilter;
    }
    if(value_path == "operStaticLblMax")
    {
        operstaticlblmax.yfilter = yfilter;
    }
    if(value_path == "operStaticLblsOutOfRange")
    {
        operstaticlblsoutofrange.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynLblMin" || name == "dynLblMax" || name == "staticLblMin" || name == "staticLblMax" || name == "operDynLblMin" || name == "operDynLblMax" || name == "operStaticLblMin" || name == "operStaticLblMax" || name == "operStaticLblsOutOfRange")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LblItems()
    :
    labels_list(this, {"label"})
{

    yang_name = "lbl-items"; yang_parent_name = "labeltable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::LblItems::~LblItems()
{
}

bool System::LabeltableItems::LblItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<labels_list.len(); index++)
    {
        if(labels_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LabeltableItems::LblItems::has_operation() const
{
    for (std::size_t index=0; index<labels_list.len(); index++)
    {
        if(labels_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LabeltableItems::LblItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/labeltable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::LblItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Labels-list")
    {
        auto ent_ = std::make_shared<System::LabeltableItems::LblItems::LabelsList>();
        ent_->parent = this;
        labels_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : labels_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::LabeltableItems::LblItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LabeltableItems::LblItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LabeltableItems::LblItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Labels-list")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::LabelsList()
    :
    label{YType::uint32, "label"},
    fectype{YType::str, "fecType"},
    labelbytestats{YType::uint64, "labelByteStats"},
    labelpacketstats{YType::uint64, "labelPacketStats"}
        ,
    fecipv4_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecIPv4Items>())
    , fecipv6_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecIPv6Items>())
    , fecpolicyipv4_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items>())
    , fecpolicyipv6_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items>())
    , fecnone_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecNoneItems>())
    , fecsrte_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecSRTEItems>())
    , fecperce_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPerCEItems>())
    , fecreserved_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecReservedItems>())
    , fecdeagg_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecDeaggItems>())
    , fecadjsid_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems>())
    , nhlfe_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::NhlfeItems>())
{
    fecipv4_items->parent = this;
    fecipv6_items->parent = this;
    fecpolicyipv4_items->parent = this;
    fecpolicyipv6_items->parent = this;
    fecnone_items->parent = this;
    fecsrte_items->parent = this;
    fecperce_items->parent = this;
    fecreserved_items->parent = this;
    fecdeagg_items->parent = this;
    fecadjsid_items->parent = this;
    nhlfe_items->parent = this;

    yang_name = "Labels-list"; yang_parent_name = "lbl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::LblItems::LabelsList::~LabelsList()
{
}

bool System::LabeltableItems::LblItems::LabelsList::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| fectype.is_set
	|| labelbytestats.is_set
	|| labelpacketstats.is_set
	|| (fecipv4_items !=  nullptr && fecipv4_items->has_data())
	|| (fecipv6_items !=  nullptr && fecipv6_items->has_data())
	|| (fecpolicyipv4_items !=  nullptr && fecpolicyipv4_items->has_data())
	|| (fecpolicyipv6_items !=  nullptr && fecpolicyipv6_items->has_data())
	|| (fecnone_items !=  nullptr && fecnone_items->has_data())
	|| (fecsrte_items !=  nullptr && fecsrte_items->has_data())
	|| (fecperce_items !=  nullptr && fecperce_items->has_data())
	|| (fecreserved_items !=  nullptr && fecreserved_items->has_data())
	|| (fecdeagg_items !=  nullptr && fecdeagg_items->has_data())
	|| (fecadjsid_items !=  nullptr && fecadjsid_items->has_data())
	|| (nhlfe_items !=  nullptr && nhlfe_items->has_data());
}

bool System::LabeltableItems::LblItems::LabelsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(labelbytestats.yfilter)
	|| ydk::is_set(labelpacketstats.yfilter)
	|| (fecipv4_items !=  nullptr && fecipv4_items->has_operation())
	|| (fecipv6_items !=  nullptr && fecipv6_items->has_operation())
	|| (fecpolicyipv4_items !=  nullptr && fecpolicyipv4_items->has_operation())
	|| (fecpolicyipv6_items !=  nullptr && fecpolicyipv6_items->has_operation())
	|| (fecnone_items !=  nullptr && fecnone_items->has_operation())
	|| (fecsrte_items !=  nullptr && fecsrte_items->has_operation())
	|| (fecperce_items !=  nullptr && fecperce_items->has_operation())
	|| (fecreserved_items !=  nullptr && fecreserved_items->has_operation())
	|| (fecdeagg_items !=  nullptr && fecdeagg_items->has_operation())
	|| (fecadjsid_items !=  nullptr && fecadjsid_items->has_operation())
	|| (nhlfe_items !=  nullptr && nhlfe_items->has_operation());
}

std::string System::LabeltableItems::LblItems::LabelsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/labeltable-items/lbl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::LblItems::LabelsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Labels-list";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (labelbytestats.is_set || is_set(labelbytestats.yfilter)) leaf_name_data.push_back(labelbytestats.get_name_leafdata());
    if (labelpacketstats.is_set || is_set(labelpacketstats.yfilter)) leaf_name_data.push_back(labelpacketstats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FecIPv4-items")
    {
        if(fecipv4_items == nullptr)
        {
            fecipv4_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecIPv4Items>();
        }
        return fecipv4_items;
    }

    if(child_yang_name == "FecIPv6-items")
    {
        if(fecipv6_items == nullptr)
        {
            fecipv6_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecIPv6Items>();
        }
        return fecipv6_items;
    }

    if(child_yang_name == "FecPolicyIPv4-items")
    {
        if(fecpolicyipv4_items == nullptr)
        {
            fecpolicyipv4_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items>();
        }
        return fecpolicyipv4_items;
    }

    if(child_yang_name == "FecPolicyIPv6-items")
    {
        if(fecpolicyipv6_items == nullptr)
        {
            fecpolicyipv6_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items>();
        }
        return fecpolicyipv6_items;
    }

    if(child_yang_name == "FecNone-items")
    {
        if(fecnone_items == nullptr)
        {
            fecnone_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecNoneItems>();
        }
        return fecnone_items;
    }

    if(child_yang_name == "FecSRTE-items")
    {
        if(fecsrte_items == nullptr)
        {
            fecsrte_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecSRTEItems>();
        }
        return fecsrte_items;
    }

    if(child_yang_name == "FecPerCE-items")
    {
        if(fecperce_items == nullptr)
        {
            fecperce_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPerCEItems>();
        }
        return fecperce_items;
    }

    if(child_yang_name == "FecReserved-items")
    {
        if(fecreserved_items == nullptr)
        {
            fecreserved_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecReservedItems>();
        }
        return fecreserved_items;
    }

    if(child_yang_name == "FecDeagg-items")
    {
        if(fecdeagg_items == nullptr)
        {
            fecdeagg_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecDeaggItems>();
        }
        return fecdeagg_items;
    }

    if(child_yang_name == "FecAdjSID-items")
    {
        if(fecadjsid_items == nullptr)
        {
            fecadjsid_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems>();
        }
        return fecadjsid_items;
    }

    if(child_yang_name == "Nhlfe-items")
    {
        if(nhlfe_items == nullptr)
        {
            nhlfe_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::NhlfeItems>();
        }
        return nhlfe_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fecipv4_items != nullptr)
    {
        _children["FecIPv4-items"] = fecipv4_items;
    }

    if(fecipv6_items != nullptr)
    {
        _children["FecIPv6-items"] = fecipv6_items;
    }

    if(fecpolicyipv4_items != nullptr)
    {
        _children["FecPolicyIPv4-items"] = fecpolicyipv4_items;
    }

    if(fecpolicyipv6_items != nullptr)
    {
        _children["FecPolicyIPv6-items"] = fecpolicyipv6_items;
    }

    if(fecnone_items != nullptr)
    {
        _children["FecNone-items"] = fecnone_items;
    }

    if(fecsrte_items != nullptr)
    {
        _children["FecSRTE-items"] = fecsrte_items;
    }

    if(fecperce_items != nullptr)
    {
        _children["FecPerCE-items"] = fecperce_items;
    }

    if(fecreserved_items != nullptr)
    {
        _children["FecReserved-items"] = fecreserved_items;
    }

    if(fecdeagg_items != nullptr)
    {
        _children["FecDeagg-items"] = fecdeagg_items;
    }

    if(fecadjsid_items != nullptr)
    {
        _children["FecAdjSID-items"] = fecadjsid_items;
    }

    if(nhlfe_items != nullptr)
    {
        _children["Nhlfe-items"] = nhlfe_items;
    }

    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labelByteStats")
    {
        labelbytestats = value;
        labelbytestats.value_namespace = name_space;
        labelbytestats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labelPacketStats")
    {
        labelpacketstats = value;
        labelpacketstats.value_namespace = name_space;
        labelpacketstats.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "labelByteStats")
    {
        labelbytestats.yfilter = yfilter;
    }
    if(value_path == "labelPacketStats")
    {
        labelpacketstats.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FecIPv4-items" || name == "FecIPv6-items" || name == "FecPolicyIPv4-items" || name == "FecPolicyIPv6-items" || name == "FecNone-items" || name == "FecSRTE-items" || name == "FecPerCE-items" || name == "FecReserved-items" || name == "FecDeagg-items" || name == "FecAdjSID-items" || name == "Nhlfe-items" || name == "label" || name == "fecType" || name == "labelByteStats" || name == "labelPacketStats")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::FecIPv4Items()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"},
    prefix{YType::str, "prefix"},
    masklength{YType::uint8, "maskLength"}
{

    yang_name = "FecIPv4-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::~FecIPv4Items()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set
	|| prefix.is_set
	|| masklength.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(masklength.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecIPv4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (masklength.is_set || is_set(masklength.yfilter)) leaf_name_data.push_back(masklength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLength")
    {
        masklength = value;
        masklength.value_namespace = name_space;
        masklength.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "maskLength")
    {
        masklength.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId" || name == "prefix" || name == "maskLength")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::FecIPv6Items()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"},
    prefix{YType::str, "prefix"},
    masklength{YType::uint8, "maskLength"}
{

    yang_name = "FecIPv6-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::~FecIPv6Items()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set
	|| prefix.is_set
	|| masklength.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(masklength.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecIPv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (masklength.is_set || is_set(masklength.yfilter)) leaf_name_data.push_back(masklength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLength")
    {
        masklength = value;
        masklength.value_namespace = name_space;
        masklength.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "maskLength")
    {
        masklength.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId" || name == "prefix" || name == "maskLength")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::FecPolicyIPv4Items()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"},
    prefix{YType::str, "prefix"},
    masklength{YType::uint8, "maskLength"}
{

    yang_name = "FecPolicyIPv4-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::~FecPolicyIPv4Items()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set
	|| prefix.is_set
	|| masklength.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(masklength.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecPolicyIPv4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (masklength.is_set || is_set(masklength.yfilter)) leaf_name_data.push_back(masklength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLength")
    {
        masklength = value;
        masklength.value_namespace = name_space;
        masklength.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "maskLength")
    {
        masklength.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId" || name == "prefix" || name == "maskLength")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::FecPolicyIPv6Items()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"},
    prefix{YType::str, "prefix"},
    masklength{YType::uint8, "maskLength"}
{

    yang_name = "FecPolicyIPv6-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::~FecPolicyIPv6Items()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set
	|| prefix.is_set
	|| masklength.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(masklength.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecPolicyIPv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (masklength.is_set || is_set(masklength.yfilter)) leaf_name_data.push_back(masklength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLength")
    {
        masklength = value;
        masklength.value_namespace = name_space;
        masklength.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "maskLength")
    {
        masklength.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId" || name == "prefix" || name == "maskLength")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecNoneItems::FecNoneItems()
    :
    label{YType::uint32, "label"},
    fectype{YType::str, "fecType"},
    state{YType::str, "state"}
{

    yang_name = "FecNone-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecNoneItems::~FecNoneItems()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecNoneItems::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| fectype.is_set
	|| state.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecNoneItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecNoneItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecNone-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecNoneItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::FecNoneItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::FecNoneItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::FecNoneItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecNoneItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecNoneItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "fecType" || name == "state")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecSRTEItems::FecSRTEItems()
    :
    id{YType::uint32, "id"},
    fectype{YType::str, "fecType"},
    state{YType::str, "state"}
{

    yang_name = "FecSRTE-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecSRTEItems::~FecSRTEItems()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecSRTEItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| fectype.is_set
	|| state.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecSRTEItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecSRTEItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecSRTE-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecSRTEItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::FecSRTEItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::FecSRTEItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::FecSRTEItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecSRTEItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecSRTEItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "fecType" || name == "state")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::FecPerCEItems()
    :
    nexthopset{YType::uint32, "nextHopSet"},
    addressfamily{YType::str, "addressFamily"},
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"}
{

    yang_name = "FecPerCE-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::~FecPerCEItems()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::has_data() const
{
    if (is_presence_container) return true;
    return nexthopset.is_set
	|| addressfamily.is_set
	|| fectype.is_set
	|| state.is_set
	|| tableid.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nexthopset.yfilter)
	|| ydk::is_set(addressfamily.yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecPerCE-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nexthopset.is_set || is_set(nexthopset.yfilter)) leaf_name_data.push_back(nexthopset.get_name_leafdata());
    if (addressfamily.is_set || is_set(addressfamily.yfilter)) leaf_name_data.push_back(addressfamily.get_name_leafdata());
    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nextHopSet")
    {
        nexthopset = value;
        nexthopset.value_namespace = name_space;
        nexthopset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressFamily")
    {
        addressfamily = value;
        addressfamily.value_namespace = name_space;
        addressfamily.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nextHopSet")
    {
        nexthopset.yfilter = yfilter;
    }
    if(value_path == "addressFamily")
    {
        addressfamily.yfilter = yfilter;
    }
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nextHopSet" || name == "addressFamily" || name == "fecType" || name == "state" || name == "tableId")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecReservedItems::FecReservedItems()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"}
{

    yang_name = "FecReserved-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecReservedItems::~FecReservedItems()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecReservedItems::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecReservedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecReservedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecReserved-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecReservedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::FecReservedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::FecReservedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::FecReservedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecReservedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecReservedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::FecDeaggItems()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"}
{

    yang_name = "FecDeagg-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::~FecDeaggItems()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecDeagg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::FecAdjSIDItems()
    :
    ifindex{YType::uint32, "ifIndex"},
    appid{YType::uint32, "appId"},
    nexthop{YType::str, "nextHop"},
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"}
{

    yang_name = "FecAdjSID-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::~FecAdjSIDItems()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| appid.is_set
	|| nexthop.is_set
	|| fectype.is_set
	|| state.is_set
	|| tableid.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(appid.yfilter)
	|| ydk::is_set(nexthop.yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecAdjSID-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (appid.is_set || is_set(appid.yfilter)) leaf_name_data.push_back(appid.get_name_leafdata());
    if (nexthop.is_set || is_set(nexthop.yfilter)) leaf_name_data.push_back(nexthop.get_name_leafdata());
    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appId")
    {
        appid = value;
        appid.value_namespace = name_space;
        appid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextHop")
    {
        nexthop = value;
        nexthop.value_namespace = name_space;
        nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "appId")
    {
        appid.yfilter = yfilter;
    }
    if(value_path == "nextHop")
    {
        nexthop.yfilter = yfilter;
    }
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "appId" || name == "nextHop" || name == "fecType" || name == "state" || name == "tableId")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeItems()
    :
    nhlfe_list(this, {"idx"})
{

    yang_name = "Nhlfe-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::NhlfeItems::~NhlfeItems()
{
}

bool System::LabeltableItems::LblItems::LabelsList::NhlfeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nhlfe_list.len(); index++)
    {
        if(nhlfe_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LabeltableItems::LblItems::LabelsList::NhlfeItems::has_operation() const
{
    for (std::size_t index=0; index<nhlfe_list.len(); index++)
    {
        if(nhlfe_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::NhlfeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nhlfe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::NhlfeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::NhlfeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nhlfe-list")
    {
        auto ent_ = std::make_shared<System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList>();
        ent_->parent = this;
        nhlfe_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::NhlfeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nhlfe_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::NhlfeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LabeltableItems::LblItems::LabelsList::NhlfeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LabeltableItems::LblItems::LabelsList::NhlfeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nhlfe-list")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::NhlfeList()
    :
    idx{YType::uint32, "idx"},
    ip{YType::str, "ip"},
    outlabel{YType::str, "outLabel"},
    interface{YType::str, "interface"},
    outlabelbytestats{YType::uint64, "outLabelByteStats"},
    outlabelpacketstats{YType::uint64, "outLabelPacketStats"},
    weight{YType::uint32, "weight"}
{

    yang_name = "Nhlfe-list"; yang_parent_name = "Nhlfe-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::~NhlfeList()
{
}

bool System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| ip.is_set
	|| outlabel.is_set
	|| interface.is_set
	|| outlabelbytestats.is_set
	|| outlabelpacketstats.is_set
	|| weight.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(outlabel.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(outlabelbytestats.yfilter)
	|| ydk::is_set(outlabelpacketstats.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nhlfe-list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (outlabel.is_set || is_set(outlabel.yfilter)) leaf_name_data.push_back(outlabel.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (outlabelbytestats.is_set || is_set(outlabelbytestats.yfilter)) leaf_name_data.push_back(outlabelbytestats.get_name_leafdata());
    if (outlabelpacketstats.is_set || is_set(outlabelpacketstats.yfilter)) leaf_name_data.push_back(outlabelpacketstats.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outLabel")
    {
        outlabel = value;
        outlabel.value_namespace = name_space;
        outlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outLabelByteStats")
    {
        outlabelbytestats = value;
        outlabelbytestats.value_namespace = name_space;
        outlabelbytestats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outLabelPacketStats")
    {
        outlabelpacketstats = value;
        outlabelpacketstats.value_namespace = name_space;
        outlabelpacketstats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "outLabel")
    {
        outlabel.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "outLabelByteStats")
    {
        outlabelbytestats.yfilter = yfilter;
    }
    if(value_path == "outLabelPacketStats")
    {
        outlabelpacketstats.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "ip" || name == "outLabel" || name == "interface" || name == "outLabelByteStats" || name == "outLabelPacketStats" || name == "weight")
        return true;
    return false;
}

System::MribItems::MribItems()
    :
    inst_items(std::make_shared<System::MribItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "mrib-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MribItems::~MribItems()
{
}

bool System::MribItems::has_data() const
{
    if (is_presence_container) return true;
    return (inst_items !=  nullptr && inst_items->has_data());
}

bool System::MribItems::has_operation() const
{
    return is_set(yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::MribItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MribItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::MribItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::MribItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items")
        return true;
    return false;
}

System::MribItems::InstItems::InstItems()
    :
    dom_items(std::make_shared<System::MribItems::InstItems::DomItems>())
    , loglevel_items(std::make_shared<System::MribItems::InstItems::LoglevelItems>())
    , routedb_items(std::make_shared<System::MribItems::InstItems::RouteDbItems>())
{
    dom_items->parent = this;
    loglevel_items->parent = this;
    routedb_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "mrib-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MribItems::InstItems::~InstItems()
{
}

bool System::MribItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return (dom_items !=  nullptr && dom_items->has_data())
	|| (loglevel_items !=  nullptr && loglevel_items->has_data())
	|| (routedb_items !=  nullptr && routedb_items->has_data());
}

bool System::MribItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (loglevel_items !=  nullptr && loglevel_items->has_operation())
	|| (routedb_items !=  nullptr && routedb_items->has_operation());
}

std::string System::MribItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mrib-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MribItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::MribItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "loglevel-items")
    {
        if(loglevel_items == nullptr)
        {
            loglevel_items = std::make_shared<System::MribItems::InstItems::LoglevelItems>();
        }
        return loglevel_items;
    }

    if(child_yang_name == "routeDb-items")
    {
        if(routedb_items == nullptr)
        {
            routedb_items = std::make_shared<System::MribItems::InstItems::RouteDbItems>();
        }
        return routedb_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(loglevel_items != nullptr)
    {
        _children["loglevel-items"] = loglevel_items;
    }

    if(routedb_items != nullptr)
    {
        _children["routeDb-items"] = routedb_items;
    }

    return _children;
}

void System::MribItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "loglevel-items" || name == "routeDb-items")
        return true;
    return false;
}

System::MribItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MribItems::InstItems::DomItems::~DomItems()
{
}

bool System::MribItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mrib-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MribItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::MribItems::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MribItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::MribItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    mtu{YType::uint32, "mtu"},
    autoenable{YType::boolean, "autoEnable"},
    lognbhchng{YType::boolean, "logNbhChng"},
    flushroutes{YType::boolean, "flushRoutes"},
    bfd{YType::boolean, "bfd"},
    jpdelay{YType::uint32, "jpDelay"},
    regratelmt{YType::uint32, "regRateLmt"},
    rfcstrict{YType::boolean, "rfcStrict"}
        ,
    config_items(std::make_shared<System::MribItems::InstItems::DomItems::DomList::ConfigItems>())
    , eventhist_items(std::make_shared<System::MribItems::InstItems::DomItems::DomList::EventHistItems>())
    , rpfselect_items(std::make_shared<System::MribItems::InstItems::DomItems::DomList::RpfselectItems>())
    , trace_items(std::make_shared<System::MribItems::InstItems::DomItems::DomList::TraceItems>())
{
    config_items->parent = this;
    eventhist_items->parent = this;
    rpfselect_items->parent = this;
    trace_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MribItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::MribItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| mtu.is_set
	|| autoenable.is_set
	|| lognbhchng.is_set
	|| flushroutes.is_set
	|| bfd.is_set
	|| jpdelay.is_set
	|| regratelmt.is_set
	|| rfcstrict.is_set
	|| (config_items !=  nullptr && config_items->has_data())
	|| (eventhist_items !=  nullptr && eventhist_items->has_data())
	|| (rpfselect_items !=  nullptr && rpfselect_items->has_data())
	|| (trace_items !=  nullptr && trace_items->has_data());
}

bool System::MribItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(autoenable.yfilter)
	|| ydk::is_set(lognbhchng.yfilter)
	|| ydk::is_set(flushroutes.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(jpdelay.yfilter)
	|| ydk::is_set(regratelmt.yfilter)
	|| ydk::is_set(rfcstrict.yfilter)
	|| (config_items !=  nullptr && config_items->has_operation())
	|| (eventhist_items !=  nullptr && eventhist_items->has_operation())
	|| (rpfselect_items !=  nullptr && rpfselect_items->has_operation())
	|| (trace_items !=  nullptr && trace_items->has_operation());
}

std::string System::MribItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mrib-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MribItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (autoenable.is_set || is_set(autoenable.yfilter)) leaf_name_data.push_back(autoenable.get_name_leafdata());
    if (lognbhchng.is_set || is_set(lognbhchng.yfilter)) leaf_name_data.push_back(lognbhchng.get_name_leafdata());
    if (flushroutes.is_set || is_set(flushroutes.yfilter)) leaf_name_data.push_back(flushroutes.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (jpdelay.is_set || is_set(jpdelay.yfilter)) leaf_name_data.push_back(jpdelay.get_name_leafdata());
    if (regratelmt.is_set || is_set(regratelmt.yfilter)) leaf_name_data.push_back(regratelmt.get_name_leafdata());
    if (rfcstrict.is_set || is_set(rfcstrict.yfilter)) leaf_name_data.push_back(rfcstrict.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-items")
    {
        if(config_items == nullptr)
        {
            config_items = std::make_shared<System::MribItems::InstItems::DomItems::DomList::ConfigItems>();
        }
        return config_items;
    }

    if(child_yang_name == "eventHist-items")
    {
        if(eventhist_items == nullptr)
        {
            eventhist_items = std::make_shared<System::MribItems::InstItems::DomItems::DomList::EventHistItems>();
        }
        return eventhist_items;
    }

    if(child_yang_name == "rpfselect-items")
    {
        if(rpfselect_items == nullptr)
        {
            rpfselect_items = std::make_shared<System::MribItems::InstItems::DomItems::DomList::RpfselectItems>();
        }
        return rpfselect_items;
    }

    if(child_yang_name == "trace-items")
    {
        if(trace_items == nullptr)
        {
            trace_items = std::make_shared<System::MribItems::InstItems::DomItems::DomList::TraceItems>();
        }
        return trace_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_items != nullptr)
    {
        _children["config-items"] = config_items;
    }

    if(eventhist_items != nullptr)
    {
        _children["eventHist-items"] = eventhist_items;
    }

    if(rpfselect_items != nullptr)
    {
        _children["rpfselect-items"] = rpfselect_items;
    }

    if(trace_items != nullptr)
    {
        _children["trace-items"] = trace_items;
    }

    return _children;
}

void System::MribItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoEnable")
    {
        autoenable = value;
        autoenable.value_namespace = name_space;
        autoenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng = value;
        lognbhchng.value_namespace = name_space;
        lognbhchng.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes = value;
        flushroutes.value_namespace = name_space;
        flushroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpDelay")
    {
        jpdelay = value;
        jpdelay.value_namespace = name_space;
        jpdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRateLmt")
    {
        regratelmt = value;
        regratelmt.value_namespace = name_space;
        regratelmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rfcStrict")
    {
        rfcstrict = value;
        rfcstrict.value_namespace = name_space;
        rfcstrict.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "autoEnable")
    {
        autoenable.yfilter = yfilter;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng.yfilter = yfilter;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "jpDelay")
    {
        jpdelay.yfilter = yfilter;
    }
    if(value_path == "regRateLmt")
    {
        regratelmt.yfilter = yfilter;
    }
    if(value_path == "rfcStrict")
    {
        rfcstrict.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-items" || name == "eventHist-items" || name == "rpfselect-items" || name == "trace-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "mtu" || name == "autoEnable" || name == "logNbhChng" || name == "flushRoutes" || name == "bfd" || name == "jpDelay" || name == "regRateLmt" || name == "rfcStrict")
        return true;
    return false;
}

System::MribItems::InstItems::DomItems::DomList::ConfigItems::ConfigItems()
    :
    holdenable{YType::enumeration, "holdEnable"},
    holddown{YType::uint16, "holddown"},
    modeenable{YType::enumeration, "ModeEnable"},
    mode{YType::enumeration, "Mode"},
    moderesilient{YType::boolean, "ModeResilient"},
    mfdmtype{YType::enumeration, "mfdmType"},
    mfdmsize{YType::uint32, "mfdmSize"}
{

    yang_name = "config-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::DomItems::DomList::ConfigItems::~ConfigItems()
{
}

bool System::MribItems::InstItems::DomItems::DomList::ConfigItems::has_data() const
{
    if (is_presence_container) return true;
    return holdenable.is_set
	|| holddown.is_set
	|| modeenable.is_set
	|| mode.is_set
	|| moderesilient.is_set
	|| mfdmtype.is_set
	|| mfdmsize.is_set;
}

bool System::MribItems::InstItems::DomItems::DomList::ConfigItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdenable.yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(modeenable.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(moderesilient.yfilter)
	|| ydk::is_set(mfdmtype.yfilter)
	|| ydk::is_set(mfdmsize.yfilter);
}

std::string System::MribItems::InstItems::DomItems::DomList::ConfigItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::DomItems::DomList::ConfigItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdenable.is_set || is_set(holdenable.yfilter)) leaf_name_data.push_back(holdenable.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (modeenable.is_set || is_set(modeenable.yfilter)) leaf_name_data.push_back(modeenable.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (moderesilient.is_set || is_set(moderesilient.yfilter)) leaf_name_data.push_back(moderesilient.get_name_leafdata());
    if (mfdmtype.is_set || is_set(mfdmtype.yfilter)) leaf_name_data.push_back(mfdmtype.get_name_leafdata());
    if (mfdmsize.is_set || is_set(mfdmsize.yfilter)) leaf_name_data.push_back(mfdmsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::DomItems::DomList::ConfigItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::DomItems::DomList::ConfigItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MribItems::InstItems::DomItems::DomList::ConfigItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdEnable")
    {
        holdenable = value;
        holdenable.value_namespace = name_space;
        holdenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ModeEnable")
    {
        modeenable = value;
        modeenable.value_namespace = name_space;
        modeenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ModeResilient")
    {
        moderesilient = value;
        moderesilient.value_namespace = name_space;
        moderesilient.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfdmType")
    {
        mfdmtype = value;
        mfdmtype.value_namespace = name_space;
        mfdmtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfdmSize")
    {
        mfdmsize = value;
        mfdmsize.value_namespace = name_space;
        mfdmsize.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::DomItems::DomList::ConfigItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdEnable")
    {
        holdenable.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "ModeEnable")
    {
        modeenable.yfilter = yfilter;
    }
    if(value_path == "Mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "ModeResilient")
    {
        moderesilient.yfilter = yfilter;
    }
    if(value_path == "mfdmType")
    {
        mfdmtype.yfilter = yfilter;
    }
    if(value_path == "mfdmSize")
    {
        mfdmsize.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::DomItems::DomList::ConfigItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdEnable" || name == "holddown" || name == "ModeEnable" || name == "Mode" || name == "ModeResilient" || name == "mfdmType" || name == "mfdmSize")
        return true;
    return false;
}

System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistItems()
    :
    eventhistory_list(this, {"type"})
{

    yang_name = "eventHist-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::DomItems::DomList::EventHistItems::~EventHistItems()
{
}

bool System::MribItems::InstItems::DomItems::DomList::EventHistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::DomItems::DomList::EventHistItems::has_operation() const
{
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::DomItems::DomList::EventHistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventHist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::DomItems::DomList::EventHistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::DomItems::DomList::EventHistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventHistory-list")
    {
        auto ent_ = std::make_shared<System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList>();
        ent_->parent = this;
        eventhistory_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::DomItems::DomList::EventHistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eventhistory_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MribItems::InstItems::DomItems::DomList::EventHistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::DomItems::DomList::EventHistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::DomItems::DomList::EventHistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventHistory-list")
        return true;
    return false;
}

System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::EventHistoryList()
    :
    type{YType::enumeration, "type"},
    size{YType::uint32, "size"}
{

    yang_name = "EventHistory-list"; yang_parent_name = "eventHist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::~EventHistoryList()
{
}

bool System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| size.is_set;
}

bool System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventHistory-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "size")
        return true;
    return false;
}

System::MribItems::InstItems::DomItems::DomList::RpfselectItems::RpfselectItems()
    :
    rpfselect_list(this, {"vrfname", "srcpfx"})
{

    yang_name = "rpfselect-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::DomItems::DomList::RpfselectItems::~RpfselectItems()
{
}

bool System::MribItems::InstItems::DomItems::DomList::RpfselectItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpfselect_list.len(); index++)
    {
        if(rpfselect_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::DomItems::DomList::RpfselectItems::has_operation() const
{
    for (std::size_t index=0; index<rpfselect_list.len(); index++)
    {
        if(rpfselect_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::DomItems::DomList::RpfselectItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfselect-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::DomItems::DomList::RpfselectItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::DomItems::DomList::RpfselectItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpfSelect-list")
    {
        auto ent_ = std::make_shared<System::MribItems::InstItems::DomItems::DomList::RpfselectItems::RpfSelectList>();
        ent_->parent = this;
        rpfselect_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::DomItems::DomList::RpfselectItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpfselect_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MribItems::InstItems::DomItems::DomList::RpfselectItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::DomItems::DomList::RpfselectItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::DomItems::DomList::RpfselectItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpfSelect-list")
        return true;
    return false;
}

System::MribItems::InstItems::DomItems::DomList::RpfselectItems::RpfSelectList::RpfSelectList()
    :
    vrfname{YType::str, "vrfName"},
    srcpfx{YType::str, "srcPfx"}
{

    yang_name = "RpfSelect-list"; yang_parent_name = "rpfselect-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::DomItems::DomList::RpfselectItems::RpfSelectList::~RpfSelectList()
{
}

bool System::MribItems::InstItems::DomItems::DomList::RpfselectItems::RpfSelectList::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set
	|| srcpfx.is_set;
}

bool System::MribItems::InstItems::DomItems::DomList::RpfselectItems::RpfSelectList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(srcpfx.yfilter);
}

std::string System::MribItems::InstItems::DomItems::DomList::RpfselectItems::RpfSelectList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpfSelect-list";
    ADD_KEY_TOKEN(vrfname, "vrfName");
    ADD_KEY_TOKEN(srcpfx, "srcPfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::DomItems::DomList::RpfselectItems::RpfSelectList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (srcpfx.is_set || is_set(srcpfx.yfilter)) leaf_name_data.push_back(srcpfx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::DomItems::DomList::RpfselectItems::RpfSelectList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::DomItems::DomList::RpfselectItems::RpfSelectList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MribItems::InstItems::DomItems::DomList::RpfselectItems::RpfSelectList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPfx")
    {
        srcpfx = value;
        srcpfx.value_namespace = name_space;
        srcpfx.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::DomItems::DomList::RpfselectItems::RpfSelectList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "srcPfx")
    {
        srcpfx.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::DomItems::DomList::RpfselectItems::RpfSelectList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfName" || name == "srcPfx")
        return true;
    return false;
}

System::MribItems::InstItems::DomItems::DomList::TraceItems::TraceItems()
    :
    traceenable{YType::boolean, "traceEnable"},
    traceentrycnt{YType::uint32, "traceEntryCnt"},
    tracereccnt{YType::uint32, "traceRecCnt"}
{

    yang_name = "trace-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::DomItems::DomList::TraceItems::~TraceItems()
{
}

bool System::MribItems::InstItems::DomItems::DomList::TraceItems::has_data() const
{
    if (is_presence_container) return true;
    return traceenable.is_set
	|| traceentrycnt.is_set
	|| tracereccnt.is_set;
}

bool System::MribItems::InstItems::DomItems::DomList::TraceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traceenable.yfilter)
	|| ydk::is_set(traceentrycnt.yfilter)
	|| ydk::is_set(tracereccnt.yfilter);
}

std::string System::MribItems::InstItems::DomItems::DomList::TraceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::DomItems::DomList::TraceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traceenable.is_set || is_set(traceenable.yfilter)) leaf_name_data.push_back(traceenable.get_name_leafdata());
    if (traceentrycnt.is_set || is_set(traceentrycnt.yfilter)) leaf_name_data.push_back(traceentrycnt.get_name_leafdata());
    if (tracereccnt.is_set || is_set(tracereccnt.yfilter)) leaf_name_data.push_back(tracereccnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::DomItems::DomList::TraceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::DomItems::DomList::TraceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MribItems::InstItems::DomItems::DomList::TraceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traceEnable")
    {
        traceenable = value;
        traceenable.value_namespace = name_space;
        traceenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traceEntryCnt")
    {
        traceentrycnt = value;
        traceentrycnt.value_namespace = name_space;
        traceentrycnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traceRecCnt")
    {
        tracereccnt = value;
        tracereccnt.value_namespace = name_space;
        tracereccnt.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::DomItems::DomList::TraceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traceEnable")
    {
        traceenable.yfilter = yfilter;
    }
    if(value_path == "traceEntryCnt")
    {
        traceentrycnt.yfilter = yfilter;
    }
    if(value_path == "traceRecCnt")
    {
        tracereccnt.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::DomItems::DomList::TraceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traceEnable" || name == "traceEntryCnt" || name == "traceRecCnt")
        return true;
    return false;
}

System::MribItems::InstItems::LoglevelItems::LoglevelItems()
    :
    type{YType::enumeration, "type"},
    level{YType::uint16, "level"}
{

    yang_name = "loglevel-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MribItems::InstItems::LoglevelItems::~LoglevelItems()
{
}

bool System::MribItems::InstItems::LoglevelItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| level.is_set;
}

bool System::MribItems::InstItems::LoglevelItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string System::MribItems::InstItems::LoglevelItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mrib-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MribItems::InstItems::LoglevelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loglevel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::LoglevelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::LoglevelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::LoglevelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MribItems::InstItems::LoglevelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::LoglevelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::LoglevelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "level")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::RouteDbItems()
    :
    vrf_items(std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems>())
{
    vrf_items->parent = this;

    yang_name = "routeDb-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MribItems::InstItems::RouteDbItems::~RouteDbItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::has_data() const
{
    if (is_presence_container) return true;
    return (vrf_items !=  nullptr && vrf_items->has_data());
}

bool System::MribItems::InstItems::RouteDbItems::has_operation() const
{
    return is_set(yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation());
}

std::string System::MribItems::InstItems::RouteDbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mrib-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MribItems::InstItems::RouteDbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routeDb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::RouteDbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems>();
        }
        return vrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::RouteDbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    return _children;
}

void System::MribItems::InstItems::RouteDbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfItems()
    :
    vrf_list(this, {"name"})
{

    yang_name = "vrf-items"; yang_parent_name = "routeDb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::~VrfItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mrib-items/inst-items/routeDb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vrf-list")
    {
        auto ent_ = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList>();
        ent_->parent = this;
        vrf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vrf-list")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::VrfList()
    :
    name{YType::str, "name"},
    totalnumroutes{YType::uint32, "totalNumRoutes"},
    stargroute{YType::uint32, "starGRoute"},
    sgroute{YType::uint32, "sgRoute"},
    stargprfx{YType::uint32, "starGPrfx"}
        ,
    group_items(std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems>())
{
    group_items->parent = this;

    yang_name = "Vrf-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::~VrfList()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| totalnumroutes.is_set
	|| stargroute.is_set
	|| sgroute.is_set
	|| stargprfx.is_set
	|| (group_items !=  nullptr && group_items->has_data());
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(totalnumroutes.yfilter)
	|| ydk::is_set(stargroute.yfilter)
	|| ydk::is_set(sgroute.yfilter)
	|| ydk::is_set(stargprfx.yfilter)
	|| (group_items !=  nullptr && group_items->has_operation());
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mrib-items/inst-items/routeDb-items/vrf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vrf-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (totalnumroutes.is_set || is_set(totalnumroutes.yfilter)) leaf_name_data.push_back(totalnumroutes.get_name_leafdata());
    if (stargroute.is_set || is_set(stargroute.yfilter)) leaf_name_data.push_back(stargroute.get_name_leafdata());
    if (sgroute.is_set || is_set(sgroute.yfilter)) leaf_name_data.push_back(sgroute.get_name_leafdata());
    if (stargprfx.is_set || is_set(stargprfx.yfilter)) leaf_name_data.push_back(stargprfx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems>();
        }
        return group_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_items != nullptr)
    {
        _children["group-items"] = group_items;
    }

    return _children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes = value;
        totalnumroutes.value_namespace = name_space;
        totalnumroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starGRoute")
    {
        stargroute = value;
        stargroute.value_namespace = name_space;
        stargroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgRoute")
    {
        sgroute = value;
        sgroute.value_namespace = name_space;
        sgroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starGPrfx")
    {
        stargprfx = value;
        stargprfx.value_namespace = name_space;
        stargprfx.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes.yfilter = yfilter;
    }
    if(value_path == "starGRoute")
    {
        stargroute.yfilter = yfilter;
    }
    if(value_path == "sgRoute")
    {
        sgroute.yfilter = yfilter;
    }
    if(value_path == "starGPrfx")
    {
        stargprfx.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-items" || name == "name" || name == "totalNumRoutes" || name == "starGRoute" || name == "sgRoute" || name == "starGPrfx")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupItems()
    :
    group_list(this, {"grpaddr"})
{

    yang_name = "group-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::~GroupItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Group-list")
    {
        auto ent_ = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList>();
        ent_->parent = this;
        group_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Group-list")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::GroupList()
    :
    grpaddr{YType::str, "grpAddr"},
    grpmasklen{YType::uint32, "grpMasklen"},
    bidir{YType::boolean, "bidir"}
        ,
    source_items(std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems>())
{
    source_items->parent = this;

    yang_name = "Group-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::~GroupList()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return grpaddr.is_set
	|| grpmasklen.is_set
	|| bidir.is_set
	|| (source_items !=  nullptr && source_items->has_data());
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| ydk::is_set(grpmasklen.yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Group-list";
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());
    if (grpmasklen.is_set || is_set(grpmasklen.yfilter)) leaf_name_data.push_back(grpmasklen.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_items != nullptr)
    {
        _children["source-items"] = source_items;
    }

    return _children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpAddr")
    {
        grpaddr = value;
        grpaddr.value_namespace = name_space;
        grpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpMasklen")
    {
        grpmasklen = value;
        grpmasklen.value_namespace = name_space;
        grpmasklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpAddr")
    {
        grpaddr.yfilter = yfilter;
    }
    if(value_path == "grpMasklen")
    {
        grpmasklen.yfilter = yfilter;
    }
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-items" || name == "grpAddr" || name == "grpMasklen" || name == "bidir")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceItems()
    :
    source_list(this, {"srcaddr"})
{

    yang_name = "source-items"; yang_parent_name = "Group-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::~SourceItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Source-list")
    {
        auto ent_ = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList>();
        ent_->parent = this;
        source_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : source_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Source-list")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::SourceList()
    :
    srcaddr{YType::str, "srcAddr"},
    pending{YType::boolean, "pending"},
    uptime{YType::str, "uptime"},
    oifcount{YType::uint32, "oifcount"},
    statspkts{YType::uint32, "statsPkts"},
    statsbytes{YType::uint32, "statsBytes"},
    statsratebuf{YType::str, "statsRateBuf"},
    lispsrcrloc{YType::str, "lispSrcRloc"},
    routeiif{YType::str, "routeIif"},
    rpfnbr{YType::str, "rpfNbr"},
    internal{YType::boolean, "internal"},
    rpfnbruptime{YType::str, "rpfNbrUptime"},
    fabricoif{YType::boolean, "fabricOif"},
    fabricloser{YType::boolean, "fabricLoser"},
    numvpcsvioifs{YType::uint32, "numVpcSviOifs"},
    routemdtiod{YType::boolean, "routeMdtIod"},
    mdtencapindex{YType::uint32, "mdtEncapIndex"}
        ,
    mpib_items(std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems>())
    , oif_items(std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>())
{
    mpib_items->parent = this;
    oif_items->parent = this;

    yang_name = "Source-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::~SourceList()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| pending.is_set
	|| uptime.is_set
	|| oifcount.is_set
	|| statspkts.is_set
	|| statsbytes.is_set
	|| statsratebuf.is_set
	|| lispsrcrloc.is_set
	|| routeiif.is_set
	|| rpfnbr.is_set
	|| internal.is_set
	|| rpfnbruptime.is_set
	|| fabricoif.is_set
	|| fabricloser.is_set
	|| numvpcsvioifs.is_set
	|| routemdtiod.is_set
	|| mdtencapindex.is_set
	|| (mpib_items !=  nullptr && mpib_items->has_data())
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(pending.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(oifcount.yfilter)
	|| ydk::is_set(statspkts.yfilter)
	|| ydk::is_set(statsbytes.yfilter)
	|| ydk::is_set(statsratebuf.yfilter)
	|| ydk::is_set(lispsrcrloc.yfilter)
	|| ydk::is_set(routeiif.yfilter)
	|| ydk::is_set(rpfnbr.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(rpfnbruptime.yfilter)
	|| ydk::is_set(fabricoif.yfilter)
	|| ydk::is_set(fabricloser.yfilter)
	|| ydk::is_set(numvpcsvioifs.yfilter)
	|| ydk::is_set(routemdtiod.yfilter)
	|| ydk::is_set(mdtencapindex.yfilter)
	|| (mpib_items !=  nullptr && mpib_items->has_operation())
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Source-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (pending.is_set || is_set(pending.yfilter)) leaf_name_data.push_back(pending.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());
    if (statspkts.is_set || is_set(statspkts.yfilter)) leaf_name_data.push_back(statspkts.get_name_leafdata());
    if (statsbytes.is_set || is_set(statsbytes.yfilter)) leaf_name_data.push_back(statsbytes.get_name_leafdata());
    if (statsratebuf.is_set || is_set(statsratebuf.yfilter)) leaf_name_data.push_back(statsratebuf.get_name_leafdata());
    if (lispsrcrloc.is_set || is_set(lispsrcrloc.yfilter)) leaf_name_data.push_back(lispsrcrloc.get_name_leafdata());
    if (routeiif.is_set || is_set(routeiif.yfilter)) leaf_name_data.push_back(routeiif.get_name_leafdata());
    if (rpfnbr.is_set || is_set(rpfnbr.yfilter)) leaf_name_data.push_back(rpfnbr.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (rpfnbruptime.is_set || is_set(rpfnbruptime.yfilter)) leaf_name_data.push_back(rpfnbruptime.get_name_leafdata());
    if (fabricoif.is_set || is_set(fabricoif.yfilter)) leaf_name_data.push_back(fabricoif.get_name_leafdata());
    if (fabricloser.is_set || is_set(fabricloser.yfilter)) leaf_name_data.push_back(fabricloser.get_name_leafdata());
    if (numvpcsvioifs.is_set || is_set(numvpcsvioifs.yfilter)) leaf_name_data.push_back(numvpcsvioifs.get_name_leafdata());
    if (routemdtiod.is_set || is_set(routemdtiod.yfilter)) leaf_name_data.push_back(routemdtiod.get_name_leafdata());
    if (mdtencapindex.is_set || is_set(mdtencapindex.yfilter)) leaf_name_data.push_back(mdtencapindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpib-items")
    {
        if(mpib_items == nullptr)
        {
            mpib_items = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems>();
        }
        return mpib_items;
    }

    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpib_items != nullptr)
    {
        _children["mpib-items"] = mpib_items;
    }

    if(oif_items != nullptr)
    {
        _children["oif-items"] = oif_items;
    }

    return _children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending")
    {
        pending = value;
        pending.value_namespace = name_space;
        pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifcount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsPkts")
    {
        statspkts = value;
        statspkts.value_namespace = name_space;
        statspkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsBytes")
    {
        statsbytes = value;
        statsbytes.value_namespace = name_space;
        statsbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsRateBuf")
    {
        statsratebuf = value;
        statsratebuf.value_namespace = name_space;
        statsratebuf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lispSrcRloc")
    {
        lispsrcrloc = value;
        lispsrcrloc.value_namespace = name_space;
        lispsrcrloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeIif")
    {
        routeiif = value;
        routeiif.value_namespace = name_space;
        routeiif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr = value;
        rpfnbr.value_namespace = name_space;
        rpfnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbrUptime")
    {
        rpfnbruptime = value;
        rpfnbruptime.value_namespace = name_space;
        rpfnbruptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricOif")
    {
        fabricoif = value;
        fabricoif.value_namespace = name_space;
        fabricoif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricLoser")
    {
        fabricloser = value;
        fabricloser.value_namespace = name_space;
        fabricloser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numVpcSviOifs")
    {
        numvpcsvioifs = value;
        numvpcsvioifs.value_namespace = name_space;
        numvpcsvioifs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeMdtIod")
    {
        routemdtiod = value;
        routemdtiod.value_namespace = name_space;
        routemdtiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdtEncapIndex")
    {
        mdtencapindex = value;
        mdtencapindex.value_namespace = name_space;
        mdtencapindex.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "pending")
    {
        pending.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "oifcount")
    {
        oifcount.yfilter = yfilter;
    }
    if(value_path == "statsPkts")
    {
        statspkts.yfilter = yfilter;
    }
    if(value_path == "statsBytes")
    {
        statsbytes.yfilter = yfilter;
    }
    if(value_path == "statsRateBuf")
    {
        statsratebuf.yfilter = yfilter;
    }
    if(value_path == "lispSrcRloc")
    {
        lispsrcrloc.yfilter = yfilter;
    }
    if(value_path == "routeIif")
    {
        routeiif.yfilter = yfilter;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "rpfNbrUptime")
    {
        rpfnbruptime.yfilter = yfilter;
    }
    if(value_path == "fabricOif")
    {
        fabricoif.yfilter = yfilter;
    }
    if(value_path == "fabricLoser")
    {
        fabricloser.yfilter = yfilter;
    }
    if(value_path == "numVpcSviOifs")
    {
        numvpcsvioifs.yfilter = yfilter;
    }
    if(value_path == "routeMdtIod")
    {
        routemdtiod.yfilter = yfilter;
    }
    if(value_path == "mdtEncapIndex")
    {
        mdtencapindex.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpib-items" || name == "oif-items" || name == "srcAddr" || name == "pending" || name == "uptime" || name == "oifcount" || name == "statsPkts" || name == "statsBytes" || name == "statsRateBuf" || name == "lispSrcRloc" || name == "routeIif" || name == "rpfNbr" || name == "internal" || name == "rpfNbrUptime" || name == "fabricOif" || name == "fabricLoser" || name == "numVpcSviOifs" || name == "routeMdtIod" || name == "mdtEncapIndex")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibItems()
    :
    mpib_list(this, {"mpibname"})
{

    yang_name = "mpib-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::~MpibItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mpib_list.len(); index++)
    {
        if(mpib_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::has_operation() const
{
    for (std::size_t index=0; index<mpib_list.len(); index++)
    {
        if(mpib_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mpib-list")
    {
        auto ent_ = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList>();
        ent_->parent = this;
        mpib_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mpib_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mpib-list")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::MpibList()
    :
    mpibname{YType::str, "mpibName"},
    oifcount{YType::uint32, "oifCount"},
    staleroute{YType::boolean, "staleRoute"}
{

    yang_name = "Mpib-list"; yang_parent_name = "mpib-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::~MpibList()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::has_data() const
{
    if (is_presence_container) return true;
    return mpibname.is_set
	|| oifcount.is_set
	|| staleroute.is_set;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpibname.yfilter)
	|| ydk::is_set(oifcount.yfilter)
	|| ydk::is_set(staleroute.yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mpib-list";
    ADD_KEY_TOKEN(mpibname, "mpibName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpibname.is_set || is_set(mpibname.yfilter)) leaf_name_data.push_back(mpibname.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());
    if (staleroute.is_set || is_set(staleroute.yfilter)) leaf_name_data.push_back(staleroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpibName")
    {
        mpibname = value;
        mpibname.value_namespace = name_space;
        mpibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifCount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleRoute")
    {
        staleroute = value;
        staleroute.value_namespace = name_space;
        staleroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpibName")
    {
        mpibname.yfilter = yfilter;
    }
    if(value_path == "oifCount")
    {
        oifcount.yfilter = yfilter;
    }
    if(value_path == "staleRoute")
    {
        staleroute.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpibName" || name == "oifCount" || name == "staleRoute")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifItems()
    :
    oif_list(this, {"oifname"})
{

    yang_name = "oif-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::~OifItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Oif-list")
    {
        auto ent_ = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList>();
        ent_->parent = this;
        oif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Oif-list")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifList()
    :
    oifname{YType::str, "oifName"},
    oifuptime{YType::str, "oifUptime"},
    oifrpf{YType::boolean, "oifRPF"},
    oiflispencapentries{YType::uint32, "oifLispEncapEntries"}
        ,
    lispencap_items(std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems>())
    , oifmpib_items(std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems>())
{
    lispencap_items->parent = this;
    oifmpib_items->parent = this;

    yang_name = "Oif-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::~OifList()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_data() const
{
    if (is_presence_container) return true;
    return oifname.is_set
	|| oifuptime.is_set
	|| oifrpf.is_set
	|| oiflispencapentries.is_set
	|| (lispencap_items !=  nullptr && lispencap_items->has_data())
	|| (oifmpib_items !=  nullptr && oifmpib_items->has_data());
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifname.yfilter)
	|| ydk::is_set(oifuptime.yfilter)
	|| ydk::is_set(oifrpf.yfilter)
	|| ydk::is_set(oiflispencapentries.yfilter)
	|| (lispencap_items !=  nullptr && lispencap_items->has_operation())
	|| (oifmpib_items !=  nullptr && oifmpib_items->has_operation());
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Oif-list";
    ADD_KEY_TOKEN(oifname, "oifName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifname.is_set || is_set(oifname.yfilter)) leaf_name_data.push_back(oifname.get_name_leafdata());
    if (oifuptime.is_set || is_set(oifuptime.yfilter)) leaf_name_data.push_back(oifuptime.get_name_leafdata());
    if (oifrpf.is_set || is_set(oifrpf.yfilter)) leaf_name_data.push_back(oifrpf.get_name_leafdata());
    if (oiflispencapentries.is_set || is_set(oiflispencapentries.yfilter)) leaf_name_data.push_back(oiflispencapentries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lispEncap-items")
    {
        if(lispencap_items == nullptr)
        {
            lispencap_items = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems>();
        }
        return lispencap_items;
    }

    if(child_yang_name == "oifMpib-items")
    {
        if(oifmpib_items == nullptr)
        {
            oifmpib_items = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems>();
        }
        return oifmpib_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lispencap_items != nullptr)
    {
        _children["lispEncap-items"] = lispencap_items;
    }

    if(oifmpib_items != nullptr)
    {
        _children["oifMpib-items"] = oifmpib_items;
    }

    return _children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oifName")
    {
        oifname = value;
        oifname.value_namespace = name_space;
        oifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifUptime")
    {
        oifuptime = value;
        oifuptime.value_namespace = name_space;
        oifuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifRPF")
    {
        oifrpf = value;
        oifrpf.value_namespace = name_space;
        oifrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries = value;
        oiflispencapentries.value_namespace = name_space;
        oiflispencapentries.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oifName")
    {
        oifname.yfilter = yfilter;
    }
    if(value_path == "oifUptime")
    {
        oifuptime.yfilter = yfilter;
    }
    if(value_path == "oifRPF")
    {
        oifrpf.yfilter = yfilter;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lispEncap-items" || name == "oifMpib-items" || name == "oifName" || name == "oifUptime" || name == "oifRPF" || name == "oifLispEncapEntries")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapItems()
    :
    lispencap_list(this, {"index_"})
{

    yang_name = "lispEncap-items"; yang_parent_name = "Oif-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::~LispEncapItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lispencap_list.len(); index++)
    {
        if(lispencap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::has_operation() const
{
    for (std::size_t index=0; index<lispencap_list.len(); index++)
    {
        if(lispencap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lispEncap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LispEncap-list")
    {
        auto ent_ = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList>();
        ent_->parent = this;
        lispencap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lispencap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LispEncap-list")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::LispEncapList()
    :
    index_{YType::uint32, "index"},
    srcrloc{YType::str, "srcRloc"},
    dstrloc{YType::str, "dstRloc"}
{

    yang_name = "LispEncap-list"; yang_parent_name = "lispEncap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::~LispEncapList()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| srcrloc.is_set
	|| dstrloc.is_set;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(srcrloc.yfilter)
	|| ydk::is_set(dstrloc.yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LispEncap-list";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (srcrloc.is_set || is_set(srcrloc.yfilter)) leaf_name_data.push_back(srcrloc.get_name_leafdata());
    if (dstrloc.is_set || is_set(dstrloc.yfilter)) leaf_name_data.push_back(dstrloc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcRloc")
    {
        srcrloc = value;
        srcrloc.value_namespace = name_space;
        srcrloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstRloc")
    {
        dstrloc = value;
        dstrloc.value_namespace = name_space;
        dstrloc.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "srcRloc")
    {
        srcrloc.yfilter = yfilter;
    }
    if(value_path == "dstRloc")
    {
        dstrloc.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "srcRloc" || name == "dstRloc")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibItems()
    :
    oifmpib_list(this, {"oifmpibname"})
{

    yang_name = "oifMpib-items"; yang_parent_name = "Oif-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::~OifMpibItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oifmpib_list.len(); index++)
    {
        if(oifmpib_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::has_operation() const
{
    for (std::size_t index=0; index<oifmpib_list.len(); index++)
    {
        if(oifmpib_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifMpib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifMpib-list")
    {
        auto ent_ = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList>();
        ent_->parent = this;
        oifmpib_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oifmpib_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifMpib-list")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::OifMpibList()
    :
    oifmpibname{YType::str, "oifMpibName"},
    staleoif{YType::boolean, "staleOif"},
    vpcsvi{YType::boolean, "VpcSvi"}
{

    yang_name = "OifMpib-list"; yang_parent_name = "oifMpib-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::~OifMpibList()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::has_data() const
{
    if (is_presence_container) return true;
    return oifmpibname.is_set
	|| staleoif.is_set
	|| vpcsvi.is_set;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifmpibname.yfilter)
	|| ydk::is_set(staleoif.yfilter)
	|| ydk::is_set(vpcsvi.yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifMpib-list";
    ADD_KEY_TOKEN(oifmpibname, "oifMpibName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifmpibname.is_set || is_set(oifmpibname.yfilter)) leaf_name_data.push_back(oifmpibname.get_name_leafdata());
    if (staleoif.is_set || is_set(staleoif.yfilter)) leaf_name_data.push_back(staleoif.get_name_leafdata());
    if (vpcsvi.is_set || is_set(vpcsvi.yfilter)) leaf_name_data.push_back(vpcsvi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oifMpibName")
    {
        oifmpibname = value;
        oifmpibname.value_namespace = name_space;
        oifmpibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleOif")
    {
        staleoif = value;
        staleoif.value_namespace = name_space;
        staleoif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VpcSvi")
    {
        vpcsvi = value;
        vpcsvi.value_namespace = name_space;
        vpcsvi.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oifMpibName")
    {
        oifmpibname.yfilter = yfilter;
    }
    if(value_path == "staleOif")
    {
        staleoif.yfilter = yfilter;
    }
    if(value_path == "VpcSvi")
    {
        vpcsvi.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oifMpibName" || name == "staleOif" || name == "VpcSvi")
        return true;
    return false;
}

System::MsdpItems::MsdpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::MsdpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "msdp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MsdpItems::~MsdpItems()
{
}

bool System::MsdpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::MsdpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::MsdpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MsdpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MsdpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::MsdpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MsdpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::MsdpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MsdpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MsdpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::MsdpItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    dom_items(std::make_shared<System::MsdpItems::InstItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "msdp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MsdpItems::InstItems::~InstItems()
{
}

bool System::MsdpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::MsdpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::MsdpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/msdp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MsdpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MsdpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::MsdpItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MsdpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    return _children;
}

void System::MsdpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MsdpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MsdpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MsdpItems::InstItems::DomItems::~DomItems()
{
}

bool System::MsdpItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MsdpItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/msdp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MsdpItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MsdpItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MsdpItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MsdpItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MsdpItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MsdpItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    origif{YType::str, "origIf"},
    srcactivemsgintvl{YType::uint16, "srcActiveMsgIntvl"},
    reconnintvl{YType::uint16, "reConnIntvl"},
    ctrl{YType::str, "ctrl"}
        ,
    db_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems>())
    , maxgrp_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems>())
    , eventhist_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::EventHistItems>())
    , peer_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::PeerItems>())
    , interleakp_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems>())
{
    db_items->parent = this;
    maxgrp_items->parent = this;
    eventhist_items->parent = this;
    peer_items->parent = this;
    interleakp_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MsdpItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| origif.is_set
	|| srcactivemsgintvl.is_set
	|| reconnintvl.is_set
	|| ctrl.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (maxgrp_items !=  nullptr && maxgrp_items->has_data())
	|| (eventhist_items !=  nullptr && eventhist_items->has_data())
	|| (peer_items !=  nullptr && peer_items->has_data())
	|| (interleakp_items !=  nullptr && interleakp_items->has_data());
}

bool System::MsdpItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(origif.yfilter)
	|| ydk::is_set(srcactivemsgintvl.yfilter)
	|| ydk::is_set(reconnintvl.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (maxgrp_items !=  nullptr && maxgrp_items->has_operation())
	|| (eventhist_items !=  nullptr && eventhist_items->has_operation())
	|| (peer_items !=  nullptr && peer_items->has_operation())
	|| (interleakp_items !=  nullptr && interleakp_items->has_operation());
}

std::string System::MsdpItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/msdp-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MsdpItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (origif.is_set || is_set(origif.yfilter)) leaf_name_data.push_back(origif.get_name_leafdata());
    if (srcactivemsgintvl.is_set || is_set(srcactivemsgintvl.yfilter)) leaf_name_data.push_back(srcactivemsgintvl.get_name_leafdata());
    if (reconnintvl.is_set || is_set(reconnintvl.yfilter)) leaf_name_data.push_back(reconnintvl.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MsdpItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "maxgrp-items")
    {
        if(maxgrp_items == nullptr)
        {
            maxgrp_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems>();
        }
        return maxgrp_items;
    }

    if(child_yang_name == "eventHist-items")
    {
        if(eventhist_items == nullptr)
        {
            eventhist_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::EventHistItems>();
        }
        return eventhist_items;
    }

    if(child_yang_name == "peer-items")
    {
        if(peer_items == nullptr)
        {
            peer_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::PeerItems>();
        }
        return peer_items;
    }

    if(child_yang_name == "interleakp-items")
    {
        if(interleakp_items == nullptr)
        {
            interleakp_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems>();
        }
        return interleakp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MsdpItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(maxgrp_items != nullptr)
    {
        _children["maxgrp-items"] = maxgrp_items;
    }

    if(eventhist_items != nullptr)
    {
        _children["eventHist-items"] = eventhist_items;
    }

    if(peer_items != nullptr)
    {
        _children["peer-items"] = peer_items;
    }

    if(interleakp_items != nullptr)
    {
        _children["interleakp-items"] = interleakp_items;
    }

    return _children;
}

void System::MsdpItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origIf")
    {
        origif = value;
        origif.value_namespace = name_space;
        origif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcActiveMsgIntvl")
    {
        srcactivemsgintvl = value;
        srcactivemsgintvl.value_namespace = name_space;
        srcactivemsgintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reConnIntvl")
    {
        reconnintvl = value;
        reconnintvl.value_namespace = name_space;
        reconnintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "origIf")
    {
        origif.yfilter = yfilter;
    }
    if(value_path == "srcActiveMsgIntvl")
    {
        srcactivemsgintvl.yfilter = yfilter;
    }
    if(value_path == "reConnIntvl")
    {
        reconnintvl.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "maxgrp-items" || name == "eventHist-items" || name == "peer-items" || name == "interleakp-items" || name == "name" || name == "origIf" || name == "srcActiveMsgIntvl" || name == "reConnIntvl" || name == "ctrl")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MsdpItems::InstItems::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MsdpItems::InstItems::DomItems::DomList::DbItems::get_children() const
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

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    src_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems>())
    , source_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems>())
{
    src_items->parent = this;
    source_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (src_items !=  nullptr && src_items->has_data())
	|| (source_items !=  nullptr && source_items->has_data());
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (src_items !=  nullptr && src_items->has_operation())
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "src-items")
    {
        if(src_items == nullptr)
        {
            src_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems>();
        }
        return src_items;
    }

    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(src_items != nullptr)
    {
        _children["src-items"] = src_items;
    }

    if(source_items != nullptr)
    {
        _children["source-items"] = source_items;
    }

    return _children;
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-items" || name == "source-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::SrcItems()
    :
    route_list(this, {"src", "grp", "rp"})
{

    yang_name = "src-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::~SrcItems()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto ent_ = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList>();
        ent_->parent = this;
        route_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_children() const
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

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::RouteList()
    :
    src{YType::str, "src"},
    grp{YType::str, "grp"},
    rp{YType::str, "rp"},
    peer{YType::str, "peer"},
    asn{YType::str, "asn"},
    createts{YType::str, "createTs"},
    expirets{YType::str, "expireTs"},
    sacnt{YType::uint32, "saCnt"},
    datapkt{YType::uint32, "dataPkt"}
{

    yang_name = "Route-list"; yang_parent_name = "src-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::~RouteList()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return src.is_set
	|| grp.is_set
	|| rp.is_set
	|| peer.is_set
	|| asn.is_set
	|| createts.is_set
	|| expirets.is_set
	|| sacnt.is_set
	|| datapkt.is_set;
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(grp.yfilter)
	|| ydk::is_set(rp.yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(expirets.yfilter)
	|| ydk::is_set(sacnt.yfilter)
	|| ydk::is_set(datapkt.yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(src, "src");
    ADD_KEY_TOKEN(grp, "grp");
    ADD_KEY_TOKEN(rp, "rp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (grp.is_set || is_set(grp.yfilter)) leaf_name_data.push_back(grp.get_name_leafdata());
    if (rp.is_set || is_set(rp.yfilter)) leaf_name_data.push_back(rp.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (expirets.is_set || is_set(expirets.yfilter)) leaf_name_data.push_back(expirets.get_name_leafdata());
    if (sacnt.is_set || is_set(sacnt.yfilter)) leaf_name_data.push_back(sacnt.get_name_leafdata());
    if (datapkt.is_set || is_set(datapkt.yfilter)) leaf_name_data.push_back(datapkt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grp")
    {
        grp = value;
        grp.value_namespace = name_space;
        grp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp")
    {
        rp = value;
        rp.value_namespace = name_space;
        rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expireTs")
    {
        expirets = value;
        expirets.value_namespace = name_space;
        expirets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saCnt")
    {
        sacnt = value;
        sacnt.value_namespace = name_space;
        sacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataPkt")
    {
        datapkt = value;
        datapkt.value_namespace = name_space;
        datapkt.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "grp")
    {
        grp.yfilter = yfilter;
    }
    if(value_path == "rp")
    {
        rp.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "expireTs")
    {
        expirets.yfilter = yfilter;
    }
    if(value_path == "saCnt")
    {
        sacnt.yfilter = yfilter;
    }
    if(value_path == "dataPkt")
    {
        datapkt.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src" || name == "grp" || name == "rp" || name == "peer" || name == "asn" || name == "createTs" || name == "expireTs" || name == "saCnt" || name == "dataPkt")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceItems()
    :
    source_list(this, {"addr"})
{

    yang_name = "source-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::~SourceItems()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Source-list")
    {
        auto ent_ = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList>();
        ent_->parent = this;
        source_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : source_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Source-list")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::SourceList()
    :
    addr{YType::str, "addr"},
    grpcnt{YType::uint32, "grpCnt"},
    grplimit{YType::uint32, "grpLimit"},
    srcpfx{YType::str, "srcPfx"},
    violations{YType::uint32, "violations"}
{

    yang_name = "Source-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::~SourceList()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| grpcnt.is_set
	|| grplimit.is_set
	|| srcpfx.is_set
	|| violations.is_set;
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(grpcnt.yfilter)
	|| ydk::is_set(grplimit.yfilter)
	|| ydk::is_set(srcpfx.yfilter)
	|| ydk::is_set(violations.yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Source-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (grpcnt.is_set || is_set(grpcnt.yfilter)) leaf_name_data.push_back(grpcnt.get_name_leafdata());
    if (grplimit.is_set || is_set(grplimit.yfilter)) leaf_name_data.push_back(grplimit.get_name_leafdata());
    if (srcpfx.is_set || is_set(srcpfx.yfilter)) leaf_name_data.push_back(srcpfx.get_name_leafdata());
    if (violations.is_set || is_set(violations.yfilter)) leaf_name_data.push_back(violations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpCnt")
    {
        grpcnt = value;
        grpcnt.value_namespace = name_space;
        grpcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpLimit")
    {
        grplimit = value;
        grplimit.value_namespace = name_space;
        grplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPfx")
    {
        srcpfx = value;
        srcpfx.value_namespace = name_space;
        srcpfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violations")
    {
        violations = value;
        violations.value_namespace = name_space;
        violations.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "grpCnt")
    {
        grpcnt.yfilter = yfilter;
    }
    if(value_path == "grpLimit")
    {
        grplimit.yfilter = yfilter;
    }
    if(value_path == "srcPfx")
    {
        srcpfx.yfilter = yfilter;
    }
    if(value_path == "violations")
    {
        violations.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "grpCnt" || name == "grpLimit" || name == "srcPfx" || name == "violations")
        return true;
    return false;
}


}
}

