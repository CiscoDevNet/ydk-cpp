
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

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtfvToDomDefItems()
    :
    rtfvtodomdef_list(this, {"tdn"})
{

    yang_name = "rtfvToDomDef-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::~RtfvToDomDefItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvtodomdef_list.len(); index++)
    {
        if(rtfvtodomdef_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvtodomdef_list.len(); index++)
    {
        if(rtfvtodomdef_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvToDomDef-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvToDomDef-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList>();
        ent_->parent = this;
        rtfvtodomdef_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvtodomdef_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvToDomDef-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::RtFvToDomDefList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvToDomDef-list"; yang_parent_name = "rtfvToDomDef-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::~RtFvToDomDefList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvToDomDef-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::RtInbandConfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtInbandConf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::~RtInbandConfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtInbandConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtextConfItems::RtextConfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtextConf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtextConfItems::~RtextConfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtextConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtextConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtextConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtextConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtextConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtextConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtextConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtextConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::RtextConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::RtextConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::RtbrConfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtbrConf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::~RtbrConfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtbrConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtfvNodePortAttItems()
    :
    rtfvnodeportatt_list(this, {"tdn"})
{

    yang_name = "rtfvNodePortAtt-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::~RtfvNodePortAttItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvnodeportatt_list.len(); index++)
    {
        if(rtfvnodeportatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvnodeportatt_list.len(); index++)
    {
        if(rtfvnodeportatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvNodePortAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvNodePortAtt-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList>();
        ent_->parent = this;
        rtfvnodeportatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvnodeportatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvNodePortAtt-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::RtFvNodePortAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvNodePortAtt-list"; yang_parent_name = "rtfvNodePortAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::~RtFvNodePortAttList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvNodePortAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::RtmbrIfsItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtmbrIfs-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::~RtmbrIfsItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtmbrIfs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::RtphysRtdConfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtphysRtdConf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::~RtphysRtdConfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtphysRtdConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::Rtl3EncPhysRtdConfItems()
    :
    rtl3encphysrtdconf_list(this, {"tdn"})
{

    yang_name = "rtl3EncPhysRtdConf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::~Rtl3EncPhysRtdConfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtl3encphysrtdconf_list.len(); index++)
    {
        if(rtl3encphysrtdconf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::has_operation() const
{
    for (std::size_t index=0; index<rtl3encphysrtdconf_list.len(); index++)
    {
        if(rtl3encphysrtdconf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtl3EncPhysRtdConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtL3EncPhysRtdConf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList>();
        ent_->parent = this;
        rtl3encphysrtdconf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtl3encphysrtdconf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtL3EncPhysRtdConf-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::RtL3EncPhysRtdConfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtL3EncPhysRtdConf-list"; yang_parent_name = "rtl3EncPhysRtdConf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::~RtL3EncPhysRtdConfList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtL3EncPhysRtdConf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::get_children() const
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

void System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RttunnelTunnelMbrIfsItems()
    :
    rttunneltunnelmbrifs_list(this, {"tdn"})
{

    yang_name = "rttunnelTunnelMbrIfs-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::~RttunnelTunnelMbrIfsItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttunneltunnelmbrifs_list.len(); index++)
    {
        if(rttunneltunnelmbrifs_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::has_operation() const
{
    for (std::size_t index=0; index<rttunneltunnelmbrifs_list.len(); index++)
    {
        if(rttunneltunnelmbrifs_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttunnelTunnelMbrIfs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtTunnelTunnelMbrIfs-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList>();
        ent_->parent = this;
        rttunneltunnelmbrifs_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttunneltunnelmbrifs_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtTunnelTunnelMbrIfs-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::RtTunnelTunnelMbrIfsList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtTunnelTunnelMbrIfs-list"; yang_parent_name = "rttunnelTunnelMbrIfs-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::~RtTunnelTunnelMbrIfsList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtTunnelTunnelMbrIfs-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::RtLsNodeToIfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtLsNodeToIf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::~RtLsNodeToIfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtLsNodeToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::DbgIfInItems()
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

    yang_name = "dbgIfIn-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::~DbgIfInItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::has_data() const
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

bool System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::has_operation() const
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

std::string System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "nUcastPkts" || name == "discards" || name == "errors" || name == "unknownProtos" || name == "unknownEtype" || name == "broadcastPkts" || name == "multicastPkts" || name == "noBuffer" || name == "rateInterval" || name == "octetRate" || name == "packetRate")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::DbgIfOutItems()
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

    yang_name = "dbgIfOut-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::~DbgIfOutItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::has_data() const
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

bool System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::has_operation() const
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

std::string System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfOut-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "nUcastPkts" || name == "discards" || name == "errors" || name == "qLen" || name == "broadcastPkts" || name == "multicastPkts" || name == "rateInterval" || name == "octetRate" || name == "packetRate")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::DbgIpInItems()
    :
    receives{YType::uint64, "receives"},
    hdrerrors{YType::uint64, "hdrErrors"},
    forwdatagrams{YType::uint64, "forwDatagrams"},
    discards{YType::uint64, "discards"}
{

    yang_name = "dbgIpIn-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::~DbgIpInItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::has_data() const
{
    if (is_presence_container) return true;
    return receives.is_set
	|| hdrerrors.is_set
	|| forwdatagrams.is_set
	|| discards.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receives.yfilter)
	|| ydk::is_set(hdrerrors.yfilter)
	|| ydk::is_set(forwdatagrams.yfilter)
	|| ydk::is_set(discards.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIpIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receives.is_set || is_set(receives.yfilter)) leaf_name_data.push_back(receives.get_name_leafdata());
    if (hdrerrors.is_set || is_set(hdrerrors.yfilter)) leaf_name_data.push_back(hdrerrors.get_name_leafdata());
    if (forwdatagrams.is_set || is_set(forwdatagrams.yfilter)) leaf_name_data.push_back(forwdatagrams.get_name_leafdata());
    if (discards.is_set || is_set(discards.yfilter)) leaf_name_data.push_back(discards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receives" || name == "hdrErrors" || name == "forwDatagrams" || name == "discards")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::DbgDot1dItems()
    :
    baseportdelayexceededdiscards{YType::uint64, "basePortDelayExceededDiscards"},
    baseportmtuexceededdiscards{YType::uint64, "basePortMtuExceededDiscards"},
    tpportinframes{YType::uint64, "tpPortInFrames"},
    tpportoutframes{YType::uint64, "tpPortOutFrames"},
    portindiscards{YType::uint64, "portInDiscards"}
{

    yang_name = "dbgDot1d-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::~DbgDot1dItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::has_data() const
{
    if (is_presence_container) return true;
    return baseportdelayexceededdiscards.is_set
	|| baseportmtuexceededdiscards.is_set
	|| tpportinframes.is_set
	|| tpportoutframes.is_set
	|| portindiscards.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(baseportdelayexceededdiscards.yfilter)
	|| ydk::is_set(baseportmtuexceededdiscards.yfilter)
	|| ydk::is_set(tpportinframes.yfilter)
	|| ydk::is_set(tpportoutframes.yfilter)
	|| ydk::is_set(portindiscards.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgDot1d-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (baseportdelayexceededdiscards.is_set || is_set(baseportdelayexceededdiscards.yfilter)) leaf_name_data.push_back(baseportdelayexceededdiscards.get_name_leafdata());
    if (baseportmtuexceededdiscards.is_set || is_set(baseportmtuexceededdiscards.yfilter)) leaf_name_data.push_back(baseportmtuexceededdiscards.get_name_leafdata());
    if (tpportinframes.is_set || is_set(tpportinframes.yfilter)) leaf_name_data.push_back(tpportinframes.get_name_leafdata());
    if (tpportoutframes.is_set || is_set(tpportoutframes.yfilter)) leaf_name_data.push_back(tpportoutframes.get_name_leafdata());
    if (portindiscards.is_set || is_set(portindiscards.yfilter)) leaf_name_data.push_back(portindiscards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basePortDelayExceededDiscards" || name == "basePortMtuExceededDiscards" || name == "tpPortInFrames" || name == "tpPortOutFrames" || name == "portInDiscards")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::DbgEtherStatsItems()
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

    yang_name = "dbgEtherStats-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::~DbgEtherStatsItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::has_data() const
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

bool System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::has_operation() const
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

std::string System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgEtherStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropEvents" || name == "multicastPkts" || name == "broadcastPkts" || name == "undersizePkts" || name == "giantPkts" || name == "stormSupressedPkts" || name == "fragments" || name == "pkts64Octets" || name == "pkts65to127Octets" || name == "pkts128to255Octets" || name == "pkts256to511Octets" || name == "pkts512to1023Octets" || name == "pkts1024to1518Octets" || name == "pkts1519to1548Octets" || name == "rxPkts64Octets" || name == "txPkts64Octets" || name == "rxPkts65to127Octets" || name == "txPkts65to127Octets" || name == "rxPkts128to255Octets" || name == "txPkts128to255Octets" || name == "rxPkts256to511Octets" || name == "txPkts256to511Octets" || name == "rxPkts512to1023Octets" || name == "txPkts512to1023Octets" || name == "rxPkts1024to1518Octets" || name == "txPkts1024to1518Octets" || name == "rxPkts1519to1548Octets" || name == "txPkts1519to1548Octets" || name == "oversizePkts" || name == "jabbers" || name == "octets" || name == "pkts" || name == "collisions" || name == "cRCAlignErrors" || name == "tXNoErrors" || name == "rXNoErrors" || name == "rxOversizePkts" || name == "txOversizePkts" || name == "overrun" || name == "underrun" || name == "ignored" || name == "watchdog" || name == "ifdowndrop")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::DbgDot3StatsItems()
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

    yang_name = "dbgDot3Stats-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::~DbgDot3StatsItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::has_data() const
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

bool System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::has_operation() const
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

std::string System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgDot3Stats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alignmentErrors" || name == "fCSErrors" || name == "singleCollisionFrames" || name == "multipleCollisionFrames" || name == "sQETTestErrors" || name == "deferredTransmissions" || name == "lateCollisions" || name == "excessiveCollisions" || name == "internalMacTransmitErrors" || name == "carrierSenseErrors" || name == "frameTooLongs" || name == "internalMacReceiveErrors" || name == "symbolErrors" || name == "controlInUnknownOpcodes" || name == "inPauseFrames" || name == "outPauseFrames" || name == "lostCarrierErrors" || name == "noCarrierErrors" || name == "inputdribble" || name == "babble" || name == "runts")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::DbgIfHCInItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpkts{YType::uint64, "broadcastPkts"}
{

    yang_name = "dbgIfHCIn-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::~DbgIfHCInItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| multicastpkts.is_set
	|| broadcastpkts.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfHCIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "multicastPkts" || name == "broadcastPkts")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::DbgIfHCOutItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpckts{YType::uint64, "broadcastPckts"},
    broadcastpkts{YType::uint64, "broadcastPkts"}
{

    yang_name = "dbgIfHCOut-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::~DbgIfHCOutItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| multicastpkts.is_set
	|| broadcastpckts.is_set
	|| broadcastpkts.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpckts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfHCOut-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpckts.is_set || is_set(broadcastpckts.yfilter)) leaf_name_data.push_back(broadcastpckts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "multicastPkts" || name == "broadcastPckts" || name == "broadcastPkts")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::DbgIpv6IfStatsItems()
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

    yang_name = "dbgIpv6IfStats-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::~DbgIpv6IfStatsItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::has_data() const
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

bool System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::has_operation() const
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

std::string System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIpv6IfStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inReceives" || name == "inHdrErrors" || name == "inAddrErrors" || name == "inDiscards" || name == "outForwDatagrams" || name == "outDiscards" || name == "inMcastPkts" || name == "outMcastPkts")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::DbgIfStormItems()
    :
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgIfStorm-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::~DbgIfStormItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::has_data() const
{
    if (is_presence_container) return true;
    return dropbytes.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfStorm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropBytes")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrItems()
    :
    aggrif_list(this, {"id"})
{

    yang_name = "aggr-items"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::AggrItems::~AggrItems()
{
}

bool System::IntfItems::AggrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aggrif_list.len(); index++)
    {
        if(aggrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::has_operation() const
{
    for (std::size_t index=0; index<aggrif_list.len(); index++)
    {
        if(aggrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::AggrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AggrIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList>();
        ent_->parent = this;
        aggrif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : aggrif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::AggrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AggrIf-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::AggrIfList()
    :
    id{YType::str, "id"},
    pcid{YType::uint16, "pcId"},
    pcmode{YType::enumeration, "pcMode"},
    suspindividual{YType::enumeration, "suspIndividual"},
    gracefulconv{YType::enumeration, "gracefulConv"},
    loaddefer{YType::enumeration, "loadDefer"},
    lacpdelaymode{YType::enumeration, "lacpDelayMode"},
    lacpvpcconvergence{YType::enumeration, "lacpVpcConvergence"},
    minlinks{YType::uint32, "minLinks"},
    maxlinks{YType::uint32, "maxLinks"},
    hashdist{YType::enumeration, "hashDist"},
    iod{YType::uint32, "iod"},
    operchannelmode{YType::enumeration, "operChannelMode"},
    lastst{YType::enumeration, "lastSt"},
    laststcause{YType::str, "lastStCause"},
    lasttime{YType::str, "lastTime"},
    createtime{YType::str, "createTime"},
    fop{YType::str, "fop"},
    lastbundletime{YType::str, "lastBundleTime"},
    lastbundlembr{YType::str, "lastBundleMbr"},
    lastunbundletime{YType::str, "lastUnbundleTime"},
    lastunbundlembr{YType::str, "lastUnbundleMbr"},
    suspminlinks{YType::boolean, "suspMinlinks"},
    ltl{YType::uint32, "ltl"},
    lif{YType::uint32, "lif"},
    maxactive{YType::uint32, "maxActive"},
    loaddeferstarttime{YType::str, "loadDeferStartTime"},
    isexplicit{YType::boolean, "isExplicit"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    speed{YType::enumeration, "speed"},
    duplex{YType::enumeration, "duplex"},
    autoneg{YType::enumeration, "autoNeg"},
    mtu{YType::uint32, "mtu"},
    snmptrapst{YType::enumeration, "snmpTrapSt"},
    mode{YType::enumeration, "mode"},
    layer{YType::enumeration, "layer"},
    mdix{YType::enumeration, "mdix"},
    delay{YType::uint32, "delay"},
    linkdebounce{YType::uint16, "linkDebounce"},
    dot1qethertype{YType::uint32, "dot1qEtherType"},
    bw{YType::uint32, "bw"},
    medium{YType::enumeration, "medium"},
    inhbw{YType::uint32, "inhBw"},
    spanmode{YType::enumeration, "spanMode"},
    linklog{YType::enumeration, "linkLog"},
    trunklog{YType::enumeration, "trunkLog"},
    routermac{YType::str, "routerMac"},
    portt{YType::enumeration, "portT"},
    usage{YType::str, "usage"},
    trunkvlans{YType::str, "trunkVlans"},
    accessvlan{YType::str, "accessVlan"},
    controllerid{YType::str, "controllerId"},
    nativevlan{YType::str, "nativeVlan"},
    usercfgdflags{YType::str, "userCfgdFlags"}
        ,
    priorflowctrl_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems>())
    , priorflowctrlwd_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems>())
    , eeep_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::EeepItems>())
    , stormctrlp_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::StormctrlpItems>())
    , loadp_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::LoadpItems>())
    , vrf_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::VrfItems>())
    , aggrif_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrifItems>())
    , hwifdetails_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems>())
    , bundleinfo_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::BundleInfoItems>())
    , aggrextd_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrExtdItems>())
    , vlanmapping_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::VlanmappingItems>())
    , bndlmbrif_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems>())
    , multisiteiftracking_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems>())
    , dom_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems>())
    , rtfexbndlgrptoaggrif_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems>())
    , rtaccbndlgrptoaggrif_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems>())
    , rtextconf_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtextConfItems>())
    , rtbrconf_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtbrConfItems>())
    , rtvpcconf_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems>())
    , rtfvnodeportatt_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems>())
    , rsmbrifs_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems>())
    , rslacppolcons_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems>())
    , rtvrfmbr_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems>())
    , rtphysrtdconf_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems>())
    , rtl3encphysrtdconf_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems>())
    , rtlsnodetoif_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems>())
    , dbgifin_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfInItems>())
    , dbgifout_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems>())
    , dbgipin_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIpInItems>())
    , dbgdot1d_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems>())
    , dbgetherstats_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems>())
    , dbgdot3stats_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems>())
    , dbgifhcin_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems>())
    , dbgifhcout_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems>())
    , dbgipv6ifstats_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems>())
    , dbgifstorm_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems>())
{
    priorflowctrl_items->parent = this;
    priorflowctrlwd_items->parent = this;
    eeep_items->parent = this;
    stormctrlp_items->parent = this;
    loadp_items->parent = this;
    vrf_items->parent = this;
    aggrif_items->parent = this;
    hwifdetails_items->parent = this;
    bundleinfo_items->parent = this;
    aggrextd_items->parent = this;
    vlanmapping_items->parent = this;
    bndlmbrif_items->parent = this;
    multisiteiftracking_items->parent = this;
    dom_items->parent = this;
    rtfexbndlgrptoaggrif_items->parent = this;
    rtaccbndlgrptoaggrif_items->parent = this;
    rtextconf_items->parent = this;
    rtbrconf_items->parent = this;
    rtvpcconf_items->parent = this;
    rtfvnodeportatt_items->parent = this;
    rsmbrifs_items->parent = this;
    rslacppolcons_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtphysrtdconf_items->parent = this;
    rtl3encphysrtdconf_items->parent = this;
    rtnwpathtoif_items->parent = this;
    rtlsnodetoif_items->parent = this;
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

    yang_name = "AggrIf-list"; yang_parent_name = "aggr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::AggrItems::AggrIfList::~AggrIfList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| pcid.is_set
	|| pcmode.is_set
	|| suspindividual.is_set
	|| gracefulconv.is_set
	|| loaddefer.is_set
	|| lacpdelaymode.is_set
	|| lacpvpcconvergence.is_set
	|| minlinks.is_set
	|| maxlinks.is_set
	|| hashdist.is_set
	|| iod.is_set
	|| operchannelmode.is_set
	|| lastst.is_set
	|| laststcause.is_set
	|| lasttime.is_set
	|| createtime.is_set
	|| fop.is_set
	|| lastbundletime.is_set
	|| lastbundlembr.is_set
	|| lastunbundletime.is_set
	|| lastunbundlembr.is_set
	|| suspminlinks.is_set
	|| ltl.is_set
	|| lif.is_set
	|| maxactive.is_set
	|| loaddeferstarttime.is_set
	|| isexplicit.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| speed.is_set
	|| duplex.is_set
	|| autoneg.is_set
	|| mtu.is_set
	|| snmptrapst.is_set
	|| mode.is_set
	|| layer.is_set
	|| mdix.is_set
	|| delay.is_set
	|| linkdebounce.is_set
	|| dot1qethertype.is_set
	|| bw.is_set
	|| medium.is_set
	|| inhbw.is_set
	|| spanmode.is_set
	|| linklog.is_set
	|| trunklog.is_set
	|| routermac.is_set
	|| portt.is_set
	|| usage.is_set
	|| trunkvlans.is_set
	|| accessvlan.is_set
	|| controllerid.is_set
	|| nativevlan.is_set
	|| usercfgdflags.is_set
	|| (priorflowctrl_items !=  nullptr && priorflowctrl_items->has_data())
	|| (priorflowctrlwd_items !=  nullptr && priorflowctrlwd_items->has_data())
	|| (eeep_items !=  nullptr && eeep_items->has_data())
	|| (stormctrlp_items !=  nullptr && stormctrlp_items->has_data())
	|| (loadp_items !=  nullptr && loadp_items->has_data())
	|| (vrf_items !=  nullptr && vrf_items->has_data())
	|| (aggrif_items !=  nullptr && aggrif_items->has_data())
	|| (hwifdetails_items !=  nullptr && hwifdetails_items->has_data())
	|| (bundleinfo_items !=  nullptr && bundleinfo_items->has_data())
	|| (aggrextd_items !=  nullptr && aggrextd_items->has_data())
	|| (vlanmapping_items !=  nullptr && vlanmapping_items->has_data())
	|| (bndlmbrif_items !=  nullptr && bndlmbrif_items->has_data())
	|| (multisiteiftracking_items !=  nullptr && multisiteiftracking_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (rtfexbndlgrptoaggrif_items !=  nullptr && rtfexbndlgrptoaggrif_items->has_data())
	|| (rtaccbndlgrptoaggrif_items !=  nullptr && rtaccbndlgrptoaggrif_items->has_data())
	|| (rtextconf_items !=  nullptr && rtextconf_items->has_data())
	|| (rtbrconf_items !=  nullptr && rtbrconf_items->has_data())
	|| (rtvpcconf_items !=  nullptr && rtvpcconf_items->has_data())
	|| (rtfvnodeportatt_items !=  nullptr && rtfvnodeportatt_items->has_data())
	|| (rsmbrifs_items !=  nullptr && rsmbrifs_items->has_data())
	|| (rslacppolcons_items !=  nullptr && rslacppolcons_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtphysrtdconf_items !=  nullptr && rtphysrtdconf_items->has_data())
	|| (rtl3encphysrtdconf_items !=  nullptr && rtl3encphysrtdconf_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data())
	|| (rtlsnodetoif_items !=  nullptr && rtlsnodetoif_items->has_data())
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

bool System::IntfItems::AggrItems::AggrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pcid.yfilter)
	|| ydk::is_set(pcmode.yfilter)
	|| ydk::is_set(suspindividual.yfilter)
	|| ydk::is_set(gracefulconv.yfilter)
	|| ydk::is_set(loaddefer.yfilter)
	|| ydk::is_set(lacpdelaymode.yfilter)
	|| ydk::is_set(lacpvpcconvergence.yfilter)
	|| ydk::is_set(minlinks.yfilter)
	|| ydk::is_set(maxlinks.yfilter)
	|| ydk::is_set(hashdist.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(operchannelmode.yfilter)
	|| ydk::is_set(lastst.yfilter)
	|| ydk::is_set(laststcause.yfilter)
	|| ydk::is_set(lasttime.yfilter)
	|| ydk::is_set(createtime.yfilter)
	|| ydk::is_set(fop.yfilter)
	|| ydk::is_set(lastbundletime.yfilter)
	|| ydk::is_set(lastbundlembr.yfilter)
	|| ydk::is_set(lastunbundletime.yfilter)
	|| ydk::is_set(lastunbundlembr.yfilter)
	|| ydk::is_set(suspminlinks.yfilter)
	|| ydk::is_set(ltl.yfilter)
	|| ydk::is_set(lif.yfilter)
	|| ydk::is_set(maxactive.yfilter)
	|| ydk::is_set(loaddeferstarttime.yfilter)
	|| ydk::is_set(isexplicit.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(autoneg.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(snmptrapst.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(layer.yfilter)
	|| ydk::is_set(mdix.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(linkdebounce.yfilter)
	|| ydk::is_set(dot1qethertype.yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(inhbw.yfilter)
	|| ydk::is_set(spanmode.yfilter)
	|| ydk::is_set(linklog.yfilter)
	|| ydk::is_set(trunklog.yfilter)
	|| ydk::is_set(routermac.yfilter)
	|| ydk::is_set(portt.yfilter)
	|| ydk::is_set(usage.yfilter)
	|| ydk::is_set(trunkvlans.yfilter)
	|| ydk::is_set(accessvlan.yfilter)
	|| ydk::is_set(controllerid.yfilter)
	|| ydk::is_set(nativevlan.yfilter)
	|| ydk::is_set(usercfgdflags.yfilter)
	|| (priorflowctrl_items !=  nullptr && priorflowctrl_items->has_operation())
	|| (priorflowctrlwd_items !=  nullptr && priorflowctrlwd_items->has_operation())
	|| (eeep_items !=  nullptr && eeep_items->has_operation())
	|| (stormctrlp_items !=  nullptr && stormctrlp_items->has_operation())
	|| (loadp_items !=  nullptr && loadp_items->has_operation())
	|| (vrf_items !=  nullptr && vrf_items->has_operation())
	|| (aggrif_items !=  nullptr && aggrif_items->has_operation())
	|| (hwifdetails_items !=  nullptr && hwifdetails_items->has_operation())
	|| (bundleinfo_items !=  nullptr && bundleinfo_items->has_operation())
	|| (aggrextd_items !=  nullptr && aggrextd_items->has_operation())
	|| (vlanmapping_items !=  nullptr && vlanmapping_items->has_operation())
	|| (bndlmbrif_items !=  nullptr && bndlmbrif_items->has_operation())
	|| (multisiteiftracking_items !=  nullptr && multisiteiftracking_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (rtfexbndlgrptoaggrif_items !=  nullptr && rtfexbndlgrptoaggrif_items->has_operation())
	|| (rtaccbndlgrptoaggrif_items !=  nullptr && rtaccbndlgrptoaggrif_items->has_operation())
	|| (rtextconf_items !=  nullptr && rtextconf_items->has_operation())
	|| (rtbrconf_items !=  nullptr && rtbrconf_items->has_operation())
	|| (rtvpcconf_items !=  nullptr && rtvpcconf_items->has_operation())
	|| (rtfvnodeportatt_items !=  nullptr && rtfvnodeportatt_items->has_operation())
	|| (rsmbrifs_items !=  nullptr && rsmbrifs_items->has_operation())
	|| (rslacppolcons_items !=  nullptr && rslacppolcons_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtphysrtdconf_items !=  nullptr && rtphysrtdconf_items->has_operation())
	|| (rtl3encphysrtdconf_items !=  nullptr && rtl3encphysrtdconf_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation())
	|| (rtlsnodetoif_items !=  nullptr && rtlsnodetoif_items->has_operation())
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

std::string System::IntfItems::AggrItems::AggrIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/aggr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::AggrItems::AggrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AggrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pcid.is_set || is_set(pcid.yfilter)) leaf_name_data.push_back(pcid.get_name_leafdata());
    if (pcmode.is_set || is_set(pcmode.yfilter)) leaf_name_data.push_back(pcmode.get_name_leafdata());
    if (suspindividual.is_set || is_set(suspindividual.yfilter)) leaf_name_data.push_back(suspindividual.get_name_leafdata());
    if (gracefulconv.is_set || is_set(gracefulconv.yfilter)) leaf_name_data.push_back(gracefulconv.get_name_leafdata());
    if (loaddefer.is_set || is_set(loaddefer.yfilter)) leaf_name_data.push_back(loaddefer.get_name_leafdata());
    if (lacpdelaymode.is_set || is_set(lacpdelaymode.yfilter)) leaf_name_data.push_back(lacpdelaymode.get_name_leafdata());
    if (lacpvpcconvergence.is_set || is_set(lacpvpcconvergence.yfilter)) leaf_name_data.push_back(lacpvpcconvergence.get_name_leafdata());
    if (minlinks.is_set || is_set(minlinks.yfilter)) leaf_name_data.push_back(minlinks.get_name_leafdata());
    if (maxlinks.is_set || is_set(maxlinks.yfilter)) leaf_name_data.push_back(maxlinks.get_name_leafdata());
    if (hashdist.is_set || is_set(hashdist.yfilter)) leaf_name_data.push_back(hashdist.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (operchannelmode.is_set || is_set(operchannelmode.yfilter)) leaf_name_data.push_back(operchannelmode.get_name_leafdata());
    if (lastst.is_set || is_set(lastst.yfilter)) leaf_name_data.push_back(lastst.get_name_leafdata());
    if (laststcause.is_set || is_set(laststcause.yfilter)) leaf_name_data.push_back(laststcause.get_name_leafdata());
    if (lasttime.is_set || is_set(lasttime.yfilter)) leaf_name_data.push_back(lasttime.get_name_leafdata());
    if (createtime.is_set || is_set(createtime.yfilter)) leaf_name_data.push_back(createtime.get_name_leafdata());
    if (fop.is_set || is_set(fop.yfilter)) leaf_name_data.push_back(fop.get_name_leafdata());
    if (lastbundletime.is_set || is_set(lastbundletime.yfilter)) leaf_name_data.push_back(lastbundletime.get_name_leafdata());
    if (lastbundlembr.is_set || is_set(lastbundlembr.yfilter)) leaf_name_data.push_back(lastbundlembr.get_name_leafdata());
    if (lastunbundletime.is_set || is_set(lastunbundletime.yfilter)) leaf_name_data.push_back(lastunbundletime.get_name_leafdata());
    if (lastunbundlembr.is_set || is_set(lastunbundlembr.yfilter)) leaf_name_data.push_back(lastunbundlembr.get_name_leafdata());
    if (suspminlinks.is_set || is_set(suspminlinks.yfilter)) leaf_name_data.push_back(suspminlinks.get_name_leafdata());
    if (ltl.is_set || is_set(ltl.yfilter)) leaf_name_data.push_back(ltl.get_name_leafdata());
    if (lif.is_set || is_set(lif.yfilter)) leaf_name_data.push_back(lif.get_name_leafdata());
    if (maxactive.is_set || is_set(maxactive.yfilter)) leaf_name_data.push_back(maxactive.get_name_leafdata());
    if (loaddeferstarttime.is_set || is_set(loaddeferstarttime.yfilter)) leaf_name_data.push_back(loaddeferstarttime.get_name_leafdata());
    if (isexplicit.is_set || is_set(isexplicit.yfilter)) leaf_name_data.push_back(isexplicit.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (autoneg.is_set || is_set(autoneg.yfilter)) leaf_name_data.push_back(autoneg.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (snmptrapst.is_set || is_set(snmptrapst.yfilter)) leaf_name_data.push_back(snmptrapst.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (layer.is_set || is_set(layer.yfilter)) leaf_name_data.push_back(layer.get_name_leafdata());
    if (mdix.is_set || is_set(mdix.yfilter)) leaf_name_data.push_back(mdix.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (linkdebounce.is_set || is_set(linkdebounce.yfilter)) leaf_name_data.push_back(linkdebounce.get_name_leafdata());
    if (dot1qethertype.is_set || is_set(dot1qethertype.yfilter)) leaf_name_data.push_back(dot1qethertype.get_name_leafdata());
    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (inhbw.is_set || is_set(inhbw.yfilter)) leaf_name_data.push_back(inhbw.get_name_leafdata());
    if (spanmode.is_set || is_set(spanmode.yfilter)) leaf_name_data.push_back(spanmode.get_name_leafdata());
    if (linklog.is_set || is_set(linklog.yfilter)) leaf_name_data.push_back(linklog.get_name_leafdata());
    if (trunklog.is_set || is_set(trunklog.yfilter)) leaf_name_data.push_back(trunklog.get_name_leafdata());
    if (routermac.is_set || is_set(routermac.yfilter)) leaf_name_data.push_back(routermac.get_name_leafdata());
    if (portt.is_set || is_set(portt.yfilter)) leaf_name_data.push_back(portt.get_name_leafdata());
    if (usage.is_set || is_set(usage.yfilter)) leaf_name_data.push_back(usage.get_name_leafdata());
    if (trunkvlans.is_set || is_set(trunkvlans.yfilter)) leaf_name_data.push_back(trunkvlans.get_name_leafdata());
    if (accessvlan.is_set || is_set(accessvlan.yfilter)) leaf_name_data.push_back(accessvlan.get_name_leafdata());
    if (controllerid.is_set || is_set(controllerid.yfilter)) leaf_name_data.push_back(controllerid.get_name_leafdata());
    if (nativevlan.is_set || is_set(nativevlan.yfilter)) leaf_name_data.push_back(nativevlan.get_name_leafdata());
    if (usercfgdflags.is_set || is_set(usercfgdflags.yfilter)) leaf_name_data.push_back(usercfgdflags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priorflowctrl-items")
    {
        if(priorflowctrl_items == nullptr)
        {
            priorflowctrl_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems>();
        }
        return priorflowctrl_items;
    }

    if(child_yang_name == "priorflowctrlwd-items")
    {
        if(priorflowctrlwd_items == nullptr)
        {
            priorflowctrlwd_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems>();
        }
        return priorflowctrlwd_items;
    }

    if(child_yang_name == "eeep-items")
    {
        if(eeep_items == nullptr)
        {
            eeep_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::EeepItems>();
        }
        return eeep_items;
    }

    if(child_yang_name == "stormctrlp-items")
    {
        if(stormctrlp_items == nullptr)
        {
            stormctrlp_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::StormctrlpItems>();
        }
        return stormctrlp_items;
    }

    if(child_yang_name == "loadp-items")
    {
        if(loadp_items == nullptr)
        {
            loadp_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::LoadpItems>();
        }
        return loadp_items;
    }

    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::VrfItems>();
        }
        return vrf_items;
    }

    if(child_yang_name == "aggrif-items")
    {
        if(aggrif_items == nullptr)
        {
            aggrif_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrifItems>();
        }
        return aggrif_items;
    }

    if(child_yang_name == "hwifdetails-items")
    {
        if(hwifdetails_items == nullptr)
        {
            hwifdetails_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems>();
        }
        return hwifdetails_items;
    }

    if(child_yang_name == "bundleInfo-items")
    {
        if(bundleinfo_items == nullptr)
        {
            bundleinfo_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::BundleInfoItems>();
        }
        return bundleinfo_items;
    }

    if(child_yang_name == "aggrExtd-items")
    {
        if(aggrextd_items == nullptr)
        {
            aggrextd_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrExtdItems>();
        }
        return aggrextd_items;
    }

    if(child_yang_name == "vlanmapping-items")
    {
        if(vlanmapping_items == nullptr)
        {
            vlanmapping_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::VlanmappingItems>();
        }
        return vlanmapping_items;
    }

    if(child_yang_name == "bndlmbrif-items")
    {
        if(bndlmbrif_items == nullptr)
        {
            bndlmbrif_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems>();
        }
        return bndlmbrif_items;
    }

    if(child_yang_name == "multisiteiftracking-items")
    {
        if(multisiteiftracking_items == nullptr)
        {
            multisiteiftracking_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems>();
        }
        return multisiteiftracking_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "rtfexBndlGrpToAggrIf-items")
    {
        if(rtfexbndlgrptoaggrif_items == nullptr)
        {
            rtfexbndlgrptoaggrif_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems>();
        }
        return rtfexbndlgrptoaggrif_items;
    }

    if(child_yang_name == "rtaccBndlGrpToAggrIf-items")
    {
        if(rtaccbndlgrptoaggrif_items == nullptr)
        {
            rtaccbndlgrptoaggrif_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems>();
        }
        return rtaccbndlgrptoaggrif_items;
    }

    if(child_yang_name == "rtextConf-items")
    {
        if(rtextconf_items == nullptr)
        {
            rtextconf_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtextConfItems>();
        }
        return rtextconf_items;
    }

    if(child_yang_name == "rtbrConf-items")
    {
        if(rtbrconf_items == nullptr)
        {
            rtbrconf_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtbrConfItems>();
        }
        return rtbrconf_items;
    }

    if(child_yang_name == "rtvpcConf-items")
    {
        if(rtvpcconf_items == nullptr)
        {
            rtvpcconf_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems>();
        }
        return rtvpcconf_items;
    }

    if(child_yang_name == "rtfvNodePortAtt-items")
    {
        if(rtfvnodeportatt_items == nullptr)
        {
            rtfvnodeportatt_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems>();
        }
        return rtfvnodeportatt_items;
    }

    if(child_yang_name == "rsmbrIfs-items")
    {
        if(rsmbrifs_items == nullptr)
        {
            rsmbrifs_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems>();
        }
        return rsmbrifs_items;
    }

    if(child_yang_name == "rslacpPolCons-items")
    {
        if(rslacppolcons_items == nullptr)
        {
            rslacppolcons_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems>();
        }
        return rslacppolcons_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtphysRtdConf-items")
    {
        if(rtphysrtdconf_items == nullptr)
        {
            rtphysrtdconf_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems>();
        }
        return rtphysrtdconf_items;
    }

    if(child_yang_name == "rtl3EncPhysRtdConf-items")
    {
        if(rtl3encphysrtdconf_items == nullptr)
        {
            rtl3encphysrtdconf_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems>();
        }
        return rtl3encphysrtdconf_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    if(child_yang_name == "rtLsNodeToIf-items")
    {
        if(rtlsnodetoif_items == nullptr)
        {
            rtlsnodetoif_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems>();
        }
        return rtlsnodetoif_items;
    }

    if(child_yang_name == "dbgIfIn-items")
    {
        if(dbgifin_items == nullptr)
        {
            dbgifin_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfInItems>();
        }
        return dbgifin_items;
    }

    if(child_yang_name == "dbgIfOut-items")
    {
        if(dbgifout_items == nullptr)
        {
            dbgifout_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems>();
        }
        return dbgifout_items;
    }

    if(child_yang_name == "dbgIpIn-items")
    {
        if(dbgipin_items == nullptr)
        {
            dbgipin_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIpInItems>();
        }
        return dbgipin_items;
    }

    if(child_yang_name == "dbgDot1d-items")
    {
        if(dbgdot1d_items == nullptr)
        {
            dbgdot1d_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems>();
        }
        return dbgdot1d_items;
    }

    if(child_yang_name == "dbgEtherStats-items")
    {
        if(dbgetherstats_items == nullptr)
        {
            dbgetherstats_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems>();
        }
        return dbgetherstats_items;
    }

    if(child_yang_name == "dbgDot3Stats-items")
    {
        if(dbgdot3stats_items == nullptr)
        {
            dbgdot3stats_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems>();
        }
        return dbgdot3stats_items;
    }

    if(child_yang_name == "dbgIfHCIn-items")
    {
        if(dbgifhcin_items == nullptr)
        {
            dbgifhcin_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems>();
        }
        return dbgifhcin_items;
    }

    if(child_yang_name == "dbgIfHCOut-items")
    {
        if(dbgifhcout_items == nullptr)
        {
            dbgifhcout_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems>();
        }
        return dbgifhcout_items;
    }

    if(child_yang_name == "dbgIpv6IfStats-items")
    {
        if(dbgipv6ifstats_items == nullptr)
        {
            dbgipv6ifstats_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems>();
        }
        return dbgipv6ifstats_items;
    }

    if(child_yang_name == "dbgIfStorm-items")
    {
        if(dbgifstorm_items == nullptr)
        {
            dbgifstorm_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems>();
        }
        return dbgifstorm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priorflowctrl_items != nullptr)
    {
        _children["priorflowctrl-items"] = priorflowctrl_items;
    }

    if(priorflowctrlwd_items != nullptr)
    {
        _children["priorflowctrlwd-items"] = priorflowctrlwd_items;
    }

    if(eeep_items != nullptr)
    {
        _children["eeep-items"] = eeep_items;
    }

    if(stormctrlp_items != nullptr)
    {
        _children["stormctrlp-items"] = stormctrlp_items;
    }

    if(loadp_items != nullptr)
    {
        _children["loadp-items"] = loadp_items;
    }

    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    if(aggrif_items != nullptr)
    {
        _children["aggrif-items"] = aggrif_items;
    }

    if(hwifdetails_items != nullptr)
    {
        _children["hwifdetails-items"] = hwifdetails_items;
    }

    if(bundleinfo_items != nullptr)
    {
        _children["bundleInfo-items"] = bundleinfo_items;
    }

    if(aggrextd_items != nullptr)
    {
        _children["aggrExtd-items"] = aggrextd_items;
    }

    if(vlanmapping_items != nullptr)
    {
        _children["vlanmapping-items"] = vlanmapping_items;
    }

    if(bndlmbrif_items != nullptr)
    {
        _children["bndlmbrif-items"] = bndlmbrif_items;
    }

    if(multisiteiftracking_items != nullptr)
    {
        _children["multisiteiftracking-items"] = multisiteiftracking_items;
    }

    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(rtfexbndlgrptoaggrif_items != nullptr)
    {
        _children["rtfexBndlGrpToAggrIf-items"] = rtfexbndlgrptoaggrif_items;
    }

    if(rtaccbndlgrptoaggrif_items != nullptr)
    {
        _children["rtaccBndlGrpToAggrIf-items"] = rtaccbndlgrptoaggrif_items;
    }

    if(rtextconf_items != nullptr)
    {
        _children["rtextConf-items"] = rtextconf_items;
    }

    if(rtbrconf_items != nullptr)
    {
        _children["rtbrConf-items"] = rtbrconf_items;
    }

    if(rtvpcconf_items != nullptr)
    {
        _children["rtvpcConf-items"] = rtvpcconf_items;
    }

    if(rtfvnodeportatt_items != nullptr)
    {
        _children["rtfvNodePortAtt-items"] = rtfvnodeportatt_items;
    }

    if(rsmbrifs_items != nullptr)
    {
        _children["rsmbrIfs-items"] = rsmbrifs_items;
    }

    if(rslacppolcons_items != nullptr)
    {
        _children["rslacpPolCons-items"] = rslacppolcons_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtphysrtdconf_items != nullptr)
    {
        _children["rtphysRtdConf-items"] = rtphysrtdconf_items;
    }

    if(rtl3encphysrtdconf_items != nullptr)
    {
        _children["rtl3EncPhysRtdConf-items"] = rtl3encphysrtdconf_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    if(rtlsnodetoif_items != nullptr)
    {
        _children["rtLsNodeToIf-items"] = rtlsnodetoif_items;
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

void System::IntfItems::AggrItems::AggrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcId")
    {
        pcid = value;
        pcid.value_namespace = name_space;
        pcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcMode")
    {
        pcmode = value;
        pcmode.value_namespace = name_space;
        pcmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspIndividual")
    {
        suspindividual = value;
        suspindividual.value_namespace = name_space;
        suspindividual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gracefulConv")
    {
        gracefulconv = value;
        gracefulconv.value_namespace = name_space;
        gracefulconv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadDefer")
    {
        loaddefer = value;
        loaddefer.value_namespace = name_space;
        loaddefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpDelayMode")
    {
        lacpdelaymode = value;
        lacpdelaymode.value_namespace = name_space;
        lacpdelaymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpVpcConvergence")
    {
        lacpvpcconvergence = value;
        lacpvpcconvergence.value_namespace = name_space;
        lacpvpcconvergence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minLinks")
    {
        minlinks = value;
        minlinks.value_namespace = name_space;
        minlinks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxLinks")
    {
        maxlinks = value;
        maxlinks.value_namespace = name_space;
        maxlinks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashDist")
    {
        hashdist = value;
        hashdist.value_namespace = name_space;
        hashdist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operChannelMode")
    {
        operchannelmode = value;
        operchannelmode.value_namespace = name_space;
        operchannelmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastSt")
    {
        lastst = value;
        lastst.value_namespace = name_space;
        lastst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStCause")
    {
        laststcause = value;
        laststcause.value_namespace = name_space;
        laststcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastTime")
    {
        lasttime = value;
        lasttime.value_namespace = name_space;
        lasttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTime")
    {
        createtime = value;
        createtime.value_namespace = name_space;
        createtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fop")
    {
        fop = value;
        fop.value_namespace = name_space;
        fop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastBundleTime")
    {
        lastbundletime = value;
        lastbundletime.value_namespace = name_space;
        lastbundletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastBundleMbr")
    {
        lastbundlembr = value;
        lastbundlembr.value_namespace = name_space;
        lastbundlembr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastUnbundleTime")
    {
        lastunbundletime = value;
        lastunbundletime.value_namespace = name_space;
        lastunbundletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastUnbundleMbr")
    {
        lastunbundlembr = value;
        lastunbundlembr.value_namespace = name_space;
        lastunbundlembr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspMinlinks")
    {
        suspminlinks = value;
        suspminlinks.value_namespace = name_space;
        suspminlinks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ltl")
    {
        ltl = value;
        ltl.value_namespace = name_space;
        ltl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lif")
    {
        lif = value;
        lif.value_namespace = name_space;
        lif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxActive")
    {
        maxactive = value;
        maxactive.value_namespace = name_space;
        maxactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadDeferStartTime")
    {
        loaddeferstarttime = value;
        loaddeferstarttime.value_namespace = name_space;
        loaddeferstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isExplicit")
    {
        isexplicit = value;
        isexplicit.value_namespace = name_space;
        isexplicit.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer")
    {
        layer = value;
        layer.value_namespace = name_space;
        layer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdix")
    {
        mdix = value;
        mdix.value_namespace = name_space;
        mdix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkDebounce")
    {
        linkdebounce = value;
        linkdebounce.value_namespace = name_space;
        linkdebounce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qEtherType")
    {
        dot1qethertype = value;
        dot1qethertype.value_namespace = name_space;
        dot1qethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inhBw")
    {
        inhbw = value;
        inhbw.value_namespace = name_space;
        inhbw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spanMode")
    {
        spanmode = value;
        spanmode.value_namespace = name_space;
        spanmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkLog")
    {
        linklog = value;
        linklog.value_namespace = name_space;
        linklog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkLog")
    {
        trunklog = value;
        trunklog.value_namespace = name_space;
        trunklog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routerMac")
    {
        routermac = value;
        routermac.value_namespace = name_space;
        routermac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portT")
    {
        portt = value;
        portt.value_namespace = name_space;
        portt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage")
    {
        usage = value;
        usage.value_namespace = name_space;
        usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkVlans")
    {
        trunkvlans = value;
        trunkvlans.value_namespace = name_space;
        trunkvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accessVlan")
    {
        accessvlan = value;
        accessvlan.value_namespace = name_space;
        accessvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerId")
    {
        controllerid = value;
        controllerid.value_namespace = name_space;
        controllerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan = value;
        nativevlan.value_namespace = name_space;
        nativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userCfgdFlags")
    {
        usercfgdflags = value;
        usercfgdflags.value_namespace = name_space;
        usercfgdflags.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pcId")
    {
        pcid.yfilter = yfilter;
    }
    if(value_path == "pcMode")
    {
        pcmode.yfilter = yfilter;
    }
    if(value_path == "suspIndividual")
    {
        suspindividual.yfilter = yfilter;
    }
    if(value_path == "gracefulConv")
    {
        gracefulconv.yfilter = yfilter;
    }
    if(value_path == "loadDefer")
    {
        loaddefer.yfilter = yfilter;
    }
    if(value_path == "lacpDelayMode")
    {
        lacpdelaymode.yfilter = yfilter;
    }
    if(value_path == "lacpVpcConvergence")
    {
        lacpvpcconvergence.yfilter = yfilter;
    }
    if(value_path == "minLinks")
    {
        minlinks.yfilter = yfilter;
    }
    if(value_path == "maxLinks")
    {
        maxlinks.yfilter = yfilter;
    }
    if(value_path == "hashDist")
    {
        hashdist.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "operChannelMode")
    {
        operchannelmode.yfilter = yfilter;
    }
    if(value_path == "lastSt")
    {
        lastst.yfilter = yfilter;
    }
    if(value_path == "lastStCause")
    {
        laststcause.yfilter = yfilter;
    }
    if(value_path == "lastTime")
    {
        lasttime.yfilter = yfilter;
    }
    if(value_path == "createTime")
    {
        createtime.yfilter = yfilter;
    }
    if(value_path == "fop")
    {
        fop.yfilter = yfilter;
    }
    if(value_path == "lastBundleTime")
    {
        lastbundletime.yfilter = yfilter;
    }
    if(value_path == "lastBundleMbr")
    {
        lastbundlembr.yfilter = yfilter;
    }
    if(value_path == "lastUnbundleTime")
    {
        lastunbundletime.yfilter = yfilter;
    }
    if(value_path == "lastUnbundleMbr")
    {
        lastunbundlembr.yfilter = yfilter;
    }
    if(value_path == "suspMinlinks")
    {
        suspminlinks.yfilter = yfilter;
    }
    if(value_path == "ltl")
    {
        ltl.yfilter = yfilter;
    }
    if(value_path == "lif")
    {
        lif.yfilter = yfilter;
    }
    if(value_path == "maxActive")
    {
        maxactive.yfilter = yfilter;
    }
    if(value_path == "loadDeferStartTime")
    {
        loaddeferstarttime.yfilter = yfilter;
    }
    if(value_path == "isExplicit")
    {
        isexplicit.yfilter = yfilter;
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
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "layer")
    {
        layer.yfilter = yfilter;
    }
    if(value_path == "mdix")
    {
        mdix.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "linkDebounce")
    {
        linkdebounce.yfilter = yfilter;
    }
    if(value_path == "dot1qEtherType")
    {
        dot1qethertype.yfilter = yfilter;
    }
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "inhBw")
    {
        inhbw.yfilter = yfilter;
    }
    if(value_path == "spanMode")
    {
        spanmode.yfilter = yfilter;
    }
    if(value_path == "linkLog")
    {
        linklog.yfilter = yfilter;
    }
    if(value_path == "trunkLog")
    {
        trunklog.yfilter = yfilter;
    }
    if(value_path == "routerMac")
    {
        routermac.yfilter = yfilter;
    }
    if(value_path == "portT")
    {
        portt.yfilter = yfilter;
    }
    if(value_path == "usage")
    {
        usage.yfilter = yfilter;
    }
    if(value_path == "trunkVlans")
    {
        trunkvlans.yfilter = yfilter;
    }
    if(value_path == "accessVlan")
    {
        accessvlan.yfilter = yfilter;
    }
    if(value_path == "controllerId")
    {
        controllerid.yfilter = yfilter;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan.yfilter = yfilter;
    }
    if(value_path == "userCfgdFlags")
    {
        usercfgdflags.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priorflowctrl-items" || name == "priorflowctrlwd-items" || name == "eeep-items" || name == "stormctrlp-items" || name == "loadp-items" || name == "vrf-items" || name == "aggrif-items" || name == "hwifdetails-items" || name == "bundleInfo-items" || name == "aggrExtd-items" || name == "vlanmapping-items" || name == "bndlmbrif-items" || name == "multisiteiftracking-items" || name == "dom-items" || name == "rtfexBndlGrpToAggrIf-items" || name == "rtaccBndlGrpToAggrIf-items" || name == "rtextConf-items" || name == "rtbrConf-items" || name == "rtvpcConf-items" || name == "rtfvNodePortAtt-items" || name == "rsmbrIfs-items" || name == "rslacpPolCons-items" || name == "rtvrfMbr-items" || name == "rtphysRtdConf-items" || name == "rtl3EncPhysRtdConf-items" || name == "rtnwPathToIf-items" || name == "rtLsNodeToIf-items" || name == "dbgIfIn-items" || name == "dbgIfOut-items" || name == "dbgIpIn-items" || name == "dbgDot1d-items" || name == "dbgEtherStats-items" || name == "dbgDot3Stats-items" || name == "dbgIfHCIn-items" || name == "dbgIfHCOut-items" || name == "dbgIpv6IfStats-items" || name == "dbgIfStorm-items" || name == "id" || name == "pcId" || name == "pcMode" || name == "suspIndividual" || name == "gracefulConv" || name == "loadDefer" || name == "lacpDelayMode" || name == "lacpVpcConvergence" || name == "minLinks" || name == "maxLinks" || name == "hashDist" || name == "iod" || name == "operChannelMode" || name == "lastSt" || name == "lastStCause" || name == "lastTime" || name == "createTime" || name == "fop" || name == "lastBundleTime" || name == "lastBundleMbr" || name == "lastUnbundleTime" || name == "lastUnbundleMbr" || name == "suspMinlinks" || name == "ltl" || name == "lif" || name == "maxActive" || name == "loadDeferStartTime" || name == "isExplicit" || name == "name" || name == "descr" || name == "adminSt" || name == "speed" || name == "duplex" || name == "autoNeg" || name == "mtu" || name == "snmpTrapSt" || name == "mode" || name == "layer" || name == "mdix" || name == "delay" || name == "linkDebounce" || name == "dot1qEtherType" || name == "bw" || name == "medium" || name == "inhBw" || name == "spanMode" || name == "linkLog" || name == "trunkLog" || name == "routerMac" || name == "portT" || name == "usage" || name == "trunkVlans" || name == "accessVlan" || name == "controllerId" || name == "nativeVlan" || name == "userCfgdFlags")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::PriorflowctrlItems()
    :
    mode{YType::uint8, "mode"},
    send_tlv{YType::boolean, "send_tlv"}
{

    yang_name = "priorflowctrl-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::~PriorflowctrlItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| send_tlv.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(send_tlv.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priorflowctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (send_tlv.is_set || is_set(send_tlv.yfilter)) leaf_name_data.push_back(send_tlv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send_tlv")
    {
        send_tlv = value;
        send_tlv.value_namespace = name_space;
        send_tlv.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "send_tlv")
    {
        send_tlv.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "send_tlv")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::PriorflowctrlwdItems()
    :
    watchdoginterval{YType::uint8, "watchDogInterval"},
    disableaction{YType::boolean, "disableAction"},
    interfacemutiplier{YType::uint8, "interfaceMutiplier"}
{

    yang_name = "priorflowctrlwd-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::~PriorflowctrlwdItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::has_data() const
{
    if (is_presence_container) return true;
    return watchdoginterval.is_set
	|| disableaction.is_set
	|| interfacemutiplier.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(watchdoginterval.yfilter)
	|| ydk::is_set(disableaction.yfilter)
	|| ydk::is_set(interfacemutiplier.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priorflowctrlwd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (watchdoginterval.is_set || is_set(watchdoginterval.yfilter)) leaf_name_data.push_back(watchdoginterval.get_name_leafdata());
    if (disableaction.is_set || is_set(disableaction.yfilter)) leaf_name_data.push_back(disableaction.get_name_leafdata());
    if (interfacemutiplier.is_set || is_set(interfacemutiplier.yfilter)) leaf_name_data.push_back(interfacemutiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "watchDogInterval")
    {
        watchdoginterval = value;
        watchdoginterval.value_namespace = name_space;
        watchdoginterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disableAction")
    {
        disableaction = value;
        disableaction.value_namespace = name_space;
        disableaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceMutiplier")
    {
        interfacemutiplier = value;
        interfacemutiplier.value_namespace = name_space;
        interfacemutiplier.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "watchDogInterval")
    {
        watchdoginterval.yfilter = yfilter;
    }
    if(value_path == "disableAction")
    {
        disableaction.yfilter = yfilter;
    }
    if(value_path == "interfaceMutiplier")
    {
        interfacemutiplier.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "watchDogInterval" || name == "disableAction" || name == "interfaceMutiplier")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::EeepItems::EeepItems()
    :
    eeestate{YType::enumeration, "eeeState"},
    eeelpi{YType::enumeration, "eeeLpi"},
    eeelat{YType::enumeration, "eeeLat"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "eeep-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::EeepItems::~EeepItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::EeepItems::has_data() const
{
    if (is_presence_container) return true;
    return eeestate.is_set
	|| eeelpi.is_set
	|| eeelat.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::EeepItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eeestate.yfilter)
	|| ydk::is_set(eeelpi.yfilter)
	|| ydk::is_set(eeelat.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::EeepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::EeepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eeestate.is_set || is_set(eeestate.yfilter)) leaf_name_data.push_back(eeestate.get_name_leafdata());
    if (eeelpi.is_set || is_set(eeelpi.yfilter)) leaf_name_data.push_back(eeelpi.get_name_leafdata());
    if (eeelat.is_set || is_set(eeelat.yfilter)) leaf_name_data.push_back(eeelat.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::EeepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::EeepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::EeepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eeeState")
    {
        eeestate = value;
        eeestate.value_namespace = name_space;
        eeestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeLpi")
    {
        eeelpi = value;
        eeelpi.value_namespace = name_space;
        eeelpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeLat")
    {
        eeelat = value;
        eeelat.value_namespace = name_space;
        eeelat.value_namespace_prefix = name_space_prefix;
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

void System::IntfItems::AggrItems::AggrIfList::EeepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eeeState")
    {
        eeestate.yfilter = yfilter;
    }
    if(value_path == "eeeLpi")
    {
        eeelpi.yfilter = yfilter;
    }
    if(value_path == "eeeLat")
    {
        eeelat.yfilter = yfilter;
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

bool System::IntfItems::AggrItems::AggrIfList::EeepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eeeState" || name == "eeeLpi" || name == "eeeLat" || name == "name" || name == "descr")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::StormctrlpItems()
    :
    type{YType::enumeration, "type"},
    rate{YType::str, "rate"},
    burstrate{YType::str, "burstRate"},
    ratepps{YType::uint32, "ratePps"},
    burstpps{YType::uint32, "burstPps"}
{

    yang_name = "stormctrlp-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::~StormctrlpItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| rate.is_set
	|| burstrate.is_set
	|| ratepps.is_set
	|| burstpps.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(burstrate.yfilter)
	|| ydk::is_set(ratepps.yfilter)
	|| ydk::is_set(burstpps.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stormctrlp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (burstrate.is_set || is_set(burstrate.yfilter)) leaf_name_data.push_back(burstrate.get_name_leafdata());
    if (ratepps.is_set || is_set(ratepps.yfilter)) leaf_name_data.push_back(ratepps.get_name_leafdata());
    if (burstpps.is_set || is_set(burstpps.yfilter)) leaf_name_data.push_back(burstpps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstRate")
    {
        burstrate = value;
        burstrate.value_namespace = name_space;
        burstrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratePps")
    {
        ratepps = value;
        ratepps.value_namespace = name_space;
        ratepps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstPps")
    {
        burstpps = value;
        burstpps.value_namespace = name_space;
        burstpps.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "burstRate")
    {
        burstrate.yfilter = yfilter;
    }
    if(value_path == "ratePps")
    {
        ratepps.yfilter = yfilter;
    }
    if(value_path == "burstPps")
    {
        burstpps.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "rate" || name == "burstRate" || name == "ratePps" || name == "burstPps")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::LoadpItems::LoadpItems()
    :
    loadintvl1{YType::uint16, "loadIntvl1"},
    loadintvl2{YType::uint16, "loadIntvl2"},
    loadintvl3{YType::uint16, "loadIntvl3"}
{

    yang_name = "loadp-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::LoadpItems::~LoadpItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::LoadpItems::has_data() const
{
    if (is_presence_container) return true;
    return loadintvl1.is_set
	|| loadintvl2.is_set
	|| loadintvl3.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::LoadpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loadintvl1.yfilter)
	|| ydk::is_set(loadintvl2.yfilter)
	|| ydk::is_set(loadintvl3.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::LoadpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loadp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::LoadpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loadintvl1.is_set || is_set(loadintvl1.yfilter)) leaf_name_data.push_back(loadintvl1.get_name_leafdata());
    if (loadintvl2.is_set || is_set(loadintvl2.yfilter)) leaf_name_data.push_back(loadintvl2.get_name_leafdata());
    if (loadintvl3.is_set || is_set(loadintvl3.yfilter)) leaf_name_data.push_back(loadintvl3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::LoadpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::LoadpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::LoadpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loadIntvl1")
    {
        loadintvl1 = value;
        loadintvl1.value_namespace = name_space;
        loadintvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadIntvl2")
    {
        loadintvl2 = value;
        loadintvl2.value_namespace = name_space;
        loadintvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadIntvl3")
    {
        loadintvl3 = value;
        loadintvl3.value_namespace = name_space;
        loadintvl3.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::LoadpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loadIntvl1")
    {
        loadintvl1.yfilter = yfilter;
    }
    if(value_path == "loadIntvl2")
    {
        loadintvl2.yfilter = yfilter;
    }
    if(value_path == "loadIntvl3")
    {
        loadintvl3.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::LoadpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loadIntvl1" || name == "loadIntvl2" || name == "loadIntvl3")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::VrfItems::VrfItems()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::VrfItems::~VrfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::VrfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::AggrifItems::AggrifItems()
    :
    numactiveports{YType::uint16, "numActivePorts"},
    activembrs{YType::str, "activeMbrs"},
    nummbrup{YType::uint8, "numMbrUp"},
    ifindex{YType::uint32, "ifIndex"},
    operautoneg{YType::enumeration, "operAutoNeg"},
    opermtu{YType::uint32, "operMtu"},
    adminst{YType::enumeration, "adminSt"},
    operdescr{YType::str, "operDescr"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    operstqualcode{YType::uint32, "operStQualCode"},
    opererrdisqual{YType::enumeration, "operErrDisQual"},
    operspeed{YType::enumeration, "operSpeed"},
    opermode{YType::enumeration, "operMode"},
    operduplex{YType::enumeration, "operDuplex"},
    operflowctrl{YType::str, "operFlowCtrl"},
    operphyenst{YType::enumeration, "operPhyEnSt"},
    backplanemac{YType::str, "backplaneMac"},
    operroutermac{YType::str, "operRouterMac"},
    txt{YType::enumeration, "txT"},
    lastlinkstchg{YType::str, "lastLinkStChg"},
    portcfgwaitflags{YType::uint32, "portCfgWaitFlags"},
    accessvlan{YType::str, "accessVlan"},
    nativevlan{YType::str, "nativeVlan"},
    cfgnativevlan{YType::str, "cfgNativeVlan"},
    cfgaccessvlan{YType::str, "cfgAccessVlan"},
    primaryvlan{YType::str, "primaryVlan"},
    operbitset{YType::str, "operBitset"},
    vdcid{YType::uint16, "vdcId"},
    resetctr{YType::uint32, "resetCtr"},
    media{YType::uint32, "media"},
    encap{YType::uint32, "encap"},
    iod{YType::uint64, "iod"},
    allowedvlans{YType::str, "allowedVlans"},
    opervlans{YType::str, "operVlans"},
    errvlans{YType::str, "errVlans"},
    opertrunkstatus{YType::enumeration, "operTrunkStatus"},
    bundleindex{YType::str, "bundleIndex"},
    opermdix{YType::enumeration, "operMdix"},
    currerrindex{YType::uint32, "currErrIndex"},
    lasterrors{YType::str, "lastErrors"},
    errdistimerrunning{YType::boolean, "errDisTimerRunning"},
    bundlebupid{YType::uint32, "bundleBupId"},
    operdcemode{YType::enumeration, "operDceMode"},
    intft{YType::enumeration, "intfT"},
    diags{YType::enumeration, "diags"},
    opereeestate{YType::enumeration, "operEEEState"},
    opereeetxwktime{YType::uint32, "operEEETxWkTime"},
    opereeerxwktime{YType::uint32, "operEEERxWkTime"},
    usercfgdflags{YType::str, "userCfgdFlags"},
    numofsi{YType::uint32, "numOfSI"},
    silist{YType::str, "siList"},
    dynamicvlan{YType::boolean, "dynamicVlan"},
    usage{YType::str, "usage"}
        ,
    portcap_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems>())
{
    portcap_items->parent = this;

    yang_name = "aggrif-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::AggrifItems::~AggrifItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::AggrifItems::has_data() const
{
    if (is_presence_container) return true;
    return numactiveports.is_set
	|| activembrs.is_set
	|| nummbrup.is_set
	|| ifindex.is_set
	|| operautoneg.is_set
	|| opermtu.is_set
	|| adminst.is_set
	|| operdescr.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| operstqualcode.is_set
	|| opererrdisqual.is_set
	|| operspeed.is_set
	|| opermode.is_set
	|| operduplex.is_set
	|| operflowctrl.is_set
	|| operphyenst.is_set
	|| backplanemac.is_set
	|| operroutermac.is_set
	|| txt.is_set
	|| lastlinkstchg.is_set
	|| portcfgwaitflags.is_set
	|| accessvlan.is_set
	|| nativevlan.is_set
	|| cfgnativevlan.is_set
	|| cfgaccessvlan.is_set
	|| primaryvlan.is_set
	|| operbitset.is_set
	|| vdcid.is_set
	|| resetctr.is_set
	|| media.is_set
	|| encap.is_set
	|| iod.is_set
	|| allowedvlans.is_set
	|| opervlans.is_set
	|| errvlans.is_set
	|| opertrunkstatus.is_set
	|| bundleindex.is_set
	|| opermdix.is_set
	|| currerrindex.is_set
	|| lasterrors.is_set
	|| errdistimerrunning.is_set
	|| bundlebupid.is_set
	|| operdcemode.is_set
	|| intft.is_set
	|| diags.is_set
	|| opereeestate.is_set
	|| opereeetxwktime.is_set
	|| opereeerxwktime.is_set
	|| usercfgdflags.is_set
	|| numofsi.is_set
	|| silist.is_set
	|| dynamicvlan.is_set
	|| usage.is_set
	|| (portcap_items !=  nullptr && portcap_items->has_data());
}

bool System::IntfItems::AggrItems::AggrIfList::AggrifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(numactiveports.yfilter)
	|| ydk::is_set(activembrs.yfilter)
	|| ydk::is_set(nummbrup.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(operautoneg.yfilter)
	|| ydk::is_set(opermtu.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operdescr.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(operstqualcode.yfilter)
	|| ydk::is_set(opererrdisqual.yfilter)
	|| ydk::is_set(operspeed.yfilter)
	|| ydk::is_set(opermode.yfilter)
	|| ydk::is_set(operduplex.yfilter)
	|| ydk::is_set(operflowctrl.yfilter)
	|| ydk::is_set(operphyenst.yfilter)
	|| ydk::is_set(backplanemac.yfilter)
	|| ydk::is_set(operroutermac.yfilter)
	|| ydk::is_set(txt.yfilter)
	|| ydk::is_set(lastlinkstchg.yfilter)
	|| ydk::is_set(portcfgwaitflags.yfilter)
	|| ydk::is_set(accessvlan.yfilter)
	|| ydk::is_set(nativevlan.yfilter)
	|| ydk::is_set(cfgnativevlan.yfilter)
	|| ydk::is_set(cfgaccessvlan.yfilter)
	|| ydk::is_set(primaryvlan.yfilter)
	|| ydk::is_set(operbitset.yfilter)
	|| ydk::is_set(vdcid.yfilter)
	|| ydk::is_set(resetctr.yfilter)
	|| ydk::is_set(media.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(allowedvlans.yfilter)
	|| ydk::is_set(opervlans.yfilter)
	|| ydk::is_set(errvlans.yfilter)
	|| ydk::is_set(opertrunkstatus.yfilter)
	|| ydk::is_set(bundleindex.yfilter)
	|| ydk::is_set(opermdix.yfilter)
	|| ydk::is_set(currerrindex.yfilter)
	|| ydk::is_set(lasterrors.yfilter)
	|| ydk::is_set(errdistimerrunning.yfilter)
	|| ydk::is_set(bundlebupid.yfilter)
	|| ydk::is_set(operdcemode.yfilter)
	|| ydk::is_set(intft.yfilter)
	|| ydk::is_set(diags.yfilter)
	|| ydk::is_set(opereeestate.yfilter)
	|| ydk::is_set(opereeetxwktime.yfilter)
	|| ydk::is_set(opereeerxwktime.yfilter)
	|| ydk::is_set(usercfgdflags.yfilter)
	|| ydk::is_set(numofsi.yfilter)
	|| ydk::is_set(silist.yfilter)
	|| ydk::is_set(dynamicvlan.yfilter)
	|| ydk::is_set(usage.yfilter)
	|| (portcap_items !=  nullptr && portcap_items->has_operation());
}

std::string System::IntfItems::AggrItems::AggrIfList::AggrifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggrif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::AggrifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (numactiveports.is_set || is_set(numactiveports.yfilter)) leaf_name_data.push_back(numactiveports.get_name_leafdata());
    if (activembrs.is_set || is_set(activembrs.yfilter)) leaf_name_data.push_back(activembrs.get_name_leafdata());
    if (nummbrup.is_set || is_set(nummbrup.yfilter)) leaf_name_data.push_back(nummbrup.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (operautoneg.is_set || is_set(operautoneg.yfilter)) leaf_name_data.push_back(operautoneg.get_name_leafdata());
    if (opermtu.is_set || is_set(opermtu.yfilter)) leaf_name_data.push_back(opermtu.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operdescr.is_set || is_set(operdescr.yfilter)) leaf_name_data.push_back(operdescr.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (operstqualcode.is_set || is_set(operstqualcode.yfilter)) leaf_name_data.push_back(operstqualcode.get_name_leafdata());
    if (opererrdisqual.is_set || is_set(opererrdisqual.yfilter)) leaf_name_data.push_back(opererrdisqual.get_name_leafdata());
    if (operspeed.is_set || is_set(operspeed.yfilter)) leaf_name_data.push_back(operspeed.get_name_leafdata());
    if (opermode.is_set || is_set(opermode.yfilter)) leaf_name_data.push_back(opermode.get_name_leafdata());
    if (operduplex.is_set || is_set(operduplex.yfilter)) leaf_name_data.push_back(operduplex.get_name_leafdata());
    if (operflowctrl.is_set || is_set(operflowctrl.yfilter)) leaf_name_data.push_back(operflowctrl.get_name_leafdata());
    if (operphyenst.is_set || is_set(operphyenst.yfilter)) leaf_name_data.push_back(operphyenst.get_name_leafdata());
    if (backplanemac.is_set || is_set(backplanemac.yfilter)) leaf_name_data.push_back(backplanemac.get_name_leafdata());
    if (operroutermac.is_set || is_set(operroutermac.yfilter)) leaf_name_data.push_back(operroutermac.get_name_leafdata());
    if (txt.is_set || is_set(txt.yfilter)) leaf_name_data.push_back(txt.get_name_leafdata());
    if (lastlinkstchg.is_set || is_set(lastlinkstchg.yfilter)) leaf_name_data.push_back(lastlinkstchg.get_name_leafdata());
    if (portcfgwaitflags.is_set || is_set(portcfgwaitflags.yfilter)) leaf_name_data.push_back(portcfgwaitflags.get_name_leafdata());
    if (accessvlan.is_set || is_set(accessvlan.yfilter)) leaf_name_data.push_back(accessvlan.get_name_leafdata());
    if (nativevlan.is_set || is_set(nativevlan.yfilter)) leaf_name_data.push_back(nativevlan.get_name_leafdata());
    if (cfgnativevlan.is_set || is_set(cfgnativevlan.yfilter)) leaf_name_data.push_back(cfgnativevlan.get_name_leafdata());
    if (cfgaccessvlan.is_set || is_set(cfgaccessvlan.yfilter)) leaf_name_data.push_back(cfgaccessvlan.get_name_leafdata());
    if (primaryvlan.is_set || is_set(primaryvlan.yfilter)) leaf_name_data.push_back(primaryvlan.get_name_leafdata());
    if (operbitset.is_set || is_set(operbitset.yfilter)) leaf_name_data.push_back(operbitset.get_name_leafdata());
    if (vdcid.is_set || is_set(vdcid.yfilter)) leaf_name_data.push_back(vdcid.get_name_leafdata());
    if (resetctr.is_set || is_set(resetctr.yfilter)) leaf_name_data.push_back(resetctr.get_name_leafdata());
    if (media.is_set || is_set(media.yfilter)) leaf_name_data.push_back(media.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (allowedvlans.is_set || is_set(allowedvlans.yfilter)) leaf_name_data.push_back(allowedvlans.get_name_leafdata());
    if (opervlans.is_set || is_set(opervlans.yfilter)) leaf_name_data.push_back(opervlans.get_name_leafdata());
    if (errvlans.is_set || is_set(errvlans.yfilter)) leaf_name_data.push_back(errvlans.get_name_leafdata());
    if (opertrunkstatus.is_set || is_set(opertrunkstatus.yfilter)) leaf_name_data.push_back(opertrunkstatus.get_name_leafdata());
    if (bundleindex.is_set || is_set(bundleindex.yfilter)) leaf_name_data.push_back(bundleindex.get_name_leafdata());
    if (opermdix.is_set || is_set(opermdix.yfilter)) leaf_name_data.push_back(opermdix.get_name_leafdata());
    if (currerrindex.is_set || is_set(currerrindex.yfilter)) leaf_name_data.push_back(currerrindex.get_name_leafdata());
    if (lasterrors.is_set || is_set(lasterrors.yfilter)) leaf_name_data.push_back(lasterrors.get_name_leafdata());
    if (errdistimerrunning.is_set || is_set(errdistimerrunning.yfilter)) leaf_name_data.push_back(errdistimerrunning.get_name_leafdata());
    if (bundlebupid.is_set || is_set(bundlebupid.yfilter)) leaf_name_data.push_back(bundlebupid.get_name_leafdata());
    if (operdcemode.is_set || is_set(operdcemode.yfilter)) leaf_name_data.push_back(operdcemode.get_name_leafdata());
    if (intft.is_set || is_set(intft.yfilter)) leaf_name_data.push_back(intft.get_name_leafdata());
    if (diags.is_set || is_set(diags.yfilter)) leaf_name_data.push_back(diags.get_name_leafdata());
    if (opereeestate.is_set || is_set(opereeestate.yfilter)) leaf_name_data.push_back(opereeestate.get_name_leafdata());
    if (opereeetxwktime.is_set || is_set(opereeetxwktime.yfilter)) leaf_name_data.push_back(opereeetxwktime.get_name_leafdata());
    if (opereeerxwktime.is_set || is_set(opereeerxwktime.yfilter)) leaf_name_data.push_back(opereeerxwktime.get_name_leafdata());
    if (usercfgdflags.is_set || is_set(usercfgdflags.yfilter)) leaf_name_data.push_back(usercfgdflags.get_name_leafdata());
    if (numofsi.is_set || is_set(numofsi.yfilter)) leaf_name_data.push_back(numofsi.get_name_leafdata());
    if (silist.is_set || is_set(silist.yfilter)) leaf_name_data.push_back(silist.get_name_leafdata());
    if (dynamicvlan.is_set || is_set(dynamicvlan.yfilter)) leaf_name_data.push_back(dynamicvlan.get_name_leafdata());
    if (usage.is_set || is_set(usage.yfilter)) leaf_name_data.push_back(usage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::AggrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "portcap-items")
    {
        if(portcap_items == nullptr)
        {
            portcap_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems>();
        }
        return portcap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::AggrifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(portcap_items != nullptr)
    {
        _children["portcap-items"] = portcap_items;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::AggrifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "numActivePorts")
    {
        numactiveports = value;
        numactiveports.value_namespace = name_space;
        numactiveports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeMbrs")
    {
        activembrs = value;
        activembrs.value_namespace = name_space;
        activembrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numMbrUp")
    {
        nummbrup = value;
        nummbrup.value_namespace = name_space;
        nummbrup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operAutoNeg")
    {
        operautoneg = value;
        operautoneg.value_namespace = name_space;
        operautoneg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMtu")
    {
        opermtu = value;
        opermtu.value_namespace = name_space;
        opermtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDescr")
    {
        operdescr = value;
        operdescr.value_namespace = name_space;
        operdescr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "operStQualCode")
    {
        operstqualcode = value;
        operstqualcode.value_namespace = name_space;
        operstqualcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErrDisQual")
    {
        opererrdisqual = value;
        opererrdisqual.value_namespace = name_space;
        opererrdisqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSpeed")
    {
        operspeed = value;
        operspeed.value_namespace = name_space;
        operspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMode")
    {
        opermode = value;
        opermode.value_namespace = name_space;
        opermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDuplex")
    {
        operduplex = value;
        operduplex.value_namespace = name_space;
        operduplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operFlowCtrl")
    {
        operflowctrl = value;
        operflowctrl.value_namespace = name_space;
        operflowctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPhyEnSt")
    {
        operphyenst = value;
        operphyenst.value_namespace = name_space;
        operphyenst.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "txT")
    {
        txt = value;
        txt.value_namespace = name_space;
        txt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg = value;
        lastlinkstchg.value_namespace = name_space;
        lastlinkstchg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portCfgWaitFlags")
    {
        portcfgwaitflags = value;
        portcfgwaitflags.value_namespace = name_space;
        portcfgwaitflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accessVlan")
    {
        accessvlan = value;
        accessvlan.value_namespace = name_space;
        accessvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan = value;
        nativevlan.value_namespace = name_space;
        nativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgNativeVlan")
    {
        cfgnativevlan = value;
        cfgnativevlan.value_namespace = name_space;
        cfgnativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgAccessVlan")
    {
        cfgaccessvlan = value;
        cfgaccessvlan.value_namespace = name_space;
        cfgaccessvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primaryVlan")
    {
        primaryvlan = value;
        primaryvlan.value_namespace = name_space;
        primaryvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operBitset")
    {
        operbitset = value;
        operbitset.value_namespace = name_space;
        operbitset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdcId")
    {
        vdcid = value;
        vdcid.value_namespace = name_space;
        vdcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resetCtr")
    {
        resetctr = value;
        resetctr.value_namespace = name_space;
        resetctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media")
    {
        media = value;
        media.value_namespace = name_space;
        media.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedVlans")
    {
        allowedvlans = value;
        allowedvlans.value_namespace = name_space;
        allowedvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operVlans")
    {
        opervlans = value;
        opervlans.value_namespace = name_space;
        opervlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errVlans")
    {
        errvlans = value;
        errvlans.value_namespace = name_space;
        errvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operTrunkStatus")
    {
        opertrunkstatus = value;
        opertrunkstatus.value_namespace = name_space;
        opertrunkstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundleIndex")
    {
        bundleindex = value;
        bundleindex.value_namespace = name_space;
        bundleindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMdix")
    {
        opermdix = value;
        opermdix.value_namespace = name_space;
        opermdix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currErrIndex")
    {
        currerrindex = value;
        currerrindex.value_namespace = name_space;
        currerrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastErrors")
    {
        lasterrors = value;
        lasterrors.value_namespace = name_space;
        lasterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errDisTimerRunning")
    {
        errdistimerrunning = value;
        errdistimerrunning.value_namespace = name_space;
        errdistimerrunning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundleBupId")
    {
        bundlebupid = value;
        bundlebupid.value_namespace = name_space;
        bundlebupid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDceMode")
    {
        operdcemode = value;
        operdcemode.value_namespace = name_space;
        operdcemode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intfT")
    {
        intft = value;
        intft.value_namespace = name_space;
        intft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diags")
    {
        diags = value;
        diags.value_namespace = name_space;
        diags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operEEEState")
    {
        opereeestate = value;
        opereeestate.value_namespace = name_space;
        opereeestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operEEETxWkTime")
    {
        opereeetxwktime = value;
        opereeetxwktime.value_namespace = name_space;
        opereeetxwktime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operEEERxWkTime")
    {
        opereeerxwktime = value;
        opereeerxwktime.value_namespace = name_space;
        opereeerxwktime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userCfgdFlags")
    {
        usercfgdflags = value;
        usercfgdflags.value_namespace = name_space;
        usercfgdflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numOfSI")
    {
        numofsi = value;
        numofsi.value_namespace = name_space;
        numofsi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "siList")
    {
        silist = value;
        silist.value_namespace = name_space;
        silist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamicVlan")
    {
        dynamicvlan = value;
        dynamicvlan.value_namespace = name_space;
        dynamicvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage")
    {
        usage = value;
        usage.value_namespace = name_space;
        usage.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::AggrifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "numActivePorts")
    {
        numactiveports.yfilter = yfilter;
    }
    if(value_path == "activeMbrs")
    {
        activembrs.yfilter = yfilter;
    }
    if(value_path == "numMbrUp")
    {
        nummbrup.yfilter = yfilter;
    }
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "operAutoNeg")
    {
        operautoneg.yfilter = yfilter;
    }
    if(value_path == "operMtu")
    {
        opermtu.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operDescr")
    {
        operdescr.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "operStQualCode")
    {
        operstqualcode.yfilter = yfilter;
    }
    if(value_path == "operErrDisQual")
    {
        opererrdisqual.yfilter = yfilter;
    }
    if(value_path == "operSpeed")
    {
        operspeed.yfilter = yfilter;
    }
    if(value_path == "operMode")
    {
        opermode.yfilter = yfilter;
    }
    if(value_path == "operDuplex")
    {
        operduplex.yfilter = yfilter;
    }
    if(value_path == "operFlowCtrl")
    {
        operflowctrl.yfilter = yfilter;
    }
    if(value_path == "operPhyEnSt")
    {
        operphyenst.yfilter = yfilter;
    }
    if(value_path == "backplaneMac")
    {
        backplanemac.yfilter = yfilter;
    }
    if(value_path == "operRouterMac")
    {
        operroutermac.yfilter = yfilter;
    }
    if(value_path == "txT")
    {
        txt.yfilter = yfilter;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg.yfilter = yfilter;
    }
    if(value_path == "portCfgWaitFlags")
    {
        portcfgwaitflags.yfilter = yfilter;
    }
    if(value_path == "accessVlan")
    {
        accessvlan.yfilter = yfilter;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan.yfilter = yfilter;
    }
    if(value_path == "cfgNativeVlan")
    {
        cfgnativevlan.yfilter = yfilter;
    }
    if(value_path == "cfgAccessVlan")
    {
        cfgaccessvlan.yfilter = yfilter;
    }
    if(value_path == "primaryVlan")
    {
        primaryvlan.yfilter = yfilter;
    }
    if(value_path == "operBitset")
    {
        operbitset.yfilter = yfilter;
    }
    if(value_path == "vdcId")
    {
        vdcid.yfilter = yfilter;
    }
    if(value_path == "resetCtr")
    {
        resetctr.yfilter = yfilter;
    }
    if(value_path == "media")
    {
        media.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "allowedVlans")
    {
        allowedvlans.yfilter = yfilter;
    }
    if(value_path == "operVlans")
    {
        opervlans.yfilter = yfilter;
    }
    if(value_path == "errVlans")
    {
        errvlans.yfilter = yfilter;
    }
    if(value_path == "operTrunkStatus")
    {
        opertrunkstatus.yfilter = yfilter;
    }
    if(value_path == "bundleIndex")
    {
        bundleindex.yfilter = yfilter;
    }
    if(value_path == "operMdix")
    {
        opermdix.yfilter = yfilter;
    }
    if(value_path == "currErrIndex")
    {
        currerrindex.yfilter = yfilter;
    }
    if(value_path == "lastErrors")
    {
        lasterrors.yfilter = yfilter;
    }
    if(value_path == "errDisTimerRunning")
    {
        errdistimerrunning.yfilter = yfilter;
    }
    if(value_path == "bundleBupId")
    {
        bundlebupid.yfilter = yfilter;
    }
    if(value_path == "operDceMode")
    {
        operdcemode.yfilter = yfilter;
    }
    if(value_path == "intfT")
    {
        intft.yfilter = yfilter;
    }
    if(value_path == "diags")
    {
        diags.yfilter = yfilter;
    }
    if(value_path == "operEEEState")
    {
        opereeestate.yfilter = yfilter;
    }
    if(value_path == "operEEETxWkTime")
    {
        opereeetxwktime.yfilter = yfilter;
    }
    if(value_path == "operEEERxWkTime")
    {
        opereeerxwktime.yfilter = yfilter;
    }
    if(value_path == "userCfgdFlags")
    {
        usercfgdflags.yfilter = yfilter;
    }
    if(value_path == "numOfSI")
    {
        numofsi.yfilter = yfilter;
    }
    if(value_path == "siList")
    {
        silist.yfilter = yfilter;
    }
    if(value_path == "dynamicVlan")
    {
        dynamicvlan.yfilter = yfilter;
    }
    if(value_path == "usage")
    {
        usage.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::AggrifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "portcap-items" || name == "numActivePorts" || name == "activeMbrs" || name == "numMbrUp" || name == "ifIndex" || name == "operAutoNeg" || name == "operMtu" || name == "adminSt" || name == "operDescr" || name == "operSt" || name == "operStQual" || name == "operStQualCode" || name == "operErrDisQual" || name == "operSpeed" || name == "operMode" || name == "operDuplex" || name == "operFlowCtrl" || name == "operPhyEnSt" || name == "backplaneMac" || name == "operRouterMac" || name == "txT" || name == "lastLinkStChg" || name == "portCfgWaitFlags" || name == "accessVlan" || name == "nativeVlan" || name == "cfgNativeVlan" || name == "cfgAccessVlan" || name == "primaryVlan" || name == "operBitset" || name == "vdcId" || name == "resetCtr" || name == "media" || name == "encap" || name == "iod" || name == "allowedVlans" || name == "operVlans" || name == "errVlans" || name == "operTrunkStatus" || name == "bundleIndex" || name == "operMdix" || name == "currErrIndex" || name == "lastErrors" || name == "errDisTimerRunning" || name == "bundleBupId" || name == "operDceMode" || name == "intfT" || name == "diags" || name == "operEEEState" || name == "operEEETxWkTime" || name == "operEEERxWkTime" || name == "userCfgdFlags" || name == "numOfSI" || name == "siList" || name == "dynamicVlan" || name == "usage")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::PortcapItems()
    :
    id{YType::str, "id"},
    speed{YType::str, "speed"},
    duplex{YType::str, "duplex"},
    trunkencap{YType::uint8, "trunkEncap"},
    channel{YType::uint8, "channel"},
    suppression{YType::uint8, "suppression"},
    rxflowcontrol{YType::uint8, "rxFlowControl"},
    txflowcontrol{YType::uint8, "txFlowControl"},
    cosrewrite{YType::uint8, "cosRewrite"},
    tosrewrite{YType::uint8, "tosRewrite"},
    span{YType::uint8, "span"},
    udld{YType::uint8, "udld"},
    autoneg{YType::uint8, "autoneg"},
    linkdebounce{YType::uint8, "linkDebounce"},
    linkdebouncetime{YType::uint8, "linkDebounceTime"},
    fcotcapable{YType::uint8, "fcotCapable"},
    ratemode{YType::uint8, "rateMode"},
    mdix{YType::uint8, "mdix"},
    portgroup{YType::uint8, "portGroup"},
    ctscapable{YType::uint8, "ctsCapable"},
    qosrxprio{YType::uint8, "qosRxPrio"},
    qosrxqueue{YType::uint8, "qosRxQueue"},
    qosrxthold{YType::uint8, "qosRxThold"},
    qostxprio{YType::uint8, "qosTxPrio"},
    qostxqueue{YType::uint8, "qosTxQueue"},
    qostxthold{YType::uint8, "qosTxThold"},
    model{YType::str, "model"},
    type{YType::str, "type"},
    portgrpmbrs{YType::str, "portGrpMbrs"},
    protosupport{YType::uint32, "protoSupport"},
    portcap{YType::uint32, "portCap"},
    eeecapval{YType::uint16, "eeeCapVal"},
    eeewaketimes10g{YType::str, "eeeWakeTimes10g"},
    eeeflapflags{YType::uint16, "eeeFlapFlags"}
{

    yang_name = "portcap-items"; yang_parent_name = "aggrif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::~PortcapItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| speed.is_set
	|| duplex.is_set
	|| trunkencap.is_set
	|| channel.is_set
	|| suppression.is_set
	|| rxflowcontrol.is_set
	|| txflowcontrol.is_set
	|| cosrewrite.is_set
	|| tosrewrite.is_set
	|| span.is_set
	|| udld.is_set
	|| autoneg.is_set
	|| linkdebounce.is_set
	|| linkdebouncetime.is_set
	|| fcotcapable.is_set
	|| ratemode.is_set
	|| mdix.is_set
	|| portgroup.is_set
	|| ctscapable.is_set
	|| qosrxprio.is_set
	|| qosrxqueue.is_set
	|| qosrxthold.is_set
	|| qostxprio.is_set
	|| qostxqueue.is_set
	|| qostxthold.is_set
	|| model.is_set
	|| type.is_set
	|| portgrpmbrs.is_set
	|| protosupport.is_set
	|| portcap.is_set
	|| eeecapval.is_set
	|| eeewaketimes10g.is_set
	|| eeeflapflags.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(trunkencap.yfilter)
	|| ydk::is_set(channel.yfilter)
	|| ydk::is_set(suppression.yfilter)
	|| ydk::is_set(rxflowcontrol.yfilter)
	|| ydk::is_set(txflowcontrol.yfilter)
	|| ydk::is_set(cosrewrite.yfilter)
	|| ydk::is_set(tosrewrite.yfilter)
	|| ydk::is_set(span.yfilter)
	|| ydk::is_set(udld.yfilter)
	|| ydk::is_set(autoneg.yfilter)
	|| ydk::is_set(linkdebounce.yfilter)
	|| ydk::is_set(linkdebouncetime.yfilter)
	|| ydk::is_set(fcotcapable.yfilter)
	|| ydk::is_set(ratemode.yfilter)
	|| ydk::is_set(mdix.yfilter)
	|| ydk::is_set(portgroup.yfilter)
	|| ydk::is_set(ctscapable.yfilter)
	|| ydk::is_set(qosrxprio.yfilter)
	|| ydk::is_set(qosrxqueue.yfilter)
	|| ydk::is_set(qosrxthold.yfilter)
	|| ydk::is_set(qostxprio.yfilter)
	|| ydk::is_set(qostxqueue.yfilter)
	|| ydk::is_set(qostxthold.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(portgrpmbrs.yfilter)
	|| ydk::is_set(protosupport.yfilter)
	|| ydk::is_set(portcap.yfilter)
	|| ydk::is_set(eeecapval.yfilter)
	|| ydk::is_set(eeewaketimes10g.yfilter)
	|| ydk::is_set(eeeflapflags.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portcap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (trunkencap.is_set || is_set(trunkencap.yfilter)) leaf_name_data.push_back(trunkencap.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());
    if (suppression.is_set || is_set(suppression.yfilter)) leaf_name_data.push_back(suppression.get_name_leafdata());
    if (rxflowcontrol.is_set || is_set(rxflowcontrol.yfilter)) leaf_name_data.push_back(rxflowcontrol.get_name_leafdata());
    if (txflowcontrol.is_set || is_set(txflowcontrol.yfilter)) leaf_name_data.push_back(txflowcontrol.get_name_leafdata());
    if (cosrewrite.is_set || is_set(cosrewrite.yfilter)) leaf_name_data.push_back(cosrewrite.get_name_leafdata());
    if (tosrewrite.is_set || is_set(tosrewrite.yfilter)) leaf_name_data.push_back(tosrewrite.get_name_leafdata());
    if (span.is_set || is_set(span.yfilter)) leaf_name_data.push_back(span.get_name_leafdata());
    if (udld.is_set || is_set(udld.yfilter)) leaf_name_data.push_back(udld.get_name_leafdata());
    if (autoneg.is_set || is_set(autoneg.yfilter)) leaf_name_data.push_back(autoneg.get_name_leafdata());
    if (linkdebounce.is_set || is_set(linkdebounce.yfilter)) leaf_name_data.push_back(linkdebounce.get_name_leafdata());
    if (linkdebouncetime.is_set || is_set(linkdebouncetime.yfilter)) leaf_name_data.push_back(linkdebouncetime.get_name_leafdata());
    if (fcotcapable.is_set || is_set(fcotcapable.yfilter)) leaf_name_data.push_back(fcotcapable.get_name_leafdata());
    if (ratemode.is_set || is_set(ratemode.yfilter)) leaf_name_data.push_back(ratemode.get_name_leafdata());
    if (mdix.is_set || is_set(mdix.yfilter)) leaf_name_data.push_back(mdix.get_name_leafdata());
    if (portgroup.is_set || is_set(portgroup.yfilter)) leaf_name_data.push_back(portgroup.get_name_leafdata());
    if (ctscapable.is_set || is_set(ctscapable.yfilter)) leaf_name_data.push_back(ctscapable.get_name_leafdata());
    if (qosrxprio.is_set || is_set(qosrxprio.yfilter)) leaf_name_data.push_back(qosrxprio.get_name_leafdata());
    if (qosrxqueue.is_set || is_set(qosrxqueue.yfilter)) leaf_name_data.push_back(qosrxqueue.get_name_leafdata());
    if (qosrxthold.is_set || is_set(qosrxthold.yfilter)) leaf_name_data.push_back(qosrxthold.get_name_leafdata());
    if (qostxprio.is_set || is_set(qostxprio.yfilter)) leaf_name_data.push_back(qostxprio.get_name_leafdata());
    if (qostxqueue.is_set || is_set(qostxqueue.yfilter)) leaf_name_data.push_back(qostxqueue.get_name_leafdata());
    if (qostxthold.is_set || is_set(qostxthold.yfilter)) leaf_name_data.push_back(qostxthold.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (portgrpmbrs.is_set || is_set(portgrpmbrs.yfilter)) leaf_name_data.push_back(portgrpmbrs.get_name_leafdata());
    if (protosupport.is_set || is_set(protosupport.yfilter)) leaf_name_data.push_back(protosupport.get_name_leafdata());
    if (portcap.is_set || is_set(portcap.yfilter)) leaf_name_data.push_back(portcap.get_name_leafdata());
    if (eeecapval.is_set || is_set(eeecapval.yfilter)) leaf_name_data.push_back(eeecapval.get_name_leafdata());
    if (eeewaketimes10g.is_set || is_set(eeewaketimes10g.yfilter)) leaf_name_data.push_back(eeewaketimes10g.get_name_leafdata());
    if (eeeflapflags.is_set || is_set(eeeflapflags.yfilter)) leaf_name_data.push_back(eeeflapflags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "trunkEncap")
    {
        trunkencap = value;
        trunkencap.value_namespace = name_space;
        trunkencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression")
    {
        suppression = value;
        suppression.value_namespace = name_space;
        suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxFlowControl")
    {
        rxflowcontrol = value;
        rxflowcontrol.value_namespace = name_space;
        rxflowcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txFlowControl")
    {
        txflowcontrol = value;
        txflowcontrol.value_namespace = name_space;
        txflowcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cosRewrite")
    {
        cosrewrite = value;
        cosrewrite.value_namespace = name_space;
        cosrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tosRewrite")
    {
        tosrewrite = value;
        tosrewrite.value_namespace = name_space;
        tosrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span")
    {
        span = value;
        span.value_namespace = name_space;
        span.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udld")
    {
        udld = value;
        udld.value_namespace = name_space;
        udld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoneg")
    {
        autoneg = value;
        autoneg.value_namespace = name_space;
        autoneg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkDebounce")
    {
        linkdebounce = value;
        linkdebounce.value_namespace = name_space;
        linkdebounce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkDebounceTime")
    {
        linkdebouncetime = value;
        linkdebouncetime.value_namespace = name_space;
        linkdebouncetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotCapable")
    {
        fcotcapable = value;
        fcotcapable.value_namespace = name_space;
        fcotcapable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateMode")
    {
        ratemode = value;
        ratemode.value_namespace = name_space;
        ratemode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdix")
    {
        mdix = value;
        mdix.value_namespace = name_space;
        mdix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portGroup")
    {
        portgroup = value;
        portgroup.value_namespace = name_space;
        portgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctsCapable")
    {
        ctscapable = value;
        ctscapable.value_namespace = name_space;
        ctscapable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosRxPrio")
    {
        qosrxprio = value;
        qosrxprio.value_namespace = name_space;
        qosrxprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosRxQueue")
    {
        qosrxqueue = value;
        qosrxqueue.value_namespace = name_space;
        qosrxqueue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosRxThold")
    {
        qosrxthold = value;
        qosrxthold.value_namespace = name_space;
        qosrxthold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosTxPrio")
    {
        qostxprio = value;
        qostxprio.value_namespace = name_space;
        qostxprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosTxQueue")
    {
        qostxqueue = value;
        qostxqueue.value_namespace = name_space;
        qostxqueue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosTxThold")
    {
        qostxthold = value;
        qostxthold.value_namespace = name_space;
        qostxthold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portGrpMbrs")
    {
        portgrpmbrs = value;
        portgrpmbrs.value_namespace = name_space;
        portgrpmbrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protoSupport")
    {
        protosupport = value;
        protosupport.value_namespace = name_space;
        protosupport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portCap")
    {
        portcap = value;
        portcap.value_namespace = name_space;
        portcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeCapVal")
    {
        eeecapval = value;
        eeecapval.value_namespace = name_space;
        eeecapval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeWakeTimes10g")
    {
        eeewaketimes10g = value;
        eeewaketimes10g.value_namespace = name_space;
        eeewaketimes10g.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeFlapFlags")
    {
        eeeflapflags = value;
        eeeflapflags.value_namespace = name_space;
        eeeflapflags.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "trunkEncap")
    {
        trunkencap.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
    if(value_path == "suppression")
    {
        suppression.yfilter = yfilter;
    }
    if(value_path == "rxFlowControl")
    {
        rxflowcontrol.yfilter = yfilter;
    }
    if(value_path == "txFlowControl")
    {
        txflowcontrol.yfilter = yfilter;
    }
    if(value_path == "cosRewrite")
    {
        cosrewrite.yfilter = yfilter;
    }
    if(value_path == "tosRewrite")
    {
        tosrewrite.yfilter = yfilter;
    }
    if(value_path == "span")
    {
        span.yfilter = yfilter;
    }
    if(value_path == "udld")
    {
        udld.yfilter = yfilter;
    }
    if(value_path == "autoneg")
    {
        autoneg.yfilter = yfilter;
    }
    if(value_path == "linkDebounce")
    {
        linkdebounce.yfilter = yfilter;
    }
    if(value_path == "linkDebounceTime")
    {
        linkdebouncetime.yfilter = yfilter;
    }
    if(value_path == "fcotCapable")
    {
        fcotcapable.yfilter = yfilter;
    }
    if(value_path == "rateMode")
    {
        ratemode.yfilter = yfilter;
    }
    if(value_path == "mdix")
    {
        mdix.yfilter = yfilter;
    }
    if(value_path == "portGroup")
    {
        portgroup.yfilter = yfilter;
    }
    if(value_path == "ctsCapable")
    {
        ctscapable.yfilter = yfilter;
    }
    if(value_path == "qosRxPrio")
    {
        qosrxprio.yfilter = yfilter;
    }
    if(value_path == "qosRxQueue")
    {
        qosrxqueue.yfilter = yfilter;
    }
    if(value_path == "qosRxThold")
    {
        qosrxthold.yfilter = yfilter;
    }
    if(value_path == "qosTxPrio")
    {
        qostxprio.yfilter = yfilter;
    }
    if(value_path == "qosTxQueue")
    {
        qostxqueue.yfilter = yfilter;
    }
    if(value_path == "qosTxThold")
    {
        qostxthold.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "portGrpMbrs")
    {
        portgrpmbrs.yfilter = yfilter;
    }
    if(value_path == "protoSupport")
    {
        protosupport.yfilter = yfilter;
    }
    if(value_path == "portCap")
    {
        portcap.yfilter = yfilter;
    }
    if(value_path == "eeeCapVal")
    {
        eeecapval.yfilter = yfilter;
    }
    if(value_path == "eeeWakeTimes10g")
    {
        eeewaketimes10g.yfilter = yfilter;
    }
    if(value_path == "eeeFlapFlags")
    {
        eeeflapflags.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "speed" || name == "duplex" || name == "trunkEncap" || name == "channel" || name == "suppression" || name == "rxFlowControl" || name == "txFlowControl" || name == "cosRewrite" || name == "tosRewrite" || name == "span" || name == "udld" || name == "autoneg" || name == "linkDebounce" || name == "linkDebounceTime" || name == "fcotCapable" || name == "rateMode" || name == "mdix" || name == "portGroup" || name == "ctsCapable" || name == "qosRxPrio" || name == "qosRxQueue" || name == "qosRxThold" || name == "qosTxPrio" || name == "qosTxQueue" || name == "qosTxThold" || name == "model" || name == "type" || name == "portGrpMbrs" || name == "protoSupport" || name == "portCap" || name == "eeeCapVal" || name == "eeeWakeTimes10g" || name == "eeeFlapFlags")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::HwifdetailsItems()
    :
    slice{YType::uint32, "slice"},
    sport{YType::uint32, "sPort"},
    vif{YType::uint32, "vif"}
{

    yang_name = "hwifdetails-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::~HwifdetailsItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::has_data() const
{
    if (is_presence_container) return true;
    return slice.is_set
	|| sport.is_set
	|| vif.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slice.yfilter)
	|| ydk::is_set(sport.yfilter)
	|| ydk::is_set(vif.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hwifdetails-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice.is_set || is_set(slice.yfilter)) leaf_name_data.push_back(slice.get_name_leafdata());
    if (sport.is_set || is_set(sport.yfilter)) leaf_name_data.push_back(sport.get_name_leafdata());
    if (vif.is_set || is_set(vif.yfilter)) leaf_name_data.push_back(vif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slice")
    {
        slice = value;
        slice.value_namespace = name_space;
        slice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sPort")
    {
        sport = value;
        sport.value_namespace = name_space;
        sport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vif")
    {
        vif = value;
        vif.value_namespace = name_space;
        vif.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slice")
    {
        slice.yfilter = yfilter;
    }
    if(value_path == "sPort")
    {
        sport.yfilter = yfilter;
    }
    if(value_path == "vif")
    {
        vif.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice" || name == "sPort" || name == "vif")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::BundleInfoItems()
    :
    opertype{YType::enumeration, "operType"},
    operprotocol{YType::enumeration, "operProtocol"}
{

    yang_name = "bundleInfo-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::~BundleInfoItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::has_data() const
{
    if (is_presence_container) return true;
    return opertype.is_set
	|| operprotocol.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opertype.yfilter)
	|| ydk::is_set(operprotocol.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundleInfo-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opertype.is_set || is_set(opertype.yfilter)) leaf_name_data.push_back(opertype.get_name_leafdata());
    if (operprotocol.is_set || is_set(operprotocol.yfilter)) leaf_name_data.push_back(operprotocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operType")
    {
        opertype = value;
        opertype.value_namespace = name_space;
        opertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operProtocol")
    {
        operprotocol = value;
        operprotocol.value_namespace = name_space;
        operprotocol.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operType")
    {
        opertype.yfilter = yfilter;
    }
    if(value_path == "operProtocol")
    {
        operprotocol.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operType" || name == "operProtocol")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::AggrExtdItems()
    :
    potype{YType::enumeration, "poType"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    id{YType::str, "id"},
    porttypefabric{YType::enumeration, "portTypeFabric"},
    routermacipv6extract{YType::enumeration, "routerMacIpv6Extract"},
    switchportblock{YType::str, "switchportBlock"},
    switchportisolated{YType::enumeration, "switchportIsolated"},
    switchportmaclearn{YType::enumeration, "switchportMacLearn"},
    flowctrl{YType::str, "flowCtrl"},
    stormctrlbcastlevel{YType::str, "stormCtrlBCastLevel"},
    stormctrlbcastpps{YType::uint32, "stormCtrlBCastPPS"},
    stormctrlmcastlevel{YType::str, "stormCtrlMCastLevel"},
    stormctrlmcastpps{YType::uint32, "stormCtrlMCastPPS"},
    stormctrlucastlevel{YType::str, "stormCtrlUCastLevel"},
    stormctrlucastpps{YType::uint32, "stormCtrlUCastPPS"},
    stormctrlact{YType::str, "stormCtrlAct"},
    bufferboost{YType::enumeration, "bufferBoost"},
    switchportvirtualethernetbridge{YType::enumeration, "switchportVirtualEthernetBridge"},
    allowmultitag{YType::enumeration, "allowMultiTag"}
        ,
    rtvrfmbr_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "aggrExtd-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::~AggrExtdItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::has_data() const
{
    if (is_presence_container) return true;
    return potype.is_set
	|| name.is_set
	|| descr.is_set
	|| id.is_set
	|| porttypefabric.is_set
	|| routermacipv6extract.is_set
	|| switchportblock.is_set
	|| switchportisolated.is_set
	|| switchportmaclearn.is_set
	|| flowctrl.is_set
	|| stormctrlbcastlevel.is_set
	|| stormctrlbcastpps.is_set
	|| stormctrlmcastlevel.is_set
	|| stormctrlmcastpps.is_set
	|| stormctrlucastlevel.is_set
	|| stormctrlucastpps.is_set
	|| stormctrlact.is_set
	|| bufferboost.is_set
	|| switchportvirtualethernetbridge.is_set
	|| allowmultitag.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(potype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(porttypefabric.yfilter)
	|| ydk::is_set(routermacipv6extract.yfilter)
	|| ydk::is_set(switchportblock.yfilter)
	|| ydk::is_set(switchportisolated.yfilter)
	|| ydk::is_set(switchportmaclearn.yfilter)
	|| ydk::is_set(flowctrl.yfilter)
	|| ydk::is_set(stormctrlbcastlevel.yfilter)
	|| ydk::is_set(stormctrlbcastpps.yfilter)
	|| ydk::is_set(stormctrlmcastlevel.yfilter)
	|| ydk::is_set(stormctrlmcastpps.yfilter)
	|| ydk::is_set(stormctrlucastlevel.yfilter)
	|| ydk::is_set(stormctrlucastpps.yfilter)
	|| ydk::is_set(stormctrlact.yfilter)
	|| ydk::is_set(bufferboost.yfilter)
	|| ydk::is_set(switchportvirtualethernetbridge.yfilter)
	|| ydk::is_set(allowmultitag.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggrExtd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (potype.is_set || is_set(potype.yfilter)) leaf_name_data.push_back(potype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (porttypefabric.is_set || is_set(porttypefabric.yfilter)) leaf_name_data.push_back(porttypefabric.get_name_leafdata());
    if (routermacipv6extract.is_set || is_set(routermacipv6extract.yfilter)) leaf_name_data.push_back(routermacipv6extract.get_name_leafdata());
    if (switchportblock.is_set || is_set(switchportblock.yfilter)) leaf_name_data.push_back(switchportblock.get_name_leafdata());
    if (switchportisolated.is_set || is_set(switchportisolated.yfilter)) leaf_name_data.push_back(switchportisolated.get_name_leafdata());
    if (switchportmaclearn.is_set || is_set(switchportmaclearn.yfilter)) leaf_name_data.push_back(switchportmaclearn.get_name_leafdata());
    if (flowctrl.is_set || is_set(flowctrl.yfilter)) leaf_name_data.push_back(flowctrl.get_name_leafdata());
    if (stormctrlbcastlevel.is_set || is_set(stormctrlbcastlevel.yfilter)) leaf_name_data.push_back(stormctrlbcastlevel.get_name_leafdata());
    if (stormctrlbcastpps.is_set || is_set(stormctrlbcastpps.yfilter)) leaf_name_data.push_back(stormctrlbcastpps.get_name_leafdata());
    if (stormctrlmcastlevel.is_set || is_set(stormctrlmcastlevel.yfilter)) leaf_name_data.push_back(stormctrlmcastlevel.get_name_leafdata());
    if (stormctrlmcastpps.is_set || is_set(stormctrlmcastpps.yfilter)) leaf_name_data.push_back(stormctrlmcastpps.get_name_leafdata());
    if (stormctrlucastlevel.is_set || is_set(stormctrlucastlevel.yfilter)) leaf_name_data.push_back(stormctrlucastlevel.get_name_leafdata());
    if (stormctrlucastpps.is_set || is_set(stormctrlucastpps.yfilter)) leaf_name_data.push_back(stormctrlucastpps.get_name_leafdata());
    if (stormctrlact.is_set || is_set(stormctrlact.yfilter)) leaf_name_data.push_back(stormctrlact.get_name_leafdata());
    if (bufferboost.is_set || is_set(bufferboost.yfilter)) leaf_name_data.push_back(bufferboost.get_name_leafdata());
    if (switchportvirtualethernetbridge.is_set || is_set(switchportvirtualethernetbridge.yfilter)) leaf_name_data.push_back(switchportvirtualethernetbridge.get_name_leafdata());
    if (allowmultitag.is_set || is_set(allowmultitag.yfilter)) leaf_name_data.push_back(allowmultitag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::get_children() const
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

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "poType")
    {
        potype = value;
        potype.value_namespace = name_space;
        potype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portTypeFabric")
    {
        porttypefabric = value;
        porttypefabric.value_namespace = name_space;
        porttypefabric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routerMacIpv6Extract")
    {
        routermacipv6extract = value;
        routermacipv6extract.value_namespace = name_space;
        routermacipv6extract.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchportBlock")
    {
        switchportblock = value;
        switchportblock.value_namespace = name_space;
        switchportblock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchportIsolated")
    {
        switchportisolated = value;
        switchportisolated.value_namespace = name_space;
        switchportisolated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchportMacLearn")
    {
        switchportmaclearn = value;
        switchportmaclearn.value_namespace = name_space;
        switchportmaclearn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowCtrl")
    {
        flowctrl = value;
        flowctrl.value_namespace = name_space;
        flowctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlBCastLevel")
    {
        stormctrlbcastlevel = value;
        stormctrlbcastlevel.value_namespace = name_space;
        stormctrlbcastlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlBCastPPS")
    {
        stormctrlbcastpps = value;
        stormctrlbcastpps.value_namespace = name_space;
        stormctrlbcastpps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlMCastLevel")
    {
        stormctrlmcastlevel = value;
        stormctrlmcastlevel.value_namespace = name_space;
        stormctrlmcastlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlMCastPPS")
    {
        stormctrlmcastpps = value;
        stormctrlmcastpps.value_namespace = name_space;
        stormctrlmcastpps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlUCastLevel")
    {
        stormctrlucastlevel = value;
        stormctrlucastlevel.value_namespace = name_space;
        stormctrlucastlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlUCastPPS")
    {
        stormctrlucastpps = value;
        stormctrlucastpps.value_namespace = name_space;
        stormctrlucastpps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlAct")
    {
        stormctrlact = value;
        stormctrlact.value_namespace = name_space;
        stormctrlact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferBoost")
    {
        bufferboost = value;
        bufferboost.value_namespace = name_space;
        bufferboost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchportVirtualEthernetBridge")
    {
        switchportvirtualethernetbridge = value;
        switchportvirtualethernetbridge.value_namespace = name_space;
        switchportvirtualethernetbridge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowMultiTag")
    {
        allowmultitag = value;
        allowmultitag.value_namespace = name_space;
        allowmultitag.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "poType")
    {
        potype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "portTypeFabric")
    {
        porttypefabric.yfilter = yfilter;
    }
    if(value_path == "routerMacIpv6Extract")
    {
        routermacipv6extract.yfilter = yfilter;
    }
    if(value_path == "switchportBlock")
    {
        switchportblock.yfilter = yfilter;
    }
    if(value_path == "switchportIsolated")
    {
        switchportisolated.yfilter = yfilter;
    }
    if(value_path == "switchportMacLearn")
    {
        switchportmaclearn.yfilter = yfilter;
    }
    if(value_path == "flowCtrl")
    {
        flowctrl.yfilter = yfilter;
    }
    if(value_path == "stormCtrlBCastLevel")
    {
        stormctrlbcastlevel.yfilter = yfilter;
    }
    if(value_path == "stormCtrlBCastPPS")
    {
        stormctrlbcastpps.yfilter = yfilter;
    }
    if(value_path == "stormCtrlMCastLevel")
    {
        stormctrlmcastlevel.yfilter = yfilter;
    }
    if(value_path == "stormCtrlMCastPPS")
    {
        stormctrlmcastpps.yfilter = yfilter;
    }
    if(value_path == "stormCtrlUCastLevel")
    {
        stormctrlucastlevel.yfilter = yfilter;
    }
    if(value_path == "stormCtrlUCastPPS")
    {
        stormctrlucastpps.yfilter = yfilter;
    }
    if(value_path == "stormCtrlAct")
    {
        stormctrlact.yfilter = yfilter;
    }
    if(value_path == "bufferBoost")
    {
        bufferboost.yfilter = yfilter;
    }
    if(value_path == "switchportVirtualEthernetBridge")
    {
        switchportvirtualethernetbridge.yfilter = yfilter;
    }
    if(value_path == "allowMultiTag")
    {
        allowmultitag.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "poType" || name == "name" || name == "descr" || name == "id" || name == "portTypeFabric" || name == "routerMacIpv6Extract" || name == "switchportBlock" || name == "switchportIsolated" || name == "switchportMacLearn" || name == "flowCtrl" || name == "stormCtrlBCastLevel" || name == "stormCtrlBCastPPS" || name == "stormCtrlMCastLevel" || name == "stormCtrlMCastPPS" || name == "stormCtrlUCastLevel" || name == "stormCtrlUCastPPS" || name == "stormCtrlAct" || name == "bufferBoost" || name == "switchportVirtualEthernetBridge" || name == "allowMultiTag")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "aggrExtd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "aggrExtd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::get_children() const
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

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlanmappingItems()
    :
    enabled{YType::boolean, "Enabled"}
        ,
    vlantranslatetable_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems>())
{
    vlantranslatetable_items->parent = this;

    yang_name = "vlanmapping-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::~VlanmappingItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| (vlantranslatetable_items !=  nullptr && vlantranslatetable_items->has_data());
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (vlantranslatetable_items !=  nullptr && vlantranslatetable_items->has_operation());
}

std::string System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanmapping-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlantranslatetable-items")
    {
        if(vlantranslatetable_items == nullptr)
        {
            vlantranslatetable_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems>();
        }
        return vlantranslatetable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlantranslatetable_items != nullptr)
    {
        _children["vlantranslatetable-items"] = vlantranslatetable_items;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlantranslatetable-items" || name == "Enabled")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlantranslatetableItems()
    :
    vlan_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems>())
{
    vlan_items->parent = this;

    yang_name = "vlantranslatetable-items"; yang_parent_name = "vlanmapping-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::~VlantranslatetableItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlantranslatetable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanItems()
    :
    vlantranslateentry_list(this, {"vlanid"})
{

    yang_name = "vlan-items"; yang_parent_name = "vlantranslatetable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::~VlanItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlantranslateentry_list.len(); index++)
    {
        if(vlantranslateentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<vlantranslateentry_list.len(); index++)
    {
        if(vlantranslateentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanTranslateEntry-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList>();
        ent_->parent = this;
        vlantranslateentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlantranslateentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanTranslateEntry-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::VlanTranslateEntryList()
    :
    vlanid{YType::str, "vlanid"},
    innervlanid{YType::str, "innervlanid"},
    translatevlanid{YType::str, "translatevlanid"}
{

    yang_name = "VlanTranslateEntry-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::~VlanTranslateEntryList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| innervlanid.is_set
	|| translatevlanid.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(innervlanid.yfilter)
	|| ydk::is_set(translatevlanid.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanTranslateEntry-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (innervlanid.is_set || is_set(innervlanid.yfilter)) leaf_name_data.push_back(innervlanid.get_name_leafdata());
    if (translatevlanid.is_set || is_set(translatevlanid.yfilter)) leaf_name_data.push_back(translatevlanid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "innervlanid")
    {
        innervlanid = value;
        innervlanid.value_namespace = name_space;
        innervlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "translatevlanid")
    {
        translatevlanid = value;
        translatevlanid.value_namespace = name_space;
        translatevlanid.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "innervlanid")
    {
        innervlanid.yfilter = yfilter;
    }
    if(value_path == "translatevlanid")
    {
        translatevlanid.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "innervlanid" || name == "translatevlanid")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlmbrifItems()
    :
    bndlmbrif_list(this, {"id"})
{

    yang_name = "bndlmbrif-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::~BndlmbrifItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bndlmbrif_list.len(); index++)
    {
        if(bndlmbrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::has_operation() const
{
    for (std::size_t index=0; index<bndlmbrif_list.len(); index++)
    {
        if(bndlmbrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bndlmbrif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BndlMbrIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList>();
        ent_->parent = this;
        bndlmbrif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bndlmbrif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BndlMbrIf-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::BndlMbrIfList()
    :
    id{YType::str, "id"}
{

    yang_name = "BndlMbrIf-list"; yang_parent_name = "bndlmbrif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::~BndlMbrIfList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BndlMbrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::MultisiteiftrackingItems()
    :
    tracking{YType::enumeration, "tracking"}
{

    yang_name = "multisiteiftracking-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::~MultisiteiftrackingItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::has_data() const
{
    if (is_presence_container) return true;
    return tracking.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracking.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multisiteiftracking-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracking.is_set || is_set(tracking.yfilter)) leaf_name_data.push_back(tracking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracking")
    {
        tracking = value;
        tracking.value_namespace = name_space;
        tracking.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracking")
    {
        tracking.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracking")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomItems()
    :
    domdef_list(this, {"dompkey"})
{

    yang_name = "dom-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DomItems::~DomItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domdef_list.len(); index++)
    {
        if(domdef_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::has_operation() const
{
    for (std::size_t index=0; index<domdef_list.len(); index++)
    {
        if(domdef_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomDef-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList>();
        ent_->parent = this;
        domdef_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domdef_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomDef-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::DomDefList()
    :
    dompkey{YType::str, "domPKey"},
    instrimedcy{YType::enumeration, "instrImedcy"},
    name{YType::str, "name"}
        ,
    rsdomdefns_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems>())
    , rsdomdefnslocal_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems>())
    , rtfvtodomdef_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems>())
{
    rsdomdefns_items->parent = this;
    rsdomdefnslocal_items->parent = this;
    rtfvtodomdef_items->parent = this;

    yang_name = "DomDef-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::~DomDefList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::has_data() const
{
    if (is_presence_container) return true;
    return dompkey.is_set
	|| instrimedcy.is_set
	|| name.is_set
	|| (rsdomdefns_items !=  nullptr && rsdomdefns_items->has_data())
	|| (rsdomdefnslocal_items !=  nullptr && rsdomdefnslocal_items->has_data())
	|| (rtfvtodomdef_items !=  nullptr && rtfvtodomdef_items->has_data());
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dompkey.yfilter)
	|| ydk::is_set(instrimedcy.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rsdomdefns_items !=  nullptr && rsdomdefns_items->has_operation())
	|| (rsdomdefnslocal_items !=  nullptr && rsdomdefnslocal_items->has_operation())
	|| (rtfvtodomdef_items !=  nullptr && rtfvtodomdef_items->has_operation());
}

std::string System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomDef-list";
    ADD_KEY_TOKEN(dompkey, "domPKey");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dompkey.is_set || is_set(dompkey.yfilter)) leaf_name_data.push_back(dompkey.get_name_leafdata());
    if (instrimedcy.is_set || is_set(instrimedcy.yfilter)) leaf_name_data.push_back(instrimedcy.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsdomDefNs-items")
    {
        if(rsdomdefns_items == nullptr)
        {
            rsdomdefns_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems>();
        }
        return rsdomdefns_items;
    }

    if(child_yang_name == "rsdomDefNsLocal-items")
    {
        if(rsdomdefnslocal_items == nullptr)
        {
            rsdomdefnslocal_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems>();
        }
        return rsdomdefnslocal_items;
    }

    if(child_yang_name == "rtfvToDomDef-items")
    {
        if(rtfvtodomdef_items == nullptr)
        {
            rtfvtodomdef_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems>();
        }
        return rtfvtodomdef_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsdomdefns_items != nullptr)
    {
        _children["rsdomDefNs-items"] = rsdomdefns_items;
    }

    if(rsdomdefnslocal_items != nullptr)
    {
        _children["rsdomDefNsLocal-items"] = rsdomdefnslocal_items;
    }

    if(rtfvtodomdef_items != nullptr)
    {
        _children["rtfvToDomDef-items"] = rtfvtodomdef_items;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domPKey")
    {
        dompkey = value;
        dompkey.value_namespace = name_space;
        dompkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instrImedcy")
    {
        instrimedcy = value;
        instrimedcy.value_namespace = name_space;
        instrimedcy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domPKey")
    {
        dompkey.yfilter = yfilter;
    }
    if(value_path == "instrImedcy")
    {
        instrimedcy.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsdomDefNs-items" || name == "rsdomDefNsLocal-items" || name == "rtfvToDomDef-items" || name == "domPKey" || name == "instrImedcy" || name == "name")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::RsdomDefNsItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rsdomDefNs-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::~RsdomDefNsItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdomDefNs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::RsdomDefNsLocalItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rsdomDefNsLocal-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::~RsdomDefNsLocalItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdomDefNsLocal-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtfvToDomDefItems()
    :
    rtfvtodomdef_list(this, {"tdn"})
{

    yang_name = "rtfvToDomDef-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::~RtfvToDomDefItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvtodomdef_list.len(); index++)
    {
        if(rtfvtodomdef_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvtodomdef_list.len(); index++)
    {
        if(rtfvtodomdef_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvToDomDef-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvToDomDef-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList>();
        ent_->parent = this;
        rtfvtodomdef_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvtodomdef_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvToDomDef-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::RtFvToDomDefList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvToDomDef-list"; yang_parent_name = "rtfvToDomDef-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::~RtFvToDomDefList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvToDomDef-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::RtfexBndlGrpToAggrIfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtfexBndlGrpToAggrIf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::~RtfexBndlGrpToAggrIfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfexBndlGrpToAggrIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::RtaccBndlGrpToAggrIfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtaccBndlGrpToAggrIf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::~RtaccBndlGrpToAggrIfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtaccBndlGrpToAggrIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtextConfItems::RtextConfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtextConf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtextConfItems::~RtextConfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtextConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtextConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtextConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtextConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtextConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtextConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtextConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtextConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::RtextConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::RtextConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::RtbrConfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtbrConf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::~RtbrConfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtbrConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::RtvpcConfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvpcConf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::~RtvpcConfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvpcConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtfvNodePortAttItems()
    :
    rtfvnodeportatt_list(this, {"tdn"})
{

    yang_name = "rtfvNodePortAtt-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::~RtfvNodePortAttItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvnodeportatt_list.len(); index++)
    {
        if(rtfvnodeportatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvnodeportatt_list.len(); index++)
    {
        if(rtfvnodeportatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvNodePortAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvNodePortAtt-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList>();
        ent_->parent = this;
        rtfvnodeportatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvnodeportatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvNodePortAtt-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::RtFvNodePortAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvNodePortAtt-list"; yang_parent_name = "rtfvNodePortAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::~RtFvNodePortAttList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvNodePortAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsmbrIfsItems()
    :
    rsmbrifs_list(this, {"tdn"})
{

    yang_name = "rsmbrIfs-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::~RsmbrIfsItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmbrifs_list.len(); index++)
    {
        if(rsmbrifs_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::has_operation() const
{
    for (std::size_t index=0; index<rsmbrifs_list.len(); index++)
    {
        if(rsmbrifs_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmbrIfs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMbrIfs-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList>();
        ent_->parent = this;
        rsmbrifs_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmbrifs_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMbrIfs-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::RsMbrIfsList()
    :
    tdn{YType::str, "tDn"},
    ismbrforce{YType::boolean, "isMbrForce"}
{

    yang_name = "RsMbrIfs-list"; yang_parent_name = "rsmbrIfs-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::~RsMbrIfsList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| ismbrforce.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(ismbrforce.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMbrIfs-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (ismbrforce.is_set || is_set(ismbrforce.yfilter)) leaf_name_data.push_back(ismbrforce.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isMbrForce")
    {
        ismbrforce = value;
        ismbrforce.value_namespace = name_space;
        ismbrforce.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "isMbrForce")
    {
        ismbrforce.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "isMbrForce")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::RslacpPolConsItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rslacpPolCons-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::~RslacpPolConsItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslacpPolCons-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::RtphysRtdConfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtphysRtdConf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::~RtphysRtdConfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtphysRtdConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::Rtl3EncPhysRtdConfItems()
    :
    rtl3encphysrtdconf_list(this, {"tdn"})
{

    yang_name = "rtl3EncPhysRtdConf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::~Rtl3EncPhysRtdConfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtl3encphysrtdconf_list.len(); index++)
    {
        if(rtl3encphysrtdconf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::has_operation() const
{
    for (std::size_t index=0; index<rtl3encphysrtdconf_list.len(); index++)
    {
        if(rtl3encphysrtdconf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtl3EncPhysRtdConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtL3EncPhysRtdConf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList>();
        ent_->parent = this;
        rtl3encphysrtdconf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtl3encphysrtdconf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtL3EncPhysRtdConf-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::RtL3EncPhysRtdConfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtL3EncPhysRtdConf-list"; yang_parent_name = "rtl3EncPhysRtdConf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::~RtL3EncPhysRtdConfList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtL3EncPhysRtdConf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::get_children() const
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

void System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::RtLsNodeToIfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtLsNodeToIf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::~RtLsNodeToIfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtLsNodeToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::DbgIfInItems()
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

    yang_name = "dbgIfIn-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::~DbgIfInItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::has_data() const
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

bool System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::has_operation() const
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

std::string System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "nUcastPkts" || name == "discards" || name == "errors" || name == "unknownProtos" || name == "unknownEtype" || name == "broadcastPkts" || name == "multicastPkts" || name == "noBuffer" || name == "rateInterval" || name == "octetRate" || name == "packetRate")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::DbgIfOutItems()
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

    yang_name = "dbgIfOut-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::~DbgIfOutItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::has_data() const
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

bool System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::has_operation() const
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

std::string System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfOut-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "nUcastPkts" || name == "discards" || name == "errors" || name == "qLen" || name == "broadcastPkts" || name == "multicastPkts" || name == "rateInterval" || name == "octetRate" || name == "packetRate")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::DbgIpInItems()
    :
    receives{YType::uint64, "receives"},
    hdrerrors{YType::uint64, "hdrErrors"},
    forwdatagrams{YType::uint64, "forwDatagrams"},
    discards{YType::uint64, "discards"}
{

    yang_name = "dbgIpIn-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::~DbgIpInItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::has_data() const
{
    if (is_presence_container) return true;
    return receives.is_set
	|| hdrerrors.is_set
	|| forwdatagrams.is_set
	|| discards.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receives.yfilter)
	|| ydk::is_set(hdrerrors.yfilter)
	|| ydk::is_set(forwdatagrams.yfilter)
	|| ydk::is_set(discards.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIpIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receives.is_set || is_set(receives.yfilter)) leaf_name_data.push_back(receives.get_name_leafdata());
    if (hdrerrors.is_set || is_set(hdrerrors.yfilter)) leaf_name_data.push_back(hdrerrors.get_name_leafdata());
    if (forwdatagrams.is_set || is_set(forwdatagrams.yfilter)) leaf_name_data.push_back(forwdatagrams.get_name_leafdata());
    if (discards.is_set || is_set(discards.yfilter)) leaf_name_data.push_back(discards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receives" || name == "hdrErrors" || name == "forwDatagrams" || name == "discards")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::DbgDot1dItems()
    :
    baseportdelayexceededdiscards{YType::uint64, "basePortDelayExceededDiscards"},
    baseportmtuexceededdiscards{YType::uint64, "basePortMtuExceededDiscards"},
    tpportinframes{YType::uint64, "tpPortInFrames"},
    tpportoutframes{YType::uint64, "tpPortOutFrames"},
    portindiscards{YType::uint64, "portInDiscards"}
{

    yang_name = "dbgDot1d-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::~DbgDot1dItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::has_data() const
{
    if (is_presence_container) return true;
    return baseportdelayexceededdiscards.is_set
	|| baseportmtuexceededdiscards.is_set
	|| tpportinframes.is_set
	|| tpportoutframes.is_set
	|| portindiscards.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(baseportdelayexceededdiscards.yfilter)
	|| ydk::is_set(baseportmtuexceededdiscards.yfilter)
	|| ydk::is_set(tpportinframes.yfilter)
	|| ydk::is_set(tpportoutframes.yfilter)
	|| ydk::is_set(portindiscards.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgDot1d-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (baseportdelayexceededdiscards.is_set || is_set(baseportdelayexceededdiscards.yfilter)) leaf_name_data.push_back(baseportdelayexceededdiscards.get_name_leafdata());
    if (baseportmtuexceededdiscards.is_set || is_set(baseportmtuexceededdiscards.yfilter)) leaf_name_data.push_back(baseportmtuexceededdiscards.get_name_leafdata());
    if (tpportinframes.is_set || is_set(tpportinframes.yfilter)) leaf_name_data.push_back(tpportinframes.get_name_leafdata());
    if (tpportoutframes.is_set || is_set(tpportoutframes.yfilter)) leaf_name_data.push_back(tpportoutframes.get_name_leafdata());
    if (portindiscards.is_set || is_set(portindiscards.yfilter)) leaf_name_data.push_back(portindiscards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basePortDelayExceededDiscards" || name == "basePortMtuExceededDiscards" || name == "tpPortInFrames" || name == "tpPortOutFrames" || name == "portInDiscards")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::DbgEtherStatsItems()
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

    yang_name = "dbgEtherStats-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::~DbgEtherStatsItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::has_data() const
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

bool System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::has_operation() const
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

std::string System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgEtherStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropEvents" || name == "multicastPkts" || name == "broadcastPkts" || name == "undersizePkts" || name == "giantPkts" || name == "stormSupressedPkts" || name == "fragments" || name == "pkts64Octets" || name == "pkts65to127Octets" || name == "pkts128to255Octets" || name == "pkts256to511Octets" || name == "pkts512to1023Octets" || name == "pkts1024to1518Octets" || name == "pkts1519to1548Octets" || name == "rxPkts64Octets" || name == "txPkts64Octets" || name == "rxPkts65to127Octets" || name == "txPkts65to127Octets" || name == "rxPkts128to255Octets" || name == "txPkts128to255Octets" || name == "rxPkts256to511Octets" || name == "txPkts256to511Octets" || name == "rxPkts512to1023Octets" || name == "txPkts512to1023Octets" || name == "rxPkts1024to1518Octets" || name == "txPkts1024to1518Octets" || name == "rxPkts1519to1548Octets" || name == "txPkts1519to1548Octets" || name == "oversizePkts" || name == "jabbers" || name == "octets" || name == "pkts" || name == "collisions" || name == "cRCAlignErrors" || name == "tXNoErrors" || name == "rXNoErrors" || name == "rxOversizePkts" || name == "txOversizePkts" || name == "overrun" || name == "underrun" || name == "ignored" || name == "watchdog" || name == "ifdowndrop")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::DbgDot3StatsItems()
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

    yang_name = "dbgDot3Stats-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::~DbgDot3StatsItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::has_data() const
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

bool System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::has_operation() const
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

std::string System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgDot3Stats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alignmentErrors" || name == "fCSErrors" || name == "singleCollisionFrames" || name == "multipleCollisionFrames" || name == "sQETTestErrors" || name == "deferredTransmissions" || name == "lateCollisions" || name == "excessiveCollisions" || name == "internalMacTransmitErrors" || name == "carrierSenseErrors" || name == "frameTooLongs" || name == "internalMacReceiveErrors" || name == "symbolErrors" || name == "controlInUnknownOpcodes" || name == "inPauseFrames" || name == "outPauseFrames" || name == "lostCarrierErrors" || name == "noCarrierErrors" || name == "inputdribble" || name == "babble" || name == "runts")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::DbgIfHCInItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpkts{YType::uint64, "broadcastPkts"}
{

    yang_name = "dbgIfHCIn-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::~DbgIfHCInItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| multicastpkts.is_set
	|| broadcastpkts.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfHCIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "multicastPkts" || name == "broadcastPkts")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::DbgIfHCOutItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpckts{YType::uint64, "broadcastPckts"},
    broadcastpkts{YType::uint64, "broadcastPkts"}
{

    yang_name = "dbgIfHCOut-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::~DbgIfHCOutItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| multicastpkts.is_set
	|| broadcastpckts.is_set
	|| broadcastpkts.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpckts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfHCOut-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpckts.is_set || is_set(broadcastpckts.yfilter)) leaf_name_data.push_back(broadcastpckts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "multicastPkts" || name == "broadcastPckts" || name == "broadcastPkts")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::DbgIpv6IfStatsItems()
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

    yang_name = "dbgIpv6IfStats-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::~DbgIpv6IfStatsItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::has_data() const
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

bool System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::has_operation() const
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

std::string System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIpv6IfStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inReceives" || name == "inHdrErrors" || name == "inAddrErrors" || name == "inDiscards" || name == "outForwDatagrams" || name == "outDiscards" || name == "inMcastPkts" || name == "outMcastPkts")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::DbgIfStormItems()
    :
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgIfStorm-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::~DbgIfStormItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::has_data() const
{
    if (is_presence_container) return true;
    return dropbytes.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfStorm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropBytes")
        return true;
    return false;
}

System::IntfItems::RtdItems::RtdItems()
    :
    rtdif_list(this, {"id"})
{

    yang_name = "rtd-items"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::RtdItems::~RtdItems()
{
}

bool System::IntfItems::RtdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtdif_list.len(); index++)
    {
        if(rtdif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::RtdItems::has_operation() const
{
    for (std::size_t index=0; index<rtdif_list.len(); index++)
    {
        if(rtdif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::RtdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::RtdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::RtdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::RtdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtdIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::RtdItems::RtdIfList>();
        ent_->parent = this;
        rtdif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::RtdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtdif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::RtdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::RtdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::RtdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtdIf-list")
        return true;
    return false;
}

System::IntfItems::RtdItems::RtdIfList::RtdIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtpseudoif_items(std::make_shared<System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems>())
    , rtvrfmbr_items(std::make_shared<System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems>())
    , rsphysrtdconf_items(std::make_shared<System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems>())
{
    rtpseudoif_items->parent = this;
    rtvrfmbr_items->parent = this;
    rsphysrtdconf_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "RtdIf-list"; yang_parent_name = "rtd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::RtdItems::RtdIfList::~RtdIfList()
{
}

bool System::IntfItems::RtdItems::RtdIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rsphysrtdconf_items !=  nullptr && rsphysrtdconf_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IntfItems::RtdItems::RtdIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rsphysrtdconf_items !=  nullptr && rsphysrtdconf_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IntfItems::RtdItems::RtdIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/rtd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::RtdItems::RtdIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtdIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::RtdItems::RtdIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::RtdItems::RtdIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtpseudoIf-items")
    {
        if(rtpseudoif_items == nullptr)
        {
            rtpseudoif_items = std::make_shared<System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems>();
        }
        return rtpseudoif_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rsphysRtdConf-items")
    {
        if(rsphysrtdconf_items == nullptr)
        {
            rsphysrtdconf_items = std::make_shared<System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems>();
        }
        return rsphysrtdconf_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::RtdItems::RtdIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtpseudoif_items != nullptr)
    {
        _children["rtpseudoIf-items"] = rtpseudoif_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rsphysrtdconf_items != nullptr)
    {
        _children["rsphysRtdConf-items"] = rsphysrtdconf_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::IntfItems::RtdItems::RtdIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::RtdItems::RtdIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::RtdItems::RtdIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtpseudoIf-items" || name == "rtvrfMbr-items" || name == "rsphysRtdConf-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::RtpseudoIfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtpseudoIf-items"; yang_parent_name = "RtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::~RtpseudoIfItems()
{
}

bool System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtpseudoIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "RtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::RsphysRtdConfItems()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsphysRtdConf-items"; yang_parent_name = "RtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::~RsphysRtdConfItems()
{
}

bool System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsphysRtdConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "RtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::get_children() const
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

void System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::LbItems::LbItems()
    :
    lbrtdif_list(this, {"id"})
{

    yang_name = "lb-items"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::LbItems::~LbItems()
{
}

bool System::IntfItems::LbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lbrtdif_list.len(); index++)
    {
        if(lbrtdif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::LbItems::has_operation() const
{
    for (std::size_t index=0; index<lbrtdif_list.len(); index++)
    {
        if(lbrtdif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::LbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::LbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LbRtdIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::LbItems::LbRtdIfList>();
        ent_->parent = this;
        lbrtdif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lbrtdif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::LbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::LbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::LbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LbRtdIf-list")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::LbRtdIfList()
    :
    id{YType::str, "id"},
    linklog{YType::enumeration, "linkLog"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    vrf_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::VrfItems>())
    , lbrtdif_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems>())
    , rtpseudoif_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems>())
    , rtopersourceinterface_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems>())
    , rtvrfmbr_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems>())
    , rsprotlbif_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems>())
    , rslbiftolocale_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems>())
    , rslbiftooutref_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems>())
{
    vrf_items->parent = this;
    lbrtdif_items->parent = this;
    rtpseudoif_items->parent = this;
    rtopersourceinterface_items->parent = this;
    rtvrfmbr_items->parent = this;
    rsprotlbif_items->parent = this;
    rslbiftolocale_items->parent = this;
    rslbiftooutref_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "LbRtdIf-list"; yang_parent_name = "lb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::LbItems::LbRtdIfList::~LbRtdIfList()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| linklog.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (vrf_items !=  nullptr && vrf_items->has_data())
	|| (lbrtdif_items !=  nullptr && lbrtdif_items->has_data())
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_data())
	|| (rtopersourceinterface_items !=  nullptr && rtopersourceinterface_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rsprotlbif_items !=  nullptr && rsprotlbif_items->has_data())
	|| (rslbiftolocale_items !=  nullptr && rslbiftolocale_items->has_data())
	|| (rslbiftooutref_items !=  nullptr && rslbiftooutref_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IntfItems::LbItems::LbRtdIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(linklog.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation())
	|| (lbrtdif_items !=  nullptr && lbrtdif_items->has_operation())
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_operation())
	|| (rtopersourceinterface_items !=  nullptr && rtopersourceinterface_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rsprotlbif_items !=  nullptr && rsprotlbif_items->has_operation())
	|| (rslbiftolocale_items !=  nullptr && rslbiftolocale_items->has_operation())
	|| (rslbiftooutref_items !=  nullptr && rslbiftooutref_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IntfItems::LbItems::LbRtdIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/lb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::LbItems::LbRtdIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LbRtdIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (linklog.is_set || is_set(linklog.yfilter)) leaf_name_data.push_back(linklog.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::VrfItems>();
        }
        return vrf_items;
    }

    if(child_yang_name == "lbrtdif-items")
    {
        if(lbrtdif_items == nullptr)
        {
            lbrtdif_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems>();
        }
        return lbrtdif_items;
    }

    if(child_yang_name == "rtpseudoIf-items")
    {
        if(rtpseudoif_items == nullptr)
        {
            rtpseudoif_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems>();
        }
        return rtpseudoif_items;
    }

    if(child_yang_name == "rtoperSourceInterface-items")
    {
        if(rtopersourceinterface_items == nullptr)
        {
            rtopersourceinterface_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems>();
        }
        return rtopersourceinterface_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rsprotLbIf-items")
    {
        if(rsprotlbif_items == nullptr)
        {
            rsprotlbif_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems>();
        }
        return rsprotlbif_items;
    }

    if(child_yang_name == "rslbIfToLocale-items")
    {
        if(rslbiftolocale_items == nullptr)
        {
            rslbiftolocale_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems>();
        }
        return rslbiftolocale_items;
    }

    if(child_yang_name == "rslbIfToOutRef-items")
    {
        if(rslbiftooutref_items == nullptr)
        {
            rslbiftooutref_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems>();
        }
        return rslbiftooutref_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    if(lbrtdif_items != nullptr)
    {
        _children["lbrtdif-items"] = lbrtdif_items;
    }

    if(rtpseudoif_items != nullptr)
    {
        _children["rtpseudoIf-items"] = rtpseudoif_items;
    }

    if(rtopersourceinterface_items != nullptr)
    {
        _children["rtoperSourceInterface-items"] = rtopersourceinterface_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rsprotlbif_items != nullptr)
    {
        _children["rsprotLbIf-items"] = rsprotlbif_items;
    }

    if(rslbiftolocale_items != nullptr)
    {
        _children["rslbIfToLocale-items"] = rslbiftolocale_items;
    }

    if(rslbiftooutref_items != nullptr)
    {
        _children["rslbIfToOutRef-items"] = rslbiftooutref_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::IntfItems::LbItems::LbRtdIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkLog")
    {
        linklog = value;
        linklog.value_namespace = name_space;
        linklog.value_namespace_prefix = name_space_prefix;
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

void System::IntfItems::LbItems::LbRtdIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "linkLog")
    {
        linklog.yfilter = yfilter;
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

bool System::IntfItems::LbItems::LbRtdIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items" || name == "lbrtdif-items" || name == "rtpseudoIf-items" || name == "rtoperSourceInterface-items" || name == "rtvrfMbr-items" || name == "rsprotLbIf-items" || name == "rslbIfToLocale-items" || name == "rslbIfToOutRef-items" || name == "rtnwPathToIf-items" || name == "id" || name == "linkLog" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::VrfItems::VrfItems()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf-items"; yang_parent_name = "LbRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::LbItems::LbRtdIfList::VrfItems::~VrfItems()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::IntfItems::LbItems::LbRtdIfList::VrfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IntfItems::LbItems::LbRtdIfList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::LbItems::LbRtdIfList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::LbItems::LbRtdIfList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IntfItems::LbItems::LbRtdIfList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::LbrtdifItems()
    :
    ifindex{YType::uint32, "ifIndex"},
    iod{YType::uint64, "iod"},
    operst{YType::enumeration, "operSt"},
    opermtu{YType::uint32, "operMtu"},
    operdescr{YType::str, "operDescr"},
    operstqual{YType::enumeration, "operStQual"},
    currerrindex{YType::uint32, "currErrIndex"},
    lasterrors{YType::str, "lastErrors"},
    operbitset{YType::str, "operBitset"}
{

    yang_name = "lbrtdif-items"; yang_parent_name = "LbRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::~LbrtdifItems()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| iod.is_set
	|| operst.is_set
	|| opermtu.is_set
	|| operdescr.is_set
	|| operstqual.is_set
	|| currerrindex.is_set
	|| lasterrors.is_set
	|| operbitset.is_set;
}

bool System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opermtu.yfilter)
	|| ydk::is_set(operdescr.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(currerrindex.yfilter)
	|| ydk::is_set(lasterrors.yfilter)
	|| ydk::is_set(operbitset.yfilter);
}

std::string System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbrtdif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opermtu.is_set || is_set(opermtu.yfilter)) leaf_name_data.push_back(opermtu.get_name_leafdata());
    if (operdescr.is_set || is_set(operdescr.yfilter)) leaf_name_data.push_back(operdescr.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (currerrindex.is_set || is_set(currerrindex.yfilter)) leaf_name_data.push_back(currerrindex.get_name_leafdata());
    if (lasterrors.is_set || is_set(lasterrors.yfilter)) leaf_name_data.push_back(lasterrors.get_name_leafdata());
    if (operbitset.is_set || is_set(operbitset.yfilter)) leaf_name_data.push_back(operbitset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMtu")
    {
        opermtu = value;
        opermtu.value_namespace = name_space;
        opermtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDescr")
    {
        operdescr = value;
        operdescr.value_namespace = name_space;
        operdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currErrIndex")
    {
        currerrindex = value;
        currerrindex.value_namespace = name_space;
        currerrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastErrors")
    {
        lasterrors = value;
        lasterrors.value_namespace = name_space;
        lasterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operBitset")
    {
        operbitset = value;
        operbitset.value_namespace = name_space;
        operbitset.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operMtu")
    {
        opermtu.yfilter = yfilter;
    }
    if(value_path == "operDescr")
    {
        operdescr.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "currErrIndex")
    {
        currerrindex.yfilter = yfilter;
    }
    if(value_path == "lastErrors")
    {
        lasterrors.yfilter = yfilter;
    }
    if(value_path == "operBitset")
    {
        operbitset.yfilter = yfilter;
    }
}

bool System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "iod" || name == "operSt" || name == "operMtu" || name == "operDescr" || name == "operStQual" || name == "currErrIndex" || name == "lastErrors" || name == "operBitset")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems::RtpseudoIfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtpseudoIf-items"; yang_parent_name = "LbRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems::~RtpseudoIfItems()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtpseudoIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems::RtoperSourceInterfaceItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtoperSourceInterface-items"; yang_parent_name = "LbRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems::~RtoperSourceInterfaceItems()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoperSourceInterface-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "LbRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems::RsprotLbIfItems()
    :
    tdn{YType::str, "tDn"},
    mode{YType::str, "mode"}
{

    yang_name = "rsprotLbIf-items"; yang_parent_name = "LbRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems::~RsprotLbIfItems()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| mode.is_set;
}

bool System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsprotLbIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "mode")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RslbIfToLocaleItems()
    :
    rslbiftolocale_list(this, {"tdn"})
{

    yang_name = "rslbIfToLocale-items"; yang_parent_name = "LbRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::~RslbIfToLocaleItems()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslbiftolocale_list.len(); index++)
    {
        if(rslbiftolocale_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::has_operation() const
{
    for (std::size_t index=0; index<rslbiftolocale_list.len(); index++)
    {
        if(rslbiftolocale_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslbIfToLocale-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsLbIfToLocale-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RsLbIfToLocaleList>();
        ent_->parent = this;
        rslbiftolocale_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslbiftolocale_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsLbIfToLocale-list")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RsLbIfToLocaleList::RsLbIfToLocaleList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsLbIfToLocale-list"; yang_parent_name = "rslbIfToLocale-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RsLbIfToLocaleList::~RsLbIfToLocaleList()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RsLbIfToLocaleList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RsLbIfToLocaleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RsLbIfToLocaleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsLbIfToLocale-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RsLbIfToLocaleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RsLbIfToLocaleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RsLbIfToLocaleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RsLbIfToLocaleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RsLbIfToLocaleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems::RsLbIfToLocaleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RslbIfToOutRefItems()
    :
    rslbiftooutref_list(this, {"tdn"})
{

    yang_name = "rslbIfToOutRef-items"; yang_parent_name = "LbRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::~RslbIfToOutRefItems()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslbiftooutref_list.len(); index++)
    {
        if(rslbiftooutref_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::has_operation() const
{
    for (std::size_t index=0; index<rslbiftooutref_list.len(); index++)
    {
        if(rslbiftooutref_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslbIfToOutRef-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsLbIfToOutRef-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RsLbIfToOutRefList>();
        ent_->parent = this;
        rslbiftooutref_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslbiftooutref_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsLbIfToOutRef-list")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RsLbIfToOutRefList::RsLbIfToOutRefList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsLbIfToOutRef-list"; yang_parent_name = "rslbIfToOutRef-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RsLbIfToOutRefList::~RsLbIfToOutRefList()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RsLbIfToOutRefList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RsLbIfToOutRefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RsLbIfToOutRefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsLbIfToOutRef-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RsLbIfToOutRefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RsLbIfToOutRefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RsLbIfToOutRefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RsLbIfToOutRefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RsLbIfToOutRefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems::RsLbIfToOutRefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "LbRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::get_children() const
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

void System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::EncrtdItems::EncrtdItems()
    :
    encrtdif_list(this, {"id"})
{

    yang_name = "encrtd-items"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::EncrtdItems::~EncrtdItems()
{
}

bool System::IntfItems::EncrtdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<encrtdif_list.len(); index++)
    {
        if(encrtdif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::EncrtdItems::has_operation() const
{
    for (std::size_t index=0; index<encrtdif_list.len(); index++)
    {
        if(encrtdif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::EncrtdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::EncrtdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrtd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::EncrtdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::EncrtdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EncRtdIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::EncrtdItems::EncRtdIfList>();
        ent_->parent = this;
        encrtdif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::EncrtdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : encrtdif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::EncrtdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::EncrtdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::EncrtdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EncRtdIf-list")
        return true;
    return false;
}

System::IntfItems::EncrtdItems::EncRtdIfList::EncRtdIfList()
    :
    id{YType::str, "id"},
    mtu{YType::uint32, "mtu"},
    mtuinherit{YType::boolean, "mtuInherit"},
    delay{YType::uint32, "delay"},
    encap{YType::str, "encap"},
    bw{YType::uint32, "bw"},
    linklogen{YType::enumeration, "linkLogEn"},
    routermac{YType::str, "routerMac"},
    ifconndn{YType::str, "ifConnDn"},
    mediumtype{YType::enumeration, "mediumType"},
    routermacipv6extract{YType::enumeration, "routerMacIpv6Extract"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    vrf_items(std::make_shared<System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems>())
    , encrtdif_items(std::make_shared<System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems>())
    , rtpseudoif_items(std::make_shared<System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems>())
    , rtvrfmbr_items(std::make_shared<System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems>())
    , rsencphysrtdconf_items(std::make_shared<System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems>())
{
    vrf_items->parent = this;
    encrtdif_items->parent = this;
    rtpseudoif_items->parent = this;
    rtvrfmbr_items->parent = this;
    rsencphysrtdconf_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "EncRtdIf-list"; yang_parent_name = "encrtd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::EncrtdItems::EncRtdIfList::~EncRtdIfList()
{
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| mtu.is_set
	|| mtuinherit.is_set
	|| delay.is_set
	|| encap.is_set
	|| bw.is_set
	|| linklogen.is_set
	|| routermac.is_set
	|| ifconndn.is_set
	|| mediumtype.is_set
	|| routermacipv6extract.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (vrf_items !=  nullptr && vrf_items->has_data())
	|| (encrtdif_items !=  nullptr && encrtdif_items->has_data())
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rsencphysrtdconf_items !=  nullptr && rsencphysrtdconf_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mtuinherit.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(linklogen.yfilter)
	|| ydk::is_set(routermac.yfilter)
	|| ydk::is_set(ifconndn.yfilter)
	|| ydk::is_set(mediumtype.yfilter)
	|| ydk::is_set(routermacipv6extract.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation())
	|| (encrtdif_items !=  nullptr && encrtdif_items->has_operation())
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rsencphysrtdconf_items !=  nullptr && rsencphysrtdconf_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IntfItems::EncrtdItems::EncRtdIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/encrtd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::EncrtdItems::EncRtdIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EncRtdIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::EncrtdItems::EncRtdIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mtuinherit.is_set || is_set(mtuinherit.yfilter)) leaf_name_data.push_back(mtuinherit.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (linklogen.is_set || is_set(linklogen.yfilter)) leaf_name_data.push_back(linklogen.get_name_leafdata());
    if (routermac.is_set || is_set(routermac.yfilter)) leaf_name_data.push_back(routermac.get_name_leafdata());
    if (ifconndn.is_set || is_set(ifconndn.yfilter)) leaf_name_data.push_back(ifconndn.get_name_leafdata());
    if (mediumtype.is_set || is_set(mediumtype.yfilter)) leaf_name_data.push_back(mediumtype.get_name_leafdata());
    if (routermacipv6extract.is_set || is_set(routermacipv6extract.yfilter)) leaf_name_data.push_back(routermacipv6extract.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::EncrtdItems::EncRtdIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems>();
        }
        return vrf_items;
    }

    if(child_yang_name == "encrtdif-items")
    {
        if(encrtdif_items == nullptr)
        {
            encrtdif_items = std::make_shared<System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems>();
        }
        return encrtdif_items;
    }

    if(child_yang_name == "rtpseudoIf-items")
    {
        if(rtpseudoif_items == nullptr)
        {
            rtpseudoif_items = std::make_shared<System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems>();
        }
        return rtpseudoif_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rsencPhysRtdConf-items")
    {
        if(rsencphysrtdconf_items == nullptr)
        {
            rsencphysrtdconf_items = std::make_shared<System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems>();
        }
        return rsencphysrtdconf_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::EncrtdItems::EncRtdIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    if(encrtdif_items != nullptr)
    {
        _children["encrtdif-items"] = encrtdif_items;
    }

    if(rtpseudoif_items != nullptr)
    {
        _children["rtpseudoIf-items"] = rtpseudoif_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rsencphysrtdconf_items != nullptr)
    {
        _children["rsencPhysRtdConf-items"] = rsencphysrtdconf_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::IntfItems::EncrtdItems::EncRtdIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtuInherit")
    {
        mtuinherit = value;
        mtuinherit.value_namespace = name_space;
        mtuinherit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkLogEn")
    {
        linklogen = value;
        linklogen.value_namespace = name_space;
        linklogen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routerMac")
    {
        routermac = value;
        routermac.value_namespace = name_space;
        routermac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifConnDn")
    {
        ifconndn = value;
        ifconndn.value_namespace = name_space;
        ifconndn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mediumType")
    {
        mediumtype = value;
        mediumtype.value_namespace = name_space;
        mediumtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routerMacIpv6Extract")
    {
        routermacipv6extract = value;
        routermacipv6extract.value_namespace = name_space;
        routermacipv6extract.value_namespace_prefix = name_space_prefix;
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

void System::IntfItems::EncrtdItems::EncRtdIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "mtuInherit")
    {
        mtuinherit.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "linkLogEn")
    {
        linklogen.yfilter = yfilter;
    }
    if(value_path == "routerMac")
    {
        routermac.yfilter = yfilter;
    }
    if(value_path == "ifConnDn")
    {
        ifconndn.yfilter = yfilter;
    }
    if(value_path == "mediumType")
    {
        mediumtype.yfilter = yfilter;
    }
    if(value_path == "routerMacIpv6Extract")
    {
        routermacipv6extract.yfilter = yfilter;
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

bool System::IntfItems::EncrtdItems::EncRtdIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items" || name == "encrtdif-items" || name == "rtpseudoIf-items" || name == "rtvrfMbr-items" || name == "rsencPhysRtdConf-items" || name == "rtnwPathToIf-items" || name == "id" || name == "mtu" || name == "mtuInherit" || name == "delay" || name == "encap" || name == "bw" || name == "linkLogEn" || name == "routerMac" || name == "ifConnDn" || name == "mediumType" || name == "routerMacIpv6Extract" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems::VrfItems()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf-items"; yang_parent_name = "EncRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems::~VrfItems()
{
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems::EncrtdifItems()
    :
    ifindex{YType::uint32, "ifIndex"},
    operroutermac{YType::str, "operRouterMac"},
    operencap{YType::uint16, "operEncap"},
    operdescr{YType::str, "operDescr"},
    fsmstate{YType::uint8, "fsmState"},
    iod{YType::uint64, "iod"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    opermtu{YType::uint32, "operMtu"},
    currerrindex{YType::uint32, "currErrIndex"},
    lasterrors{YType::str, "lastErrors"},
    operbitset{YType::str, "operBitset"},
    sicfgflags{YType::uint32, "siCfgFlags"}
{

    yang_name = "encrtdif-items"; yang_parent_name = "EncRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems::~EncrtdifItems()
{
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| operroutermac.is_set
	|| operencap.is_set
	|| operdescr.is_set
	|| fsmstate.is_set
	|| iod.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| opermtu.is_set
	|| currerrindex.is_set
	|| lasterrors.is_set
	|| operbitset.is_set
	|| sicfgflags.is_set;
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(operroutermac.yfilter)
	|| ydk::is_set(operencap.yfilter)
	|| ydk::is_set(operdescr.yfilter)
	|| ydk::is_set(fsmstate.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(opermtu.yfilter)
	|| ydk::is_set(currerrindex.yfilter)
	|| ydk::is_set(lasterrors.yfilter)
	|| ydk::is_set(operbitset.yfilter)
	|| ydk::is_set(sicfgflags.yfilter);
}

std::string System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrtdif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (operroutermac.is_set || is_set(operroutermac.yfilter)) leaf_name_data.push_back(operroutermac.get_name_leafdata());
    if (operencap.is_set || is_set(operencap.yfilter)) leaf_name_data.push_back(operencap.get_name_leafdata());
    if (operdescr.is_set || is_set(operdescr.yfilter)) leaf_name_data.push_back(operdescr.get_name_leafdata());
    if (fsmstate.is_set || is_set(fsmstate.yfilter)) leaf_name_data.push_back(fsmstate.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (opermtu.is_set || is_set(opermtu.yfilter)) leaf_name_data.push_back(opermtu.get_name_leafdata());
    if (currerrindex.is_set || is_set(currerrindex.yfilter)) leaf_name_data.push_back(currerrindex.get_name_leafdata());
    if (lasterrors.is_set || is_set(lasterrors.yfilter)) leaf_name_data.push_back(lasterrors.get_name_leafdata());
    if (operbitset.is_set || is_set(operbitset.yfilter)) leaf_name_data.push_back(operbitset.get_name_leafdata());
    if (sicfgflags.is_set || is_set(sicfgflags.yfilter)) leaf_name_data.push_back(sicfgflags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRouterMac")
    {
        operroutermac = value;
        operroutermac.value_namespace = name_space;
        operroutermac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operEncap")
    {
        operencap = value;
        operencap.value_namespace = name_space;
        operencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDescr")
    {
        operdescr = value;
        operdescr.value_namespace = name_space;
        operdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsmState")
    {
        fsmstate = value;
        fsmstate.value_namespace = name_space;
        fsmstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "operMtu")
    {
        opermtu = value;
        opermtu.value_namespace = name_space;
        opermtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currErrIndex")
    {
        currerrindex = value;
        currerrindex.value_namespace = name_space;
        currerrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastErrors")
    {
        lasterrors = value;
        lasterrors.value_namespace = name_space;
        lasterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operBitset")
    {
        operbitset = value;
        operbitset.value_namespace = name_space;
        operbitset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "siCfgFlags")
    {
        sicfgflags = value;
        sicfgflags.value_namespace = name_space;
        sicfgflags.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "operRouterMac")
    {
        operroutermac.yfilter = yfilter;
    }
    if(value_path == "operEncap")
    {
        operencap.yfilter = yfilter;
    }
    if(value_path == "operDescr")
    {
        operdescr.yfilter = yfilter;
    }
    if(value_path == "fsmState")
    {
        fsmstate.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "operMtu")
    {
        opermtu.yfilter = yfilter;
    }
    if(value_path == "currErrIndex")
    {
        currerrindex.yfilter = yfilter;
    }
    if(value_path == "lastErrors")
    {
        lasterrors.yfilter = yfilter;
    }
    if(value_path == "operBitset")
    {
        operbitset.yfilter = yfilter;
    }
    if(value_path == "siCfgFlags")
    {
        sicfgflags.yfilter = yfilter;
    }
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::EncrtdifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "operRouterMac" || name == "operEncap" || name == "operDescr" || name == "fsmState" || name == "iod" || name == "operSt" || name == "operStQual" || name == "operMtu" || name == "currErrIndex" || name == "lastErrors" || name == "operBitset" || name == "siCfgFlags")
        return true;
    return false;
}

System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems::RtpseudoIfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtpseudoIf-items"; yang_parent_name = "EncRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems::~RtpseudoIfItems()
{
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtpseudoIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::RtpseudoIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "EncRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems::RsencPhysRtdConfItems()
    :
    tdn{YType::str, "tDn"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsencPhysRtdConf-items"; yang_parent_name = "EncRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems::~RsencPhysRtdConfItems()
{
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsencPhysRtdConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::EncrtdItems::EncRtdIfList::RsencPhysRtdConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "EncRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::get_children() const
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

void System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::EncrtdItems::EncRtdIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::SviItems::SviItems()
    :
    if_list(this, {"id"})
{

    yang_name = "svi-items"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::SviItems::~SviItems()
{
}

bool System::IntfItems::SviItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::SviItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::SviItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::SviItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "svi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::SviItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::SviItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::SviItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::SviItems::get_children() const
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

void System::IntfItems::SviItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::SviItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::SviItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::IntfItems::SviItems::IfList::IfList()
    :
    id{YType::str, "id"},
    vlanid{YType::uint16, "vlanId"},
    mac{YType::str, "mac"},
    medium{YType::enumeration, "medium"},
    mtu{YType::uint32, "mtu"},
    mtuinherit{YType::boolean, "mtuInherit"},
    delay{YType::uint32, "delay"},
    bw{YType::uint32, "bw"},
    cardel{YType::uint32, "carDel"},
    loadintvl1{YType::uint32, "loadIntvl1"},
    loadintvl2{YType::uint32, "loadIntvl2"},
    loadintvl3{YType::uint32, "loadIntvl3"},
    inbmgmt{YType::boolean, "inbMgmt"},
    autostate{YType::boolean, "autostate"},
    snmptrap{YType::boolean, "snmpTrap"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    vlant{YType::enumeration, "vlanT"},
    ctrlrid{YType::str, "ctrlrId"},
    iod{YType::uint32, "iod"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    vrf_items(std::make_shared<System::IntfItems::SviItems::IfList::VrfItems>())
    , multisiteiftracking_items(std::make_shared<System::IntfItems::SviItems::IfList::MultisiteiftrackingItems>())
    , svi_items(std::make_shared<System::IntfItems::SviItems::IfList::SviItems_>())
    , rtpseudoif_items(std::make_shared<System::IntfItems::SviItems::IfList::RtpseudoIfItems>())
    , rtvrfmbr_items(std::make_shared<System::IntfItems::SviItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::SviItems::IfList::RtnwPathToIfItems>())
{
    vrf_items->parent = this;
    multisiteiftracking_items->parent = this;
    svi_items->parent = this;
    rtpseudoif_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "svi-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::SviItems::IfList::~IfList()
{
}

bool System::IntfItems::SviItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vlanid.is_set
	|| mac.is_set
	|| medium.is_set
	|| mtu.is_set
	|| mtuinherit.is_set
	|| delay.is_set
	|| bw.is_set
	|| cardel.is_set
	|| loadintvl1.is_set
	|| loadintvl2.is_set
	|| loadintvl3.is_set
	|| inbmgmt.is_set
	|| autostate.is_set
	|| snmptrap.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| vlant.is_set
	|| ctrlrid.is_set
	|| iod.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (vrf_items !=  nullptr && vrf_items->has_data())
	|| (multisiteiftracking_items !=  nullptr && multisiteiftracking_items->has_data())
	|| (svi_items !=  nullptr && svi_items->has_data())
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IntfItems::SviItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mtuinherit.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(cardel.yfilter)
	|| ydk::is_set(loadintvl1.yfilter)
	|| ydk::is_set(loadintvl2.yfilter)
	|| ydk::is_set(loadintvl3.yfilter)
	|| ydk::is_set(inbmgmt.yfilter)
	|| ydk::is_set(autostate.yfilter)
	|| ydk::is_set(snmptrap.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(vlant.yfilter)
	|| ydk::is_set(ctrlrid.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation())
	|| (multisiteiftracking_items !=  nullptr && multisiteiftracking_items->has_operation())
	|| (svi_items !=  nullptr && svi_items->has_operation())
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IntfItems::SviItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/svi-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::SviItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::SviItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mtuinherit.is_set || is_set(mtuinherit.yfilter)) leaf_name_data.push_back(mtuinherit.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (cardel.is_set || is_set(cardel.yfilter)) leaf_name_data.push_back(cardel.get_name_leafdata());
    if (loadintvl1.is_set || is_set(loadintvl1.yfilter)) leaf_name_data.push_back(loadintvl1.get_name_leafdata());
    if (loadintvl2.is_set || is_set(loadintvl2.yfilter)) leaf_name_data.push_back(loadintvl2.get_name_leafdata());
    if (loadintvl3.is_set || is_set(loadintvl3.yfilter)) leaf_name_data.push_back(loadintvl3.get_name_leafdata());
    if (inbmgmt.is_set || is_set(inbmgmt.yfilter)) leaf_name_data.push_back(inbmgmt.get_name_leafdata());
    if (autostate.is_set || is_set(autostate.yfilter)) leaf_name_data.push_back(autostate.get_name_leafdata());
    if (snmptrap.is_set || is_set(snmptrap.yfilter)) leaf_name_data.push_back(snmptrap.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (vlant.is_set || is_set(vlant.yfilter)) leaf_name_data.push_back(vlant.get_name_leafdata());
    if (ctrlrid.is_set || is_set(ctrlrid.yfilter)) leaf_name_data.push_back(ctrlrid.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::SviItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::IntfItems::SviItems::IfList::VrfItems>();
        }
        return vrf_items;
    }

    if(child_yang_name == "multisiteiftracking-items")
    {
        if(multisiteiftracking_items == nullptr)
        {
            multisiteiftracking_items = std::make_shared<System::IntfItems::SviItems::IfList::MultisiteiftrackingItems>();
        }
        return multisiteiftracking_items;
    }

    if(child_yang_name == "svi-items")
    {
        if(svi_items == nullptr)
        {
            svi_items = std::make_shared<System::IntfItems::SviItems::IfList::SviItems_>();
        }
        return svi_items;
    }

    if(child_yang_name == "rtpseudoIf-items")
    {
        if(rtpseudoif_items == nullptr)
        {
            rtpseudoif_items = std::make_shared<System::IntfItems::SviItems::IfList::RtpseudoIfItems>();
        }
        return rtpseudoif_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::SviItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::SviItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::SviItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    if(multisiteiftracking_items != nullptr)
    {
        _children["multisiteiftracking-items"] = multisiteiftracking_items;
    }

    if(svi_items != nullptr)
    {
        _children["svi-items"] = svi_items;
    }

    if(rtpseudoif_items != nullptr)
    {
        _children["rtpseudoIf-items"] = rtpseudoif_items;
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

void System::IntfItems::SviItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanId")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtuInherit")
    {
        mtuinherit = value;
        mtuinherit.value_namespace = name_space;
        mtuinherit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carDel")
    {
        cardel = value;
        cardel.value_namespace = name_space;
        cardel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadIntvl1")
    {
        loadintvl1 = value;
        loadintvl1.value_namespace = name_space;
        loadintvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadIntvl2")
    {
        loadintvl2 = value;
        loadintvl2.value_namespace = name_space;
        loadintvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadIntvl3")
    {
        loadintvl3 = value;
        loadintvl3.value_namespace = name_space;
        loadintvl3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbMgmt")
    {
        inbmgmt = value;
        inbmgmt.value_namespace = name_space;
        inbmgmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autostate")
    {
        autostate = value;
        autostate.value_namespace = name_space;
        autostate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTrap")
    {
        snmptrap = value;
        snmptrap.value_namespace = name_space;
        snmptrap.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vlanT")
    {
        vlant = value;
        vlant.value_namespace = name_space;
        vlant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlrId")
    {
        ctrlrid = value;
        ctrlrid.value_namespace = name_space;
        ctrlrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
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

void System::IntfItems::SviItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vlanId")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "mtuInherit")
    {
        mtuinherit.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "carDel")
    {
        cardel.yfilter = yfilter;
    }
    if(value_path == "loadIntvl1")
    {
        loadintvl1.yfilter = yfilter;
    }
    if(value_path == "loadIntvl2")
    {
        loadintvl2.yfilter = yfilter;
    }
    if(value_path == "loadIntvl3")
    {
        loadintvl3.yfilter = yfilter;
    }
    if(value_path == "inbMgmt")
    {
        inbmgmt.yfilter = yfilter;
    }
    if(value_path == "autostate")
    {
        autostate.yfilter = yfilter;
    }
    if(value_path == "snmpTrap")
    {
        snmptrap.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "vlanT")
    {
        vlant.yfilter = yfilter;
    }
    if(value_path == "ctrlrId")
    {
        ctrlrid.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
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

bool System::IntfItems::SviItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items" || name == "multisiteiftracking-items" || name == "svi-items" || name == "rtpseudoIf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "vlanId" || name == "mac" || name == "medium" || name == "mtu" || name == "mtuInherit" || name == "delay" || name == "bw" || name == "carDel" || name == "loadIntvl1" || name == "loadIntvl2" || name == "loadIntvl3" || name == "inbMgmt" || name == "autostate" || name == "snmpTrap" || name == "operSt" || name == "operStQual" || name == "vlanT" || name == "ctrlrId" || name == "iod" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::IntfItems::SviItems::IfList::VrfItems::VrfItems()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::SviItems::IfList::VrfItems::~VrfItems()
{
}

bool System::IntfItems::SviItems::IfList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::IntfItems::SviItems::IfList::VrfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IntfItems::SviItems::IfList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::SviItems::IfList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::SviItems::IfList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::SviItems::IfList::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::SviItems::IfList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::SviItems::IfList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IntfItems::SviItems::IfList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::IntfItems::SviItems::IfList::MultisiteiftrackingItems::MultisiteiftrackingItems()
    :
    tracking{YType::enumeration, "tracking"}
{

    yang_name = "multisiteiftracking-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::SviItems::IfList::MultisiteiftrackingItems::~MultisiteiftrackingItems()
{
}

bool System::IntfItems::SviItems::IfList::MultisiteiftrackingItems::has_data() const
{
    if (is_presence_container) return true;
    return tracking.is_set;
}

bool System::IntfItems::SviItems::IfList::MultisiteiftrackingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracking.yfilter);
}

std::string System::IntfItems::SviItems::IfList::MultisiteiftrackingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multisiteiftracking-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::SviItems::IfList::MultisiteiftrackingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracking.is_set || is_set(tracking.yfilter)) leaf_name_data.push_back(tracking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::SviItems::IfList::MultisiteiftrackingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::SviItems::IfList::MultisiteiftrackingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::SviItems::IfList::MultisiteiftrackingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracking")
    {
        tracking = value;
        tracking.value_namespace = name_space;
        tracking.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::SviItems::IfList::MultisiteiftrackingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracking")
    {
        tracking.yfilter = yfilter;
    }
}

bool System::IntfItems::SviItems::IfList::MultisiteiftrackingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracking")
        return true;
    return false;
}

System::IntfItems::SviItems::IfList::SviItems_::SviItems_()
    :
    ifindex{YType::uint32, "ifIndex"},
    operdescr{YType::str, "operDescr"},
    adminst{YType::enumeration, "adminSt"},
    operstqual{YType::enumeration, "operStQual"},
    opercarrierdelaysec{YType::uint32, "operCarrierDelaySec"},
    opercarrierdelaymsec{YType::uint32, "operCarrierDelayMsec"},
    opermtu{YType::uint32, "operMtu"},
    operbw{YType::uint32, "operBw"},
    operdelay{YType::uint32, "operDelay"},
    operautostate{YType::boolean, "operAutoState"},
    opermac{YType::str, "operMac"},
    iod{YType::uint64, "iod"},
    operloadintvl1{YType::uint32, "operLoadIntvl1"},
    operloadintvl2{YType::uint32, "operLoadIntvl2"},
    operloadintvl3{YType::uint32, "operLoadIntvl3"},
    operlastchgsec{YType::uint64, "operLastChgSec"},
    operlastchgusec{YType::uint64, "operLastChgUsec"}
{

    yang_name = "svi-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::SviItems::IfList::SviItems_::~SviItems_()
{
}

bool System::IntfItems::SviItems::IfList::SviItems_::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| operdescr.is_set
	|| adminst.is_set
	|| operstqual.is_set
	|| opercarrierdelaysec.is_set
	|| opercarrierdelaymsec.is_set
	|| opermtu.is_set
	|| operbw.is_set
	|| operdelay.is_set
	|| operautostate.is_set
	|| opermac.is_set
	|| iod.is_set
	|| operloadintvl1.is_set
	|| operloadintvl2.is_set
	|| operloadintvl3.is_set
	|| operlastchgsec.is_set
	|| operlastchgusec.is_set;
}

bool System::IntfItems::SviItems::IfList::SviItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(operdescr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(opercarrierdelaysec.yfilter)
	|| ydk::is_set(opercarrierdelaymsec.yfilter)
	|| ydk::is_set(opermtu.yfilter)
	|| ydk::is_set(operbw.yfilter)
	|| ydk::is_set(operdelay.yfilter)
	|| ydk::is_set(operautostate.yfilter)
	|| ydk::is_set(opermac.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(operloadintvl1.yfilter)
	|| ydk::is_set(operloadintvl2.yfilter)
	|| ydk::is_set(operloadintvl3.yfilter)
	|| ydk::is_set(operlastchgsec.yfilter)
	|| ydk::is_set(operlastchgusec.yfilter);
}

std::string System::IntfItems::SviItems::IfList::SviItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "svi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::SviItems::IfList::SviItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (operdescr.is_set || is_set(operdescr.yfilter)) leaf_name_data.push_back(operdescr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (opercarrierdelaysec.is_set || is_set(opercarrierdelaysec.yfilter)) leaf_name_data.push_back(opercarrierdelaysec.get_name_leafdata());
    if (opercarrierdelaymsec.is_set || is_set(opercarrierdelaymsec.yfilter)) leaf_name_data.push_back(opercarrierdelaymsec.get_name_leafdata());
    if (opermtu.is_set || is_set(opermtu.yfilter)) leaf_name_data.push_back(opermtu.get_name_leafdata());
    if (operbw.is_set || is_set(operbw.yfilter)) leaf_name_data.push_back(operbw.get_name_leafdata());
    if (operdelay.is_set || is_set(operdelay.yfilter)) leaf_name_data.push_back(operdelay.get_name_leafdata());
    if (operautostate.is_set || is_set(operautostate.yfilter)) leaf_name_data.push_back(operautostate.get_name_leafdata());
    if (opermac.is_set || is_set(opermac.yfilter)) leaf_name_data.push_back(opermac.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (operloadintvl1.is_set || is_set(operloadintvl1.yfilter)) leaf_name_data.push_back(operloadintvl1.get_name_leafdata());
    if (operloadintvl2.is_set || is_set(operloadintvl2.yfilter)) leaf_name_data.push_back(operloadintvl2.get_name_leafdata());
    if (operloadintvl3.is_set || is_set(operloadintvl3.yfilter)) leaf_name_data.push_back(operloadintvl3.get_name_leafdata());
    if (operlastchgsec.is_set || is_set(operlastchgsec.yfilter)) leaf_name_data.push_back(operlastchgsec.get_name_leafdata());
    if (operlastchgusec.is_set || is_set(operlastchgusec.yfilter)) leaf_name_data.push_back(operlastchgusec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::SviItems::IfList::SviItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::SviItems::IfList::SviItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::SviItems::IfList::SviItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDescr")
    {
        operdescr = value;
        operdescr.value_namespace = name_space;
        operdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operCarrierDelaySec")
    {
        opercarrierdelaysec = value;
        opercarrierdelaysec.value_namespace = name_space;
        opercarrierdelaysec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operCarrierDelayMsec")
    {
        opercarrierdelaymsec = value;
        opercarrierdelaymsec.value_namespace = name_space;
        opercarrierdelaymsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMtu")
    {
        opermtu = value;
        opermtu.value_namespace = name_space;
        opermtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operBw")
    {
        operbw = value;
        operbw.value_namespace = name_space;
        operbw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDelay")
    {
        operdelay = value;
        operdelay.value_namespace = name_space;
        operdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operAutoState")
    {
        operautostate = value;
        operautostate.value_namespace = name_space;
        operautostate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMac")
    {
        opermac = value;
        opermac.value_namespace = name_space;
        opermac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operLoadIntvl1")
    {
        operloadintvl1 = value;
        operloadintvl1.value_namespace = name_space;
        operloadintvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operLoadIntvl2")
    {
        operloadintvl2 = value;
        operloadintvl2.value_namespace = name_space;
        operloadintvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operLoadIntvl3")
    {
        operloadintvl3 = value;
        operloadintvl3.value_namespace = name_space;
        operloadintvl3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operLastChgSec")
    {
        operlastchgsec = value;
        operlastchgsec.value_namespace = name_space;
        operlastchgsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operLastChgUsec")
    {
        operlastchgusec = value;
        operlastchgusec.value_namespace = name_space;
        operlastchgusec.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::SviItems::IfList::SviItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "operDescr")
    {
        operdescr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "operCarrierDelaySec")
    {
        opercarrierdelaysec.yfilter = yfilter;
    }
    if(value_path == "operCarrierDelayMsec")
    {
        opercarrierdelaymsec.yfilter = yfilter;
    }
    if(value_path == "operMtu")
    {
        opermtu.yfilter = yfilter;
    }
    if(value_path == "operBw")
    {
        operbw.yfilter = yfilter;
    }
    if(value_path == "operDelay")
    {
        operdelay.yfilter = yfilter;
    }
    if(value_path == "operAutoState")
    {
        operautostate.yfilter = yfilter;
    }
    if(value_path == "operMac")
    {
        opermac.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "operLoadIntvl1")
    {
        operloadintvl1.yfilter = yfilter;
    }
    if(value_path == "operLoadIntvl2")
    {
        operloadintvl2.yfilter = yfilter;
    }
    if(value_path == "operLoadIntvl3")
    {
        operloadintvl3.yfilter = yfilter;
    }
    if(value_path == "operLastChgSec")
    {
        operlastchgsec.yfilter = yfilter;
    }
    if(value_path == "operLastChgUsec")
    {
        operlastchgusec.yfilter = yfilter;
    }
}

bool System::IntfItems::SviItems::IfList::SviItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "operDescr" || name == "adminSt" || name == "operStQual" || name == "operCarrierDelaySec" || name == "operCarrierDelayMsec" || name == "operMtu" || name == "operBw" || name == "operDelay" || name == "operAutoState" || name == "operMac" || name == "iod" || name == "operLoadIntvl1" || name == "operLoadIntvl2" || name == "operLoadIntvl3" || name == "operLastChgSec" || name == "operLastChgUsec")
        return true;
    return false;
}

System::IntfItems::SviItems::IfList::RtpseudoIfItems::RtpseudoIfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtpseudoIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::SviItems::IfList::RtpseudoIfItems::~RtpseudoIfItems()
{
}

bool System::IntfItems::SviItems::IfList::RtpseudoIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::SviItems::IfList::RtpseudoIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::SviItems::IfList::RtpseudoIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtpseudoIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::SviItems::IfList::RtpseudoIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::SviItems::IfList::RtpseudoIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::SviItems::IfList::RtpseudoIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::SviItems::IfList::RtpseudoIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::SviItems::IfList::RtpseudoIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::SviItems::IfList::RtpseudoIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::SviItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::SviItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IntfItems::SviItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::SviItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::SviItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::SviItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::SviItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::SviItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::SviItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::SviItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::SviItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::SviItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IntfItems::SviItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::SviItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::SviItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::SviItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::SviItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::SviItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::IntfItems::SviItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::SviItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::SviItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::TunnelifItems::TunnelifItems()
    :
    if_list(this, {"id"})
{

    yang_name = "tunnelif-items"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::TunnelifItems::~TunnelifItems()
{
}

bool System::IntfItems::TunnelifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::TunnelifItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::TunnelifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::TunnelifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::TunnelifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::TunnelifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::TunnelifItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::TunnelifItems::get_children() const
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

void System::IntfItems::TunnelifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::TunnelifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::TunnelifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::IntfItems::TunnelifItems::IfList::IfList()
    :
    id{YType::str, "id"},
    tunsrcaddr{YType::str, "tunSrcAddr"},
    tunsrcintf{YType::str, "tunSrcIntf"},
    tunsrcdirect{YType::enumeration, "tunSrcDirect"},
    tundestaddr{YType::str, "tunDestAddr"},
    tunmode{YType::enumeration, "tunMode"},
    tunvrf{YType::str, "tunVrf"},
    tunmtu{YType::uint32, "tunMtu"},
    tunpmtud{YType::enumeration, "tunPMTUD"},
    tunminpmtu{YType::uint32, "tunminPMTU"},
    tunpmtuage{YType::uint32, "tunPMTUage"},
    tunbw{YType::uint32, "tunBW"},
    tunttl{YType::uint32, "tunTTL"},
    snmptrapst{YType::enumeration, "snmpTrapSt"},
    tunoperst{YType::enumeration, "tunOperSt"},
    tunoperstqual{YType::enumeration, "tunOperStQual"},
    laststatechgdts{YType::str, "lastStateChgdTs"},
    tundelinprog{YType::boolean, "tunDelInProg"},
    tunintfoptions{YType::enumeration, "tunIntfOptions"},
    tuniod{YType::uint32, "tunIod"},
    tunifindex{YType::uint32, "tunIfIndex"},
    tunifpmtu{YType::uint32, "tunIfPmtu"},
    lastctrrstchgdts{YType::str, "lastCtrRstChgdTs"},
    tunrxpackets{YType::uint64, "tunRxPackets"},
    tunrxbytes{YType::uint64, "tunRxBytes"},
    tuntxpackets{YType::uint64, "tunTxPackets"},
    tuntxbytes{YType::uint64, "tunTxBytes"},
    tunsrcip{YType::str, "tunSrcIP"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    vrf_items(std::make_shared<System::IntfItems::TunnelifItems::IfList::VrfItems>())
    , rtpseudoif_items(std::make_shared<System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems>())
    , rtvrfmbr_items(std::make_shared<System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems>())
{
    vrf_items->parent = this;
    rtpseudoif_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "tunnelif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::TunnelifItems::IfList::~IfList()
{
}

bool System::IntfItems::TunnelifItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| tunsrcaddr.is_set
	|| tunsrcintf.is_set
	|| tunsrcdirect.is_set
	|| tundestaddr.is_set
	|| tunmode.is_set
	|| tunvrf.is_set
	|| tunmtu.is_set
	|| tunpmtud.is_set
	|| tunminpmtu.is_set
	|| tunpmtuage.is_set
	|| tunbw.is_set
	|| tunttl.is_set
	|| snmptrapst.is_set
	|| tunoperst.is_set
	|| tunoperstqual.is_set
	|| laststatechgdts.is_set
	|| tundelinprog.is_set
	|| tunintfoptions.is_set
	|| tuniod.is_set
	|| tunifindex.is_set
	|| tunifpmtu.is_set
	|| lastctrrstchgdts.is_set
	|| tunrxpackets.is_set
	|| tunrxbytes.is_set
	|| tuntxpackets.is_set
	|| tuntxbytes.is_set
	|| tunsrcip.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (vrf_items !=  nullptr && vrf_items->has_data())
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IntfItems::TunnelifItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(tunsrcaddr.yfilter)
	|| ydk::is_set(tunsrcintf.yfilter)
	|| ydk::is_set(tunsrcdirect.yfilter)
	|| ydk::is_set(tundestaddr.yfilter)
	|| ydk::is_set(tunmode.yfilter)
	|| ydk::is_set(tunvrf.yfilter)
	|| ydk::is_set(tunmtu.yfilter)
	|| ydk::is_set(tunpmtud.yfilter)
	|| ydk::is_set(tunminpmtu.yfilter)
	|| ydk::is_set(tunpmtuage.yfilter)
	|| ydk::is_set(tunbw.yfilter)
	|| ydk::is_set(tunttl.yfilter)
	|| ydk::is_set(snmptrapst.yfilter)
	|| ydk::is_set(tunoperst.yfilter)
	|| ydk::is_set(tunoperstqual.yfilter)
	|| ydk::is_set(laststatechgdts.yfilter)
	|| ydk::is_set(tundelinprog.yfilter)
	|| ydk::is_set(tunintfoptions.yfilter)
	|| ydk::is_set(tuniod.yfilter)
	|| ydk::is_set(tunifindex.yfilter)
	|| ydk::is_set(tunifpmtu.yfilter)
	|| ydk::is_set(lastctrrstchgdts.yfilter)
	|| ydk::is_set(tunrxpackets.yfilter)
	|| ydk::is_set(tunrxbytes.yfilter)
	|| ydk::is_set(tuntxpackets.yfilter)
	|| ydk::is_set(tuntxbytes.yfilter)
	|| ydk::is_set(tunsrcip.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation())
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IntfItems::TunnelifItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/tunnelif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::TunnelifItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::TunnelifItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (tunsrcaddr.is_set || is_set(tunsrcaddr.yfilter)) leaf_name_data.push_back(tunsrcaddr.get_name_leafdata());
    if (tunsrcintf.is_set || is_set(tunsrcintf.yfilter)) leaf_name_data.push_back(tunsrcintf.get_name_leafdata());
    if (tunsrcdirect.is_set || is_set(tunsrcdirect.yfilter)) leaf_name_data.push_back(tunsrcdirect.get_name_leafdata());
    if (tundestaddr.is_set || is_set(tundestaddr.yfilter)) leaf_name_data.push_back(tundestaddr.get_name_leafdata());
    if (tunmode.is_set || is_set(tunmode.yfilter)) leaf_name_data.push_back(tunmode.get_name_leafdata());
    if (tunvrf.is_set || is_set(tunvrf.yfilter)) leaf_name_data.push_back(tunvrf.get_name_leafdata());
    if (tunmtu.is_set || is_set(tunmtu.yfilter)) leaf_name_data.push_back(tunmtu.get_name_leafdata());
    if (tunpmtud.is_set || is_set(tunpmtud.yfilter)) leaf_name_data.push_back(tunpmtud.get_name_leafdata());
    if (tunminpmtu.is_set || is_set(tunminpmtu.yfilter)) leaf_name_data.push_back(tunminpmtu.get_name_leafdata());
    if (tunpmtuage.is_set || is_set(tunpmtuage.yfilter)) leaf_name_data.push_back(tunpmtuage.get_name_leafdata());
    if (tunbw.is_set || is_set(tunbw.yfilter)) leaf_name_data.push_back(tunbw.get_name_leafdata());
    if (tunttl.is_set || is_set(tunttl.yfilter)) leaf_name_data.push_back(tunttl.get_name_leafdata());
    if (snmptrapst.is_set || is_set(snmptrapst.yfilter)) leaf_name_data.push_back(snmptrapst.get_name_leafdata());
    if (tunoperst.is_set || is_set(tunoperst.yfilter)) leaf_name_data.push_back(tunoperst.get_name_leafdata());
    if (tunoperstqual.is_set || is_set(tunoperstqual.yfilter)) leaf_name_data.push_back(tunoperstqual.get_name_leafdata());
    if (laststatechgdts.is_set || is_set(laststatechgdts.yfilter)) leaf_name_data.push_back(laststatechgdts.get_name_leafdata());
    if (tundelinprog.is_set || is_set(tundelinprog.yfilter)) leaf_name_data.push_back(tundelinprog.get_name_leafdata());
    if (tunintfoptions.is_set || is_set(tunintfoptions.yfilter)) leaf_name_data.push_back(tunintfoptions.get_name_leafdata());
    if (tuniod.is_set || is_set(tuniod.yfilter)) leaf_name_data.push_back(tuniod.get_name_leafdata());
    if (tunifindex.is_set || is_set(tunifindex.yfilter)) leaf_name_data.push_back(tunifindex.get_name_leafdata());
    if (tunifpmtu.is_set || is_set(tunifpmtu.yfilter)) leaf_name_data.push_back(tunifpmtu.get_name_leafdata());
    if (lastctrrstchgdts.is_set || is_set(lastctrrstchgdts.yfilter)) leaf_name_data.push_back(lastctrrstchgdts.get_name_leafdata());
    if (tunrxpackets.is_set || is_set(tunrxpackets.yfilter)) leaf_name_data.push_back(tunrxpackets.get_name_leafdata());
    if (tunrxbytes.is_set || is_set(tunrxbytes.yfilter)) leaf_name_data.push_back(tunrxbytes.get_name_leafdata());
    if (tuntxpackets.is_set || is_set(tuntxpackets.yfilter)) leaf_name_data.push_back(tuntxpackets.get_name_leafdata());
    if (tuntxbytes.is_set || is_set(tuntxbytes.yfilter)) leaf_name_data.push_back(tuntxbytes.get_name_leafdata());
    if (tunsrcip.is_set || is_set(tunsrcip.yfilter)) leaf_name_data.push_back(tunsrcip.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::TunnelifItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::IntfItems::TunnelifItems::IfList::VrfItems>();
        }
        return vrf_items;
    }

    if(child_yang_name == "rtpseudoIf-items")
    {
        if(rtpseudoif_items == nullptr)
        {
            rtpseudoif_items = std::make_shared<System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems>();
        }
        return rtpseudoif_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::TunnelifItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    if(rtpseudoif_items != nullptr)
    {
        _children["rtpseudoIf-items"] = rtpseudoif_items;
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

void System::IntfItems::TunnelifItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunSrcAddr")
    {
        tunsrcaddr = value;
        tunsrcaddr.value_namespace = name_space;
        tunsrcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunSrcIntf")
    {
        tunsrcintf = value;
        tunsrcintf.value_namespace = name_space;
        tunsrcintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunSrcDirect")
    {
        tunsrcdirect = value;
        tunsrcdirect.value_namespace = name_space;
        tunsrcdirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunDestAddr")
    {
        tundestaddr = value;
        tundestaddr.value_namespace = name_space;
        tundestaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunMode")
    {
        tunmode = value;
        tunmode.value_namespace = name_space;
        tunmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunVrf")
    {
        tunvrf = value;
        tunvrf.value_namespace = name_space;
        tunvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunMtu")
    {
        tunmtu = value;
        tunmtu.value_namespace = name_space;
        tunmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunPMTUD")
    {
        tunpmtud = value;
        tunpmtud.value_namespace = name_space;
        tunpmtud.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunminPMTU")
    {
        tunminpmtu = value;
        tunminpmtu.value_namespace = name_space;
        tunminpmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunPMTUage")
    {
        tunpmtuage = value;
        tunpmtuage.value_namespace = name_space;
        tunpmtuage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunBW")
    {
        tunbw = value;
        tunbw.value_namespace = name_space;
        tunbw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunTTL")
    {
        tunttl = value;
        tunttl.value_namespace = name_space;
        tunttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTrapSt")
    {
        snmptrapst = value;
        snmptrapst.value_namespace = name_space;
        snmptrapst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunOperSt")
    {
        tunoperst = value;
        tunoperst.value_namespace = name_space;
        tunoperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunOperStQual")
    {
        tunoperstqual = value;
        tunoperstqual.value_namespace = name_space;
        tunoperstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStateChgdTs")
    {
        laststatechgdts = value;
        laststatechgdts.value_namespace = name_space;
        laststatechgdts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunDelInProg")
    {
        tundelinprog = value;
        tundelinprog.value_namespace = name_space;
        tundelinprog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunIntfOptions")
    {
        tunintfoptions = value;
        tunintfoptions.value_namespace = name_space;
        tunintfoptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunIod")
    {
        tuniod = value;
        tuniod.value_namespace = name_space;
        tuniod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunIfIndex")
    {
        tunifindex = value;
        tunifindex.value_namespace = name_space;
        tunifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunIfPmtu")
    {
        tunifpmtu = value;
        tunifpmtu.value_namespace = name_space;
        tunifpmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastCtrRstChgdTs")
    {
        lastctrrstchgdts = value;
        lastctrrstchgdts.value_namespace = name_space;
        lastctrrstchgdts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunRxPackets")
    {
        tunrxpackets = value;
        tunrxpackets.value_namespace = name_space;
        tunrxpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunRxBytes")
    {
        tunrxbytes = value;
        tunrxbytes.value_namespace = name_space;
        tunrxbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunTxPackets")
    {
        tuntxpackets = value;
        tuntxpackets.value_namespace = name_space;
        tuntxpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunTxBytes")
    {
        tuntxbytes = value;
        tuntxbytes.value_namespace = name_space;
        tuntxbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunSrcIP")
    {
        tunsrcip = value;
        tunsrcip.value_namespace = name_space;
        tunsrcip.value_namespace_prefix = name_space_prefix;
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

void System::IntfItems::TunnelifItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "tunSrcAddr")
    {
        tunsrcaddr.yfilter = yfilter;
    }
    if(value_path == "tunSrcIntf")
    {
        tunsrcintf.yfilter = yfilter;
    }
    if(value_path == "tunSrcDirect")
    {
        tunsrcdirect.yfilter = yfilter;
    }
    if(value_path == "tunDestAddr")
    {
        tundestaddr.yfilter = yfilter;
    }
    if(value_path == "tunMode")
    {
        tunmode.yfilter = yfilter;
    }
    if(value_path == "tunVrf")
    {
        tunvrf.yfilter = yfilter;
    }
    if(value_path == "tunMtu")
    {
        tunmtu.yfilter = yfilter;
    }
    if(value_path == "tunPMTUD")
    {
        tunpmtud.yfilter = yfilter;
    }
    if(value_path == "tunminPMTU")
    {
        tunminpmtu.yfilter = yfilter;
    }
    if(value_path == "tunPMTUage")
    {
        tunpmtuage.yfilter = yfilter;
    }
    if(value_path == "tunBW")
    {
        tunbw.yfilter = yfilter;
    }
    if(value_path == "tunTTL")
    {
        tunttl.yfilter = yfilter;
    }
    if(value_path == "snmpTrapSt")
    {
        snmptrapst.yfilter = yfilter;
    }
    if(value_path == "tunOperSt")
    {
        tunoperst.yfilter = yfilter;
    }
    if(value_path == "tunOperStQual")
    {
        tunoperstqual.yfilter = yfilter;
    }
    if(value_path == "lastStateChgdTs")
    {
        laststatechgdts.yfilter = yfilter;
    }
    if(value_path == "tunDelInProg")
    {
        tundelinprog.yfilter = yfilter;
    }
    if(value_path == "tunIntfOptions")
    {
        tunintfoptions.yfilter = yfilter;
    }
    if(value_path == "tunIod")
    {
        tuniod.yfilter = yfilter;
    }
    if(value_path == "tunIfIndex")
    {
        tunifindex.yfilter = yfilter;
    }
    if(value_path == "tunIfPmtu")
    {
        tunifpmtu.yfilter = yfilter;
    }
    if(value_path == "lastCtrRstChgdTs")
    {
        lastctrrstchgdts.yfilter = yfilter;
    }
    if(value_path == "tunRxPackets")
    {
        tunrxpackets.yfilter = yfilter;
    }
    if(value_path == "tunRxBytes")
    {
        tunrxbytes.yfilter = yfilter;
    }
    if(value_path == "tunTxPackets")
    {
        tuntxpackets.yfilter = yfilter;
    }
    if(value_path == "tunTxBytes")
    {
        tuntxbytes.yfilter = yfilter;
    }
    if(value_path == "tunSrcIP")
    {
        tunsrcip.yfilter = yfilter;
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

bool System::IntfItems::TunnelifItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items" || name == "rtpseudoIf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "tunSrcAddr" || name == "tunSrcIntf" || name == "tunSrcDirect" || name == "tunDestAddr" || name == "tunMode" || name == "tunVrf" || name == "tunMtu" || name == "tunPMTUD" || name == "tunminPMTU" || name == "tunPMTUage" || name == "tunBW" || name == "tunTTL" || name == "snmpTrapSt" || name == "tunOperSt" || name == "tunOperStQual" || name == "lastStateChgdTs" || name == "tunDelInProg" || name == "tunIntfOptions" || name == "tunIod" || name == "tunIfIndex" || name == "tunIfPmtu" || name == "lastCtrRstChgdTs" || name == "tunRxPackets" || name == "tunRxBytes" || name == "tunTxPackets" || name == "tunTxBytes" || name == "tunSrcIP" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::IntfItems::TunnelifItems::IfList::VrfItems::VrfItems()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::TunnelifItems::IfList::VrfItems::~VrfItems()
{
}

bool System::IntfItems::TunnelifItems::IfList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::IntfItems::TunnelifItems::IfList::VrfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IntfItems::TunnelifItems::IfList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::TunnelifItems::IfList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::TunnelifItems::IfList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::TunnelifItems::IfList::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::TunnelifItems::IfList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::TunnelifItems::IfList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IntfItems::TunnelifItems::IfList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::RtpseudoIfItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtpseudoIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::~RtpseudoIfItems()
{
}

bool System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtpseudoIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::Ipv4Items::Ipv4Items()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::Ipv4Items::InstItems>())
{
    inst_items->parent = this;

    yang_name = "ipv4-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::~Ipv4Items()
{
}

bool System::Ipv4Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::Ipv4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::Ipv4Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::Ipv4Items::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::Ipv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Ipv4Items::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Ipv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::Ipv4Items::InstItems::InstItems()
    :
    sourceroute{YType::enumeration, "sourceRoute"},
    accesslistmatchlocal{YType::enumeration, "accessListMatchLocal"},
    hardwareecmphashoffsetvalue{YType::uint16, "hardwareEcmpHashOffsetValue"},
    hardwareecmphashoffsetconcat{YType::enumeration, "hardwareEcmpHashOffsetConcat"},
    hardwareecmphashpolynomial{YType::enumeration, "hardwareEcmpHashPolynomial"},
    logginglevel{YType::enumeration, "loggingLevel"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    dom_items(std::make_shared<System::Ipv4Items::InstItems::DomItems>())
    , client_items(std::make_shared<System::Ipv4Items::InstItems::ClientItems>())
    , iploadsharing_items(std::make_shared<System::Ipv4Items::InstItems::IploadsharingItems>())
    , loadstat_items(std::make_shared<System::Ipv4Items::InstItems::LoadstatItems>())
    , iptrafficstat_items(std::make_shared<System::Ipv4Items::InstItems::IptrafficstatItems>())
    , iptrafficerrstat_items(std::make_shared<System::Ipv4Items::InstItems::IptrafficerrstatItems>())
    , icmptrafficstat_items(std::make_shared<System::Ipv4Items::InstItems::IcmptrafficstatItems>())
    , rfc4293trafficstat_items(std::make_shared<System::Ipv4Items::InstItems::Rfc4293trafficstatItems>())
{
    dom_items->parent = this;
    client_items->parent = this;
    iploadsharing_items->parent = this;
    loadstat_items->parent = this;
    iptrafficstat_items->parent = this;
    iptrafficerrstat_items->parent = this;
    icmptrafficstat_items->parent = this;
    rfc4293trafficstat_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "ipv4-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::InstItems::~InstItems()
{
}

bool System::Ipv4Items::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return sourceroute.is_set
	|| accesslistmatchlocal.is_set
	|| hardwareecmphashoffsetvalue.is_set
	|| hardwareecmphashoffsetconcat.is_set
	|| hardwareecmphashpolynomial.is_set
	|| logginglevel.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (client_items !=  nullptr && client_items->has_data())
	|| (iploadsharing_items !=  nullptr && iploadsharing_items->has_data())
	|| (loadstat_items !=  nullptr && loadstat_items->has_data())
	|| (iptrafficstat_items !=  nullptr && iptrafficstat_items->has_data())
	|| (iptrafficerrstat_items !=  nullptr && iptrafficerrstat_items->has_data())
	|| (icmptrafficstat_items !=  nullptr && icmptrafficstat_items->has_data())
	|| (rfc4293trafficstat_items !=  nullptr && rfc4293trafficstat_items->has_data());
}

bool System::Ipv4Items::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sourceroute.yfilter)
	|| ydk::is_set(accesslistmatchlocal.yfilter)
	|| ydk::is_set(hardwareecmphashoffsetvalue.yfilter)
	|| ydk::is_set(hardwareecmphashoffsetconcat.yfilter)
	|| ydk::is_set(hardwareecmphashpolynomial.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (client_items !=  nullptr && client_items->has_operation())
	|| (iploadsharing_items !=  nullptr && iploadsharing_items->has_operation())
	|| (loadstat_items !=  nullptr && loadstat_items->has_operation())
	|| (iptrafficstat_items !=  nullptr && iptrafficstat_items->has_operation())
	|| (iptrafficerrstat_items !=  nullptr && iptrafficerrstat_items->has_operation())
	|| (icmptrafficstat_items !=  nullptr && icmptrafficstat_items->has_operation())
	|| (rfc4293trafficstat_items !=  nullptr && rfc4293trafficstat_items->has_operation());
}

std::string System::Ipv4Items::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv4-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sourceroute.is_set || is_set(sourceroute.yfilter)) leaf_name_data.push_back(sourceroute.get_name_leafdata());
    if (accesslistmatchlocal.is_set || is_set(accesslistmatchlocal.yfilter)) leaf_name_data.push_back(accesslistmatchlocal.get_name_leafdata());
    if (hardwareecmphashoffsetvalue.is_set || is_set(hardwareecmphashoffsetvalue.yfilter)) leaf_name_data.push_back(hardwareecmphashoffsetvalue.get_name_leafdata());
    if (hardwareecmphashoffsetconcat.is_set || is_set(hardwareecmphashoffsetconcat.yfilter)) leaf_name_data.push_back(hardwareecmphashoffsetconcat.get_name_leafdata());
    if (hardwareecmphashpolynomial.is_set || is_set(hardwareecmphashpolynomial.yfilter)) leaf_name_data.push_back(hardwareecmphashpolynomial.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::Ipv4Items::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "client-items")
    {
        if(client_items == nullptr)
        {
            client_items = std::make_shared<System::Ipv4Items::InstItems::ClientItems>();
        }
        return client_items;
    }

    if(child_yang_name == "iploadsharing-items")
    {
        if(iploadsharing_items == nullptr)
        {
            iploadsharing_items = std::make_shared<System::Ipv4Items::InstItems::IploadsharingItems>();
        }
        return iploadsharing_items;
    }

    if(child_yang_name == "loadstat-items")
    {
        if(loadstat_items == nullptr)
        {
            loadstat_items = std::make_shared<System::Ipv4Items::InstItems::LoadstatItems>();
        }
        return loadstat_items;
    }

    if(child_yang_name == "iptrafficstat-items")
    {
        if(iptrafficstat_items == nullptr)
        {
            iptrafficstat_items = std::make_shared<System::Ipv4Items::InstItems::IptrafficstatItems>();
        }
        return iptrafficstat_items;
    }

    if(child_yang_name == "iptrafficerrstat-items")
    {
        if(iptrafficerrstat_items == nullptr)
        {
            iptrafficerrstat_items = std::make_shared<System::Ipv4Items::InstItems::IptrafficerrstatItems>();
        }
        return iptrafficerrstat_items;
    }

    if(child_yang_name == "icmptrafficstat-items")
    {
        if(icmptrafficstat_items == nullptr)
        {
            icmptrafficstat_items = std::make_shared<System::Ipv4Items::InstItems::IcmptrafficstatItems>();
        }
        return icmptrafficstat_items;
    }

    if(child_yang_name == "rfc4293trafficstat-items")
    {
        if(rfc4293trafficstat_items == nullptr)
        {
            rfc4293trafficstat_items = std::make_shared<System::Ipv4Items::InstItems::Rfc4293trafficstatItems>();
        }
        return rfc4293trafficstat_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(client_items != nullptr)
    {
        _children["client-items"] = client_items;
    }

    if(iploadsharing_items != nullptr)
    {
        _children["iploadsharing-items"] = iploadsharing_items;
    }

    if(loadstat_items != nullptr)
    {
        _children["loadstat-items"] = loadstat_items;
    }

    if(iptrafficstat_items != nullptr)
    {
        _children["iptrafficstat-items"] = iptrafficstat_items;
    }

    if(iptrafficerrstat_items != nullptr)
    {
        _children["iptrafficerrstat-items"] = iptrafficerrstat_items;
    }

    if(icmptrafficstat_items != nullptr)
    {
        _children["icmptrafficstat-items"] = icmptrafficstat_items;
    }

    if(rfc4293trafficstat_items != nullptr)
    {
        _children["rfc4293trafficstat-items"] = rfc4293trafficstat_items;
    }

    return _children;
}

void System::Ipv4Items::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sourceRoute")
    {
        sourceroute = value;
        sourceroute.value_namespace = name_space;
        sourceroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accessListMatchLocal")
    {
        accesslistmatchlocal = value;
        accesslistmatchlocal.value_namespace = name_space;
        accesslistmatchlocal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardwareEcmpHashOffsetValue")
    {
        hardwareecmphashoffsetvalue = value;
        hardwareecmphashoffsetvalue.value_namespace = name_space;
        hardwareecmphashoffsetvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardwareEcmpHashOffsetConcat")
    {
        hardwareecmphashoffsetconcat = value;
        hardwareecmphashoffsetconcat.value_namespace = name_space;
        hardwareecmphashoffsetconcat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardwareEcmpHashPolynomial")
    {
        hardwareecmphashpolynomial = value;
        hardwareecmphashpolynomial.value_namespace = name_space;
        hardwareecmphashpolynomial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
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

void System::Ipv4Items::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sourceRoute")
    {
        sourceroute.yfilter = yfilter;
    }
    if(value_path == "accessListMatchLocal")
    {
        accesslistmatchlocal.yfilter = yfilter;
    }
    if(value_path == "hardwareEcmpHashOffsetValue")
    {
        hardwareecmphashoffsetvalue.yfilter = yfilter;
    }
    if(value_path == "hardwareEcmpHashOffsetConcat")
    {
        hardwareecmphashoffsetconcat.yfilter = yfilter;
    }
    if(value_path == "hardwareEcmpHashPolynomial")
    {
        hardwareecmphashpolynomial.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
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

bool System::Ipv4Items::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "client-items" || name == "iploadsharing-items" || name == "loadstat-items" || name == "iptrafficstat-items" || name == "iptrafficerrstat-items" || name == "icmptrafficstat-items" || name == "rfc4293trafficstat-items" || name == "sourceRoute" || name == "accessListMatchLocal" || name == "hardwareEcmpHashOffsetValue" || name == "hardwareEcmpHashOffsetConcat" || name == "hardwareEcmpHashPolynomial" || name == "loggingLevel" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::InstItems::DomItems::~DomItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv4-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::get_children() const
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

void System::Ipv4Items::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    autodiscard{YType::enumeration, "autoDiscard"},
    ipicmperrorssrcintf{YType::str, "ipIcmpErrorsSrcIntf"}
        ,
    rtstaticbfd_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems>())
    , if_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems>())
    , multicastrt_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems>())
    , pstat_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::PstatItems>())
    , rt_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtItems>())
    , routestat_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems>())
    , ifbriefstats_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfbriefstatsItems>())
{
    rtstaticbfd_items->parent = this;
    if_items->parent = this;
    multicastrt_items->parent = this;
    pstat_items->parent = this;
    rt_items->parent = this;
    routestat_items->parent = this;
    ifbriefstats_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ipv4Items::InstItems::DomItems::DomList::~DomList()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| autodiscard.is_set
	|| ipicmperrorssrcintf.is_set
	|| (rtstaticbfd_items !=  nullptr && rtstaticbfd_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (multicastrt_items !=  nullptr && multicastrt_items->has_data())
	|| (pstat_items !=  nullptr && pstat_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data())
	|| (routestat_items !=  nullptr && routestat_items->has_data())
	|| (ifbriefstats_items !=  nullptr && ifbriefstats_items->has_data());
}

bool System::Ipv4Items::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(autodiscard.yfilter)
	|| ydk::is_set(ipicmperrorssrcintf.yfilter)
	|| (rtstaticbfd_items !=  nullptr && rtstaticbfd_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (multicastrt_items !=  nullptr && multicastrt_items->has_operation())
	|| (pstat_items !=  nullptr && pstat_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation())
	|| (routestat_items !=  nullptr && routestat_items->has_operation())
	|| (ifbriefstats_items !=  nullptr && ifbriefstats_items->has_operation());
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipv4-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (autodiscard.is_set || is_set(autodiscard.yfilter)) leaf_name_data.push_back(autodiscard.get_name_leafdata());
    if (ipicmperrorssrcintf.is_set || is_set(ipicmperrorssrcintf.yfilter)) leaf_name_data.push_back(ipicmperrorssrcintf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtstaticbfd-items")
    {
        if(rtstaticbfd_items == nullptr)
        {
            rtstaticbfd_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems>();
        }
        return rtstaticbfd_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "multicastrt-items")
    {
        if(multicastrt_items == nullptr)
        {
            multicastrt_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems>();
        }
        return multicastrt_items;
    }

    if(child_yang_name == "pstat-items")
    {
        if(pstat_items == nullptr)
        {
            pstat_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::PstatItems>();
        }
        return pstat_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtItems>();
        }
        return rt_items;
    }

    if(child_yang_name == "routestat-items")
    {
        if(routestat_items == nullptr)
        {
            routestat_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems>();
        }
        return routestat_items;
    }

    if(child_yang_name == "ifbriefstats-items")
    {
        if(ifbriefstats_items == nullptr)
        {
            ifbriefstats_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfbriefstatsItems>();
        }
        return ifbriefstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtstaticbfd_items != nullptr)
    {
        _children["rtstaticbfd-items"] = rtstaticbfd_items;
    }

    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(multicastrt_items != nullptr)
    {
        _children["multicastrt-items"] = multicastrt_items;
    }

    if(pstat_items != nullptr)
    {
        _children["pstat-items"] = pstat_items;
    }

    if(rt_items != nullptr)
    {
        _children["rt-items"] = rt_items;
    }

    if(routestat_items != nullptr)
    {
        _children["routestat-items"] = routestat_items;
    }

    if(ifbriefstats_items != nullptr)
    {
        _children["ifbriefstats-items"] = ifbriefstats_items;
    }

    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoDiscard")
    {
        autodiscard = value;
        autodiscard.value_namespace = name_space;
        autodiscard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipIcmpErrorsSrcIntf")
    {
        ipicmperrorssrcintf = value;
        ipicmperrorssrcintf.value_namespace = name_space;
        ipicmperrorssrcintf.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "autoDiscard")
    {
        autodiscard.yfilter = yfilter;
    }
    if(value_path == "ipIcmpErrorsSrcIntf")
    {
        ipicmperrorssrcintf.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtstaticbfd-items" || name == "if-items" || name == "multicastrt-items" || name == "pstat-items" || name == "rt-items" || name == "routestat-items" || name == "ifbriefstats-items" || name == "name" || name == "autoDiscard" || name == "ipIcmpErrorsSrcIntf")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtstaticbfdItems()
    :
    rtstaticbfd_list(this, {"intf", "nexthop"})
{

    yang_name = "rtstaticbfd-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::~RtstaticbfdItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtstaticbfd_list.len(); index++)
    {
        if(rtstaticbfd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::has_operation() const
{
    for (std::size_t index=0; index<rtstaticbfd_list.len(); index++)
    {
        if(rtstaticbfd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtstaticbfd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtStaticBfd-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList>();
        ent_->parent = this;
        rtstaticbfd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtstaticbfd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtStaticBfd-list")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::RtStaticBfdList()
    :
    intf{YType::str, "intf"},
    nexthop{YType::str, "nexthop"}
{

    yang_name = "RtStaticBfd-list"; yang_parent_name = "rtstaticbfd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::~RtStaticBfdList()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::has_data() const
{
    if (is_presence_container) return true;
    return intf.is_set
	|| nexthop.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(nexthop.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtStaticBfd-list";
    ADD_KEY_TOKEN(intf, "intf");
    ADD_KEY_TOKEN(nexthop, "nexthop");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (nexthop.is_set || is_set(nexthop.yfilter)) leaf_name_data.push_back(nexthop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop")
    {
        nexthop = value;
        nexthop.value_namespace = name_space;
        nexthop.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "nexthop")
    {
        nexthop.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf" || name == "nexthop")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::get_children() const
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

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    directedbroadcast{YType::enumeration, "directedBroadcast"},
    acl{YType::str, "acl"},
    forward{YType::enumeration, "forward"},
    unnumbered{YType::str, "unnumbered"},
    urpf{YType::enumeration, "urpf"},
    dropglean{YType::enumeration, "dropGlean"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"}
        ,
    addr_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems>())
    , dampening_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems>())
    , dampeningdata_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems>())
    , trafficstat_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems>())
    , stat_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems>())
    , rpol_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems>())
    , rtvrfmbr_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    addr_items->parent = this;
    dampening_items->parent = this;
    dampeningdata_items->parent = this;
    trafficstat_items->parent = this;
    stat_items->parent = this;
    rpol_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| directedbroadcast.is_set
	|| acl.is_set
	|| forward.is_set
	|| unnumbered.is_set
	|| urpf.is_set
	|| dropglean.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| (addr_items !=  nullptr && addr_items->has_data())
	|| (dampening_items !=  nullptr && dampening_items->has_data())
	|| (dampeningdata_items !=  nullptr && dampeningdata_items->has_data())
	|| (trafficstat_items !=  nullptr && trafficstat_items->has_data())
	|| (stat_items !=  nullptr && stat_items->has_data())
	|| (rpol_items !=  nullptr && rpol_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(directedbroadcast.yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(forward.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(urpf.yfilter)
	|| ydk::is_set(dropglean.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| (addr_items !=  nullptr && addr_items->has_operation())
	|| (dampening_items !=  nullptr && dampening_items->has_operation())
	|| (dampeningdata_items !=  nullptr && dampeningdata_items->has_operation())
	|| (trafficstat_items !=  nullptr && trafficstat_items->has_operation())
	|| (stat_items !=  nullptr && stat_items->has_operation())
	|| (rpol_items !=  nullptr && rpol_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (directedbroadcast.is_set || is_set(directedbroadcast.yfilter)) leaf_name_data.push_back(directedbroadcast.get_name_leafdata());
    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (forward.is_set || is_set(forward.yfilter)) leaf_name_data.push_back(forward.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (urpf.is_set || is_set(urpf.yfilter)) leaf_name_data.push_back(urpf.get_name_leafdata());
    if (dropglean.is_set || is_set(dropglean.yfilter)) leaf_name_data.push_back(dropglean.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr-items")
    {
        if(addr_items == nullptr)
        {
            addr_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems>();
        }
        return addr_items;
    }

    if(child_yang_name == "dampening-items")
    {
        if(dampening_items == nullptr)
        {
            dampening_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems>();
        }
        return dampening_items;
    }

    if(child_yang_name == "dampeningdata-items")
    {
        if(dampeningdata_items == nullptr)
        {
            dampeningdata_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems>();
        }
        return dampeningdata_items;
    }

    if(child_yang_name == "trafficstat-items")
    {
        if(trafficstat_items == nullptr)
        {
            trafficstat_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems>();
        }
        return trafficstat_items;
    }

    if(child_yang_name == "stat-items")
    {
        if(stat_items == nullptr)
        {
            stat_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems>();
        }
        return stat_items;
    }

    if(child_yang_name == "rpol-items")
    {
        if(rpol_items == nullptr)
        {
            rpol_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems>();
        }
        return rpol_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr_items != nullptr)
    {
        _children["addr-items"] = addr_items;
    }

    if(dampening_items != nullptr)
    {
        _children["dampening-items"] = dampening_items;
    }

    if(dampeningdata_items != nullptr)
    {
        _children["dampeningdata-items"] = dampeningdata_items;
    }

    if(trafficstat_items != nullptr)
    {
        _children["trafficstat-items"] = trafficstat_items;
    }

    if(stat_items != nullptr)
    {
        _children["stat-items"] = stat_items;
    }

    if(rpol_items != nullptr)
    {
        _children["rpol-items"] = rpol_items;
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

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "directedBroadcast")
    {
        directedbroadcast = value;
        directedbroadcast.value_namespace = name_space;
        directedbroadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward")
    {
        forward = value;
        forward.value_namespace = name_space;
        forward.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urpf")
    {
        urpf = value;
        urpf.value_namespace = name_space;
        urpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropGlean")
    {
        dropglean = value;
        dropglean.value_namespace = name_space;
        dropglean.value_namespace_prefix = name_space_prefix;
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

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "directedBroadcast")
    {
        directedbroadcast.yfilter = yfilter;
    }
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "forward")
    {
        forward.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "urpf")
    {
        urpf.yfilter = yfilter;
    }
    if(value_path == "dropGlean")
    {
        dropglean.yfilter = yfilter;
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

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-items" || name == "dampening-items" || name == "dampeningdata-items" || name == "trafficstat-items" || name == "stat-items" || name == "rpol-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "directedBroadcast" || name == "acl" || name == "forward" || name == "unnumbered" || name == "urpf" || name == "dropGlean" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrItems()
    :
    addr_list(this, {"addr"})
{

    yang_name = "addr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::~AddrItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addr_list.len(); index++)
    {
        if(addr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::has_operation() const
{
    for (std::size_t index=0; index<addr_list.len(); index++)
    {
        if(addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Addr-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList>();
        ent_->parent = this;
        addr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : addr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Addr-list")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::AddrList()
    :
    addr{YType::str, "addr"},
    type{YType::enumeration, "type"},
    ctrl{YType::str, "ctrl"},
    vpcpeer{YType::str, "vpcPeer"},
    pref{YType::uint8, "pref"},
    tag{YType::uint32, "tag"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"}
{

    yang_name = "Addr-list"; yang_parent_name = "addr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::~AddrList()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| type.is_set
	|| ctrl.is_set
	|| vpcpeer.is_set
	|| pref.is_set
	|| tag.is_set
	|| operst.is_set
	|| operstqual.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(vpcpeer.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Addr-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (vpcpeer.is_set || is_set(vpcpeer.yfilter)) leaf_name_data.push_back(vpcpeer.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "vpcPeer")
    {
        vpcpeer = value;
        vpcpeer.value_namespace = name_space;
        vpcpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
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

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "vpcPeer")
    {
        vpcpeer.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
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

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "type" || name == "ctrl" || name == "vpcPeer" || name == "pref" || name == "tag" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::DampeningItems()
    :
    halflifeperiod{YType::uint64, "halfLifePeriod"},
    reusethreshold{YType::uint64, "reuseThreshold"},
    suppressthreshold{YType::uint64, "suppressThreshold"},
    maxsuppress{YType::uint64, "maxSuppress"},
    restartenabled{YType::enumeration, "restartEnabled"},
    restartpenalty{YType::uint64, "restartPenalty"}
{

    yang_name = "dampening-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::~DampeningItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::has_data() const
{
    if (is_presence_container) return true;
    return halflifeperiod.is_set
	|| reusethreshold.is_set
	|| suppressthreshold.is_set
	|| maxsuppress.is_set
	|| restartenabled.is_set
	|| restartpenalty.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(halflifeperiod.yfilter)
	|| ydk::is_set(reusethreshold.yfilter)
	|| ydk::is_set(suppressthreshold.yfilter)
	|| ydk::is_set(maxsuppress.yfilter)
	|| ydk::is_set(restartenabled.yfilter)
	|| ydk::is_set(restartpenalty.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (halflifeperiod.is_set || is_set(halflifeperiod.yfilter)) leaf_name_data.push_back(halflifeperiod.get_name_leafdata());
    if (reusethreshold.is_set || is_set(reusethreshold.yfilter)) leaf_name_data.push_back(reusethreshold.get_name_leafdata());
    if (suppressthreshold.is_set || is_set(suppressthreshold.yfilter)) leaf_name_data.push_back(suppressthreshold.get_name_leafdata());
    if (maxsuppress.is_set || is_set(maxsuppress.yfilter)) leaf_name_data.push_back(maxsuppress.get_name_leafdata());
    if (restartenabled.is_set || is_set(restartenabled.yfilter)) leaf_name_data.push_back(restartenabled.get_name_leafdata());
    if (restartpenalty.is_set || is_set(restartpenalty.yfilter)) leaf_name_data.push_back(restartpenalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "halfLifePeriod")
    {
        halflifeperiod = value;
        halflifeperiod.value_namespace = name_space;
        halflifeperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuseThreshold")
    {
        reusethreshold = value;
        reusethreshold.value_namespace = name_space;
        reusethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressThreshold")
    {
        suppressthreshold = value;
        suppressthreshold.value_namespace = name_space;
        suppressthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSuppress")
    {
        maxsuppress = value;
        maxsuppress.value_namespace = name_space;
        maxsuppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartEnabled")
    {
        restartenabled = value;
        restartenabled.value_namespace = name_space;
        restartenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartPenalty")
    {
        restartpenalty = value;
        restartpenalty.value_namespace = name_space;
        restartpenalty.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "halfLifePeriod")
    {
        halflifeperiod.yfilter = yfilter;
    }
    if(value_path == "reuseThreshold")
    {
        reusethreshold.yfilter = yfilter;
    }
    if(value_path == "suppressThreshold")
    {
        suppressthreshold.yfilter = yfilter;
    }
    if(value_path == "maxSuppress")
    {
        maxsuppress.yfilter = yfilter;
    }
    if(value_path == "restartEnabled")
    {
        restartenabled.yfilter = yfilter;
    }
    if(value_path == "restartPenalty")
    {
        restartpenalty.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "halfLifePeriod" || name == "reuseThreshold" || name == "suppressThreshold" || name == "maxSuppress" || name == "restartEnabled" || name == "restartPenalty")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::DampeningdataItems()
    :
    flapcount{YType::uint64, "flapCount"},
    penalty{YType::uint64, "penalty"},
    suppressed{YType::uint64, "suppressed"},
    reusetime{YType::uint64, "reuseTime"},
    halflifeperiod{YType::uint64, "halfLifePeriod"},
    reusethreshold{YType::uint64, "reuseThreshold"},
    suppressthreshold{YType::uint64, "suppressThreshold"},
    maxsuppress{YType::uint64, "maxSuppress"},
    maxpenalty{YType::uint64, "maxPenalty"},
    restartpenalty{YType::uint64, "restartPenalty"}
{

    yang_name = "dampeningdata-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::~DampeningdataItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::has_data() const
{
    if (is_presence_container) return true;
    return flapcount.is_set
	|| penalty.is_set
	|| suppressed.is_set
	|| reusetime.is_set
	|| halflifeperiod.is_set
	|| reusethreshold.is_set
	|| suppressthreshold.is_set
	|| maxsuppress.is_set
	|| maxpenalty.is_set
	|| restartpenalty.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flapcount.yfilter)
	|| ydk::is_set(penalty.yfilter)
	|| ydk::is_set(suppressed.yfilter)
	|| ydk::is_set(reusetime.yfilter)
	|| ydk::is_set(halflifeperiod.yfilter)
	|| ydk::is_set(reusethreshold.yfilter)
	|| ydk::is_set(suppressthreshold.yfilter)
	|| ydk::is_set(maxsuppress.yfilter)
	|| ydk::is_set(maxpenalty.yfilter)
	|| ydk::is_set(restartpenalty.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampeningdata-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flapcount.is_set || is_set(flapcount.yfilter)) leaf_name_data.push_back(flapcount.get_name_leafdata());
    if (penalty.is_set || is_set(penalty.yfilter)) leaf_name_data.push_back(penalty.get_name_leafdata());
    if (suppressed.is_set || is_set(suppressed.yfilter)) leaf_name_data.push_back(suppressed.get_name_leafdata());
    if (reusetime.is_set || is_set(reusetime.yfilter)) leaf_name_data.push_back(reusetime.get_name_leafdata());
    if (halflifeperiod.is_set || is_set(halflifeperiod.yfilter)) leaf_name_data.push_back(halflifeperiod.get_name_leafdata());
    if (reusethreshold.is_set || is_set(reusethreshold.yfilter)) leaf_name_data.push_back(reusethreshold.get_name_leafdata());
    if (suppressthreshold.is_set || is_set(suppressthreshold.yfilter)) leaf_name_data.push_back(suppressthreshold.get_name_leafdata());
    if (maxsuppress.is_set || is_set(maxsuppress.yfilter)) leaf_name_data.push_back(maxsuppress.get_name_leafdata());
    if (maxpenalty.is_set || is_set(maxpenalty.yfilter)) leaf_name_data.push_back(maxpenalty.get_name_leafdata());
    if (restartpenalty.is_set || is_set(restartpenalty.yfilter)) leaf_name_data.push_back(restartpenalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flapCount")
    {
        flapcount = value;
        flapcount.value_namespace = name_space;
        flapcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "penalty")
    {
        penalty = value;
        penalty.value_namespace = name_space;
        penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed")
    {
        suppressed = value;
        suppressed.value_namespace = name_space;
        suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuseTime")
    {
        reusetime = value;
        reusetime.value_namespace = name_space;
        reusetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "halfLifePeriod")
    {
        halflifeperiod = value;
        halflifeperiod.value_namespace = name_space;
        halflifeperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuseThreshold")
    {
        reusethreshold = value;
        reusethreshold.value_namespace = name_space;
        reusethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressThreshold")
    {
        suppressthreshold = value;
        suppressthreshold.value_namespace = name_space;
        suppressthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSuppress")
    {
        maxsuppress = value;
        maxsuppress.value_namespace = name_space;
        maxsuppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxPenalty")
    {
        maxpenalty = value;
        maxpenalty.value_namespace = name_space;
        maxpenalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartPenalty")
    {
        restartpenalty = value;
        restartpenalty.value_namespace = name_space;
        restartpenalty.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flapCount")
    {
        flapcount.yfilter = yfilter;
    }
    if(value_path == "penalty")
    {
        penalty.yfilter = yfilter;
    }
    if(value_path == "suppressed")
    {
        suppressed.yfilter = yfilter;
    }
    if(value_path == "reuseTime")
    {
        reusetime.yfilter = yfilter;
    }
    if(value_path == "halfLifePeriod")
    {
        halflifeperiod.yfilter = yfilter;
    }
    if(value_path == "reuseThreshold")
    {
        reusethreshold.yfilter = yfilter;
    }
    if(value_path == "suppressThreshold")
    {
        suppressthreshold.yfilter = yfilter;
    }
    if(value_path == "maxSuppress")
    {
        maxsuppress.yfilter = yfilter;
    }
    if(value_path == "maxPenalty")
    {
        maxpenalty.yfilter = yfilter;
    }
    if(value_path == "restartPenalty")
    {
        restartpenalty.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flapCount" || name == "penalty" || name == "suppressed" || name == "reuseTime" || name == "halfLifePeriod" || name == "reuseThreshold" || name == "suppressThreshold" || name == "maxSuppress" || name == "maxPenalty" || name == "restartPenalty")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::TrafficstatItems()
    :
    upktsent{YType::uint64, "upktSent"},
    upktrecv{YType::uint64, "upktRecv"},
    upktfwd{YType::uint64, "upktFwd"},
    upktorig{YType::uint64, "upktOrig"},
    upktconsumed{YType::uint64, "upktConsumed"},
    ubytesent{YType::uint64, "ubyteSent"},
    ubytercv{YType::uint64, "ubyteRcv"},
    ubytefwd{YType::uint64, "ubyteFwd"},
    ubyteorig{YType::uint64, "ubyteOrig"},
    ubyteconsumed{YType::uint64, "ubyteConsumed"},
    mpktsent{YType::uint64, "mpktSent"},
    mpktrcv{YType::uint64, "mpktRcv"},
    mpktfwd{YType::uint64, "mpktFwd"},
    mpktorig{YType::uint64, "mpktOrig"},
    mpktconsumed{YType::uint64, "mpktConsumed"},
    mbytesent{YType::uint64, "mbyteSent"},
    mbytercv{YType::uint64, "mbyteRcv"},
    mbytefwd{YType::uint64, "mbyteFwd"},
    mbyteorig{YType::uint64, "mbyteOrig"},
    mbyteconsumed{YType::uint64, "mbyteConsumed"},
    bpktsent{YType::uint64, "bpktSent"},
    bpktrcv{YType::uint64, "bpktRcv"},
    bpktfwd{YType::uint64, "bpktFwd"},
    bpktorig{YType::uint64, "bpktOrig"},
    bpktconsumed{YType::uint64, "bpktConsumed"},
    bbytesent{YType::uint64, "bbyteSent"},
    bbytercv{YType::uint64, "bbyteRcv"},
    bbytefwd{YType::uint64, "bbyteFwd"},
    bbyteorig{YType::uint64, "bbyteOrig"},
    bbyteconsumed{YType::uint64, "bbyteConsumed"},
    lpktsent{YType::uint64, "lpktSent"},
    lpktrcv{YType::uint64, "lpktRcv"},
    lpktfwd{YType::uint64, "lpktFwd"},
    lpktorig{YType::uint64, "lpktOrig"},
    lpktconsumed{YType::uint64, "lpktConsumed"},
    lbytesent{YType::uint64, "lbyteSent"},
    lbytercv{YType::uint64, "lbyteRcv"},
    lbytefwd{YType::uint64, "lbyteFwd"},
    lbyteorig{YType::uint64, "lbyteOrig"},
    lbyteconsumed{YType::uint64, "lbyteConsumed"}
{

    yang_name = "trafficstat-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::~TrafficstatItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::has_data() const
{
    if (is_presence_container) return true;
    return upktsent.is_set
	|| upktrecv.is_set
	|| upktfwd.is_set
	|| upktorig.is_set
	|| upktconsumed.is_set
	|| ubytesent.is_set
	|| ubytercv.is_set
	|| ubytefwd.is_set
	|| ubyteorig.is_set
	|| ubyteconsumed.is_set
	|| mpktsent.is_set
	|| mpktrcv.is_set
	|| mpktfwd.is_set
	|| mpktorig.is_set
	|| mpktconsumed.is_set
	|| mbytesent.is_set
	|| mbytercv.is_set
	|| mbytefwd.is_set
	|| mbyteorig.is_set
	|| mbyteconsumed.is_set
	|| bpktsent.is_set
	|| bpktrcv.is_set
	|| bpktfwd.is_set
	|| bpktorig.is_set
	|| bpktconsumed.is_set
	|| bbytesent.is_set
	|| bbytercv.is_set
	|| bbytefwd.is_set
	|| bbyteorig.is_set
	|| bbyteconsumed.is_set
	|| lpktsent.is_set
	|| lpktrcv.is_set
	|| lpktfwd.is_set
	|| lpktorig.is_set
	|| lpktconsumed.is_set
	|| lbytesent.is_set
	|| lbytercv.is_set
	|| lbytefwd.is_set
	|| lbyteorig.is_set
	|| lbyteconsumed.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upktsent.yfilter)
	|| ydk::is_set(upktrecv.yfilter)
	|| ydk::is_set(upktfwd.yfilter)
	|| ydk::is_set(upktorig.yfilter)
	|| ydk::is_set(upktconsumed.yfilter)
	|| ydk::is_set(ubytesent.yfilter)
	|| ydk::is_set(ubytercv.yfilter)
	|| ydk::is_set(ubytefwd.yfilter)
	|| ydk::is_set(ubyteorig.yfilter)
	|| ydk::is_set(ubyteconsumed.yfilter)
	|| ydk::is_set(mpktsent.yfilter)
	|| ydk::is_set(mpktrcv.yfilter)
	|| ydk::is_set(mpktfwd.yfilter)
	|| ydk::is_set(mpktorig.yfilter)
	|| ydk::is_set(mpktconsumed.yfilter)
	|| ydk::is_set(mbytesent.yfilter)
	|| ydk::is_set(mbytercv.yfilter)
	|| ydk::is_set(mbytefwd.yfilter)
	|| ydk::is_set(mbyteorig.yfilter)
	|| ydk::is_set(mbyteconsumed.yfilter)
	|| ydk::is_set(bpktsent.yfilter)
	|| ydk::is_set(bpktrcv.yfilter)
	|| ydk::is_set(bpktfwd.yfilter)
	|| ydk::is_set(bpktorig.yfilter)
	|| ydk::is_set(bpktconsumed.yfilter)
	|| ydk::is_set(bbytesent.yfilter)
	|| ydk::is_set(bbytercv.yfilter)
	|| ydk::is_set(bbytefwd.yfilter)
	|| ydk::is_set(bbyteorig.yfilter)
	|| ydk::is_set(bbyteconsumed.yfilter)
	|| ydk::is_set(lpktsent.yfilter)
	|| ydk::is_set(lpktrcv.yfilter)
	|| ydk::is_set(lpktfwd.yfilter)
	|| ydk::is_set(lpktorig.yfilter)
	|| ydk::is_set(lpktconsumed.yfilter)
	|| ydk::is_set(lbytesent.yfilter)
	|| ydk::is_set(lbytercv.yfilter)
	|| ydk::is_set(lbytefwd.yfilter)
	|| ydk::is_set(lbyteorig.yfilter)
	|| ydk::is_set(lbyteconsumed.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trafficstat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (upktsent.is_set || is_set(upktsent.yfilter)) leaf_name_data.push_back(upktsent.get_name_leafdata());
    if (upktrecv.is_set || is_set(upktrecv.yfilter)) leaf_name_data.push_back(upktrecv.get_name_leafdata());
    if (upktfwd.is_set || is_set(upktfwd.yfilter)) leaf_name_data.push_back(upktfwd.get_name_leafdata());
    if (upktorig.is_set || is_set(upktorig.yfilter)) leaf_name_data.push_back(upktorig.get_name_leafdata());
    if (upktconsumed.is_set || is_set(upktconsumed.yfilter)) leaf_name_data.push_back(upktconsumed.get_name_leafdata());
    if (ubytesent.is_set || is_set(ubytesent.yfilter)) leaf_name_data.push_back(ubytesent.get_name_leafdata());
    if (ubytercv.is_set || is_set(ubytercv.yfilter)) leaf_name_data.push_back(ubytercv.get_name_leafdata());
    if (ubytefwd.is_set || is_set(ubytefwd.yfilter)) leaf_name_data.push_back(ubytefwd.get_name_leafdata());
    if (ubyteorig.is_set || is_set(ubyteorig.yfilter)) leaf_name_data.push_back(ubyteorig.get_name_leafdata());
    if (ubyteconsumed.is_set || is_set(ubyteconsumed.yfilter)) leaf_name_data.push_back(ubyteconsumed.get_name_leafdata());
    if (mpktsent.is_set || is_set(mpktsent.yfilter)) leaf_name_data.push_back(mpktsent.get_name_leafdata());
    if (mpktrcv.is_set || is_set(mpktrcv.yfilter)) leaf_name_data.push_back(mpktrcv.get_name_leafdata());
    if (mpktfwd.is_set || is_set(mpktfwd.yfilter)) leaf_name_data.push_back(mpktfwd.get_name_leafdata());
    if (mpktorig.is_set || is_set(mpktorig.yfilter)) leaf_name_data.push_back(mpktorig.get_name_leafdata());
    if (mpktconsumed.is_set || is_set(mpktconsumed.yfilter)) leaf_name_data.push_back(mpktconsumed.get_name_leafdata());
    if (mbytesent.is_set || is_set(mbytesent.yfilter)) leaf_name_data.push_back(mbytesent.get_name_leafdata());
    if (mbytercv.is_set || is_set(mbytercv.yfilter)) leaf_name_data.push_back(mbytercv.get_name_leafdata());
    if (mbytefwd.is_set || is_set(mbytefwd.yfilter)) leaf_name_data.push_back(mbytefwd.get_name_leafdata());
    if (mbyteorig.is_set || is_set(mbyteorig.yfilter)) leaf_name_data.push_back(mbyteorig.get_name_leafdata());
    if (mbyteconsumed.is_set || is_set(mbyteconsumed.yfilter)) leaf_name_data.push_back(mbyteconsumed.get_name_leafdata());
    if (bpktsent.is_set || is_set(bpktsent.yfilter)) leaf_name_data.push_back(bpktsent.get_name_leafdata());
    if (bpktrcv.is_set || is_set(bpktrcv.yfilter)) leaf_name_data.push_back(bpktrcv.get_name_leafdata());
    if (bpktfwd.is_set || is_set(bpktfwd.yfilter)) leaf_name_data.push_back(bpktfwd.get_name_leafdata());
    if (bpktorig.is_set || is_set(bpktorig.yfilter)) leaf_name_data.push_back(bpktorig.get_name_leafdata());
    if (bpktconsumed.is_set || is_set(bpktconsumed.yfilter)) leaf_name_data.push_back(bpktconsumed.get_name_leafdata());
    if (bbytesent.is_set || is_set(bbytesent.yfilter)) leaf_name_data.push_back(bbytesent.get_name_leafdata());
    if (bbytercv.is_set || is_set(bbytercv.yfilter)) leaf_name_data.push_back(bbytercv.get_name_leafdata());
    if (bbytefwd.is_set || is_set(bbytefwd.yfilter)) leaf_name_data.push_back(bbytefwd.get_name_leafdata());
    if (bbyteorig.is_set || is_set(bbyteorig.yfilter)) leaf_name_data.push_back(bbyteorig.get_name_leafdata());
    if (bbyteconsumed.is_set || is_set(bbyteconsumed.yfilter)) leaf_name_data.push_back(bbyteconsumed.get_name_leafdata());
    if (lpktsent.is_set || is_set(lpktsent.yfilter)) leaf_name_data.push_back(lpktsent.get_name_leafdata());
    if (lpktrcv.is_set || is_set(lpktrcv.yfilter)) leaf_name_data.push_back(lpktrcv.get_name_leafdata());
    if (lpktfwd.is_set || is_set(lpktfwd.yfilter)) leaf_name_data.push_back(lpktfwd.get_name_leafdata());
    if (lpktorig.is_set || is_set(lpktorig.yfilter)) leaf_name_data.push_back(lpktorig.get_name_leafdata());
    if (lpktconsumed.is_set || is_set(lpktconsumed.yfilter)) leaf_name_data.push_back(lpktconsumed.get_name_leafdata());
    if (lbytesent.is_set || is_set(lbytesent.yfilter)) leaf_name_data.push_back(lbytesent.get_name_leafdata());
    if (lbytercv.is_set || is_set(lbytercv.yfilter)) leaf_name_data.push_back(lbytercv.get_name_leafdata());
    if (lbytefwd.is_set || is_set(lbytefwd.yfilter)) leaf_name_data.push_back(lbytefwd.get_name_leafdata());
    if (lbyteorig.is_set || is_set(lbyteorig.yfilter)) leaf_name_data.push_back(lbyteorig.get_name_leafdata());
    if (lbyteconsumed.is_set || is_set(lbyteconsumed.yfilter)) leaf_name_data.push_back(lbyteconsumed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upktSent")
    {
        upktsent = value;
        upktsent.value_namespace = name_space;
        upktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upktRecv")
    {
        upktrecv = value;
        upktrecv.value_namespace = name_space;
        upktrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upktFwd")
    {
        upktfwd = value;
        upktfwd.value_namespace = name_space;
        upktfwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upktOrig")
    {
        upktorig = value;
        upktorig.value_namespace = name_space;
        upktorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upktConsumed")
    {
        upktconsumed = value;
        upktconsumed.value_namespace = name_space;
        upktconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ubyteSent")
    {
        ubytesent = value;
        ubytesent.value_namespace = name_space;
        ubytesent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ubyteRcv")
    {
        ubytercv = value;
        ubytercv.value_namespace = name_space;
        ubytercv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ubyteFwd")
    {
        ubytefwd = value;
        ubytefwd.value_namespace = name_space;
        ubytefwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ubyteOrig")
    {
        ubyteorig = value;
        ubyteorig.value_namespace = name_space;
        ubyteorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ubyteConsumed")
    {
        ubyteconsumed = value;
        ubyteconsumed.value_namespace = name_space;
        ubyteconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpktSent")
    {
        mpktsent = value;
        mpktsent.value_namespace = name_space;
        mpktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpktRcv")
    {
        mpktrcv = value;
        mpktrcv.value_namespace = name_space;
        mpktrcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpktFwd")
    {
        mpktfwd = value;
        mpktfwd.value_namespace = name_space;
        mpktfwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpktOrig")
    {
        mpktorig = value;
        mpktorig.value_namespace = name_space;
        mpktorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpktConsumed")
    {
        mpktconsumed = value;
        mpktconsumed.value_namespace = name_space;
        mpktconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mbyteSent")
    {
        mbytesent = value;
        mbytesent.value_namespace = name_space;
        mbytesent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mbyteRcv")
    {
        mbytercv = value;
        mbytercv.value_namespace = name_space;
        mbytercv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mbyteFwd")
    {
        mbytefwd = value;
        mbytefwd.value_namespace = name_space;
        mbytefwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mbyteOrig")
    {
        mbyteorig = value;
        mbyteorig.value_namespace = name_space;
        mbyteorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mbyteConsumed")
    {
        mbyteconsumed = value;
        mbyteconsumed.value_namespace = name_space;
        mbyteconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpktSent")
    {
        bpktsent = value;
        bpktsent.value_namespace = name_space;
        bpktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpktRcv")
    {
        bpktrcv = value;
        bpktrcv.value_namespace = name_space;
        bpktrcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpktFwd")
    {
        bpktfwd = value;
        bpktfwd.value_namespace = name_space;
        bpktfwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpktOrig")
    {
        bpktorig = value;
        bpktorig.value_namespace = name_space;
        bpktorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpktConsumed")
    {
        bpktconsumed = value;
        bpktconsumed.value_namespace = name_space;
        bpktconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bbyteSent")
    {
        bbytesent = value;
        bbytesent.value_namespace = name_space;
        bbytesent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bbyteRcv")
    {
        bbytercv = value;
        bbytercv.value_namespace = name_space;
        bbytercv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bbyteFwd")
    {
        bbytefwd = value;
        bbytefwd.value_namespace = name_space;
        bbytefwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bbyteOrig")
    {
        bbyteorig = value;
        bbyteorig.value_namespace = name_space;
        bbyteorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bbyteConsumed")
    {
        bbyteconsumed = value;
        bbyteconsumed.value_namespace = name_space;
        bbyteconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpktSent")
    {
        lpktsent = value;
        lpktsent.value_namespace = name_space;
        lpktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpktRcv")
    {
        lpktrcv = value;
        lpktrcv.value_namespace = name_space;
        lpktrcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpktFwd")
    {
        lpktfwd = value;
        lpktfwd.value_namespace = name_space;
        lpktfwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpktOrig")
    {
        lpktorig = value;
        lpktorig.value_namespace = name_space;
        lpktorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpktConsumed")
    {
        lpktconsumed = value;
        lpktconsumed.value_namespace = name_space;
        lpktconsumed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbyteSent")
    {
        lbytesent = value;
        lbytesent.value_namespace = name_space;
        lbytesent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbyteRcv")
    {
        lbytercv = value;
        lbytercv.value_namespace = name_space;
        lbytercv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbyteFwd")
    {
        lbytefwd = value;
        lbytefwd.value_namespace = name_space;
        lbytefwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbyteOrig")
    {
        lbyteorig = value;
        lbyteorig.value_namespace = name_space;
        lbyteorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbyteConsumed")
    {
        lbyteconsumed = value;
        lbyteconsumed.value_namespace = name_space;
        lbyteconsumed.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upktSent")
    {
        upktsent.yfilter = yfilter;
    }
    if(value_path == "upktRecv")
    {
        upktrecv.yfilter = yfilter;
    }
    if(value_path == "upktFwd")
    {
        upktfwd.yfilter = yfilter;
    }
    if(value_path == "upktOrig")
    {
        upktorig.yfilter = yfilter;
    }
    if(value_path == "upktConsumed")
    {
        upktconsumed.yfilter = yfilter;
    }
    if(value_path == "ubyteSent")
    {
        ubytesent.yfilter = yfilter;
    }
    if(value_path == "ubyteRcv")
    {
        ubytercv.yfilter = yfilter;
    }
    if(value_path == "ubyteFwd")
    {
        ubytefwd.yfilter = yfilter;
    }
    if(value_path == "ubyteOrig")
    {
        ubyteorig.yfilter = yfilter;
    }
    if(value_path == "ubyteConsumed")
    {
        ubyteconsumed.yfilter = yfilter;
    }
    if(value_path == "mpktSent")
    {
        mpktsent.yfilter = yfilter;
    }
    if(value_path == "mpktRcv")
    {
        mpktrcv.yfilter = yfilter;
    }
    if(value_path == "mpktFwd")
    {
        mpktfwd.yfilter = yfilter;
    }
    if(value_path == "mpktOrig")
    {
        mpktorig.yfilter = yfilter;
    }
    if(value_path == "mpktConsumed")
    {
        mpktconsumed.yfilter = yfilter;
    }
    if(value_path == "mbyteSent")
    {
        mbytesent.yfilter = yfilter;
    }
    if(value_path == "mbyteRcv")
    {
        mbytercv.yfilter = yfilter;
    }
    if(value_path == "mbyteFwd")
    {
        mbytefwd.yfilter = yfilter;
    }
    if(value_path == "mbyteOrig")
    {
        mbyteorig.yfilter = yfilter;
    }
    if(value_path == "mbyteConsumed")
    {
        mbyteconsumed.yfilter = yfilter;
    }
    if(value_path == "bpktSent")
    {
        bpktsent.yfilter = yfilter;
    }
    if(value_path == "bpktRcv")
    {
        bpktrcv.yfilter = yfilter;
    }
    if(value_path == "bpktFwd")
    {
        bpktfwd.yfilter = yfilter;
    }
    if(value_path == "bpktOrig")
    {
        bpktorig.yfilter = yfilter;
    }
    if(value_path == "bpktConsumed")
    {
        bpktconsumed.yfilter = yfilter;
    }
    if(value_path == "bbyteSent")
    {
        bbytesent.yfilter = yfilter;
    }
    if(value_path == "bbyteRcv")
    {
        bbytercv.yfilter = yfilter;
    }
    if(value_path == "bbyteFwd")
    {
        bbytefwd.yfilter = yfilter;
    }
    if(value_path == "bbyteOrig")
    {
        bbyteorig.yfilter = yfilter;
    }
    if(value_path == "bbyteConsumed")
    {
        bbyteconsumed.yfilter = yfilter;
    }
    if(value_path == "lpktSent")
    {
        lpktsent.yfilter = yfilter;
    }
    if(value_path == "lpktRcv")
    {
        lpktrcv.yfilter = yfilter;
    }
    if(value_path == "lpktFwd")
    {
        lpktfwd.yfilter = yfilter;
    }
    if(value_path == "lpktOrig")
    {
        lpktorig.yfilter = yfilter;
    }
    if(value_path == "lpktConsumed")
    {
        lpktconsumed.yfilter = yfilter;
    }
    if(value_path == "lbyteSent")
    {
        lbytesent.yfilter = yfilter;
    }
    if(value_path == "lbyteRcv")
    {
        lbytercv.yfilter = yfilter;
    }
    if(value_path == "lbyteFwd")
    {
        lbytefwd.yfilter = yfilter;
    }
    if(value_path == "lbyteOrig")
    {
        lbyteorig.yfilter = yfilter;
    }
    if(value_path == "lbyteConsumed")
    {
        lbyteconsumed.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "upktSent" || name == "upktRecv" || name == "upktFwd" || name == "upktOrig" || name == "upktConsumed" || name == "ubyteSent" || name == "ubyteRcv" || name == "ubyteFwd" || name == "ubyteOrig" || name == "ubyteConsumed" || name == "mpktSent" || name == "mpktRcv" || name == "mpktFwd" || name == "mpktOrig" || name == "mpktConsumed" || name == "mbyteSent" || name == "mbyteRcv" || name == "mbyteFwd" || name == "mbyteOrig" || name == "mbyteConsumed" || name == "bpktSent" || name == "bpktRcv" || name == "bpktFwd" || name == "bpktOrig" || name == "bpktConsumed" || name == "bbyteSent" || name == "bbyteRcv" || name == "bbyteFwd" || name == "bbyteOrig" || name == "bbyteConsumed" || name == "lpktSent" || name == "lpktRcv" || name == "lpktFwd" || name == "lpktOrig" || name == "lpktConsumed" || name == "lbyteSent" || name == "lbyteRcv" || name == "lbyteFwd" || name == "lbyteOrig" || name == "lbyteConsumed")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::StatItems()
    :
    iodvalue{YType::uint64, "iodValue"},
    vrfnameout{YType::str, "vrfNameOut"},
    protostate{YType::str, "protoState"},
    linkstate{YType::str, "linkState"},
    adminstate{YType::str, "adminState"},
    priaddr{YType::str, "priAddr"},
    prisubnet{YType::str, "priSubnet"},
    primasklen{YType::uint8, "priMasklen"},
    priroutepref{YType::uint8, "priRoutePref"},
    pritag{YType::uint32, "priTag"},
    secaddr{YType::str, "secAddr"},
    secaddrsubnet{YType::str, "secAddrSubnet"},
    secaddrmasklen{YType::str, "secAddrMasklen"},
    secaddrroutepref{YType::str, "secAddrRoutePref"},
    secaddrtag{YType::str, "secAddrTag"},
    numaddr{YType::uint32, "numAddr"},
    vaddrclient{YType::str, "vaddrClient"},
    vaddrprefix{YType::str, "vaddrPrefix"},
    vaddrsubnet{YType::str, "vaddrSubnet"},
    vaddrmasklen{YType::str, "vaddrMasklen"},
    numvaddr{YType::uint64, "numVaddr"},
    unnumintf{YType::str, "unnumIntf"},
    firstiod{YType::uint64, "firstIod"},
    unnumchildintf{YType::str, "unnumChildIntf"},
    ipdisabled{YType::str, "ipDisabled"},
    bcastaddr{YType::str, "bcastAddr"},
    maddr{YType::str, "mAddr"},
    nummaddr{YType::uint32, "numMaddr"},
    mtu{YType::uint16, "mtu"},
    pref{YType::uint8, "pref"},
    tag{YType::uint32, "tag"},
    proxyarp{YType::enumeration, "proxyArp"},
    localproxyarp{YType::enumeration, "localProxyArp"},
    mrouting{YType::enumeration, "mRouting"},
    icmpredirect{YType::enumeration, "icmpRedirect"},
    directbcast{YType::enumeration, "directBcast"},
    ipunreach{YType::enumeration, "ipUnreach"},
    portunreach{YType::enumeration, "portUnreach"},
    urpfmode{YType::str, "urpfMode"},
    iploadsharing{YType::str, "ipLoadSharing"},
    aclin{YType::str, "aclIn"},
    aclout{YType::str, "aclOut"},
    statslastreset{YType::str, "statsLastReset"}
{

    yang_name = "stat-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::~StatItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::has_data() const
{
    if (is_presence_container) return true;
    return iodvalue.is_set
	|| vrfnameout.is_set
	|| protostate.is_set
	|| linkstate.is_set
	|| adminstate.is_set
	|| priaddr.is_set
	|| prisubnet.is_set
	|| primasklen.is_set
	|| priroutepref.is_set
	|| pritag.is_set
	|| secaddr.is_set
	|| secaddrsubnet.is_set
	|| secaddrmasklen.is_set
	|| secaddrroutepref.is_set
	|| secaddrtag.is_set
	|| numaddr.is_set
	|| vaddrclient.is_set
	|| vaddrprefix.is_set
	|| vaddrsubnet.is_set
	|| vaddrmasklen.is_set
	|| numvaddr.is_set
	|| unnumintf.is_set
	|| firstiod.is_set
	|| unnumchildintf.is_set
	|| ipdisabled.is_set
	|| bcastaddr.is_set
	|| maddr.is_set
	|| nummaddr.is_set
	|| mtu.is_set
	|| pref.is_set
	|| tag.is_set
	|| proxyarp.is_set
	|| localproxyarp.is_set
	|| mrouting.is_set
	|| icmpredirect.is_set
	|| directbcast.is_set
	|| ipunreach.is_set
	|| portunreach.is_set
	|| urpfmode.is_set
	|| iploadsharing.is_set
	|| aclin.is_set
	|| aclout.is_set
	|| statslastreset.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iodvalue.yfilter)
	|| ydk::is_set(vrfnameout.yfilter)
	|| ydk::is_set(protostate.yfilter)
	|| ydk::is_set(linkstate.yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(priaddr.yfilter)
	|| ydk::is_set(prisubnet.yfilter)
	|| ydk::is_set(primasklen.yfilter)
	|| ydk::is_set(priroutepref.yfilter)
	|| ydk::is_set(pritag.yfilter)
	|| ydk::is_set(secaddr.yfilter)
	|| ydk::is_set(secaddrsubnet.yfilter)
	|| ydk::is_set(secaddrmasklen.yfilter)
	|| ydk::is_set(secaddrroutepref.yfilter)
	|| ydk::is_set(secaddrtag.yfilter)
	|| ydk::is_set(numaddr.yfilter)
	|| ydk::is_set(vaddrclient.yfilter)
	|| ydk::is_set(vaddrprefix.yfilter)
	|| ydk::is_set(vaddrsubnet.yfilter)
	|| ydk::is_set(vaddrmasklen.yfilter)
	|| ydk::is_set(numvaddr.yfilter)
	|| ydk::is_set(unnumintf.yfilter)
	|| ydk::is_set(firstiod.yfilter)
	|| ydk::is_set(unnumchildintf.yfilter)
	|| ydk::is_set(ipdisabled.yfilter)
	|| ydk::is_set(bcastaddr.yfilter)
	|| ydk::is_set(maddr.yfilter)
	|| ydk::is_set(nummaddr.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(proxyarp.yfilter)
	|| ydk::is_set(localproxyarp.yfilter)
	|| ydk::is_set(mrouting.yfilter)
	|| ydk::is_set(icmpredirect.yfilter)
	|| ydk::is_set(directbcast.yfilter)
	|| ydk::is_set(ipunreach.yfilter)
	|| ydk::is_set(portunreach.yfilter)
	|| ydk::is_set(urpfmode.yfilter)
	|| ydk::is_set(iploadsharing.yfilter)
	|| ydk::is_set(aclin.yfilter)
	|| ydk::is_set(aclout.yfilter)
	|| ydk::is_set(statslastreset.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iodvalue.is_set || is_set(iodvalue.yfilter)) leaf_name_data.push_back(iodvalue.get_name_leafdata());
    if (vrfnameout.is_set || is_set(vrfnameout.yfilter)) leaf_name_data.push_back(vrfnameout.get_name_leafdata());
    if (protostate.is_set || is_set(protostate.yfilter)) leaf_name_data.push_back(protostate.get_name_leafdata());
    if (linkstate.is_set || is_set(linkstate.yfilter)) leaf_name_data.push_back(linkstate.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (priaddr.is_set || is_set(priaddr.yfilter)) leaf_name_data.push_back(priaddr.get_name_leafdata());
    if (prisubnet.is_set || is_set(prisubnet.yfilter)) leaf_name_data.push_back(prisubnet.get_name_leafdata());
    if (primasklen.is_set || is_set(primasklen.yfilter)) leaf_name_data.push_back(primasklen.get_name_leafdata());
    if (priroutepref.is_set || is_set(priroutepref.yfilter)) leaf_name_data.push_back(priroutepref.get_name_leafdata());
    if (pritag.is_set || is_set(pritag.yfilter)) leaf_name_data.push_back(pritag.get_name_leafdata());
    if (secaddr.is_set || is_set(secaddr.yfilter)) leaf_name_data.push_back(secaddr.get_name_leafdata());
    if (secaddrsubnet.is_set || is_set(secaddrsubnet.yfilter)) leaf_name_data.push_back(secaddrsubnet.get_name_leafdata());
    if (secaddrmasklen.is_set || is_set(secaddrmasklen.yfilter)) leaf_name_data.push_back(secaddrmasklen.get_name_leafdata());
    if (secaddrroutepref.is_set || is_set(secaddrroutepref.yfilter)) leaf_name_data.push_back(secaddrroutepref.get_name_leafdata());
    if (secaddrtag.is_set || is_set(secaddrtag.yfilter)) leaf_name_data.push_back(secaddrtag.get_name_leafdata());
    if (numaddr.is_set || is_set(numaddr.yfilter)) leaf_name_data.push_back(numaddr.get_name_leafdata());
    if (vaddrclient.is_set || is_set(vaddrclient.yfilter)) leaf_name_data.push_back(vaddrclient.get_name_leafdata());
    if (vaddrprefix.is_set || is_set(vaddrprefix.yfilter)) leaf_name_data.push_back(vaddrprefix.get_name_leafdata());
    if (vaddrsubnet.is_set || is_set(vaddrsubnet.yfilter)) leaf_name_data.push_back(vaddrsubnet.get_name_leafdata());
    if (vaddrmasklen.is_set || is_set(vaddrmasklen.yfilter)) leaf_name_data.push_back(vaddrmasklen.get_name_leafdata());
    if (numvaddr.is_set || is_set(numvaddr.yfilter)) leaf_name_data.push_back(numvaddr.get_name_leafdata());
    if (unnumintf.is_set || is_set(unnumintf.yfilter)) leaf_name_data.push_back(unnumintf.get_name_leafdata());
    if (firstiod.is_set || is_set(firstiod.yfilter)) leaf_name_data.push_back(firstiod.get_name_leafdata());
    if (unnumchildintf.is_set || is_set(unnumchildintf.yfilter)) leaf_name_data.push_back(unnumchildintf.get_name_leafdata());
    if (ipdisabled.is_set || is_set(ipdisabled.yfilter)) leaf_name_data.push_back(ipdisabled.get_name_leafdata());
    if (bcastaddr.is_set || is_set(bcastaddr.yfilter)) leaf_name_data.push_back(bcastaddr.get_name_leafdata());
    if (maddr.is_set || is_set(maddr.yfilter)) leaf_name_data.push_back(maddr.get_name_leafdata());
    if (nummaddr.is_set || is_set(nummaddr.yfilter)) leaf_name_data.push_back(nummaddr.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (proxyarp.is_set || is_set(proxyarp.yfilter)) leaf_name_data.push_back(proxyarp.get_name_leafdata());
    if (localproxyarp.is_set || is_set(localproxyarp.yfilter)) leaf_name_data.push_back(localproxyarp.get_name_leafdata());
    if (mrouting.is_set || is_set(mrouting.yfilter)) leaf_name_data.push_back(mrouting.get_name_leafdata());
    if (icmpredirect.is_set || is_set(icmpredirect.yfilter)) leaf_name_data.push_back(icmpredirect.get_name_leafdata());
    if (directbcast.is_set || is_set(directbcast.yfilter)) leaf_name_data.push_back(directbcast.get_name_leafdata());
    if (ipunreach.is_set || is_set(ipunreach.yfilter)) leaf_name_data.push_back(ipunreach.get_name_leafdata());
    if (portunreach.is_set || is_set(portunreach.yfilter)) leaf_name_data.push_back(portunreach.get_name_leafdata());
    if (urpfmode.is_set || is_set(urpfmode.yfilter)) leaf_name_data.push_back(urpfmode.get_name_leafdata());
    if (iploadsharing.is_set || is_set(iploadsharing.yfilter)) leaf_name_data.push_back(iploadsharing.get_name_leafdata());
    if (aclin.is_set || is_set(aclin.yfilter)) leaf_name_data.push_back(aclin.get_name_leafdata());
    if (aclout.is_set || is_set(aclout.yfilter)) leaf_name_data.push_back(aclout.get_name_leafdata());
    if (statslastreset.is_set || is_set(statslastreset.yfilter)) leaf_name_data.push_back(statslastreset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iodValue")
    {
        iodvalue = value;
        iodvalue.value_namespace = name_space;
        iodvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfNameOut")
    {
        vrfnameout = value;
        vrfnameout.value_namespace = name_space;
        vrfnameout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protoState")
    {
        protostate = value;
        protostate.value_namespace = name_space;
        protostate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkState")
    {
        linkstate = value;
        linkstate.value_namespace = name_space;
        linkstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priAddr")
    {
        priaddr = value;
        priaddr.value_namespace = name_space;
        priaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priSubnet")
    {
        prisubnet = value;
        prisubnet.value_namespace = name_space;
        prisubnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priMasklen")
    {
        primasklen = value;
        primasklen.value_namespace = name_space;
        primasklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priRoutePref")
    {
        priroutepref = value;
        priroutepref.value_namespace = name_space;
        priroutepref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priTag")
    {
        pritag = value;
        pritag.value_namespace = name_space;
        pritag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secAddr")
    {
        secaddr = value;
        secaddr.value_namespace = name_space;
        secaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secAddrSubnet")
    {
        secaddrsubnet = value;
        secaddrsubnet.value_namespace = name_space;
        secaddrsubnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secAddrMasklen")
    {
        secaddrmasklen = value;
        secaddrmasklen.value_namespace = name_space;
        secaddrmasklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secAddrRoutePref")
    {
        secaddrroutepref = value;
        secaddrroutepref.value_namespace = name_space;
        secaddrroutepref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secAddrTag")
    {
        secaddrtag = value;
        secaddrtag.value_namespace = name_space;
        secaddrtag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numAddr")
    {
        numaddr = value;
        numaddr.value_namespace = name_space;
        numaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vaddrClient")
    {
        vaddrclient = value;
        vaddrclient.value_namespace = name_space;
        vaddrclient.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vaddrPrefix")
    {
        vaddrprefix = value;
        vaddrprefix.value_namespace = name_space;
        vaddrprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vaddrSubnet")
    {
        vaddrsubnet = value;
        vaddrsubnet.value_namespace = name_space;
        vaddrsubnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vaddrMasklen")
    {
        vaddrmasklen = value;
        vaddrmasklen.value_namespace = name_space;
        vaddrmasklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numVaddr")
    {
        numvaddr = value;
        numvaddr.value_namespace = name_space;
        numvaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumIntf")
    {
        unnumintf = value;
        unnumintf.value_namespace = name_space;
        unnumintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firstIod")
    {
        firstiod = value;
        firstiod.value_namespace = name_space;
        firstiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumChildIntf")
    {
        unnumchildintf = value;
        unnumchildintf.value_namespace = name_space;
        unnumchildintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipDisabled")
    {
        ipdisabled = value;
        ipdisabled.value_namespace = name_space;
        ipdisabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcastAddr")
    {
        bcastaddr = value;
        bcastaddr.value_namespace = name_space;
        bcastaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mAddr")
    {
        maddr = value;
        maddr.value_namespace = name_space;
        maddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numMaddr")
    {
        nummaddr = value;
        nummaddr.value_namespace = name_space;
        nummaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxyArp")
    {
        proxyarp = value;
        proxyarp.value_namespace = name_space;
        proxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localProxyArp")
    {
        localproxyarp = value;
        localproxyarp.value_namespace = name_space;
        localproxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mRouting")
    {
        mrouting = value;
        mrouting.value_namespace = name_space;
        mrouting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpRedirect")
    {
        icmpredirect = value;
        icmpredirect.value_namespace = name_space;
        icmpredirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "directBcast")
    {
        directbcast = value;
        directbcast.value_namespace = name_space;
        directbcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipUnreach")
    {
        ipunreach = value;
        ipunreach.value_namespace = name_space;
        ipunreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portUnreach")
    {
        portunreach = value;
        portunreach.value_namespace = name_space;
        portunreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urpfMode")
    {
        urpfmode = value;
        urpfmode.value_namespace = name_space;
        urpfmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipLoadSharing")
    {
        iploadsharing = value;
        iploadsharing.value_namespace = name_space;
        iploadsharing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aclIn")
    {
        aclin = value;
        aclin.value_namespace = name_space;
        aclin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aclOut")
    {
        aclout = value;
        aclout.value_namespace = name_space;
        aclout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsLastReset")
    {
        statslastreset = value;
        statslastreset.value_namespace = name_space;
        statslastreset.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iodValue")
    {
        iodvalue.yfilter = yfilter;
    }
    if(value_path == "vrfNameOut")
    {
        vrfnameout.yfilter = yfilter;
    }
    if(value_path == "protoState")
    {
        protostate.yfilter = yfilter;
    }
    if(value_path == "linkState")
    {
        linkstate.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "priAddr")
    {
        priaddr.yfilter = yfilter;
    }
    if(value_path == "priSubnet")
    {
        prisubnet.yfilter = yfilter;
    }
    if(value_path == "priMasklen")
    {
        primasklen.yfilter = yfilter;
    }
    if(value_path == "priRoutePref")
    {
        priroutepref.yfilter = yfilter;
    }
    if(value_path == "priTag")
    {
        pritag.yfilter = yfilter;
    }
    if(value_path == "secAddr")
    {
        secaddr.yfilter = yfilter;
    }
    if(value_path == "secAddrSubnet")
    {
        secaddrsubnet.yfilter = yfilter;
    }
    if(value_path == "secAddrMasklen")
    {
        secaddrmasklen.yfilter = yfilter;
    }
    if(value_path == "secAddrRoutePref")
    {
        secaddrroutepref.yfilter = yfilter;
    }
    if(value_path == "secAddrTag")
    {
        secaddrtag.yfilter = yfilter;
    }
    if(value_path == "numAddr")
    {
        numaddr.yfilter = yfilter;
    }
    if(value_path == "vaddrClient")
    {
        vaddrclient.yfilter = yfilter;
    }
    if(value_path == "vaddrPrefix")
    {
        vaddrprefix.yfilter = yfilter;
    }
    if(value_path == "vaddrSubnet")
    {
        vaddrsubnet.yfilter = yfilter;
    }
    if(value_path == "vaddrMasklen")
    {
        vaddrmasklen.yfilter = yfilter;
    }
    if(value_path == "numVaddr")
    {
        numvaddr.yfilter = yfilter;
    }
    if(value_path == "unnumIntf")
    {
        unnumintf.yfilter = yfilter;
    }
    if(value_path == "firstIod")
    {
        firstiod.yfilter = yfilter;
    }
    if(value_path == "unnumChildIntf")
    {
        unnumchildintf.yfilter = yfilter;
    }
    if(value_path == "ipDisabled")
    {
        ipdisabled.yfilter = yfilter;
    }
    if(value_path == "bcastAddr")
    {
        bcastaddr.yfilter = yfilter;
    }
    if(value_path == "mAddr")
    {
        maddr.yfilter = yfilter;
    }
    if(value_path == "numMaddr")
    {
        nummaddr.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "proxyArp")
    {
        proxyarp.yfilter = yfilter;
    }
    if(value_path == "localProxyArp")
    {
        localproxyarp.yfilter = yfilter;
    }
    if(value_path == "mRouting")
    {
        mrouting.yfilter = yfilter;
    }
    if(value_path == "icmpRedirect")
    {
        icmpredirect.yfilter = yfilter;
    }
    if(value_path == "directBcast")
    {
        directbcast.yfilter = yfilter;
    }
    if(value_path == "ipUnreach")
    {
        ipunreach.yfilter = yfilter;
    }
    if(value_path == "portUnreach")
    {
        portunreach.yfilter = yfilter;
    }
    if(value_path == "urpfMode")
    {
        urpfmode.yfilter = yfilter;
    }
    if(value_path == "ipLoadSharing")
    {
        iploadsharing.yfilter = yfilter;
    }
    if(value_path == "aclIn")
    {
        aclin.yfilter = yfilter;
    }
    if(value_path == "aclOut")
    {
        aclout.yfilter = yfilter;
    }
    if(value_path == "statsLastReset")
    {
        statslastreset.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iodValue" || name == "vrfNameOut" || name == "protoState" || name == "linkState" || name == "adminState" || name == "priAddr" || name == "priSubnet" || name == "priMasklen" || name == "priRoutePref" || name == "priTag" || name == "secAddr" || name == "secAddrSubnet" || name == "secAddrMasklen" || name == "secAddrRoutePref" || name == "secAddrTag" || name == "numAddr" || name == "vaddrClient" || name == "vaddrPrefix" || name == "vaddrSubnet" || name == "vaddrMasklen" || name == "numVaddr" || name == "unnumIntf" || name == "firstIod" || name == "unnumChildIntf" || name == "ipDisabled" || name == "bcastAddr" || name == "mAddr" || name == "numMaddr" || name == "mtu" || name == "pref" || name == "tag" || name == "proxyArp" || name == "localProxyArp" || name == "mRouting" || name == "icmpRedirect" || name == "directBcast" || name == "ipUnreach" || name == "portUnreach" || name == "urpfMode" || name == "ipLoadSharing" || name == "aclIn" || name == "aclOut" || name == "statsLastReset")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::RpolItems()
    :
    rmapname{YType::str, "rmapname"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "rpol-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::~RpolItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::has_data() const
{
    if (is_presence_container) return true;
    return rmapname.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rmapname.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rmapname.is_set || is_set(rmapname.yfilter)) leaf_name_data.push_back(rmapname.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rmapname")
    {
        rmapname = value;
        rmapname.value_namespace = name_space;
        rmapname.value_namespace_prefix = name_space_prefix;
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

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rmapname")
    {
        rmapname.yfilter = yfilter;
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

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rmapname" || name == "name" || name == "descr")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastrtItems()
    :
    multicastroute_list(this, {"prefix"})
{

    yang_name = "multicastrt-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::~MulticastrtItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<multicastroute_list.len(); index++)
    {
        if(multicastroute_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::has_operation() const
{
    for (std::size_t index=0; index<multicastroute_list.len(); index++)
    {
        if(multicastroute_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicastrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MulticastRoute-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList>();
        ent_->parent = this;
        multicastroute_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : multicastroute_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MulticastRoute-list")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::MulticastRouteList()
    :
    prefix{YType::str, "prefix"}
        ,
    nh_items(std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::NhItems>())
{
    nh_items->parent = this;

    yang_name = "MulticastRoute-list"; yang_parent_name = "multicastrt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::~MulticastRouteList()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (nh_items !=  nullptr && nh_items->has_data());
}

bool System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation());
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MulticastRoute-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::NhItems>();
        }
        return nh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nh_items != nullptr)
    {
        _children["nh-items"] = nh_items;
    }

    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "prefix")
        return true;
    return false;
}

System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::NhItems::NhItems()
    :
    multicastnexthop_list(this, {"nhif", "nhaddr", "nhvrf"})
{

    yang_name = "nh-items"; yang_parent_name = "MulticastRoute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::NhItems::~NhItems()
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<multicastnexthop_list.len(); index++)
    {
        if(multicastnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<multicastnexthop_list.len(); index++)
    {
        if(multicastnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MulticastNexthop-list")
    {
        auto ent_ = std::make_shared<System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::NhItems::MulticastNexthopList>();
        ent_->parent = this;
        multicastnexthop_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : multicastnexthop_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ipv4Items::InstItems::DomItems::DomList::MulticastrtItems::MulticastRouteList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MulticastNexthop-list")
        return true;
    return false;
}

const Enum::YLeaf System::IntfItems::AggrItems::AggrIfList::SuspIndividual::enable {1, "enable"};
const Enum::YLeaf System::IntfItems::AggrItems::AggrIfList::SuspIndividual::disable {0, "disable"};

const Enum::YLeaf System::IntfItems::AggrItems::AggrIfList::GracefulConv::enable {1, "enable"};
const Enum::YLeaf System::IntfItems::AggrItems::AggrIfList::GracefulConv::disable {0, "disable"};

const Enum::YLeaf System::IntfItems::AggrItems::AggrIfList::LoadDefer::enable {1, "enable"};
const Enum::YLeaf System::IntfItems::AggrItems::AggrIfList::LoadDefer::disable {0, "disable"};

const Enum::YLeaf System::IntfItems::AggrItems::AggrIfList::LacpDelayMode::enable {1, "enable"};
const Enum::YLeaf System::IntfItems::AggrItems::AggrIfList::LacpDelayMode::disable {0, "disable"};

const Enum::YLeaf System::IntfItems::AggrItems::AggrIfList::LacpVpcConvergence::enable {1, "enable"};
const Enum::YLeaf System::IntfItems::AggrItems::AggrIfList::LacpVpcConvergence::disable {0, "disable"};

const Enum::YLeaf System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DirectedBroadcast::disabled {0, "disabled"};
const Enum::YLeaf System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DirectedBroadcast::enabled {1, "enabled"};


}
}

