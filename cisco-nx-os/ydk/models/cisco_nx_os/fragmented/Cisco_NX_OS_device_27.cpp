
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_27.hpp"
#include "Cisco_NX_OS_device_28.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MplsExperimentalItems()
    :
    mplsexperimental_list(this, {"val"})
{

    yang_name = "mplsExperimental-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::~MplsExperimentalItems()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsexperimental_list.len(); index++)
    {
        if(mplsexperimental_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::has_operation() const
{
    for (std::size_t index=0; index<mplsexperimental_list.len(); index++)
    {
        if(mplsexperimental_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsExperimental-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MPLSExperimental-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList>();
        ent_->parent = this;
        mplsexperimental_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mplsexperimental_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MPLSExperimental-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::MPLSExperimentalList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "MPLSExperimental-list"; yang_parent_name = "mplsExperimental-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::~MPLSExperimentalList()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLSExperimental-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceItems()
    :
    precedence_list(this, {"val"})
{

    yang_name = "precedence-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::~PrecedenceItems()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<precedence_list.len(); index++)
    {
        if(precedence_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::has_operation() const
{
    for (std::size_t index=0; index<precedence_list.len(); index++)
    {
        if(precedence_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Precedence-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList>();
        ent_->parent = this;
        precedence_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : precedence_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Precedence-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::PrecedenceList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Precedence-list"; yang_parent_name = "precedence-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::~PrecedenceList()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Precedence-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolItems()
    :
    protocol_list(this, {"val"})
{

    yang_name = "protocol-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::~ProtocolItems()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol_list.len(); index++)
    {
        if(protocol_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::has_operation() const
{
    for (std::size_t index=0; index<protocol_list.len(); index++)
    {
        if(protocol_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Protocol-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList>();
        ent_->parent = this;
        protocol_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Protocol-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::ProtocolList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Protocol-list"; yang_parent_name = "protocol-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::~ProtocolList()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Protocol-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DescriptionItems::DescriptionItems()
    :
    val{YType::str, "val"}
{

    yang_name = "Description-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DescriptionItems::~DescriptionItems()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DescriptionItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DescriptionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DescriptionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Description-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DescriptionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DescriptionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DescriptionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DescriptionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DescriptionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DescriptionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::DscpNotItems()
    :
    notdscp_list(this, {"val"})
{

    yang_name = "dscpNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::~DscpNotItems()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notdscp_list.len(); index++)
    {
        if(notdscp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::has_operation() const
{
    for (std::size_t index=0; index<notdscp_list.len(); index++)
    {
        if(notdscp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscpNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotDscp-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList>();
        ent_->parent = this;
        notdscp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notdscp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotDscp-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::NotDscpList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotDscp-list"; yang_parent_name = "dscpNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::~NotDscpList()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotDscp-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::CosNotItems()
    :
    notcos_list(this, {"val"})
{

    yang_name = "cosNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::~CosNotItems()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notcos_list.len(); index++)
    {
        if(notcos_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::has_operation() const
{
    for (std::size_t index=0; index<notcos_list.len(); index++)
    {
        if(notcos_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cosNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotCos-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList>();
        ent_->parent = this;
        notcos_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notcos_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotCos-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::NotCosList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotCos-list"; yang_parent_name = "cosNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::~NotCosList()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotCos-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::MplsExperimentalNotItems()
    :
    notmplsexperimental_list(this, {"val"})
{

    yang_name = "mplsExperimentalNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::~MplsExperimentalNotItems()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notmplsexperimental_list.len(); index++)
    {
        if(notmplsexperimental_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::has_operation() const
{
    for (std::size_t index=0; index<notmplsexperimental_list.len(); index++)
    {
        if(notmplsexperimental_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsExperimentalNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotMPLSExperimental-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList>();
        ent_->parent = this;
        notmplsexperimental_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notmplsexperimental_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotMPLSExperimental-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::NotMPLSExperimentalList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotMPLSExperimental-list"; yang_parent_name = "mplsExperimentalNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::~NotMPLSExperimentalList()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotMPLSExperimental-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::PrecedenceNotItems()
    :
    notprecedence_list(this, {"val"})
{

    yang_name = "precedenceNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::~PrecedenceNotItems()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notprecedence_list.len(); index++)
    {
        if(notprecedence_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::has_operation() const
{
    for (std::size_t index=0; index<notprecedence_list.len(); index++)
    {
        if(notprecedence_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedenceNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotPrecedence-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList>();
        ent_->parent = this;
        notprecedence_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notprecedence_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotPrecedence-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::NotPrecedenceList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotPrecedence-list"; yang_parent_name = "precedenceNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::~NotPrecedenceList()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotPrecedence-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::ProtocolNotItems()
    :
    notprotocol_list(this, {"val"})
{

    yang_name = "protocolNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::~ProtocolNotItems()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<notprotocol_list.len(); index++)
    {
        if(notprotocol_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::has_operation() const
{
    for (std::size_t index=0; index<notprotocol_list.len(); index++)
    {
        if(notprotocol_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NotProtocol-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList>();
        ent_->parent = this;
        notprotocol_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : notprotocol_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NotProtocol-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::NotProtocolList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "NotProtocol-list"; yang_parent_name = "protocolNot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::~NotProtocolList()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NotProtocol-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::IpRtpNotItems::IpRtpNotItems()
    :
    configstatus{YType::uint32, "configStatus"},
    range{YType::str, "range"}
{

    yang_name = "ipRtpNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::IpRtpNotItems::~IpRtpNotItems()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::IpRtpNotItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set
	|| range.is_set;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::IpRtpNotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipRtpNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::IpRtpNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::IpRtpNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::IpRtpNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::IpRtpNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus" || name == "range")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::PacketLengthNotItems()
    :
    configstatus{YType::uint32, "configStatus"},
    range{YType::str, "range"}
{

    yang_name = "packetLengthNot-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::~PacketLengthNotItems()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set
	|| range.is_set;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packetLengthNot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::PacketLengthNotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus" || name == "range")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::GrpItems()
    :
    qosgrp_list(this, {"id"})
{

    yang_name = "grp-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::~GrpItems()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qosgrp_list.len(); index++)
    {
        if(qosgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::has_operation() const
{
    for (std::size_t index=0; index<qosgrp_list.len(); index++)
    {
        if(qosgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QoSGrp-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList>();
        ent_->parent = this;
        qosgrp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qosgrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QoSGrp-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::QoSGrpList()
    :
    id{YType::uint16, "id"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "QoSGrp-list"; yang_parent_name = "grp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::~QoSGrpList()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QoSGrp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsclassMapToPolicyMapItems()
    :
    rsclassmaptopolicymap_list(this, {"tdn"})
{

    yang_name = "rsclassMapToPolicyMap-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::~RsclassMapToPolicyMapItems()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsclassmaptopolicymap_list.len(); index++)
    {
        if(rsclassmaptopolicymap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::has_operation() const
{
    for (std::size_t index=0; index<rsclassmaptopolicymap_list.len(); index++)
    {
        if(rsclassmaptopolicymap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsclassMapToPolicyMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsClassMapToPolicyMap-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList>();
        ent_->parent = this;
        rsclassmaptopolicymap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsclassmaptopolicymap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsClassMapToPolicyMap-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::RsClassMapToPolicyMapList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsClassMapToPolicyMap-list"; yang_parent_name = "rsclassMapToPolicyMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::~RsClassMapToPolicyMapList()
{
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsClassMapToPolicyMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::PItems()
    :
    name_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems>())
{
    name_items->parent = this;

    yang_name = "p-items"; yang_parent_name = "dflt-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::DfltItems::PItems::~PItems()
{
}

bool System::IpqosItems::DfltItems::PItems::has_data() const
{
    if (is_presence_container) return true;
    return (name_items !=  nullptr && name_items->has_data());
}

bool System::IpqosItems::DfltItems::PItems::has_operation() const
{
    return is_set(yfilter)
	|| (name_items !=  nullptr && name_items->has_operation());
}

std::string System::IpqosItems::DfltItems::PItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/dflt-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::DfltItems::PItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-items")
    {
        if(name_items == nullptr)
        {
            name_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems>();
        }
        return name_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_items != nullptr)
    {
        _children["name-items"] = name_items;
    }

    return _children;
}

void System::IpqosItems::DfltItems::PItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::PItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::PItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-items")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::NameItems()
    :
    pmapinst_list(this, {"name"})
{

    yang_name = "name-items"; yang_parent_name = "p-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::DfltItems::PItems::NameItems::~NameItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pmapinst_list.len(); index++)
    {
        if(pmapinst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::has_operation() const
{
    for (std::size_t index=0; index<pmapinst_list.len(); index++)
    {
        if(pmapinst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/dflt-items/p-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PMapInst-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList>();
        ent_->parent = this;
        pmapinst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pmapinst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::PItems::NameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PMapInst-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::PMapInstList()
    :
    name{YType::str, "name"},
    matchtype{YType::enumeration, "matchType"},
    refcount{YType::uint32, "refCount"},
    configstatus{YType::uint32, "configStatus"}
        ,
    cmap_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems>())
    , description_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems>())
    , rtipqospolicyinsttopmap_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems>())
    , rtclassmaptopolicymap_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems>())
{
    cmap_items->parent = this;
    description_items->parent = this;
    rtipqospolicyinsttopmap_items->parent = this;
    rtclassmaptopolicymap_items->parent = this;

    yang_name = "PMapInst-list"; yang_parent_name = "name-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::~PMapInstList()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| matchtype.is_set
	|| refcount.is_set
	|| configstatus.is_set
	|| (cmap_items !=  nullptr && cmap_items->has_data())
	|| (description_items !=  nullptr && description_items->has_data())
	|| (rtipqospolicyinsttopmap_items !=  nullptr && rtipqospolicyinsttopmap_items->has_data())
	|| (rtclassmaptopolicymap_items !=  nullptr && rtclassmaptopolicymap_items->has_data());
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(matchtype.yfilter)
	|| ydk::is_set(refcount.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (cmap_items !=  nullptr && cmap_items->has_operation())
	|| (description_items !=  nullptr && description_items->has_operation())
	|| (rtipqospolicyinsttopmap_items !=  nullptr && rtipqospolicyinsttopmap_items->has_operation())
	|| (rtclassmaptopolicymap_items !=  nullptr && rtclassmaptopolicymap_items->has_operation());
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/dflt-items/p-items/name-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PMapInst-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (matchtype.is_set || is_set(matchtype.yfilter)) leaf_name_data.push_back(matchtype.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems>();
        }
        return cmap_items;
    }

    if(child_yang_name == "Description-items")
    {
        if(description_items == nullptr)
        {
            description_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems>();
        }
        return description_items;
    }

    if(child_yang_name == "rtipqosPolicyInstToPMap-items")
    {
        if(rtipqospolicyinsttopmap_items == nullptr)
        {
            rtipqospolicyinsttopmap_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems>();
        }
        return rtipqospolicyinsttopmap_items;
    }

    if(child_yang_name == "rtclassMapToPolicyMap-items")
    {
        if(rtclassmaptopolicymap_items == nullptr)
        {
            rtclassmaptopolicymap_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems>();
        }
        return rtclassmaptopolicymap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cmap_items != nullptr)
    {
        _children["cmap-items"] = cmap_items;
    }

    if(description_items != nullptr)
    {
        _children["Description-items"] = description_items;
    }

    if(rtipqospolicyinsttopmap_items != nullptr)
    {
        _children["rtipqosPolicyInstToPMap-items"] = rtipqospolicyinsttopmap_items;
    }

    if(rtclassmaptopolicymap_items != nullptr)
    {
        _children["rtclassMapToPolicyMap-items"] = rtclassmaptopolicymap_items;
    }

    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchType")
    {
        matchtype = value;
        matchtype.value_namespace = name_space;
        matchtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refCount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "matchType")
    {
        matchtype.yfilter = yfilter;
    }
    if(value_path == "refCount")
    {
        refcount.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmap-items" || name == "Description-items" || name == "rtipqosPolicyInstToPMap-items" || name == "rtclassMapToPolicyMap-items" || name == "name" || name == "matchType" || name == "refCount" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::CmapItems()
    :
    matchcmap_list(this, {"name"})
{

    yang_name = "cmap-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::~CmapItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchcmap_list.len(); index++)
    {
        if(matchcmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::has_operation() const
{
    for (std::size_t index=0; index<matchcmap_list.len(); index++)
    {
        if(matchcmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchCMap-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList>();
        ent_->parent = this;
        matchcmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matchcmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchCMap-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MatchCMapList()
    :
    name{YType::str, "name"},
    prevcmap{YType::str, "prevCMap"},
    nextcmap{YType::str, "nextCMap"},
    configstatus{YType::uint32, "configStatus"}
        ,
    setcos_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems>())
    , mtu_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems>())
    , setprecedence_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems>())
    , setdscp_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems>())
    , setgrp_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems>())
    , setdlbdisable_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems>())
    , queuelimit_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems>())
    , pause_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems>())
    , dpp_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems>())
    , setbw_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems>())
    , setrembw_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems>())
    , shape_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems>())
    , police_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems>())
    , prio_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems>())
    , randdet_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems>())
    , randdetnonecn_items(std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems>())
{
    setcos_items->parent = this;
    mtu_items->parent = this;
    setprecedence_items->parent = this;
    setdscp_items->parent = this;
    setgrp_items->parent = this;
    setdlbdisable_items->parent = this;
    queuelimit_items->parent = this;
    pause_items->parent = this;
    dpp_items->parent = this;
    setbw_items->parent = this;
    setrembw_items->parent = this;
    shape_items->parent = this;
    police_items->parent = this;
    prio_items->parent = this;
    randdet_items->parent = this;
    randdetnonecn_items->parent = this;

    yang_name = "MatchCMap-list"; yang_parent_name = "cmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::~MatchCMapList()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| prevcmap.is_set
	|| nextcmap.is_set
	|| configstatus.is_set
	|| (setcos_items !=  nullptr && setcos_items->has_data())
	|| (mtu_items !=  nullptr && mtu_items->has_data())
	|| (setprecedence_items !=  nullptr && setprecedence_items->has_data())
	|| (setdscp_items !=  nullptr && setdscp_items->has_data())
	|| (setgrp_items !=  nullptr && setgrp_items->has_data())
	|| (setdlbdisable_items !=  nullptr && setdlbdisable_items->has_data())
	|| (queuelimit_items !=  nullptr && queuelimit_items->has_data())
	|| (pause_items !=  nullptr && pause_items->has_data())
	|| (dpp_items !=  nullptr && dpp_items->has_data())
	|| (setbw_items !=  nullptr && setbw_items->has_data())
	|| (setrembw_items !=  nullptr && setrembw_items->has_data())
	|| (shape_items !=  nullptr && shape_items->has_data())
	|| (police_items !=  nullptr && police_items->has_data())
	|| (prio_items !=  nullptr && prio_items->has_data())
	|| (randdet_items !=  nullptr && randdet_items->has_data())
	|| (randdetnonecn_items !=  nullptr && randdetnonecn_items->has_data());
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(prevcmap.yfilter)
	|| ydk::is_set(nextcmap.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (setcos_items !=  nullptr && setcos_items->has_operation())
	|| (mtu_items !=  nullptr && mtu_items->has_operation())
	|| (setprecedence_items !=  nullptr && setprecedence_items->has_operation())
	|| (setdscp_items !=  nullptr && setdscp_items->has_operation())
	|| (setgrp_items !=  nullptr && setgrp_items->has_operation())
	|| (setdlbdisable_items !=  nullptr && setdlbdisable_items->has_operation())
	|| (queuelimit_items !=  nullptr && queuelimit_items->has_operation())
	|| (pause_items !=  nullptr && pause_items->has_operation())
	|| (dpp_items !=  nullptr && dpp_items->has_operation())
	|| (setbw_items !=  nullptr && setbw_items->has_operation())
	|| (setrembw_items !=  nullptr && setrembw_items->has_operation())
	|| (shape_items !=  nullptr && shape_items->has_operation())
	|| (police_items !=  nullptr && police_items->has_operation())
	|| (prio_items !=  nullptr && prio_items->has_operation())
	|| (randdet_items !=  nullptr && randdet_items->has_operation())
	|| (randdetnonecn_items !=  nullptr && randdetnonecn_items->has_operation());
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchCMap-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (prevcmap.is_set || is_set(prevcmap.yfilter)) leaf_name_data.push_back(prevcmap.get_name_leafdata());
    if (nextcmap.is_set || is_set(nextcmap.yfilter)) leaf_name_data.push_back(nextcmap.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "setCos-items")
    {
        if(setcos_items == nullptr)
        {
            setcos_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems>();
        }
        return setcos_items;
    }

    if(child_yang_name == "mtu-items")
    {
        if(mtu_items == nullptr)
        {
            mtu_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems>();
        }
        return mtu_items;
    }

    if(child_yang_name == "setPrecedence-items")
    {
        if(setprecedence_items == nullptr)
        {
            setprecedence_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems>();
        }
        return setprecedence_items;
    }

    if(child_yang_name == "setDscp-items")
    {
        if(setdscp_items == nullptr)
        {
            setdscp_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems>();
        }
        return setdscp_items;
    }

    if(child_yang_name == "setGrp-items")
    {
        if(setgrp_items == nullptr)
        {
            setgrp_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems>();
        }
        return setgrp_items;
    }

    if(child_yang_name == "setDlbDisable-items")
    {
        if(setdlbdisable_items == nullptr)
        {
            setdlbdisable_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems>();
        }
        return setdlbdisable_items;
    }

    if(child_yang_name == "QueueLimit-items")
    {
        if(queuelimit_items == nullptr)
        {
            queuelimit_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems>();
        }
        return queuelimit_items;
    }

    if(child_yang_name == "pause-items")
    {
        if(pause_items == nullptr)
        {
            pause_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems>();
        }
        return pause_items;
    }

    if(child_yang_name == "dpp-items")
    {
        if(dpp_items == nullptr)
        {
            dpp_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems>();
        }
        return dpp_items;
    }

    if(child_yang_name == "setBW-items")
    {
        if(setbw_items == nullptr)
        {
            setbw_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems>();
        }
        return setbw_items;
    }

    if(child_yang_name == "setRemBW-items")
    {
        if(setrembw_items == nullptr)
        {
            setrembw_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems>();
        }
        return setrembw_items;
    }

    if(child_yang_name == "shape-items")
    {
        if(shape_items == nullptr)
        {
            shape_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems>();
        }
        return shape_items;
    }

    if(child_yang_name == "police-items")
    {
        if(police_items == nullptr)
        {
            police_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems>();
        }
        return police_items;
    }

    if(child_yang_name == "prio-items")
    {
        if(prio_items == nullptr)
        {
            prio_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems>();
        }
        return prio_items;
    }

    if(child_yang_name == "RandDet-items")
    {
        if(randdet_items == nullptr)
        {
            randdet_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems>();
        }
        return randdet_items;
    }

    if(child_yang_name == "RandDetNonEcn-items")
    {
        if(randdetnonecn_items == nullptr)
        {
            randdetnonecn_items = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems>();
        }
        return randdetnonecn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(setcos_items != nullptr)
    {
        _children["setCos-items"] = setcos_items;
    }

    if(mtu_items != nullptr)
    {
        _children["mtu-items"] = mtu_items;
    }

    if(setprecedence_items != nullptr)
    {
        _children["setPrecedence-items"] = setprecedence_items;
    }

    if(setdscp_items != nullptr)
    {
        _children["setDscp-items"] = setdscp_items;
    }

    if(setgrp_items != nullptr)
    {
        _children["setGrp-items"] = setgrp_items;
    }

    if(setdlbdisable_items != nullptr)
    {
        _children["setDlbDisable-items"] = setdlbdisable_items;
    }

    if(queuelimit_items != nullptr)
    {
        _children["QueueLimit-items"] = queuelimit_items;
    }

    if(pause_items != nullptr)
    {
        _children["pause-items"] = pause_items;
    }

    if(dpp_items != nullptr)
    {
        _children["dpp-items"] = dpp_items;
    }

    if(setbw_items != nullptr)
    {
        _children["setBW-items"] = setbw_items;
    }

    if(setrembw_items != nullptr)
    {
        _children["setRemBW-items"] = setrembw_items;
    }

    if(shape_items != nullptr)
    {
        _children["shape-items"] = shape_items;
    }

    if(police_items != nullptr)
    {
        _children["police-items"] = police_items;
    }

    if(prio_items != nullptr)
    {
        _children["prio-items"] = prio_items;
    }

    if(randdet_items != nullptr)
    {
        _children["RandDet-items"] = randdet_items;
    }

    if(randdetnonecn_items != nullptr)
    {
        _children["RandDetNonEcn-items"] = randdetnonecn_items;
    }

    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevCMap")
    {
        prevcmap = value;
        prevcmap.value_namespace = name_space;
        prevcmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextCMap")
    {
        nextcmap = value;
        nextcmap.value_namespace = name_space;
        nextcmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "prevCMap")
    {
        prevcmap.yfilter = yfilter;
    }
    if(value_path == "nextCMap")
    {
        nextcmap.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setCos-items" || name == "mtu-items" || name == "setPrecedence-items" || name == "setDscp-items" || name == "setGrp-items" || name == "setDlbDisable-items" || name == "QueueLimit-items" || name == "pause-items" || name == "dpp-items" || name == "setBW-items" || name == "setRemBW-items" || name == "shape-items" || name == "police-items" || name == "prio-items" || name == "RandDet-items" || name == "RandDetNonEcn-items" || name == "name" || name == "prevCMap" || name == "nextCMap" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::SetCosItems()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setCos-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::~SetCosItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setCos-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::MtuItems()
    :
    value_{YType::uint16, "value"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "mtu-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::~MtuItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::SetPrecedenceItems()
    :
    val{YType::enumeration, "val"},
    tunnel{YType::boolean, "tunnel"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setPrecedence-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::~SetPrecedenceItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| tunnel.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setPrecedence-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "tunnel" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::SetDscpItems()
    :
    val{YType::uint8, "val"},
    tunnel{YType::boolean, "tunnel"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setDscp-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::~SetDscpItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| tunnel.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setDscp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "tunnel" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::SetGrpItems()
    :
    id{YType::uint16, "id"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setGrp-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::~SetGrpItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setGrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::SetDlbDisableItems()
    :
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setDlbDisable-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::~SetDlbDisableItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setDlbDisable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::QueueLimitItems()
    :
    queuelimitval{YType::uint64, "QueueLimitVal"},
    queuelimitunit{YType::enumeration, "QueueLimitUnit"},
    dynamic{YType::uint8, "dynamic"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "QueueLimit-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::~QueueLimitItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::has_data() const
{
    if (is_presence_container) return true;
    return queuelimitval.is_set
	|| queuelimitunit.is_set
	|| dynamic.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queuelimitval.yfilter)
	|| ydk::is_set(queuelimitunit.yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QueueLimit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queuelimitval.is_set || is_set(queuelimitval.yfilter)) leaf_name_data.push_back(queuelimitval.get_name_leafdata());
    if (queuelimitunit.is_set || is_set(queuelimitunit.yfilter)) leaf_name_data.push_back(queuelimitunit.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "QueueLimitVal")
    {
        queuelimitval = value;
        queuelimitval.value_namespace = name_space;
        queuelimitval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "QueueLimitUnit")
    {
        queuelimitunit = value;
        queuelimitunit.value_namespace = name_space;
        queuelimitunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "QueueLimitVal")
    {
        queuelimitval.yfilter = yfilter;
    }
    if(value_path == "QueueLimitUnit")
    {
        queuelimitunit.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QueueLimitVal" || name == "QueueLimitUnit" || name == "dynamic" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::PauseItems()
    :
    buffersize{YType::uint64, "bufferSize"},
    pausethreshold{YType::uint64, "pauseThreshold"},
    resumethreshold{YType::uint64, "resumeThreshold"},
    pfccos0{YType::boolean, "pfcCos0"},
    pfccos1{YType::boolean, "pfcCos1"},
    pfccos2{YType::boolean, "pfcCos2"},
    pfccos3{YType::boolean, "pfcCos3"},
    pfccos4{YType::boolean, "pfcCos4"},
    pfccos5{YType::boolean, "pfcCos5"},
    pfccos6{YType::boolean, "pfcCos6"},
    pfccos7{YType::boolean, "pfcCos7"},
    receive{YType::boolean, "receive"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "pause-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::~PauseItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::has_data() const
{
    if (is_presence_container) return true;
    return buffersize.is_set
	|| pausethreshold.is_set
	|| resumethreshold.is_set
	|| pfccos0.is_set
	|| pfccos1.is_set
	|| pfccos2.is_set
	|| pfccos3.is_set
	|| pfccos4.is_set
	|| pfccos5.is_set
	|| pfccos6.is_set
	|| pfccos7.is_set
	|| receive.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buffersize.yfilter)
	|| ydk::is_set(pausethreshold.yfilter)
	|| ydk::is_set(resumethreshold.yfilter)
	|| ydk::is_set(pfccos0.yfilter)
	|| ydk::is_set(pfccos1.yfilter)
	|| ydk::is_set(pfccos2.yfilter)
	|| ydk::is_set(pfccos3.yfilter)
	|| ydk::is_set(pfccos4.yfilter)
	|| ydk::is_set(pfccos5.yfilter)
	|| ydk::is_set(pfccos6.yfilter)
	|| ydk::is_set(pfccos7.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffersize.is_set || is_set(buffersize.yfilter)) leaf_name_data.push_back(buffersize.get_name_leafdata());
    if (pausethreshold.is_set || is_set(pausethreshold.yfilter)) leaf_name_data.push_back(pausethreshold.get_name_leafdata());
    if (resumethreshold.is_set || is_set(resumethreshold.yfilter)) leaf_name_data.push_back(resumethreshold.get_name_leafdata());
    if (pfccos0.is_set || is_set(pfccos0.yfilter)) leaf_name_data.push_back(pfccos0.get_name_leafdata());
    if (pfccos1.is_set || is_set(pfccos1.yfilter)) leaf_name_data.push_back(pfccos1.get_name_leafdata());
    if (pfccos2.is_set || is_set(pfccos2.yfilter)) leaf_name_data.push_back(pfccos2.get_name_leafdata());
    if (pfccos3.is_set || is_set(pfccos3.yfilter)) leaf_name_data.push_back(pfccos3.get_name_leafdata());
    if (pfccos4.is_set || is_set(pfccos4.yfilter)) leaf_name_data.push_back(pfccos4.get_name_leafdata());
    if (pfccos5.is_set || is_set(pfccos5.yfilter)) leaf_name_data.push_back(pfccos5.get_name_leafdata());
    if (pfccos6.is_set || is_set(pfccos6.yfilter)) leaf_name_data.push_back(pfccos6.get_name_leafdata());
    if (pfccos7.is_set || is_set(pfccos7.yfilter)) leaf_name_data.push_back(pfccos7.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bufferSize")
    {
        buffersize = value;
        buffersize.value_namespace = name_space;
        buffersize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pauseThreshold")
    {
        pausethreshold = value;
        pausethreshold.value_namespace = name_space;
        pausethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resumeThreshold")
    {
        resumethreshold = value;
        resumethreshold.value_namespace = name_space;
        resumethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos0")
    {
        pfccos0 = value;
        pfccos0.value_namespace = name_space;
        pfccos0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos1")
    {
        pfccos1 = value;
        pfccos1.value_namespace = name_space;
        pfccos1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos2")
    {
        pfccos2 = value;
        pfccos2.value_namespace = name_space;
        pfccos2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos3")
    {
        pfccos3 = value;
        pfccos3.value_namespace = name_space;
        pfccos3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos4")
    {
        pfccos4 = value;
        pfccos4.value_namespace = name_space;
        pfccos4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos5")
    {
        pfccos5 = value;
        pfccos5.value_namespace = name_space;
        pfccos5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos6")
    {
        pfccos6 = value;
        pfccos6.value_namespace = name_space;
        pfccos6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos7")
    {
        pfccos7 = value;
        pfccos7.value_namespace = name_space;
        pfccos7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bufferSize")
    {
        buffersize.yfilter = yfilter;
    }
    if(value_path == "pauseThreshold")
    {
        pausethreshold.yfilter = yfilter;
    }
    if(value_path == "resumeThreshold")
    {
        resumethreshold.yfilter = yfilter;
    }
    if(value_path == "pfcCos0")
    {
        pfccos0.yfilter = yfilter;
    }
    if(value_path == "pfcCos1")
    {
        pfccos1.yfilter = yfilter;
    }
    if(value_path == "pfcCos2")
    {
        pfccos2.yfilter = yfilter;
    }
    if(value_path == "pfcCos3")
    {
        pfccos3.yfilter = yfilter;
    }
    if(value_path == "pfcCos4")
    {
        pfccos4.yfilter = yfilter;
    }
    if(value_path == "pfcCos5")
    {
        pfccos5.yfilter = yfilter;
    }
    if(value_path == "pfcCos6")
    {
        pfccos6.yfilter = yfilter;
    }
    if(value_path == "pfcCos7")
    {
        pfccos7.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bufferSize" || name == "pauseThreshold" || name == "resumeThreshold" || name == "pfcCos0" || name == "pfcCos1" || name == "pfcCos2" || name == "pfcCos3" || name == "pfcCos4" || name == "pfcCos5" || name == "pfcCos6" || name == "pfcCos7" || name == "receive" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::DppItems()
    :
    setqosgroup{YType::uint16, "setQosGroup"}
{

    yang_name = "dpp-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::~DppItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::has_data() const
{
    if (is_presence_container) return true;
    return setqosgroup.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setqosgroup.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setqosgroup.is_set || is_set(setqosgroup.yfilter)) leaf_name_data.push_back(setqosgroup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setQosGroup")
    {
        setqosgroup = value;
        setqosgroup.value_namespace = name_space;
        setqosgroup.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setQosGroup")
    {
        setqosgroup.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setQosGroup")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::SetBWItems()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setBW-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::~SetBWItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setBW-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::SetRemBWItems()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setRemBW-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::~SetRemBWItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setRemBW-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::ShapeItems()
    :
    min{YType::uint64, "min"},
    minrateunit{YType::enumeration, "minRateUnit"},
    max{YType::uint64, "max"},
    maxrateunit{YType::enumeration, "maxRateUnit"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "shape-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::~ShapeItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| minrateunit.is_set
	|| max.is_set
	|| maxrateunit.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(minrateunit.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(maxrateunit.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (minrateunit.is_set || is_set(minrateunit.yfilter)) leaf_name_data.push_back(minrateunit.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (maxrateunit.is_set || is_set(maxrateunit.yfilter)) leaf_name_data.push_back(maxrateunit.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRateUnit")
    {
        minrateunit = value;
        minrateunit.value_namespace = name_space;
        minrateunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRateUnit")
    {
        maxrateunit = value;
        maxrateunit.value_namespace = name_space;
        maxrateunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "minRateUnit")
    {
        minrateunit.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "maxRateUnit")
    {
        maxrateunit.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "minRateUnit" || name == "max" || name == "maxRateUnit" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::PoliceItems()
    :
    cirrate{YType::uint64, "cirRate"},
    cirunit{YType::enumeration, "cirUnit"},
    bcrate{YType::uint64, "bcRate"},
    bcunit{YType::enumeration, "bcUnit"},
    pirrate{YType::uint64, "pirRate"},
    pirunit{YType::enumeration, "pirUnit"},
    berate{YType::uint64, "beRate"},
    beunit{YType::enumeration, "beUnit"},
    conformaction{YType::enumeration, "conformAction"},
    conformsetcostransmit{YType::uint8, "conformSetCosTransmit"},
    conformsetdscptransmit{YType::uint8, "conformSetDscpTransmit"},
    conformsetprectransmit{YType::enumeration, "conformSetPrecTransmit"},
    conformsetqosgrptransmit{YType::uint16, "conformSetQosGrpTransmit"},
    exceedaction{YType::enumeration, "exceedAction"},
    exceedsetcostransmit{YType::uint8, "exceedSetCosTransmit"},
    exceedsetdscptransmit{YType::uint8, "exceedSetDscpTransmit"},
    exceedsetprectransmit{YType::enumeration, "exceedSetPrecTransmit"},
    exceedsetqosgrptransmit{YType::uint16, "exceedSetQosGrpTransmit"},
    violateaction{YType::enumeration, "violateAction"},
    violatesetcostransmit{YType::uint8, "violateSetCosTransmit"},
    violatesetdscptransmit{YType::uint8, "violateSetDscpTransmit"},
    violatesetprectransmit{YType::enumeration, "violateSetPrecTransmit"},
    violatesetqosgrptransmit{YType::uint16, "violateSetQosGrpTransmit"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "police-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::~PoliceItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::has_data() const
{
    if (is_presence_container) return true;
    return cirrate.is_set
	|| cirunit.is_set
	|| bcrate.is_set
	|| bcunit.is_set
	|| pirrate.is_set
	|| pirunit.is_set
	|| berate.is_set
	|| beunit.is_set
	|| conformaction.is_set
	|| conformsetcostransmit.is_set
	|| conformsetdscptransmit.is_set
	|| conformsetprectransmit.is_set
	|| conformsetqosgrptransmit.is_set
	|| exceedaction.is_set
	|| exceedsetcostransmit.is_set
	|| exceedsetdscptransmit.is_set
	|| exceedsetprectransmit.is_set
	|| exceedsetqosgrptransmit.is_set
	|| violateaction.is_set
	|| violatesetcostransmit.is_set
	|| violatesetdscptransmit.is_set
	|| violatesetprectransmit.is_set
	|| violatesetqosgrptransmit.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cirrate.yfilter)
	|| ydk::is_set(cirunit.yfilter)
	|| ydk::is_set(bcrate.yfilter)
	|| ydk::is_set(bcunit.yfilter)
	|| ydk::is_set(pirrate.yfilter)
	|| ydk::is_set(pirunit.yfilter)
	|| ydk::is_set(berate.yfilter)
	|| ydk::is_set(beunit.yfilter)
	|| ydk::is_set(conformaction.yfilter)
	|| ydk::is_set(conformsetcostransmit.yfilter)
	|| ydk::is_set(conformsetdscptransmit.yfilter)
	|| ydk::is_set(conformsetprectransmit.yfilter)
	|| ydk::is_set(conformsetqosgrptransmit.yfilter)
	|| ydk::is_set(exceedaction.yfilter)
	|| ydk::is_set(exceedsetcostransmit.yfilter)
	|| ydk::is_set(exceedsetdscptransmit.yfilter)
	|| ydk::is_set(exceedsetprectransmit.yfilter)
	|| ydk::is_set(exceedsetqosgrptransmit.yfilter)
	|| ydk::is_set(violateaction.yfilter)
	|| ydk::is_set(violatesetcostransmit.yfilter)
	|| ydk::is_set(violatesetdscptransmit.yfilter)
	|| ydk::is_set(violatesetprectransmit.yfilter)
	|| ydk::is_set(violatesetqosgrptransmit.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cirrate.is_set || is_set(cirrate.yfilter)) leaf_name_data.push_back(cirrate.get_name_leafdata());
    if (cirunit.is_set || is_set(cirunit.yfilter)) leaf_name_data.push_back(cirunit.get_name_leafdata());
    if (bcrate.is_set || is_set(bcrate.yfilter)) leaf_name_data.push_back(bcrate.get_name_leafdata());
    if (bcunit.is_set || is_set(bcunit.yfilter)) leaf_name_data.push_back(bcunit.get_name_leafdata());
    if (pirrate.is_set || is_set(pirrate.yfilter)) leaf_name_data.push_back(pirrate.get_name_leafdata());
    if (pirunit.is_set || is_set(pirunit.yfilter)) leaf_name_data.push_back(pirunit.get_name_leafdata());
    if (berate.is_set || is_set(berate.yfilter)) leaf_name_data.push_back(berate.get_name_leafdata());
    if (beunit.is_set || is_set(beunit.yfilter)) leaf_name_data.push_back(beunit.get_name_leafdata());
    if (conformaction.is_set || is_set(conformaction.yfilter)) leaf_name_data.push_back(conformaction.get_name_leafdata());
    if (conformsetcostransmit.is_set || is_set(conformsetcostransmit.yfilter)) leaf_name_data.push_back(conformsetcostransmit.get_name_leafdata());
    if (conformsetdscptransmit.is_set || is_set(conformsetdscptransmit.yfilter)) leaf_name_data.push_back(conformsetdscptransmit.get_name_leafdata());
    if (conformsetprectransmit.is_set || is_set(conformsetprectransmit.yfilter)) leaf_name_data.push_back(conformsetprectransmit.get_name_leafdata());
    if (conformsetqosgrptransmit.is_set || is_set(conformsetqosgrptransmit.yfilter)) leaf_name_data.push_back(conformsetqosgrptransmit.get_name_leafdata());
    if (exceedaction.is_set || is_set(exceedaction.yfilter)) leaf_name_data.push_back(exceedaction.get_name_leafdata());
    if (exceedsetcostransmit.is_set || is_set(exceedsetcostransmit.yfilter)) leaf_name_data.push_back(exceedsetcostransmit.get_name_leafdata());
    if (exceedsetdscptransmit.is_set || is_set(exceedsetdscptransmit.yfilter)) leaf_name_data.push_back(exceedsetdscptransmit.get_name_leafdata());
    if (exceedsetprectransmit.is_set || is_set(exceedsetprectransmit.yfilter)) leaf_name_data.push_back(exceedsetprectransmit.get_name_leafdata());
    if (exceedsetqosgrptransmit.is_set || is_set(exceedsetqosgrptransmit.yfilter)) leaf_name_data.push_back(exceedsetqosgrptransmit.get_name_leafdata());
    if (violateaction.is_set || is_set(violateaction.yfilter)) leaf_name_data.push_back(violateaction.get_name_leafdata());
    if (violatesetcostransmit.is_set || is_set(violatesetcostransmit.yfilter)) leaf_name_data.push_back(violatesetcostransmit.get_name_leafdata());
    if (violatesetdscptransmit.is_set || is_set(violatesetdscptransmit.yfilter)) leaf_name_data.push_back(violatesetdscptransmit.get_name_leafdata());
    if (violatesetprectransmit.is_set || is_set(violatesetprectransmit.yfilter)) leaf_name_data.push_back(violatesetprectransmit.get_name_leafdata());
    if (violatesetqosgrptransmit.is_set || is_set(violatesetqosgrptransmit.yfilter)) leaf_name_data.push_back(violatesetqosgrptransmit.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cirRate")
    {
        cirrate = value;
        cirrate.value_namespace = name_space;
        cirrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cirUnit")
    {
        cirunit = value;
        cirunit.value_namespace = name_space;
        cirunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcRate")
    {
        bcrate = value;
        bcrate.value_namespace = name_space;
        bcrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcUnit")
    {
        bcunit = value;
        bcunit.value_namespace = name_space;
        bcunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pirRate")
    {
        pirrate = value;
        pirrate.value_namespace = name_space;
        pirrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pirUnit")
    {
        pirunit = value;
        pirunit.value_namespace = name_space;
        pirunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "beRate")
    {
        berate = value;
        berate.value_namespace = name_space;
        berate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "beUnit")
    {
        beunit = value;
        beunit.value_namespace = name_space;
        beunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformAction")
    {
        conformaction = value;
        conformaction.value_namespace = name_space;
        conformaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetCosTransmit")
    {
        conformsetcostransmit = value;
        conformsetcostransmit.value_namespace = name_space;
        conformsetcostransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetDscpTransmit")
    {
        conformsetdscptransmit = value;
        conformsetdscptransmit.value_namespace = name_space;
        conformsetdscptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetPrecTransmit")
    {
        conformsetprectransmit = value;
        conformsetprectransmit.value_namespace = name_space;
        conformsetprectransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetQosGrpTransmit")
    {
        conformsetqosgrptransmit = value;
        conformsetqosgrptransmit.value_namespace = name_space;
        conformsetqosgrptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedAction")
    {
        exceedaction = value;
        exceedaction.value_namespace = name_space;
        exceedaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetCosTransmit")
    {
        exceedsetcostransmit = value;
        exceedsetcostransmit.value_namespace = name_space;
        exceedsetcostransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetDscpTransmit")
    {
        exceedsetdscptransmit = value;
        exceedsetdscptransmit.value_namespace = name_space;
        exceedsetdscptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetPrecTransmit")
    {
        exceedsetprectransmit = value;
        exceedsetprectransmit.value_namespace = name_space;
        exceedsetprectransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetQosGrpTransmit")
    {
        exceedsetqosgrptransmit = value;
        exceedsetqosgrptransmit.value_namespace = name_space;
        exceedsetqosgrptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateAction")
    {
        violateaction = value;
        violateaction.value_namespace = name_space;
        violateaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetCosTransmit")
    {
        violatesetcostransmit = value;
        violatesetcostransmit.value_namespace = name_space;
        violatesetcostransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetDscpTransmit")
    {
        violatesetdscptransmit = value;
        violatesetdscptransmit.value_namespace = name_space;
        violatesetdscptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetPrecTransmit")
    {
        violatesetprectransmit = value;
        violatesetprectransmit.value_namespace = name_space;
        violatesetprectransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetQosGrpTransmit")
    {
        violatesetqosgrptransmit = value;
        violatesetqosgrptransmit.value_namespace = name_space;
        violatesetqosgrptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cirRate")
    {
        cirrate.yfilter = yfilter;
    }
    if(value_path == "cirUnit")
    {
        cirunit.yfilter = yfilter;
    }
    if(value_path == "bcRate")
    {
        bcrate.yfilter = yfilter;
    }
    if(value_path == "bcUnit")
    {
        bcunit.yfilter = yfilter;
    }
    if(value_path == "pirRate")
    {
        pirrate.yfilter = yfilter;
    }
    if(value_path == "pirUnit")
    {
        pirunit.yfilter = yfilter;
    }
    if(value_path == "beRate")
    {
        berate.yfilter = yfilter;
    }
    if(value_path == "beUnit")
    {
        beunit.yfilter = yfilter;
    }
    if(value_path == "conformAction")
    {
        conformaction.yfilter = yfilter;
    }
    if(value_path == "conformSetCosTransmit")
    {
        conformsetcostransmit.yfilter = yfilter;
    }
    if(value_path == "conformSetDscpTransmit")
    {
        conformsetdscptransmit.yfilter = yfilter;
    }
    if(value_path == "conformSetPrecTransmit")
    {
        conformsetprectransmit.yfilter = yfilter;
    }
    if(value_path == "conformSetQosGrpTransmit")
    {
        conformsetqosgrptransmit.yfilter = yfilter;
    }
    if(value_path == "exceedAction")
    {
        exceedaction.yfilter = yfilter;
    }
    if(value_path == "exceedSetCosTransmit")
    {
        exceedsetcostransmit.yfilter = yfilter;
    }
    if(value_path == "exceedSetDscpTransmit")
    {
        exceedsetdscptransmit.yfilter = yfilter;
    }
    if(value_path == "exceedSetPrecTransmit")
    {
        exceedsetprectransmit.yfilter = yfilter;
    }
    if(value_path == "exceedSetQosGrpTransmit")
    {
        exceedsetqosgrptransmit.yfilter = yfilter;
    }
    if(value_path == "violateAction")
    {
        violateaction.yfilter = yfilter;
    }
    if(value_path == "violateSetCosTransmit")
    {
        violatesetcostransmit.yfilter = yfilter;
    }
    if(value_path == "violateSetDscpTransmit")
    {
        violatesetdscptransmit.yfilter = yfilter;
    }
    if(value_path == "violateSetPrecTransmit")
    {
        violatesetprectransmit.yfilter = yfilter;
    }
    if(value_path == "violateSetQosGrpTransmit")
    {
        violatesetqosgrptransmit.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cirRate" || name == "cirUnit" || name == "bcRate" || name == "bcUnit" || name == "pirRate" || name == "pirUnit" || name == "beRate" || name == "beUnit" || name == "conformAction" || name == "conformSetCosTransmit" || name == "conformSetDscpTransmit" || name == "conformSetPrecTransmit" || name == "conformSetQosGrpTransmit" || name == "exceedAction" || name == "exceedSetCosTransmit" || name == "exceedSetDscpTransmit" || name == "exceedSetPrecTransmit" || name == "exceedSetQosGrpTransmit" || name == "violateAction" || name == "violateSetCosTransmit" || name == "violateSetDscpTransmit" || name == "violateSetPrecTransmit" || name == "violateSetQosGrpTransmit" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::PrioItems()
    :
    level{YType::uint8, "level"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "prio-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::~PrioItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| configstatus.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prio-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::RandDetItems()
    :
    minthreshold{YType::uint32, "minThreshold"},
    minthresholdunit{YType::enumeration, "minThresholdUnit"},
    maxthreshold{YType::uint32, "maxThreshold"},
    maxthresholdunit{YType::enumeration, "maxThresholdUnit"},
    dropavail{YType::uint8, "dropAvail"},
    weight{YType::uint8, "weight"},
    capaverage{YType::boolean, "capAverage"},
    optimization{YType::uint8, "optimization"},
    ecn{YType::boolean, "ecn"}
{

    yang_name = "RandDet-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::~RandDetItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::has_data() const
{
    if (is_presence_container) return true;
    return minthreshold.is_set
	|| minthresholdunit.is_set
	|| maxthreshold.is_set
	|| maxthresholdunit.is_set
	|| dropavail.is_set
	|| weight.is_set
	|| capaverage.is_set
	|| optimization.is_set
	|| ecn.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minthreshold.yfilter)
	|| ydk::is_set(minthresholdunit.yfilter)
	|| ydk::is_set(maxthreshold.yfilter)
	|| ydk::is_set(maxthresholdunit.yfilter)
	|| ydk::is_set(dropavail.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(capaverage.yfilter)
	|| ydk::is_set(optimization.yfilter)
	|| ydk::is_set(ecn.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RandDet-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minthreshold.is_set || is_set(minthreshold.yfilter)) leaf_name_data.push_back(minthreshold.get_name_leafdata());
    if (minthresholdunit.is_set || is_set(minthresholdunit.yfilter)) leaf_name_data.push_back(minthresholdunit.get_name_leafdata());
    if (maxthreshold.is_set || is_set(maxthreshold.yfilter)) leaf_name_data.push_back(maxthreshold.get_name_leafdata());
    if (maxthresholdunit.is_set || is_set(maxthresholdunit.yfilter)) leaf_name_data.push_back(maxthresholdunit.get_name_leafdata());
    if (dropavail.is_set || is_set(dropavail.yfilter)) leaf_name_data.push_back(dropavail.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (capaverage.is_set || is_set(capaverage.yfilter)) leaf_name_data.push_back(capaverage.get_name_leafdata());
    if (optimization.is_set || is_set(optimization.yfilter)) leaf_name_data.push_back(optimization.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minThreshold")
    {
        minthreshold = value;
        minthreshold.value_namespace = name_space;
        minthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minThresholdUnit")
    {
        minthresholdunit = value;
        minthresholdunit.value_namespace = name_space;
        minthresholdunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThreshold")
    {
        maxthreshold = value;
        maxthreshold.value_namespace = name_space;
        maxthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThresholdUnit")
    {
        maxthresholdunit = value;
        maxthresholdunit.value_namespace = name_space;
        maxthresholdunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropAvail")
    {
        dropavail = value;
        dropavail.value_namespace = name_space;
        dropavail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capAverage")
    {
        capaverage = value;
        capaverage.value_namespace = name_space;
        capaverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optimization")
    {
        optimization = value;
        optimization.value_namespace = name_space;
        optimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minThreshold")
    {
        minthreshold.yfilter = yfilter;
    }
    if(value_path == "minThresholdUnit")
    {
        minthresholdunit.yfilter = yfilter;
    }
    if(value_path == "maxThreshold")
    {
        maxthreshold.yfilter = yfilter;
    }
    if(value_path == "maxThresholdUnit")
    {
        maxthresholdunit.yfilter = yfilter;
    }
    if(value_path == "dropAvail")
    {
        dropavail.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "capAverage")
    {
        capaverage.yfilter = yfilter;
    }
    if(value_path == "optimization")
    {
        optimization.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minThreshold" || name == "minThresholdUnit" || name == "maxThreshold" || name == "maxThresholdUnit" || name == "dropAvail" || name == "weight" || name == "capAverage" || name == "optimization" || name == "ecn")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::RandDetNonEcnItems()
    :
    minthresholdnonecn{YType::uint32, "minThresholdNonEcn"},
    minthresholdunitnonecn{YType::enumeration, "minThresholdUnitNonEcn"},
    maxthresholdnonecn{YType::uint32, "maxThresholdNonEcn"},
    maxthresholdunitnonecn{YType::enumeration, "maxThresholdUnitNonEcn"},
    dropavailnonecn{YType::uint8, "dropAvailNonEcn"}
{

    yang_name = "RandDetNonEcn-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::~RandDetNonEcnItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::has_data() const
{
    if (is_presence_container) return true;
    return minthresholdnonecn.is_set
	|| minthresholdunitnonecn.is_set
	|| maxthresholdnonecn.is_set
	|| maxthresholdunitnonecn.is_set
	|| dropavailnonecn.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minthresholdnonecn.yfilter)
	|| ydk::is_set(minthresholdunitnonecn.yfilter)
	|| ydk::is_set(maxthresholdnonecn.yfilter)
	|| ydk::is_set(maxthresholdunitnonecn.yfilter)
	|| ydk::is_set(dropavailnonecn.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RandDetNonEcn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minthresholdnonecn.is_set || is_set(minthresholdnonecn.yfilter)) leaf_name_data.push_back(minthresholdnonecn.get_name_leafdata());
    if (minthresholdunitnonecn.is_set || is_set(minthresholdunitnonecn.yfilter)) leaf_name_data.push_back(minthresholdunitnonecn.get_name_leafdata());
    if (maxthresholdnonecn.is_set || is_set(maxthresholdnonecn.yfilter)) leaf_name_data.push_back(maxthresholdnonecn.get_name_leafdata());
    if (maxthresholdunitnonecn.is_set || is_set(maxthresholdunitnonecn.yfilter)) leaf_name_data.push_back(maxthresholdunitnonecn.get_name_leafdata());
    if (dropavailnonecn.is_set || is_set(dropavailnonecn.yfilter)) leaf_name_data.push_back(dropavailnonecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minThresholdNonEcn")
    {
        minthresholdnonecn = value;
        minthresholdnonecn.value_namespace = name_space;
        minthresholdnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minThresholdUnitNonEcn")
    {
        minthresholdunitnonecn = value;
        minthresholdunitnonecn.value_namespace = name_space;
        minthresholdunitnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThresholdNonEcn")
    {
        maxthresholdnonecn = value;
        maxthresholdnonecn.value_namespace = name_space;
        maxthresholdnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThresholdUnitNonEcn")
    {
        maxthresholdunitnonecn = value;
        maxthresholdunitnonecn.value_namespace = name_space;
        maxthresholdunitnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropAvailNonEcn")
    {
        dropavailnonecn = value;
        dropavailnonecn.value_namespace = name_space;
        dropavailnonecn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minThresholdNonEcn")
    {
        minthresholdnonecn.yfilter = yfilter;
    }
    if(value_path == "minThresholdUnitNonEcn")
    {
        minthresholdunitnonecn.yfilter = yfilter;
    }
    if(value_path == "maxThresholdNonEcn")
    {
        maxthresholdnonecn.yfilter = yfilter;
    }
    if(value_path == "maxThresholdUnitNonEcn")
    {
        maxthresholdunitnonecn.yfilter = yfilter;
    }
    if(value_path == "dropAvailNonEcn")
    {
        dropavailnonecn.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minThresholdNonEcn" || name == "minThresholdUnitNonEcn" || name == "maxThresholdNonEcn" || name == "maxThresholdUnitNonEcn" || name == "dropAvailNonEcn")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::DescriptionItems()
    :
    val{YType::str, "val"}
{

    yang_name = "Description-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::~DescriptionItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Description-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtipqosPolicyInstToPMapItems()
    :
    rtipqospolicyinsttopmap_list(this, {"tdn"})
{

    yang_name = "rtipqosPolicyInstToPMap-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::~RtipqosPolicyInstToPMapItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtipqospolicyinsttopmap_list.len(); index++)
    {
        if(rtipqospolicyinsttopmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::has_operation() const
{
    for (std::size_t index=0; index<rtipqospolicyinsttopmap_list.len(); index++)
    {
        if(rtipqospolicyinsttopmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtipqosPolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtIpqosPolicyInstToPMap-list")
    {
        auto ent_ = std::make_shared<System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList>();
        ent_->parent = this;
        rtipqospolicyinsttopmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtipqospolicyinsttopmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtIpqosPolicyInstToPMap-list")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::RtIpqosPolicyInstToPMapList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtIpqosPolicyInstToPMap-list"; yang_parent_name = "rtipqosPolicyInstToPMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::~RtIpqosPolicyInstToPMapList()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtIpqosPolicyInstToPMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::RtclassMapToPolicyMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtclassMapToPolicyMap-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::~RtclassMapToPolicyMapItems()
{
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtclassMapToPolicyMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IpqosItems::DfltItems::CopyPMapItems::CopyPMapItems()
    :
    lastfrom{YType::str, "lastFrom"},
    lastto{YType::str, "lastTo"}
{

    yang_name = "copyPMap-items"; yang_parent_name = "dflt-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::DfltItems::CopyPMapItems::~CopyPMapItems()
{
}

bool System::IpqosItems::DfltItems::CopyPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return lastfrom.is_set
	|| lastto.is_set;
}

bool System::IpqosItems::DfltItems::CopyPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lastfrom.yfilter)
	|| ydk::is_set(lastto.yfilter);
}

std::string System::IpqosItems::DfltItems::CopyPMapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/dflt-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::DfltItems::CopyPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "copyPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::DfltItems::CopyPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lastfrom.is_set || is_set(lastfrom.yfilter)) leaf_name_data.push_back(lastfrom.get_name_leafdata());
    if (lastto.is_set || is_set(lastto.yfilter)) leaf_name_data.push_back(lastto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IpqosItems::DfltItems::CopyPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpqosItems::DfltItems::CopyPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IpqosItems::DfltItems::CopyPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastFrom")
    {
        lastfrom = value;
        lastfrom.value_namespace = name_space;
        lastfrom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastTo")
    {
        lastto = value;
        lastto.value_namespace = name_space;
        lastto.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::DfltItems::CopyPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastFrom")
    {
        lastfrom.yfilter = yfilter;
    }
    if(value_path == "lastTo")
    {
        lastto.yfilter = yfilter;
    }
}

bool System::IpqosItems::DfltItems::CopyPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastFrom" || name == "lastTo")
        return true;
    return false;
}

System::MonitorItems::MonitorItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    db_items(std::make_shared<System::MonitorItems::DbItems>())
    , session_items(std::make_shared<System::MonitorItems::SessionItems>())
{
    db_items->parent = this;
    session_items->parent = this;

    yang_name = "monitor-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MonitorItems::~MonitorItems()
{
}

bool System::MonitorItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (session_items !=  nullptr && session_items->has_data());
}

bool System::MonitorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (session_items !=  nullptr && session_items->has_operation());
}

std::string System::MonitorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::MonitorItems::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "session-items")
    {
        if(session_items == nullptr)
        {
            session_items = std::make_shared<System::MonitorItems::SessionItems>();
        }
        return session_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(session_items != nullptr)
    {
        _children["session-items"] = session_items;
    }

    return _children;
}

void System::MonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "session-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::MonitorItems::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "monitor-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MonitorItems::DbItems::~DbItems()
{
}

bool System::MonitorItems::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MonitorItems::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MonitorItems::DbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/monitor-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MonitorItems::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MonitorItems::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MonitorItems::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::MonitorItems::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MonitorItems::DbItems::get_children() const
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

void System::MonitorItems::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MonitorItems::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MonitorItems::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::MonitorItems::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    epr_items(std::make_shared<System::MonitorItems::DbItems::DbList::EprItems>())
{
    epr_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MonitorItems::DbItems::DbList::~DbList()
{
}

bool System::MonitorItems::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (epr_items !=  nullptr && epr_items->has_data());
}

bool System::MonitorItems::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (epr_items !=  nullptr && epr_items->has_operation());
}

std::string System::MonitorItems::DbItems::DbList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/monitor-items/db-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MonitorItems::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MonitorItems::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MonitorItems::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "epr-items")
    {
        if(epr_items == nullptr)
        {
            epr_items = std::make_shared<System::MonitorItems::DbItems::DbList::EprItems>();
        }
        return epr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MonitorItems::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(epr_items != nullptr)
    {
        _children["epr-items"] = epr_items;
    }

    return _children;
}

void System::MonitorItems::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MonitorItems::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MonitorItems::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "epr-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::MonitorItems::DbItems::DbList::EprItems::EprItems()
    :
    eprec_list(this, {"vnid", "ip"})
{

    yang_name = "epr-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MonitorItems::DbItems::DbList::EprItems::~EprItems()
{
}

bool System::MonitorItems::DbItems::DbList::EprItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eprec_list.len(); index++)
    {
        if(eprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MonitorItems::DbItems::DbList::EprItems::has_operation() const
{
    for (std::size_t index=0; index<eprec_list.len(); index++)
    {
        if(eprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MonitorItems::DbItems::DbList::EprItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MonitorItems::DbItems::DbList::EprItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MonitorItems::DbItems::DbList::EprItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EpRec-list")
    {
        auto ent_ = std::make_shared<System::MonitorItems::DbItems::DbList::EprItems::EpRecList>();
        ent_->parent = this;
        eprec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MonitorItems::DbItems::DbList::EprItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eprec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MonitorItems::DbItems::DbList::EprItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MonitorItems::DbItems::DbList::EprItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MonitorItems::DbItems::DbList::EprItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EpRec-list")
        return true;
    return false;
}

System::MonitorItems::DbItems::DbList::EprItems::EpRecList::EpRecList()
    :
    vnid{YType::str, "vnid"},
    ip{YType::str, "ip"},
    name{YType::str, "name"}
{

    yang_name = "EpRec-list"; yang_parent_name = "epr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MonitorItems::DbItems::DbList::EprItems::EpRecList::~EpRecList()
{
}

bool System::MonitorItems::DbItems::DbList::EprItems::EpRecList::has_data() const
{
    if (is_presence_container) return true;
    return vnid.is_set
	|| ip.is_set
	|| name.is_set;
}

bool System::MonitorItems::DbItems::DbList::EprItems::EpRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vnid.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::MonitorItems::DbItems::DbList::EprItems::EpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EpRec-list";
    ADD_KEY_TOKEN(vnid, "vnid");
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MonitorItems::DbItems::DbList::EprItems::EpRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vnid.is_set || is_set(vnid.yfilter)) leaf_name_data.push_back(vnid.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MonitorItems::DbItems::DbList::EprItems::EpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MonitorItems::DbItems::DbList::EprItems::EpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MonitorItems::DbItems::DbList::EprItems::EpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vnid")
    {
        vnid = value;
        vnid.value_namespace = name_space;
        vnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::MonitorItems::DbItems::DbList::EprItems::EpRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vnid")
    {
        vnid.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MonitorItems::DbItems::DbList::EprItems::EpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vnid" || name == "ip" || name == "name")
        return true;
    return false;
}

System::MonitorItems::SessionItems::SessionItems()
    :
    session_list(this, {"name"})
{

    yang_name = "session-items"; yang_parent_name = "monitor-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MonitorItems::SessionItems::~SessionItems()
{
}

bool System::MonitorItems::SessionItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_list.len(); index++)
    {
        if(session_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MonitorItems::SessionItems::has_operation() const
{
    for (std::size_t index=0; index<session_list.len(); index++)
    {
        if(session_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MonitorItems::SessionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/monitor-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MonitorItems::SessionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MonitorItems::SessionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MonitorItems::SessionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Session-list")
    {
        auto ent_ = std::make_shared<System::MonitorItems::SessionItems::SessionList>();
        ent_->parent = this;
        session_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MonitorItems::SessionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MonitorItems::SessionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MonitorItems::SessionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MonitorItems::SessionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Session-list")
        return true;
    return false;
}

System::MonitorItems::SessionItems::SessionList::SessionList()
    :
    name{YType::str, "name"},
    id{YType::uint8, "id"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    descr{YType::str, "descr"}
        ,
    src_items(std::make_shared<System::MonitorItems::SessionItems::SessionList::SrcItems>())
    , erdst_items(std::make_shared<System::MonitorItems::SessionItems::SessionList::ErdstItems>())
    , ldst_items(std::make_shared<System::MonitorItems::SessionItems::SessionList::LdstItems>())
{
    src_items->parent = this;
    erdst_items->parent = this;
    ldst_items->parent = this;

    yang_name = "Session-list"; yang_parent_name = "session-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MonitorItems::SessionItems::SessionList::~SessionList()
{
}

bool System::MonitorItems::SessionItems::SessionList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set
	|| adminst.is_set
	|| operst.is_set
	|| descr.is_set
	|| (src_items !=  nullptr && src_items->has_data())
	|| (erdst_items !=  nullptr && erdst_items->has_data())
	|| (ldst_items !=  nullptr && ldst_items->has_data());
}

bool System::MonitorItems::SessionItems::SessionList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (src_items !=  nullptr && src_items->has_operation())
	|| (erdst_items !=  nullptr && erdst_items->has_operation())
	|| (ldst_items !=  nullptr && ldst_items->has_operation());
}

std::string System::MonitorItems::SessionItems::SessionList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/monitor-items/session-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MonitorItems::SessionItems::SessionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Session-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MonitorItems::SessionItems::SessionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MonitorItems::SessionItems::SessionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "src-items")
    {
        if(src_items == nullptr)
        {
            src_items = std::make_shared<System::MonitorItems::SessionItems::SessionList::SrcItems>();
        }
        return src_items;
    }

    if(child_yang_name == "erdst-items")
    {
        if(erdst_items == nullptr)
        {
            erdst_items = std::make_shared<System::MonitorItems::SessionItems::SessionList::ErdstItems>();
        }
        return erdst_items;
    }

    if(child_yang_name == "ldst-items")
    {
        if(ldst_items == nullptr)
        {
            ldst_items = std::make_shared<System::MonitorItems::SessionItems::SessionList::LdstItems>();
        }
        return ldst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MonitorItems::SessionItems::SessionList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(src_items != nullptr)
    {
        _children["src-items"] = src_items;
    }

    if(erdst_items != nullptr)
    {
        _children["erdst-items"] = erdst_items;
    }

    if(ldst_items != nullptr)
    {
        _children["ldst-items"] = ldst_items;
    }

    return _children;
}

void System::MonitorItems::SessionItems::SessionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::MonitorItems::SessionItems::SessionList::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::MonitorItems::SessionItems::SessionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-items" || name == "erdst-items" || name == "ldst-items" || name == "name" || name == "id" || name == "adminSt" || name == "operSt" || name == "descr")
        return true;
    return false;
}

System::MonitorItems::SessionItems::SessionList::SrcItems::SrcItems()
    :
    source_list(this, {"type", "mode", "dir", "from", "to", "port"})
{

    yang_name = "src-items"; yang_parent_name = "Session-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MonitorItems::SessionItems::SessionList::SrcItems::~SrcItems()
{
}

bool System::MonitorItems::SessionItems::SessionList::SrcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MonitorItems::SessionItems::SessionList::SrcItems::has_operation() const
{
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MonitorItems::SessionItems::SessionList::SrcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MonitorItems::SessionItems::SessionList::SrcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MonitorItems::SessionItems::SessionList::SrcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Source-list")
    {
        auto ent_ = std::make_shared<System::MonitorItems::SessionItems::SessionList::SrcItems::SourceList>();
        ent_->parent = this;
        source_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MonitorItems::SessionItems::SessionList::SrcItems::get_children() const
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

void System::MonitorItems::SessionItems::SessionList::SrcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MonitorItems::SessionItems::SessionList::SrcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MonitorItems::SessionItems::SessionList::SrcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Source-list")
        return true;
    return false;
}

System::MonitorItems::SessionItems::SessionList::SrcItems::SourceList::SourceList()
    :
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    dir{YType::enumeration, "dir"},
    from{YType::str, "from"},
    to{YType::str, "to"},
    port{YType::str, "port"},
    id{YType::uint16, "id"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "Source-list"; yang_parent_name = "src-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MonitorItems::SessionItems::SessionList::SrcItems::SourceList::~SourceList()
{
}

bool System::MonitorItems::SessionItems::SessionList::SrcItems::SourceList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| mode.is_set
	|| dir.is_set
	|| from.is_set
	|| to.is_set
	|| port.is_set
	|| id.is_set
	|| operst.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::MonitorItems::SessionItems::SessionList::SrcItems::SourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(dir.yfilter)
	|| ydk::is_set(from.yfilter)
	|| ydk::is_set(to.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::MonitorItems::SessionItems::SessionList::SrcItems::SourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Source-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(mode, "mode");
    ADD_KEY_TOKEN(dir, "dir");
    ADD_KEY_TOKEN(from, "from");
    ADD_KEY_TOKEN(to, "to");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MonitorItems::SessionItems::SessionList::SrcItems::SourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());
    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.yfilter)) leaf_name_data.push_back(to.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MonitorItems::SessionItems::SessionList::SrcItems::SourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MonitorItems::SessionItems::SessionList::SrcItems::SourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MonitorItems::SessionItems::SessionList::SrcItems::SourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to")
    {
        to = value;
        to.value_namespace = name_space;
        to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
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
}

void System::MonitorItems::SessionItems::SessionList::SrcItems::SourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
    if(value_path == "to")
    {
        to.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
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
}

bool System::MonitorItems::SessionItems::SessionList::SrcItems::SourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "mode" || name == "dir" || name == "from" || name == "to" || name == "port" || name == "id" || name == "operSt" || name == "name" || name == "descr")
        return true;
    return false;
}

System::MonitorItems::SessionItems::SessionList::ErdstItems::ErdstItems()
    :
    type{YType::enumeration, "type"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    ver{YType::enumeration, "ver"},
    flowid{YType::uint16, "flowId"},
    ttl{YType::uint8, "ttl"},
    vrfname{YType::str, "vrfName"},
    vnid{YType::str, "vnid"},
    dscp{YType::uint8, "dscp"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    mtu{YType::uint16, "mtu"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "erdst-items"; yang_parent_name = "Session-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MonitorItems::SessionItems::SessionList::ErdstItems::~ErdstItems()
{
}

bool System::MonitorItems::SessionItems::SessionList::ErdstItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| ver.is_set
	|| flowid.is_set
	|| ttl.is_set
	|| vrfname.is_set
	|| vnid.is_set
	|| dscp.is_set
	|| name.is_set
	|| descr.is_set
	|| mtu.is_set
	|| operst.is_set;
}

bool System::MonitorItems::SessionItems::SessionList::ErdstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(flowid.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(vnid.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::MonitorItems::SessionItems::SessionList::ErdstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erdst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MonitorItems::SessionItems::SessionList::ErdstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (flowid.is_set || is_set(flowid.yfilter)) leaf_name_data.push_back(flowid.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (vnid.is_set || is_set(vnid.yfilter)) leaf_name_data.push_back(vnid.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MonitorItems::SessionItems::SessionList::ErdstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MonitorItems::SessionItems::SessionList::ErdstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MonitorItems::SessionItems::SessionList::ErdstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowId")
    {
        flowid = value;
        flowid.value_namespace = name_space;
        flowid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vnid")
    {
        vnid = value;
        vnid.value_namespace = name_space;
        vnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::MonitorItems::SessionItems::SessionList::ErdstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "flowId")
    {
        flowid.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "vnid")
    {
        vnid.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::MonitorItems::SessionItems::SessionList::ErdstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "srcIp" || name == "dstIp" || name == "ver" || name == "flowId" || name == "ttl" || name == "vrfName" || name == "vnid" || name == "dscp" || name == "name" || name == "descr" || name == "mtu" || name == "operSt")
        return true;
    return false;
}

System::MonitorItems::SessionItems::SessionList::LdstItems::LdstItems()
    :
    port{YType::str, "port"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    mtu{YType::uint16, "mtu"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ldst-items"; yang_parent_name = "Session-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MonitorItems::SessionItems::SessionList::LdstItems::~LdstItems()
{
}

bool System::MonitorItems::SessionItems::SessionList::LdstItems::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| name.is_set
	|| descr.is_set
	|| mtu.is_set
	|| operst.is_set;
}

bool System::MonitorItems::SessionItems::SessionList::LdstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::MonitorItems::SessionItems::SessionList::LdstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MonitorItems::SessionItems::SessionList::LdstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MonitorItems::SessionItems::SessionList::LdstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MonitorItems::SessionItems::SessionList::LdstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MonitorItems::SessionItems::SessionList::LdstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::MonitorItems::SessionItems::SessionList::LdstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::MonitorItems::SessionItems::SessionList::LdstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "name" || name == "descr" || name == "mtu" || name == "operSt")
        return true;
    return false;
}

System::FlowItems::FlowItems()
    :
    fr_items(std::make_shared<System::FlowItems::FrItems>())
    , fe_items(std::make_shared<System::FlowItems::FeItems>())
    , fm_items(std::make_shared<System::FlowItems::FmItems>())
    , s_items(std::make_shared<System::FlowItems::SItems>())
    , cmap_items(std::make_shared<System::FlowItems::CmapItems>())
    , pmap_items(std::make_shared<System::FlowItems::PmapItems>())
    , hp_items(std::make_shared<System::FlowItems::HpItems>())
    , fit_items(std::make_shared<System::FlowItems::FitItems>())
{
    fr_items->parent = this;
    fe_items->parent = this;
    fm_items->parent = this;
    s_items->parent = this;
    cmap_items->parent = this;
    pmap_items->parent = this;
    hp_items->parent = this;
    fit_items->parent = this;

    yang_name = "flow-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::~FlowItems()
{
}

bool System::FlowItems::has_data() const
{
    if (is_presence_container) return true;
    return (fr_items !=  nullptr && fr_items->has_data())
	|| (fe_items !=  nullptr && fe_items->has_data())
	|| (fm_items !=  nullptr && fm_items->has_data())
	|| (s_items !=  nullptr && s_items->has_data())
	|| (cmap_items !=  nullptr && cmap_items->has_data())
	|| (pmap_items !=  nullptr && pmap_items->has_data())
	|| (hp_items !=  nullptr && hp_items->has_data())
	|| (fit_items !=  nullptr && fit_items->has_data());
}

bool System::FlowItems::has_operation() const
{
    return is_set(yfilter)
	|| (fr_items !=  nullptr && fr_items->has_operation())
	|| (fe_items !=  nullptr && fe_items->has_operation())
	|| (fm_items !=  nullptr && fm_items->has_operation())
	|| (s_items !=  nullptr && s_items->has_operation())
	|| (cmap_items !=  nullptr && cmap_items->has_operation())
	|| (pmap_items !=  nullptr && pmap_items->has_operation())
	|| (hp_items !=  nullptr && hp_items->has_operation())
	|| (fit_items !=  nullptr && fit_items->has_operation());
}

std::string System::FlowItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fr-items")
    {
        if(fr_items == nullptr)
        {
            fr_items = std::make_shared<System::FlowItems::FrItems>();
        }
        return fr_items;
    }

    if(child_yang_name == "fe-items")
    {
        if(fe_items == nullptr)
        {
            fe_items = std::make_shared<System::FlowItems::FeItems>();
        }
        return fe_items;
    }

    if(child_yang_name == "fm-items")
    {
        if(fm_items == nullptr)
        {
            fm_items = std::make_shared<System::FlowItems::FmItems>();
        }
        return fm_items;
    }

    if(child_yang_name == "s-items")
    {
        if(s_items == nullptr)
        {
            s_items = std::make_shared<System::FlowItems::SItems>();
        }
        return s_items;
    }

    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::FlowItems::CmapItems>();
        }
        return cmap_items;
    }

    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::FlowItems::PmapItems>();
        }
        return pmap_items;
    }

    if(child_yang_name == "hp-items")
    {
        if(hp_items == nullptr)
        {
            hp_items = std::make_shared<System::FlowItems::HpItems>();
        }
        return hp_items;
    }

    if(child_yang_name == "fit-items")
    {
        if(fit_items == nullptr)
        {
            fit_items = std::make_shared<System::FlowItems::FitItems>();
        }
        return fit_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fr_items != nullptr)
    {
        _children["fr-items"] = fr_items;
    }

    if(fe_items != nullptr)
    {
        _children["fe-items"] = fe_items;
    }

    if(fm_items != nullptr)
    {
        _children["fm-items"] = fm_items;
    }

    if(s_items != nullptr)
    {
        _children["s-items"] = s_items;
    }

    if(cmap_items != nullptr)
    {
        _children["cmap-items"] = cmap_items;
    }

    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    if(hp_items != nullptr)
    {
        _children["hp-items"] = hp_items;
    }

    if(fit_items != nullptr)
    {
        _children["fit-items"] = fit_items;
    }

    return _children;
}

void System::FlowItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-items" || name == "fe-items" || name == "fm-items" || name == "s-items" || name == "cmap-items" || name == "pmap-items" || name == "hp-items" || name == "fit-items")
        return true;
    return false;
}

System::FlowItems::FrItems::FrItems()
    :
    record_list(this, {"name"})
{

    yang_name = "fr-items"; yang_parent_name = "flow-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::FrItems::~FrItems()
{
}

bool System::FlowItems::FrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<record_list.len(); index++)
    {
        if(record_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FlowItems::FrItems::has_operation() const
{
    for (std::size_t index=0; index<record_list.len(); index++)
    {
        if(record_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FlowItems::FrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::FrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Record-list")
    {
        auto ent_ = std::make_shared<System::FlowItems::FrItems::RecordList>();
        ent_->parent = this;
        record_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : record_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FlowItems::FrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::FrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::FrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Record-list")
        return true;
    return false;
}

System::FlowItems::FrItems::RecordList::RecordList()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    matchparams{YType::str, "matchParams"},
    collectparams{YType::str, "collectParams"}
{

    yang_name = "Record-list"; yang_parent_name = "fr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::FrItems::RecordList::~RecordList()
{
}

bool System::FlowItems::FrItems::RecordList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| matchparams.is_set
	|| collectparams.is_set;
}

bool System::FlowItems::FrItems::RecordList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(matchparams.yfilter)
	|| ydk::is_set(collectparams.yfilter);
}

std::string System::FlowItems::FrItems::RecordList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/fr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::FrItems::RecordList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Record-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FrItems::RecordList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (matchparams.is_set || is_set(matchparams.yfilter)) leaf_name_data.push_back(matchparams.get_name_leafdata());
    if (collectparams.is_set || is_set(collectparams.yfilter)) leaf_name_data.push_back(collectparams.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FrItems::RecordList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FrItems::RecordList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FlowItems::FrItems::RecordList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "matchParams")
    {
        matchparams = value;
        matchparams.value_namespace = name_space;
        matchparams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collectParams")
    {
        collectparams = value;
        collectparams.value_namespace = name_space;
        collectparams.value_namespace_prefix = name_space_prefix;
    }
}

void System::FlowItems::FrItems::RecordList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "matchParams")
    {
        matchparams.yfilter = yfilter;
    }
    if(value_path == "collectParams")
    {
        collectparams.yfilter = yfilter;
    }
}

bool System::FlowItems::FrItems::RecordList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "matchParams" || name == "collectParams")
        return true;
    return false;
}

System::FlowItems::FeItems::FeItems()
    :
    exporter_list(this, {"name"})
{

    yang_name = "fe-items"; yang_parent_name = "flow-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::FeItems::~FeItems()
{
}

bool System::FlowItems::FeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<exporter_list.len(); index++)
    {
        if(exporter_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FlowItems::FeItems::has_operation() const
{
    for (std::size_t index=0; index<exporter_list.len(); index++)
    {
        if(exporter_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FlowItems::FeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::FeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Exporter-list")
    {
        auto ent_ = std::make_shared<System::FlowItems::FeItems::ExporterList>();
        ent_->parent = this;
        exporter_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : exporter_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FlowItems::FeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::FeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::FeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Exporter-list")
        return true;
    return false;
}

System::FlowItems::FeItems::ExporterList::ExporterList()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    vrfname{YType::str, "vrfName"},
    destinationip{YType::str, "destinationIp"},
    destinationport{YType::uint32, "destinationPort"},
    dscp{YType::uint8, "dscp"},
    sourceinterface{YType::str, "sourceInterface"},
    version{YType::enumeration, "version"}
{

    yang_name = "Exporter-list"; yang_parent_name = "fe-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::FeItems::ExporterList::~ExporterList()
{
}

bool System::FlowItems::FeItems::ExporterList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| vrfname.is_set
	|| destinationip.is_set
	|| destinationport.is_set
	|| dscp.is_set
	|| sourceinterface.is_set
	|| version.is_set;
}

bool System::FlowItems::FeItems::ExporterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(destinationip.yfilter)
	|| ydk::is_set(destinationport.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(sourceinterface.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string System::FlowItems::FeItems::ExporterList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/fe-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::FeItems::ExporterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Exporter-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FeItems::ExporterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (destinationip.is_set || is_set(destinationip.yfilter)) leaf_name_data.push_back(destinationip.get_name_leafdata());
    if (destinationport.is_set || is_set(destinationport.yfilter)) leaf_name_data.push_back(destinationport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (sourceinterface.is_set || is_set(sourceinterface.yfilter)) leaf_name_data.push_back(sourceinterface.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FeItems::ExporterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FeItems::ExporterList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FlowItems::FeItems::ExporterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destinationIp")
    {
        destinationip = value;
        destinationip.value_namespace = name_space;
        destinationip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destinationPort")
    {
        destinationport = value;
        destinationport.value_namespace = name_space;
        destinationport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceInterface")
    {
        sourceinterface = value;
        sourceinterface.value_namespace = name_space;
        sourceinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void System::FlowItems::FeItems::ExporterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "destinationIp")
    {
        destinationip.yfilter = yfilter;
    }
    if(value_path == "destinationPort")
    {
        destinationport.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "sourceInterface")
    {
        sourceinterface.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool System::FlowItems::FeItems::ExporterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "vrfName" || name == "destinationIp" || name == "destinationPort" || name == "dscp" || name == "sourceInterface" || name == "version")
        return true;
    return false;
}

System::FlowItems::FmItems::FmItems()
    :
    monitor_list(this, {"name"})
{

    yang_name = "fm-items"; yang_parent_name = "flow-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::FmItems::~FmItems()
{
}

bool System::FlowItems::FmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<monitor_list.len(); index++)
    {
        if(monitor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FlowItems::FmItems::has_operation() const
{
    for (std::size_t index=0; index<monitor_list.len(); index++)
    {
        if(monitor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FlowItems::FmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::FmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Monitor-list")
    {
        auto ent_ = std::make_shared<System::FlowItems::FmItems::MonitorList>();
        ent_->parent = this;
        monitor_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : monitor_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FlowItems::FmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::FmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::FmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Monitor-list")
        return true;
    return false;
}

System::FlowItems::FmItems::MonitorList::MonitorList()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
        ,
    feb_items(std::make_shared<System::FlowItems::FmItems::MonitorList::FebItems>())
    , rsrecord_items(std::make_shared<System::FlowItems::FmItems::MonitorList::RsrecordItems>())
{
    feb_items->parent = this;
    rsrecord_items->parent = this;

    yang_name = "Monitor-list"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::FmItems::MonitorList::~MonitorList()
{
}

bool System::FlowItems::FmItems::MonitorList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| (feb_items !=  nullptr && feb_items->has_data())
	|| (rsrecord_items !=  nullptr && rsrecord_items->has_data());
}

bool System::FlowItems::FmItems::MonitorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (feb_items !=  nullptr && feb_items->has_operation())
	|| (rsrecord_items !=  nullptr && rsrecord_items->has_operation());
}

std::string System::FlowItems::FmItems::MonitorList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::FmItems::MonitorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Monitor-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FmItems::MonitorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FmItems::MonitorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feb-items")
    {
        if(feb_items == nullptr)
        {
            feb_items = std::make_shared<System::FlowItems::FmItems::MonitorList::FebItems>();
        }
        return feb_items;
    }

    if(child_yang_name == "rsrecord-items")
    {
        if(rsrecord_items == nullptr)
        {
            rsrecord_items = std::make_shared<System::FlowItems::FmItems::MonitorList::RsrecordItems>();
        }
        return rsrecord_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FmItems::MonitorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(feb_items != nullptr)
    {
        _children["feb-items"] = feb_items;
    }

    if(rsrecord_items != nullptr)
    {
        _children["rsrecord-items"] = rsrecord_items;
    }

    return _children;
}

void System::FlowItems::FmItems::MonitorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FlowItems::FmItems::MonitorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool System::FlowItems::FmItems::MonitorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "feb-items" || name == "rsrecord-items" || name == "name" || name == "description")
        return true;
    return false;
}

System::FlowItems::FmItems::MonitorList::FebItems::FebItems()
    :
    exporterbucket_list(this, {"id"})
{

    yang_name = "feb-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::FmItems::MonitorList::FebItems::~FebItems()
{
}

bool System::FlowItems::FmItems::MonitorList::FebItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<exporterbucket_list.len(); index++)
    {
        if(exporterbucket_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FlowItems::FmItems::MonitorList::FebItems::has_operation() const
{
    for (std::size_t index=0; index<exporterbucket_list.len(); index++)
    {
        if(exporterbucket_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FlowItems::FmItems::MonitorList::FebItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FmItems::MonitorList::FebItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FmItems::MonitorList::FebItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExporterBucket-list")
    {
        auto ent_ = std::make_shared<System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList>();
        ent_->parent = this;
        exporterbucket_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FmItems::MonitorList::FebItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : exporterbucket_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FlowItems::FmItems::MonitorList::FebItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::FmItems::MonitorList::FebItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::FmItems::MonitorList::FebItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExporterBucket-list")
        return true;
    return false;
}

System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::ExporterBucketList()
    :
    id{YType::uint8, "id"},
    description{YType::str, "description"},
    hashlo{YType::uint32, "hashLo"},
    hashhi{YType::uint32, "hashHi"}
        ,
    rsexporter1_items(std::make_shared<System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items>())
    , rsexporter2_items(std::make_shared<System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items>())
{
    rsexporter1_items->parent = this;
    rsexporter2_items->parent = this;

    yang_name = "ExporterBucket-list"; yang_parent_name = "feb-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::~ExporterBucketList()
{
}

bool System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| description.is_set
	|| hashlo.is_set
	|| hashhi.is_set
	|| (rsexporter1_items !=  nullptr && rsexporter1_items->has_data())
	|| (rsexporter2_items !=  nullptr && rsexporter2_items->has_data());
}

bool System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(hashlo.yfilter)
	|| ydk::is_set(hashhi.yfilter)
	|| (rsexporter1_items !=  nullptr && rsexporter1_items->has_operation())
	|| (rsexporter2_items !=  nullptr && rsexporter2_items->has_operation());
}

std::string System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExporterBucket-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (hashlo.is_set || is_set(hashlo.yfilter)) leaf_name_data.push_back(hashlo.get_name_leafdata());
    if (hashhi.is_set || is_set(hashhi.yfilter)) leaf_name_data.push_back(hashhi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsexporter1-items")
    {
        if(rsexporter1_items == nullptr)
        {
            rsexporter1_items = std::make_shared<System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items>();
        }
        return rsexporter1_items;
    }

    if(child_yang_name == "rsexporter2-items")
    {
        if(rsexporter2_items == nullptr)
        {
            rsexporter2_items = std::make_shared<System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items>();
        }
        return rsexporter2_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsexporter1_items != nullptr)
    {
        _children["rsexporter1-items"] = rsexporter1_items;
    }

    if(rsexporter2_items != nullptr)
    {
        _children["rsexporter2-items"] = rsexporter2_items;
    }

    return _children;
}

void System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashLo")
    {
        hashlo = value;
        hashlo.value_namespace = name_space;
        hashlo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashHi")
    {
        hashhi = value;
        hashhi.value_namespace = name_space;
        hashhi.value_namespace_prefix = name_space_prefix;
    }
}

void System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "hashLo")
    {
        hashlo.yfilter = yfilter;
    }
    if(value_path == "hashHi")
    {
        hashhi.yfilter = yfilter;
    }
}

bool System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsexporter1-items" || name == "rsexporter2-items" || name == "id" || name == "description" || name == "hashLo" || name == "hashHi")
        return true;
    return false;
}

System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items::Rsexporter1Items()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsexporter1-items"; yang_parent_name = "ExporterBucket-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items::~Rsexporter1Items()
{
}

bool System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsexporter1-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items::Rsexporter2Items()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsexporter2-items"; yang_parent_name = "ExporterBucket-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items::~Rsexporter2Items()
{
}

bool System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsexporter2-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::FlowItems::FmItems::MonitorList::RsrecordItems::RsrecordItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsrecord-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::FmItems::MonitorList::RsrecordItems::~RsrecordItems()
{
}

bool System::FlowItems::FmItems::MonitorList::RsrecordItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::FlowItems::FmItems::MonitorList::RsrecordItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::FlowItems::FmItems::MonitorList::RsrecordItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrecord-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FmItems::MonitorList::RsrecordItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FmItems::MonitorList::RsrecordItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FmItems::MonitorList::RsrecordItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FlowItems::FmItems::MonitorList::RsrecordItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FlowItems::FmItems::MonitorList::RsrecordItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FlowItems::FmItems::MonitorList::RsrecordItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::FlowItems::SItems::SItems()
    :
    sampler_list(this, {"name"})
{

    yang_name = "s-items"; yang_parent_name = "flow-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::SItems::~SItems()
{
}

bool System::FlowItems::SItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sampler_list.len(); index++)
    {
        if(sampler_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FlowItems::SItems::has_operation() const
{
    for (std::size_t index=0; index<sampler_list.len(); index++)
    {
        if(sampler_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FlowItems::SItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::SItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::SItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::SItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sampler-list")
    {
        auto ent_ = std::make_shared<System::FlowItems::SItems::SamplerList>();
        ent_->parent = this;
        sampler_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::SItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sampler_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FlowItems::SItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::SItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::SItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sampler-list")
        return true;
    return false;
}

System::FlowItems::SItems::SamplerList::SamplerList()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    mode{YType::enumeration, "mode"},
    param1{YType::uint32, "param1"},
    param2{YType::uint32, "param2"}
{

    yang_name = "Sampler-list"; yang_parent_name = "s-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::SItems::SamplerList::~SamplerList()
{
}

bool System::FlowItems::SItems::SamplerList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| mode.is_set
	|| param1.is_set
	|| param2.is_set;
}

bool System::FlowItems::SItems::SamplerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(param1.yfilter)
	|| ydk::is_set(param2.yfilter);
}

std::string System::FlowItems::SItems::SamplerList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/s-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::SItems::SamplerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sampler-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::SItems::SamplerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (param1.is_set || is_set(param1.yfilter)) leaf_name_data.push_back(param1.get_name_leafdata());
    if (param2.is_set || is_set(param2.yfilter)) leaf_name_data.push_back(param2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::SItems::SamplerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::SItems::SamplerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FlowItems::SItems::SamplerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "param1")
    {
        param1 = value;
        param1.value_namespace = name_space;
        param1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "param2")
    {
        param2 = value;
        param2.value_namespace = name_space;
        param2.value_namespace_prefix = name_space_prefix;
    }
}

void System::FlowItems::SItems::SamplerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "param1")
    {
        param1.yfilter = yfilter;
    }
    if(value_path == "param2")
    {
        param2.yfilter = yfilter;
    }
}

bool System::FlowItems::SItems::SamplerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "mode" || name == "param1" || name == "param2")
        return true;
    return false;
}

System::FlowItems::CmapItems::CmapItems()
    :
    classmap_list(this, {"name"})
{

    yang_name = "cmap-items"; yang_parent_name = "flow-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::CmapItems::~CmapItems()
{
}

bool System::FlowItems::CmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<classmap_list.len(); index++)
    {
        if(classmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FlowItems::CmapItems::has_operation() const
{
    for (std::size_t index=0; index<classmap_list.len(); index++)
    {
        if(classmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FlowItems::CmapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::CmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::CmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::CmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ClassMap-list")
    {
        auto ent_ = std::make_shared<System::FlowItems::CmapItems::ClassMapList>();
        ent_->parent = this;
        classmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::CmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : classmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FlowItems::CmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::CmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::CmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ClassMap-list")
        return true;
    return false;
}

System::FlowItems::CmapItems::ClassMapList::ClassMapList()
    :
    name{YType::str, "name"}
        ,
    acl_items(std::make_shared<System::FlowItems::CmapItems::ClassMapList::AclItems>())
{
    acl_items->parent = this;

    yang_name = "ClassMap-list"; yang_parent_name = "cmap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::CmapItems::ClassMapList::~ClassMapList()
{
}

bool System::FlowItems::CmapItems::ClassMapList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (acl_items !=  nullptr && acl_items->has_data());
}

bool System::FlowItems::CmapItems::ClassMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation());
}

std::string System::FlowItems::CmapItems::ClassMapList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/cmap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::CmapItems::ClassMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ClassMap-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::CmapItems::ClassMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::CmapItems::ClassMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::FlowItems::CmapItems::ClassMapList::AclItems>();
        }
        return acl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::CmapItems::ClassMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    return _children;
}

void System::FlowItems::CmapItems::ClassMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::FlowItems::CmapItems::ClassMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::FlowItems::CmapItems::ClassMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "name")
        return true;
    return false;
}

System::FlowItems::CmapItems::ClassMapList::AclItems::AclItems()
    :
    matchacl_list(this, {"name"})
{

    yang_name = "acl-items"; yang_parent_name = "ClassMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::CmapItems::ClassMapList::AclItems::~AclItems()
{
}

bool System::FlowItems::CmapItems::ClassMapList::AclItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchacl_list.len(); index++)
    {
        if(matchacl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FlowItems::CmapItems::ClassMapList::AclItems::has_operation() const
{
    for (std::size_t index=0; index<matchacl_list.len(); index++)
    {
        if(matchacl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FlowItems::CmapItems::ClassMapList::AclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::CmapItems::ClassMapList::AclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::CmapItems::ClassMapList::AclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchAcl-list")
    {
        auto ent_ = std::make_shared<System::FlowItems::CmapItems::ClassMapList::AclItems::MatchAclList>();
        ent_->parent = this;
        matchacl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::CmapItems::ClassMapList::AclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matchacl_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FlowItems::CmapItems::ClassMapList::AclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::CmapItems::ClassMapList::AclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::CmapItems::ClassMapList::AclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchAcl-list")
        return true;
    return false;
}

System::FlowItems::CmapItems::ClassMapList::AclItems::MatchAclList::MatchAclList()
    :
    name{YType::str, "name"}
{

    yang_name = "MatchAcl-list"; yang_parent_name = "acl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::CmapItems::ClassMapList::AclItems::MatchAclList::~MatchAclList()
{
}

bool System::FlowItems::CmapItems::ClassMapList::AclItems::MatchAclList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::FlowItems::CmapItems::ClassMapList::AclItems::MatchAclList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::FlowItems::CmapItems::ClassMapList::AclItems::MatchAclList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchAcl-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::CmapItems::ClassMapList::AclItems::MatchAclList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::CmapItems::ClassMapList::AclItems::MatchAclList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::CmapItems::ClassMapList::AclItems::MatchAclList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FlowItems::CmapItems::ClassMapList::AclItems::MatchAclList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::FlowItems::CmapItems::ClassMapList::AclItems::MatchAclList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::FlowItems::CmapItems::ClassMapList::AclItems::MatchAclList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::FlowItems::PmapItems::PmapItems()
    :
    policymap_list(this, {"name"})
{

    yang_name = "pmap-items"; yang_parent_name = "flow-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::PmapItems::~PmapItems()
{
}

bool System::FlowItems::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policymap_list.len(); index++)
    {
        if(policymap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FlowItems::PmapItems::has_operation() const
{
    for (std::size_t index=0; index<policymap_list.len(); index++)
    {
        if(policymap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FlowItems::PmapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PolicyMap-list")
    {
        auto ent_ = std::make_shared<System::FlowItems::PmapItems::PolicyMapList>();
        ent_->parent = this;
        policymap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policymap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FlowItems::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PolicyMap-list")
        return true;
    return false;
}

System::FlowItems::PmapItems::PolicyMapList::PolicyMapList()
    :
    name{YType::str, "name"}
        ,
    cmap_items(std::make_shared<System::FlowItems::PmapItems::PolicyMapList::CmapItems>())
{
    cmap_items->parent = this;

    yang_name = "PolicyMap-list"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::PmapItems::PolicyMapList::~PolicyMapList()
{
}

bool System::FlowItems::PmapItems::PolicyMapList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (cmap_items !=  nullptr && cmap_items->has_data());
}

bool System::FlowItems::PmapItems::PolicyMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (cmap_items !=  nullptr && cmap_items->has_operation());
}

std::string System::FlowItems::PmapItems::PolicyMapList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/pmap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::PmapItems::PolicyMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PolicyMap-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::PmapItems::PolicyMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::PmapItems::PolicyMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::FlowItems::PmapItems::PolicyMapList::CmapItems>();
        }
        return cmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::PmapItems::PolicyMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cmap_items != nullptr)
    {
        _children["cmap-items"] = cmap_items;
    }

    return _children;
}

void System::FlowItems::PmapItems::PolicyMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::FlowItems::PmapItems::PolicyMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::FlowItems::PmapItems::PolicyMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmap-items" || name == "name")
        return true;
    return false;
}

System::FlowItems::PmapItems::PolicyMapList::CmapItems::CmapItems()
    :
    matchclassmap_list(this, {"name"})
{

    yang_name = "cmap-items"; yang_parent_name = "PolicyMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::PmapItems::PolicyMapList::CmapItems::~CmapItems()
{
}

bool System::FlowItems::PmapItems::PolicyMapList::CmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchclassmap_list.len(); index++)
    {
        if(matchclassmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FlowItems::PmapItems::PolicyMapList::CmapItems::has_operation() const
{
    for (std::size_t index=0; index<matchclassmap_list.len(); index++)
    {
        if(matchclassmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FlowItems::PmapItems::PolicyMapList::CmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::PmapItems::PolicyMapList::CmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::PmapItems::PolicyMapList::CmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchClassMap-list")
    {
        auto ent_ = std::make_shared<System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList>();
        ent_->parent = this;
        matchclassmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::PmapItems::PolicyMapList::CmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matchclassmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FlowItems::PmapItems::PolicyMapList::CmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::PmapItems::PolicyMapList::CmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::PmapItems::PolicyMapList::CmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchClassMap-list")
        return true;
    return false;
}

System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::MatchClassMapList()
    :
    name{YType::str, "name"}
        ,
    fm_items(std::make_shared<System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems>())
{
    fm_items->parent = this;

    yang_name = "MatchClassMap-list"; yang_parent_name = "cmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::~MatchClassMapList()
{
}

bool System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (fm_items !=  nullptr && fm_items->has_data());
}

bool System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (fm_items !=  nullptr && fm_items->has_operation());
}

std::string System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchClassMap-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fm-items")
    {
        if(fm_items == nullptr)
        {
            fm_items = std::make_shared<System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems>();
        }
        return fm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fm_items != nullptr)
    {
        _children["fm-items"] = fm_items;
    }

    return _children;
}

void System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fm-items" || name == "name")
        return true;
    return false;
}

System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::FmItems()
    :
    rsmonitor_items(std::make_shared<System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems>())
{
    rsmonitor_items->parent = this;

    yang_name = "fm-items"; yang_parent_name = "MatchClassMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::~FmItems()
{
}

bool System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::has_data() const
{
    if (is_presence_container) return true;
    return (rsmonitor_items !=  nullptr && rsmonitor_items->has_data());
}

bool System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::has_operation() const
{
    return is_set(yfilter)
	|| (rsmonitor_items !=  nullptr && rsmonitor_items->has_operation());
}

std::string System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmonitor-items")
    {
        if(rsmonitor_items == nullptr)
        {
            rsmonitor_items = std::make_shared<System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems>();
        }
        return rsmonitor_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsmonitor_items != nullptr)
    {
        _children["rsmonitor-items"] = rsmonitor_items;
    }

    return _children;
}

void System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmonitor-items")
        return true;
    return false;
}

System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems::RsmonitorItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsmonitor-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems::~RsmonitorItems()
{
}

bool System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmonitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::FlowItems::HpItems::HpItems()
    :
    hwprofile_list(this, {"name"})
{

    yang_name = "hp-items"; yang_parent_name = "flow-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::HpItems::~HpItems()
{
}

bool System::FlowItems::HpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hwprofile_list.len(); index++)
    {
        if(hwprofile_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FlowItems::HpItems::has_operation() const
{
    for (std::size_t index=0; index<hwprofile_list.len(); index++)
    {
        if(hwprofile_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FlowItems::HpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::HpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::HpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::HpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HwProfile-list")
    {
        auto ent_ = std::make_shared<System::FlowItems::HpItems::HwProfileList>();
        ent_->parent = this;
        hwprofile_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::HpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hwprofile_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FlowItems::HpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::HpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::HpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HwProfile-list")
        return true;
    return false;
}

System::FlowItems::HpItems::HwProfileList::HwProfileList()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    exportinterval{YType::uint32, "exportInterval"},
    sourceport{YType::uint32, "sourcePort"},
    ippacketidshift{YType::uint8, "ipPacketIdShift"},
    burstintervalshift{YType::uint8, "burstIntervalShift"},
    mtu{YType::uint16, "mtu"}
        ,
    sngt_items(std::make_shared<System::FlowItems::HpItems::HwProfileList::SngtItems>())
    , plb_items(std::make_shared<System::FlowItems::HpItems::HwProfileList::PlbItems>())
    , tohlb_items(std::make_shared<System::FlowItems::HpItems::HwProfileList::TohlbItems>())
    , rwsb_items(std::make_shared<System::FlowItems::HpItems::HwProfileList::RwsbItems>())
{
    sngt_items->parent = this;
    plb_items->parent = this;
    tohlb_items->parent = this;
    rwsb_items->parent = this;

    yang_name = "HwProfile-list"; yang_parent_name = "hp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::HpItems::HwProfileList::~HwProfileList()
{
}

bool System::FlowItems::HpItems::HwProfileList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| exportinterval.is_set
	|| sourceport.is_set
	|| ippacketidshift.is_set
	|| burstintervalshift.is_set
	|| mtu.is_set
	|| (sngt_items !=  nullptr && sngt_items->has_data())
	|| (plb_items !=  nullptr && plb_items->has_data())
	|| (tohlb_items !=  nullptr && tohlb_items->has_data())
	|| (rwsb_items !=  nullptr && rwsb_items->has_data());
}

bool System::FlowItems::HpItems::HwProfileList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(exportinterval.yfilter)
	|| ydk::is_set(sourceport.yfilter)
	|| ydk::is_set(ippacketidshift.yfilter)
	|| ydk::is_set(burstintervalshift.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (sngt_items !=  nullptr && sngt_items->has_operation())
	|| (plb_items !=  nullptr && plb_items->has_operation())
	|| (tohlb_items !=  nullptr && tohlb_items->has_operation())
	|| (rwsb_items !=  nullptr && rwsb_items->has_operation());
}

std::string System::FlowItems::HpItems::HwProfileList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/hp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::HpItems::HwProfileList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "HwProfile-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::HpItems::HwProfileList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (exportinterval.is_set || is_set(exportinterval.yfilter)) leaf_name_data.push_back(exportinterval.get_name_leafdata());
    if (sourceport.is_set || is_set(sourceport.yfilter)) leaf_name_data.push_back(sourceport.get_name_leafdata());
    if (ippacketidshift.is_set || is_set(ippacketidshift.yfilter)) leaf_name_data.push_back(ippacketidshift.get_name_leafdata());
    if (burstintervalshift.is_set || is_set(burstintervalshift.yfilter)) leaf_name_data.push_back(burstintervalshift.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::HpItems::HwProfileList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sngt-items")
    {
        if(sngt_items == nullptr)
        {
            sngt_items = std::make_shared<System::FlowItems::HpItems::HwProfileList::SngtItems>();
        }
        return sngt_items;
    }

    if(child_yang_name == "plb-items")
    {
        if(plb_items == nullptr)
        {
            plb_items = std::make_shared<System::FlowItems::HpItems::HwProfileList::PlbItems>();
        }
        return plb_items;
    }

    if(child_yang_name == "tohlb-items")
    {
        if(tohlb_items == nullptr)
        {
            tohlb_items = std::make_shared<System::FlowItems::HpItems::HwProfileList::TohlbItems>();
        }
        return tohlb_items;
    }

    if(child_yang_name == "rwsb-items")
    {
        if(rwsb_items == nullptr)
        {
            rwsb_items = std::make_shared<System::FlowItems::HpItems::HwProfileList::RwsbItems>();
        }
        return rwsb_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::HpItems::HwProfileList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sngt_items != nullptr)
    {
        _children["sngt-items"] = sngt_items;
    }

    if(plb_items != nullptr)
    {
        _children["plb-items"] = plb_items;
    }

    if(tohlb_items != nullptr)
    {
        _children["tohlb-items"] = tohlb_items;
    }

    if(rwsb_items != nullptr)
    {
        _children["rwsb-items"] = rwsb_items;
    }

    return _children;
}

void System::FlowItems::HpItems::HwProfileList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "exportInterval")
    {
        exportinterval = value;
        exportinterval.value_namespace = name_space;
        exportinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourcePort")
    {
        sourceport = value;
        sourceport.value_namespace = name_space;
        sourceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipPacketIdShift")
    {
        ippacketidshift = value;
        ippacketidshift.value_namespace = name_space;
        ippacketidshift.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstIntervalShift")
    {
        burstintervalshift = value;
        burstintervalshift.value_namespace = name_space;
        burstintervalshift.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void System::FlowItems::HpItems::HwProfileList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "exportInterval")
    {
        exportinterval.yfilter = yfilter;
    }
    if(value_path == "sourcePort")
    {
        sourceport.yfilter = yfilter;
    }
    if(value_path == "ipPacketIdShift")
    {
        ippacketidshift.yfilter = yfilter;
    }
    if(value_path == "burstIntervalShift")
    {
        burstintervalshift.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool System::FlowItems::HpItems::HwProfileList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sngt-items" || name == "plb-items" || name == "tohlb-items" || name == "rwsb-items" || name == "name" || name == "description" || name == "exportInterval" || name == "sourcePort" || name == "ipPacketIdShift" || name == "burstIntervalShift" || name == "mtu")
        return true;
    return false;
}

System::FlowItems::HpItems::HwProfileList::SngtItems::SngtItems()
    :
    lo{YType::uint32, "lo"},
    hi{YType::uint32, "hi"}
{

    yang_name = "sngt-items"; yang_parent_name = "HwProfile-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::HpItems::HwProfileList::SngtItems::~SngtItems()
{
}

bool System::FlowItems::HpItems::HwProfileList::SngtItems::has_data() const
{
    if (is_presence_container) return true;
    return lo.is_set
	|| hi.is_set;
}

bool System::FlowItems::HpItems::HwProfileList::SngtItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lo.yfilter)
	|| ydk::is_set(hi.yfilter);
}

std::string System::FlowItems::HpItems::HwProfileList::SngtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sngt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::HpItems::HwProfileList::SngtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lo.is_set || is_set(lo.yfilter)) leaf_name_data.push_back(lo.get_name_leafdata());
    if (hi.is_set || is_set(hi.yfilter)) leaf_name_data.push_back(hi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::HpItems::HwProfileList::SngtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::HpItems::HwProfileList::SngtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FlowItems::HpItems::HwProfileList::SngtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lo")
    {
        lo = value;
        lo.value_namespace = name_space;
        lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hi")
    {
        hi = value;
        hi.value_namespace = name_space;
        hi.value_namespace_prefix = name_space_prefix;
    }
}

void System::FlowItems::HpItems::HwProfileList::SngtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lo")
    {
        lo.yfilter = yfilter;
    }
    if(value_path == "hi")
    {
        hi.yfilter = yfilter;
    }
}

bool System::FlowItems::HpItems::HwProfileList::SngtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lo" || name == "hi")
        return true;
    return false;
}

System::FlowItems::HpItems::HwProfileList::PlbItems::PlbItems()
    :
    payloadlenbin_list(this, {"id"})
{

    yang_name = "plb-items"; yang_parent_name = "HwProfile-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::HpItems::HwProfileList::PlbItems::~PlbItems()
{
}

bool System::FlowItems::HpItems::HwProfileList::PlbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<payloadlenbin_list.len(); index++)
    {
        if(payloadlenbin_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FlowItems::HpItems::HwProfileList::PlbItems::has_operation() const
{
    for (std::size_t index=0; index<payloadlenbin_list.len(); index++)
    {
        if(payloadlenbin_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FlowItems::HpItems::HwProfileList::PlbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::HpItems::HwProfileList::PlbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::HpItems::HwProfileList::PlbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PayloadLenBin-list")
    {
        auto ent_ = std::make_shared<System::FlowItems::HpItems::HwProfileList::PlbItems::PayloadLenBinList>();
        ent_->parent = this;
        payloadlenbin_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::HpItems::HwProfileList::PlbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : payloadlenbin_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FlowItems::HpItems::HwProfileList::PlbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::HpItems::HwProfileList::PlbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::HpItems::HwProfileList::PlbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PayloadLenBin-list")
        return true;
    return false;
}

System::FlowItems::HpItems::HwProfileList::PlbItems::PayloadLenBinList::PayloadLenBinList()
    :
    id{YType::uint8, "id"},
    description{YType::str, "description"},
    lo{YType::uint32, "lo"},
    hi{YType::uint32, "hi"}
{

    yang_name = "PayloadLenBin-list"; yang_parent_name = "plb-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::HpItems::HwProfileList::PlbItems::PayloadLenBinList::~PayloadLenBinList()
{
}

bool System::FlowItems::HpItems::HwProfileList::PlbItems::PayloadLenBinList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| description.is_set
	|| lo.is_set
	|| hi.is_set;
}

bool System::FlowItems::HpItems::HwProfileList::PlbItems::PayloadLenBinList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(lo.yfilter)
	|| ydk::is_set(hi.yfilter);
}

std::string System::FlowItems::HpItems::HwProfileList::PlbItems::PayloadLenBinList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PayloadLenBin-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::HpItems::HwProfileList::PlbItems::PayloadLenBinList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (lo.is_set || is_set(lo.yfilter)) leaf_name_data.push_back(lo.get_name_leafdata());
    if (hi.is_set || is_set(hi.yfilter)) leaf_name_data.push_back(hi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::HpItems::HwProfileList::PlbItems::PayloadLenBinList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::HpItems::HwProfileList::PlbItems::PayloadLenBinList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FlowItems::HpItems::HwProfileList::PlbItems::PayloadLenBinList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lo")
    {
        lo = value;
        lo.value_namespace = name_space;
        lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hi")
    {
        hi = value;
        hi.value_namespace = name_space;
        hi.value_namespace_prefix = name_space_prefix;
    }
}

void System::FlowItems::HpItems::HwProfileList::PlbItems::PayloadLenBinList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "lo")
    {
        lo.yfilter = yfilter;
    }
    if(value_path == "hi")
    {
        hi.yfilter = yfilter;
    }
}

bool System::FlowItems::HpItems::HwProfileList::PlbItems::PayloadLenBinList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "description" || name == "lo" || name == "hi")
        return true;
    return false;
}

System::FlowItems::HpItems::HwProfileList::TohlbItems::TohlbItems()
    :
    tcpopthdrlenbin_list(this, {"id"})
{

    yang_name = "tohlb-items"; yang_parent_name = "HwProfile-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::HpItems::HwProfileList::TohlbItems::~TohlbItems()
{
}

bool System::FlowItems::HpItems::HwProfileList::TohlbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcpopthdrlenbin_list.len(); index++)
    {
        if(tcpopthdrlenbin_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FlowItems::HpItems::HwProfileList::TohlbItems::has_operation() const
{
    for (std::size_t index=0; index<tcpopthdrlenbin_list.len(); index++)
    {
        if(tcpopthdrlenbin_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FlowItems::HpItems::HwProfileList::TohlbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tohlb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::HpItems::HwProfileList::TohlbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::HpItems::HwProfileList::TohlbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TCPOptHdrLenBin-list")
    {
        auto ent_ = std::make_shared<System::FlowItems::HpItems::HwProfileList::TohlbItems::TCPOptHdrLenBinList>();
        ent_->parent = this;
        tcpopthdrlenbin_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::HpItems::HwProfileList::TohlbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tcpopthdrlenbin_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FlowItems::HpItems::HwProfileList::TohlbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::HpItems::HwProfileList::TohlbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::HpItems::HwProfileList::TohlbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TCPOptHdrLenBin-list")
        return true;
    return false;
}

System::FlowItems::HpItems::HwProfileList::TohlbItems::TCPOptHdrLenBinList::TCPOptHdrLenBinList()
    :
    id{YType::uint8, "id"},
    description{YType::str, "description"},
    lo{YType::uint32, "lo"},
    hi{YType::uint32, "hi"}
{

    yang_name = "TCPOptHdrLenBin-list"; yang_parent_name = "tohlb-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::HpItems::HwProfileList::TohlbItems::TCPOptHdrLenBinList::~TCPOptHdrLenBinList()
{
}

bool System::FlowItems::HpItems::HwProfileList::TohlbItems::TCPOptHdrLenBinList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| description.is_set
	|| lo.is_set
	|| hi.is_set;
}

bool System::FlowItems::HpItems::HwProfileList::TohlbItems::TCPOptHdrLenBinList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(lo.yfilter)
	|| ydk::is_set(hi.yfilter);
}

std::string System::FlowItems::HpItems::HwProfileList::TohlbItems::TCPOptHdrLenBinList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TCPOptHdrLenBin-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::HpItems::HwProfileList::TohlbItems::TCPOptHdrLenBinList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (lo.is_set || is_set(lo.yfilter)) leaf_name_data.push_back(lo.get_name_leafdata());
    if (hi.is_set || is_set(hi.yfilter)) leaf_name_data.push_back(hi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::HpItems::HwProfileList::TohlbItems::TCPOptHdrLenBinList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::HpItems::HwProfileList::TohlbItems::TCPOptHdrLenBinList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FlowItems::HpItems::HwProfileList::TohlbItems::TCPOptHdrLenBinList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lo")
    {
        lo = value;
        lo.value_namespace = name_space;
        lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hi")
    {
        hi = value;
        hi.value_namespace = name_space;
        hi.value_namespace_prefix = name_space_prefix;
    }
}

void System::FlowItems::HpItems::HwProfileList::TohlbItems::TCPOptHdrLenBinList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "lo")
    {
        lo.yfilter = yfilter;
    }
    if(value_path == "hi")
    {
        hi.yfilter = yfilter;
    }
}

bool System::FlowItems::HpItems::HwProfileList::TohlbItems::TCPOptHdrLenBinList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "description" || name == "lo" || name == "hi")
        return true;
    return false;
}

System::FlowItems::HpItems::HwProfileList::RwsbItems::RwsbItems()
    :
    receivewindowsizebin_list(this, {"id"})
{

    yang_name = "rwsb-items"; yang_parent_name = "HwProfile-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::HpItems::HwProfileList::RwsbItems::~RwsbItems()
{
}

bool System::FlowItems::HpItems::HwProfileList::RwsbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<receivewindowsizebin_list.len(); index++)
    {
        if(receivewindowsizebin_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FlowItems::HpItems::HwProfileList::RwsbItems::has_operation() const
{
    for (std::size_t index=0; index<receivewindowsizebin_list.len(); index++)
    {
        if(receivewindowsizebin_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FlowItems::HpItems::HwProfileList::RwsbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rwsb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::HpItems::HwProfileList::RwsbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::HpItems::HwProfileList::RwsbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReceiveWindowSizeBin-list")
    {
        auto ent_ = std::make_shared<System::FlowItems::HpItems::HwProfileList::RwsbItems::ReceiveWindowSizeBinList>();
        ent_->parent = this;
        receivewindowsizebin_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::HpItems::HwProfileList::RwsbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : receivewindowsizebin_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FlowItems::HpItems::HwProfileList::RwsbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::HpItems::HwProfileList::RwsbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::HpItems::HwProfileList::RwsbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReceiveWindowSizeBin-list")
        return true;
    return false;
}

System::FlowItems::HpItems::HwProfileList::RwsbItems::ReceiveWindowSizeBinList::ReceiveWindowSizeBinList()
    :
    id{YType::uint8, "id"},
    description{YType::str, "description"},
    lo{YType::uint32, "lo"},
    hi{YType::uint32, "hi"}
{

    yang_name = "ReceiveWindowSizeBin-list"; yang_parent_name = "rwsb-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::HpItems::HwProfileList::RwsbItems::ReceiveWindowSizeBinList::~ReceiveWindowSizeBinList()
{
}

bool System::FlowItems::HpItems::HwProfileList::RwsbItems::ReceiveWindowSizeBinList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| description.is_set
	|| lo.is_set
	|| hi.is_set;
}

bool System::FlowItems::HpItems::HwProfileList::RwsbItems::ReceiveWindowSizeBinList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(lo.yfilter)
	|| ydk::is_set(hi.yfilter);
}

std::string System::FlowItems::HpItems::HwProfileList::RwsbItems::ReceiveWindowSizeBinList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReceiveWindowSizeBin-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::HpItems::HwProfileList::RwsbItems::ReceiveWindowSizeBinList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (lo.is_set || is_set(lo.yfilter)) leaf_name_data.push_back(lo.get_name_leafdata());
    if (hi.is_set || is_set(hi.yfilter)) leaf_name_data.push_back(hi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::HpItems::HwProfileList::RwsbItems::ReceiveWindowSizeBinList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::HpItems::HwProfileList::RwsbItems::ReceiveWindowSizeBinList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FlowItems::HpItems::HwProfileList::RwsbItems::ReceiveWindowSizeBinList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lo")
    {
        lo = value;
        lo.value_namespace = name_space;
        lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hi")
    {
        hi = value;
        hi.value_namespace = name_space;
        hi.value_namespace_prefix = name_space_prefix;
    }
}

void System::FlowItems::HpItems::HwProfileList::RwsbItems::ReceiveWindowSizeBinList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "lo")
    {
        lo.yfilter = yfilter;
    }
    if(value_path == "hi")
    {
        hi.yfilter = yfilter;
    }
}

bool System::FlowItems::HpItems::HwProfileList::RwsbItems::ReceiveWindowSizeBinList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "description" || name == "lo" || name == "hi")
        return true;
    return false;
}

System::FlowItems::FitItems::FitItems()
    :
    fwdinsttarget_list(this, {"slot", "asic", "slice"})
{

    yang_name = "fit-items"; yang_parent_name = "flow-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::FitItems::~FitItems()
{
}

bool System::FlowItems::FitItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fwdinsttarget_list.len(); index++)
    {
        if(fwdinsttarget_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FlowItems::FitItems::has_operation() const
{
    for (std::size_t index=0; index<fwdinsttarget_list.len(); index++)
    {
        if(fwdinsttarget_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FlowItems::FitItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::FitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FwdInstTarget-list")
    {
        auto ent_ = std::make_shared<System::FlowItems::FitItems::FwdInstTargetList>();
        ent_->parent = this;
        fwdinsttarget_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fwdinsttarget_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FlowItems::FitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::FitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::FitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FwdInstTarget-list")
        return true;
    return false;
}

System::FlowItems::FitItems::FwdInstTargetList::FwdInstTargetList()
    :
    slot{YType::uint8, "slot"},
    asic{YType::uint8, "asic"},
    slice{YType::uint8, "slice"},
    exporterid{YType::uint32, "exporterId"}
        ,
    sp_items(std::make_shared<System::FlowItems::FitItems::FwdInstTargetList::SpItems>())
    , rshwprofile_items(std::make_shared<System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems>())
{
    sp_items->parent = this;
    rshwprofile_items->parent = this;

    yang_name = "FwdInstTarget-list"; yang_parent_name = "fit-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FlowItems::FitItems::FwdInstTargetList::~FwdInstTargetList()
{
}

bool System::FlowItems::FitItems::FwdInstTargetList::has_data() const
{
    if (is_presence_container) return true;
    return slot.is_set
	|| asic.is_set
	|| slice.is_set
	|| exporterid.is_set
	|| (sp_items !=  nullptr && sp_items->has_data())
	|| (rshwprofile_items !=  nullptr && rshwprofile_items->has_data());
}

bool System::FlowItems::FitItems::FwdInstTargetList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(asic.yfilter)
	|| ydk::is_set(slice.yfilter)
	|| ydk::is_set(exporterid.yfilter)
	|| (sp_items !=  nullptr && sp_items->has_operation())
	|| (rshwprofile_items !=  nullptr && rshwprofile_items->has_operation());
}

std::string System::FlowItems::FitItems::FwdInstTargetList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/flow-items/fit-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FlowItems::FitItems::FwdInstTargetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FwdInstTarget-list";
    ADD_KEY_TOKEN(slot, "slot");
    ADD_KEY_TOKEN(asic, "asic");
    ADD_KEY_TOKEN(slice, "slice");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FitItems::FwdInstTargetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (asic.is_set || is_set(asic.yfilter)) leaf_name_data.push_back(asic.get_name_leafdata());
    if (slice.is_set || is_set(slice.yfilter)) leaf_name_data.push_back(slice.get_name_leafdata());
    if (exporterid.is_set || is_set(exporterid.yfilter)) leaf_name_data.push_back(exporterid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FitItems::FwdInstTargetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sp-items")
    {
        if(sp_items == nullptr)
        {
            sp_items = std::make_shared<System::FlowItems::FitItems::FwdInstTargetList::SpItems>();
        }
        return sp_items;
    }

    if(child_yang_name == "rshwProfile-items")
    {
        if(rshwprofile_items == nullptr)
        {
            rshwprofile_items = std::make_shared<System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems>();
        }
        return rshwprofile_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FitItems::FwdInstTargetList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sp_items != nullptr)
    {
        _children["sp-items"] = sp_items;
    }

    if(rshwprofile_items != nullptr)
    {
        _children["rshwProfile-items"] = rshwprofile_items;
    }

    return _children;
}

void System::FlowItems::FitItems::FwdInstTargetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic")
    {
        asic = value;
        asic.value_namespace = name_space;
        asic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slice")
    {
        slice = value;
        slice.value_namespace = name_space;
        slice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exporterId")
    {
        exporterid = value;
        exporterid.value_namespace = name_space;
        exporterid.value_namespace_prefix = name_space_prefix;
    }
}

void System::FlowItems::FitItems::FwdInstTargetList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "asic")
    {
        asic.yfilter = yfilter;
    }
    if(value_path == "slice")
    {
        slice.yfilter = yfilter;
    }
    if(value_path == "exporterId")
    {
        exporterid.yfilter = yfilter;
    }
}

bool System::FlowItems::FitItems::FwdInstTargetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sp-items" || name == "rshwProfile-items" || name == "slot" || name == "asic" || name == "slice" || name == "exporterId")
        return true;
    return false;
}

System::FlowItems::FitItems::FwdInstTargetList::SpItems::SpItems()
    :
    servicepolicy_list(this, {"direction"})
{

    yang_name = "sp-items"; yang_parent_name = "FwdInstTarget-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::FitItems::FwdInstTargetList::SpItems::~SpItems()
{
}

bool System::FlowItems::FitItems::FwdInstTargetList::SpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<servicepolicy_list.len(); index++)
    {
        if(servicepolicy_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FlowItems::FitItems::FwdInstTargetList::SpItems::has_operation() const
{
    for (std::size_t index=0; index<servicepolicy_list.len(); index++)
    {
        if(servicepolicy_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FlowItems::FitItems::FwdInstTargetList::SpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FitItems::FwdInstTargetList::SpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FitItems::FwdInstTargetList::SpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServicePolicy-list")
    {
        auto ent_ = std::make_shared<System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList>();
        ent_->parent = this;
        servicepolicy_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FitItems::FwdInstTargetList::SpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : servicepolicy_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FlowItems::FitItems::FwdInstTargetList::SpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FlowItems::FitItems::FwdInstTargetList::SpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FlowItems::FitItems::FwdInstTargetList::SpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServicePolicy-list")
        return true;
    return false;
}

System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::ServicePolicyList()
    :
    direction{YType::enumeration, "direction"}
        ,
    rspmap_items(std::make_shared<System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems>())
{
    rspmap_items->parent = this;

    yang_name = "ServicePolicy-list"; yang_parent_name = "sp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::~ServicePolicyList()
{
}

bool System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| (rspmap_items !=  nullptr && rspmap_items->has_data());
}

bool System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| (rspmap_items !=  nullptr && rspmap_items->has_operation());
}

std::string System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServicePolicy-list";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspmap-items")
    {
        if(rspmap_items == nullptr)
        {
            rspmap_items = std::make_shared<System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems>();
        }
        return rspmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspmap_items != nullptr)
    {
        _children["rspmap-items"] = rspmap_items;
    }

    return _children;
}

void System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspmap-items" || name == "direction")
        return true;
    return false;
}

System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems::RspmapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rspmap-items"; yang_parent_name = "ServicePolicy-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems::~RspmapItems()
{
}

bool System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems::RshwProfileItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rshwProfile-items"; yang_parent_name = "FwdInstTarget-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems::~RshwProfileItems()
{
}

bool System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rshwProfile-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::NgoamItems::NgoamItems()
    :
    xcon_items(std::make_shared<System::NgoamItems::XconItems>())
    , profile_items(std::make_shared<System::NgoamItems::ProfileItems>())
    , installacl_items(std::make_shared<System::NgoamItems::InstallaclItems>())
    , authentication_items(std::make_shared<System::NgoamItems::AuthenticationItems>())
    , cc_items(std::make_shared<System::NgoamItems::CcItems>())
    , xconnect_items(std::make_shared<System::NgoamItems::XconnectItems>())
{
    xcon_items->parent = this;
    profile_items->parent = this;
    installacl_items->parent = this;
    authentication_items->parent = this;
    cc_items->parent = this;
    xconnect_items->parent = this;

    yang_name = "ngoam-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NgoamItems::~NgoamItems()
{
}

bool System::NgoamItems::has_data() const
{
    if (is_presence_container) return true;
    return (xcon_items !=  nullptr && xcon_items->has_data())
	|| (profile_items !=  nullptr && profile_items->has_data())
	|| (installacl_items !=  nullptr && installacl_items->has_data())
	|| (authentication_items !=  nullptr && authentication_items->has_data())
	|| (cc_items !=  nullptr && cc_items->has_data())
	|| (xconnect_items !=  nullptr && xconnect_items->has_data());
}

bool System::NgoamItems::has_operation() const
{
    return is_set(yfilter)
	|| (xcon_items !=  nullptr && xcon_items->has_operation())
	|| (profile_items !=  nullptr && profile_items->has_operation())
	|| (installacl_items !=  nullptr && installacl_items->has_operation())
	|| (authentication_items !=  nullptr && authentication_items->has_operation())
	|| (cc_items !=  nullptr && cc_items->has_operation())
	|| (xconnect_items !=  nullptr && xconnect_items->has_operation());
}

std::string System::NgoamItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NgoamItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ngoam-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgoamItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NgoamItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xcon-items")
    {
        if(xcon_items == nullptr)
        {
            xcon_items = std::make_shared<System::NgoamItems::XconItems>();
        }
        return xcon_items;
    }

    if(child_yang_name == "profile-items")
    {
        if(profile_items == nullptr)
        {
            profile_items = std::make_shared<System::NgoamItems::ProfileItems>();
        }
        return profile_items;
    }

    if(child_yang_name == "installacl-items")
    {
        if(installacl_items == nullptr)
        {
            installacl_items = std::make_shared<System::NgoamItems::InstallaclItems>();
        }
        return installacl_items;
    }

    if(child_yang_name == "authentication-items")
    {
        if(authentication_items == nullptr)
        {
            authentication_items = std::make_shared<System::NgoamItems::AuthenticationItems>();
        }
        return authentication_items;
    }

    if(child_yang_name == "cc-items")
    {
        if(cc_items == nullptr)
        {
            cc_items = std::make_shared<System::NgoamItems::CcItems>();
        }
        return cc_items;
    }

    if(child_yang_name == "xconnect-items")
    {
        if(xconnect_items == nullptr)
        {
            xconnect_items = std::make_shared<System::NgoamItems::XconnectItems>();
        }
        return xconnect_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NgoamItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xcon_items != nullptr)
    {
        _children["xcon-items"] = xcon_items;
    }

    if(profile_items != nullptr)
    {
        _children["profile-items"] = profile_items;
    }

    if(installacl_items != nullptr)
    {
        _children["installacl-items"] = installacl_items;
    }

    if(authentication_items != nullptr)
    {
        _children["authentication-items"] = authentication_items;
    }

    if(cc_items != nullptr)
    {
        _children["cc-items"] = cc_items;
    }

    if(xconnect_items != nullptr)
    {
        _children["xconnect-items"] = xconnect_items;
    }

    return _children;
}

void System::NgoamItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NgoamItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NgoamItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xcon-items" || name == "profile-items" || name == "installacl-items" || name == "authentication-items" || name == "cc-items" || name == "xconnect-items")
        return true;
    return false;
}

System::NgoamItems::XconItems::XconItems()
    :
    bd_items(std::make_shared<System::NgoamItems::XconItems::BdItems>())
{
    bd_items->parent = this;

    yang_name = "xcon-items"; yang_parent_name = "ngoam-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NgoamItems::XconItems::~XconItems()
{
}

bool System::NgoamItems::XconItems::has_data() const
{
    if (is_presence_container) return true;
    return (bd_items !=  nullptr && bd_items->has_data());
}

bool System::NgoamItems::XconItems::has_operation() const
{
    return is_set(yfilter)
	|| (bd_items !=  nullptr && bd_items->has_operation());
}

std::string System::NgoamItems::XconItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ngoam-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NgoamItems::XconItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xcon-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgoamItems::XconItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NgoamItems::XconItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-items")
    {
        if(bd_items == nullptr)
        {
            bd_items = std::make_shared<System::NgoamItems::XconItems::BdItems>();
        }
        return bd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NgoamItems::XconItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bd_items != nullptr)
    {
        _children["bd-items"] = bd_items;
    }

    return _children;
}

void System::NgoamItems::XconItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NgoamItems::XconItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NgoamItems::XconItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-items")
        return true;
    return false;
}

System::NgoamItems::XconItems::BdItems::BdItems()
    :
    xconnect_list(this, {"swbd"})
{

    yang_name = "bd-items"; yang_parent_name = "xcon-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NgoamItems::XconItems::BdItems::~BdItems()
{
}

bool System::NgoamItems::XconItems::BdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xconnect_list.len(); index++)
    {
        if(xconnect_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NgoamItems::XconItems::BdItems::has_operation() const
{
    for (std::size_t index=0; index<xconnect_list.len(); index++)
    {
        if(xconnect_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NgoamItems::XconItems::BdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ngoam-items/xcon-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NgoamItems::XconItems::BdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgoamItems::XconItems::BdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NgoamItems::XconItems::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "XConnect-list")
    {
        auto ent_ = std::make_shared<System::NgoamItems::XconItems::BdItems::XConnectList>();
        ent_->parent = this;
        xconnect_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NgoamItems::XconItems::BdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : xconnect_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NgoamItems::XconItems::BdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NgoamItems::XconItems::BdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NgoamItems::XconItems::BdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "XConnect-list")
        return true;
    return false;
}

System::NgoamItems::XconItems::BdItems::XConnectList::XConnectList()
    :
    swbd{YType::uint16, "swBd"},
    xcstate{YType::enumeration, "xcState"},
    peerip{YType::str, "peerIp"},
    vni{YType::uint32, "vni"},
    localport{YType::str, "localPort"},
    localportstate{YType::enumeration, "localPortState"},
    localvpcport{YType::str, "localVpcPort"},
    localvpcportstate{YType::enumeration, "localVpcPortState"},
    remoteport{YType::str, "remotePort"},
    remoteportstate{YType::enumeration, "remotePortState"},
    remotevpcport{YType::str, "remoteVpcPort"},
    remotevpcportstate{YType::enumeration, "remoteVpcPortState"},
    lastchgts{YType::str, "lastChgTs"}
{

    yang_name = "XConnect-list"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NgoamItems::XconItems::BdItems::XConnectList::~XConnectList()
{
}

bool System::NgoamItems::XconItems::BdItems::XConnectList::has_data() const
{
    if (is_presence_container) return true;
    return swbd.is_set
	|| xcstate.is_set
	|| peerip.is_set
	|| vni.is_set
	|| localport.is_set
	|| localportstate.is_set
	|| localvpcport.is_set
	|| localvpcportstate.is_set
	|| remoteport.is_set
	|| remoteportstate.is_set
	|| remotevpcport.is_set
	|| remotevpcportstate.is_set
	|| lastchgts.is_set;
}

bool System::NgoamItems::XconItems::BdItems::XConnectList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(swbd.yfilter)
	|| ydk::is_set(xcstate.yfilter)
	|| ydk::is_set(peerip.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(localport.yfilter)
	|| ydk::is_set(localportstate.yfilter)
	|| ydk::is_set(localvpcport.yfilter)
	|| ydk::is_set(localvpcportstate.yfilter)
	|| ydk::is_set(remoteport.yfilter)
	|| ydk::is_set(remoteportstate.yfilter)
	|| ydk::is_set(remotevpcport.yfilter)
	|| ydk::is_set(remotevpcportstate.yfilter)
	|| ydk::is_set(lastchgts.yfilter);
}

std::string System::NgoamItems::XconItems::BdItems::XConnectList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ngoam-items/xcon-items/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NgoamItems::XconItems::BdItems::XConnectList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "XConnect-list";
    ADD_KEY_TOKEN(swbd, "swBd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgoamItems::XconItems::BdItems::XConnectList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (swbd.is_set || is_set(swbd.yfilter)) leaf_name_data.push_back(swbd.get_name_leafdata());
    if (xcstate.is_set || is_set(xcstate.yfilter)) leaf_name_data.push_back(xcstate.get_name_leafdata());
    if (peerip.is_set || is_set(peerip.yfilter)) leaf_name_data.push_back(peerip.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (localport.is_set || is_set(localport.yfilter)) leaf_name_data.push_back(localport.get_name_leafdata());
    if (localportstate.is_set || is_set(localportstate.yfilter)) leaf_name_data.push_back(localportstate.get_name_leafdata());
    if (localvpcport.is_set || is_set(localvpcport.yfilter)) leaf_name_data.push_back(localvpcport.get_name_leafdata());
    if (localvpcportstate.is_set || is_set(localvpcportstate.yfilter)) leaf_name_data.push_back(localvpcportstate.get_name_leafdata());
    if (remoteport.is_set || is_set(remoteport.yfilter)) leaf_name_data.push_back(remoteport.get_name_leafdata());
    if (remoteportstate.is_set || is_set(remoteportstate.yfilter)) leaf_name_data.push_back(remoteportstate.get_name_leafdata());
    if (remotevpcport.is_set || is_set(remotevpcport.yfilter)) leaf_name_data.push_back(remotevpcport.get_name_leafdata());
    if (remotevpcportstate.is_set || is_set(remotevpcportstate.yfilter)) leaf_name_data.push_back(remotevpcportstate.get_name_leafdata());
    if (lastchgts.is_set || is_set(lastchgts.yfilter)) leaf_name_data.push_back(lastchgts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NgoamItems::XconItems::BdItems::XConnectList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NgoamItems::XconItems::BdItems::XConnectList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NgoamItems::XconItems::BdItems::XConnectList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "swBd")
    {
        swbd = value;
        swbd.value_namespace = name_space;
        swbd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcState")
    {
        xcstate = value;
        xcstate.value_namespace = name_space;
        xcstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerIp")
    {
        peerip = value;
        peerip.value_namespace = name_space;
        peerip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPort")
    {
        localport = value;
        localport.value_namespace = name_space;
        localport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPortState")
    {
        localportstate = value;
        localportstate.value_namespace = name_space;
        localportstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localVpcPort")
    {
        localvpcport = value;
        localvpcport.value_namespace = name_space;
        localvpcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localVpcPortState")
    {
        localvpcportstate = value;
        localvpcportstate.value_namespace = name_space;
        localvpcportstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remotePort")
    {
        remoteport = value;
        remoteport.value_namespace = name_space;
        remoteport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remotePortState")
    {
        remoteportstate = value;
        remoteportstate.value_namespace = name_space;
        remoteportstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteVpcPort")
    {
        remotevpcport = value;
        remotevpcport.value_namespace = name_space;
        remotevpcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteVpcPortState")
    {
        remotevpcportstate = value;
        remotevpcportstate.value_namespace = name_space;
        remotevpcportstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastChgTs")
    {
        lastchgts = value;
        lastchgts.value_namespace = name_space;
        lastchgts.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgoamItems::XconItems::BdItems::XConnectList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "swBd")
    {
        swbd.yfilter = yfilter;
    }
    if(value_path == "xcState")
    {
        xcstate.yfilter = yfilter;
    }
    if(value_path == "peerIp")
    {
        peerip.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "localPort")
    {
        localport.yfilter = yfilter;
    }
    if(value_path == "localPortState")
    {
        localportstate.yfilter = yfilter;
    }
    if(value_path == "localVpcPort")
    {
        localvpcport.yfilter = yfilter;
    }
    if(value_path == "localVpcPortState")
    {
        localvpcportstate.yfilter = yfilter;
    }
    if(value_path == "remotePort")
    {
        remoteport.yfilter = yfilter;
    }
    if(value_path == "remotePortState")
    {
        remoteportstate.yfilter = yfilter;
    }
    if(value_path == "remoteVpcPort")
    {
        remotevpcport.yfilter = yfilter;
    }
    if(value_path == "remoteVpcPortState")
    {
        remotevpcportstate.yfilter = yfilter;
    }
    if(value_path == "lastChgTs")
    {
        lastchgts.yfilter = yfilter;
    }
}

bool System::NgoamItems::XconItems::BdItems::XConnectList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "swBd" || name == "xcState" || name == "peerIp" || name == "vni" || name == "localPort" || name == "localPortState" || name == "localVpcPort" || name == "localVpcPortState" || name == "remotePort" || name == "remotePortState" || name == "remoteVpcPort" || name == "remoteVpcPortState" || name == "lastChgTs")
        return true;
    return false;
}

System::NgoamItems::ProfileItems::ProfileItems()
    :
    profile_list(this, {"profid"})
{

    yang_name = "profile-items"; yang_parent_name = "ngoam-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NgoamItems::ProfileItems::~ProfileItems()
{
}

bool System::NgoamItems::ProfileItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile_list.len(); index++)
    {
        if(profile_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NgoamItems::ProfileItems::has_operation() const
{
    for (std::size_t index=0; index<profile_list.len(); index++)
    {
        if(profile_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NgoamItems::ProfileItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ngoam-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NgoamItems::ProfileItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgoamItems::ProfileItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NgoamItems::ProfileItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Profile-list")
    {
        auto ent_ = std::make_shared<System::NgoamItems::ProfileItems::ProfileList>();
        ent_->parent = this;
        profile_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NgoamItems::ProfileItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : profile_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NgoamItems::ProfileItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NgoamItems::ProfileItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NgoamItems::ProfileItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Profile-list")
        return true;
    return false;
}

System::NgoamItems::ProfileItems::ProfileList::ProfileList()
    :
    profid{YType::uint16, "profId"},
    desc{YType::str, "desc"},
    dot1q{YType::uint16, "dot1q"},
    dot1qif{YType::str, "dot1qIf"},
    hop{YType::uint8, "hop"},
    interface{YType::str, "interface"},
    oamchannel{YType::enumeration, "oamChannel"},
    payloadpad{YType::uint16, "payloadPad"},
    srcport{YType::str, "srcPort"}
        ,
    flowfwd_items(std::make_shared<System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems>())
{
    flowfwd_items->parent = this;

    yang_name = "Profile-list"; yang_parent_name = "profile-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NgoamItems::ProfileItems::ProfileList::~ProfileList()
{
}

bool System::NgoamItems::ProfileItems::ProfileList::has_data() const
{
    if (is_presence_container) return true;
    return profid.is_set
	|| desc.is_set
	|| dot1q.is_set
	|| dot1qif.is_set
	|| hop.is_set
	|| interface.is_set
	|| oamchannel.is_set
	|| payloadpad.is_set
	|| srcport.is_set
	|| (flowfwd_items !=  nullptr && flowfwd_items->has_data());
}

bool System::NgoamItems::ProfileItems::ProfileList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profid.yfilter)
	|| ydk::is_set(desc.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(dot1qif.yfilter)
	|| ydk::is_set(hop.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(oamchannel.yfilter)
	|| ydk::is_set(payloadpad.yfilter)
	|| ydk::is_set(srcport.yfilter)
	|| (flowfwd_items !=  nullptr && flowfwd_items->has_operation());
}

std::string System::NgoamItems::ProfileItems::ProfileList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ngoam-items/profile-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NgoamItems::ProfileItems::ProfileList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Profile-list";
    ADD_KEY_TOKEN(profid, "profId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgoamItems::ProfileItems::ProfileList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profid.is_set || is_set(profid.yfilter)) leaf_name_data.push_back(profid.get_name_leafdata());
    if (desc.is_set || is_set(desc.yfilter)) leaf_name_data.push_back(desc.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (dot1qif.is_set || is_set(dot1qif.yfilter)) leaf_name_data.push_back(dot1qif.get_name_leafdata());
    if (hop.is_set || is_set(hop.yfilter)) leaf_name_data.push_back(hop.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (oamchannel.is_set || is_set(oamchannel.yfilter)) leaf_name_data.push_back(oamchannel.get_name_leafdata());
    if (payloadpad.is_set || is_set(payloadpad.yfilter)) leaf_name_data.push_back(payloadpad.get_name_leafdata());
    if (srcport.is_set || is_set(srcport.yfilter)) leaf_name_data.push_back(srcport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NgoamItems::ProfileItems::ProfileList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flowfwd-items")
    {
        if(flowfwd_items == nullptr)
        {
            flowfwd_items = std::make_shared<System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems>();
        }
        return flowfwd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NgoamItems::ProfileItems::ProfileList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flowfwd_items != nullptr)
    {
        _children["flowfwd-items"] = flowfwd_items;
    }

    return _children;
}

void System::NgoamItems::ProfileItems::ProfileList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profId")
    {
        profid = value;
        profid.value_namespace = name_space;
        profid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desc")
    {
        desc = value;
        desc.value_namespace = name_space;
        desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qIf")
    {
        dot1qif = value;
        dot1qif.value_namespace = name_space;
        dot1qif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop")
    {
        hop = value;
        hop.value_namespace = name_space;
        hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oamChannel")
    {
        oamchannel = value;
        oamchannel.value_namespace = name_space;
        oamchannel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadPad")
    {
        payloadpad = value;
        payloadpad.value_namespace = name_space;
        payloadpad.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort")
    {
        srcport = value;
        srcport.value_namespace = name_space;
        srcport.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgoamItems::ProfileItems::ProfileList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profId")
    {
        profid.yfilter = yfilter;
    }
    if(value_path == "desc")
    {
        desc.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "dot1qIf")
    {
        dot1qif.yfilter = yfilter;
    }
    if(value_path == "hop")
    {
        hop.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "oamChannel")
    {
        oamchannel.yfilter = yfilter;
    }
    if(value_path == "payloadPad")
    {
        payloadpad.yfilter = yfilter;
    }
    if(value_path == "srcPort")
    {
        srcport.yfilter = yfilter;
    }
}

bool System::NgoamItems::ProfileItems::ProfileList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flowfwd-items" || name == "profId" || name == "desc" || name == "dot1q" || name == "dot1qIf" || name == "hop" || name == "interface" || name == "oamChannel" || name == "payloadPad" || name == "srcPort")
        return true;
    return false;
}

System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems::FlowfwdItems()
    :
    forward{YType::boolean, "forward"},
    dot1q{YType::uint16, "dot1q"},
    ipdest{YType::str, "ipDest"},
    ipsrc{YType::str, "ipSrc"},
    ipv6dest{YType::str, "ipv6Dest"},
    ipv6src{YType::str, "ipv6Src"},
    macdest{YType::str, "macDest"},
    macsrc{YType::str, "macSrc"},
    portdest{YType::uint16, "portDest"},
    portsrc{YType::uint16, "portSrc"},
    protocol{YType::uint16, "protocol"},
    packet{YType::str, "packet"}
{

    yang_name = "flowfwd-items"; yang_parent_name = "Profile-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems::~FlowfwdItems()
{
}

bool System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems::has_data() const
{
    if (is_presence_container) return true;
    return forward.is_set
	|| dot1q.is_set
	|| ipdest.is_set
	|| ipsrc.is_set
	|| ipv6dest.is_set
	|| ipv6src.is_set
	|| macdest.is_set
	|| macsrc.is_set
	|| portdest.is_set
	|| portsrc.is_set
	|| protocol.is_set
	|| packet.is_set;
}

bool System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forward.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(ipdest.yfilter)
	|| ydk::is_set(ipsrc.yfilter)
	|| ydk::is_set(ipv6dest.yfilter)
	|| ydk::is_set(ipv6src.yfilter)
	|| ydk::is_set(macdest.yfilter)
	|| ydk::is_set(macsrc.yfilter)
	|| ydk::is_set(portdest.yfilter)
	|| ydk::is_set(portsrc.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(packet.yfilter);
}

std::string System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowfwd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward.is_set || is_set(forward.yfilter)) leaf_name_data.push_back(forward.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (ipdest.is_set || is_set(ipdest.yfilter)) leaf_name_data.push_back(ipdest.get_name_leafdata());
    if (ipsrc.is_set || is_set(ipsrc.yfilter)) leaf_name_data.push_back(ipsrc.get_name_leafdata());
    if (ipv6dest.is_set || is_set(ipv6dest.yfilter)) leaf_name_data.push_back(ipv6dest.get_name_leafdata());
    if (ipv6src.is_set || is_set(ipv6src.yfilter)) leaf_name_data.push_back(ipv6src.get_name_leafdata());
    if (macdest.is_set || is_set(macdest.yfilter)) leaf_name_data.push_back(macdest.get_name_leafdata());
    if (macsrc.is_set || is_set(macsrc.yfilter)) leaf_name_data.push_back(macsrc.get_name_leafdata());
    if (portdest.is_set || is_set(portdest.yfilter)) leaf_name_data.push_back(portdest.get_name_leafdata());
    if (portsrc.is_set || is_set(portsrc.yfilter)) leaf_name_data.push_back(portsrc.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forward")
    {
        forward = value;
        forward.value_namespace = name_space;
        forward.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipDest")
    {
        ipdest = value;
        ipdest.value_namespace = name_space;
        ipdest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSrc")
    {
        ipsrc = value;
        ipsrc.value_namespace = name_space;
        ipsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6Dest")
    {
        ipv6dest = value;
        ipv6dest.value_namespace = name_space;
        ipv6dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6Src")
    {
        ipv6src = value;
        ipv6src.value_namespace = name_space;
        ipv6src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macDest")
    {
        macdest = value;
        macdest.value_namespace = name_space;
        macdest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macSrc")
    {
        macsrc = value;
        macsrc.value_namespace = name_space;
        macsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portDest")
    {
        portdest = value;
        portdest.value_namespace = name_space;
        portdest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portSrc")
    {
        portsrc = value;
        portsrc.value_namespace = name_space;
        portsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forward")
    {
        forward.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "ipDest")
    {
        ipdest.yfilter = yfilter;
    }
    if(value_path == "ipSrc")
    {
        ipsrc.yfilter = yfilter;
    }
    if(value_path == "ipv6Dest")
    {
        ipv6dest.yfilter = yfilter;
    }
    if(value_path == "ipv6Src")
    {
        ipv6src.yfilter = yfilter;
    }
    if(value_path == "macDest")
    {
        macdest.yfilter = yfilter;
    }
    if(value_path == "macSrc")
    {
        macsrc.yfilter = yfilter;
    }
    if(value_path == "portDest")
    {
        portdest.yfilter = yfilter;
    }
    if(value_path == "portSrc")
    {
        portsrc.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
}

bool System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward" || name == "dot1q" || name == "ipDest" || name == "ipSrc" || name == "ipv6Dest" || name == "ipv6Src" || name == "macDest" || name == "macSrc" || name == "portDest" || name == "portSrc" || name == "protocol" || name == "packet")
        return true;
    return false;
}

System::NgoamItems::InstallaclItems::InstallaclItems()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "installacl-items"; yang_parent_name = "ngoam-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NgoamItems::InstallaclItems::~InstallaclItems()
{
}

bool System::NgoamItems::InstallaclItems::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool System::NgoamItems::InstallaclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string System::NgoamItems::InstallaclItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ngoam-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NgoamItems::InstallaclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "installacl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgoamItems::InstallaclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NgoamItems::InstallaclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NgoamItems::InstallaclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NgoamItems::InstallaclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgoamItems::InstallaclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool System::NgoamItems::InstallaclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

System::NgoamItems::AuthenticationItems::AuthenticationItems()
    :
    key{YType::str, "key"}
{

    yang_name = "authentication-items"; yang_parent_name = "ngoam-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NgoamItems::AuthenticationItems::~AuthenticationItems()
{
}

bool System::NgoamItems::AuthenticationItems::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set;
}

bool System::NgoamItems::AuthenticationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string System::NgoamItems::AuthenticationItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ngoam-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NgoamItems::AuthenticationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgoamItems::AuthenticationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NgoamItems::AuthenticationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NgoamItems::AuthenticationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NgoamItems::AuthenticationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgoamItems::AuthenticationItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool System::NgoamItems::AuthenticationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

System::NgoamItems::CcItems::CcItems()
    :
    connectcheck_list(this, {"ccid"})
{

    yang_name = "cc-items"; yang_parent_name = "ngoam-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NgoamItems::CcItems::~CcItems()
{
}

bool System::NgoamItems::CcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<connectcheck_list.len(); index++)
    {
        if(connectcheck_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NgoamItems::CcItems::has_operation() const
{
    for (std::size_t index=0; index<connectcheck_list.len(); index++)
    {
        if(connectcheck_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NgoamItems::CcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ngoam-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NgoamItems::CcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgoamItems::CcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NgoamItems::CcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ConnectCheck-list")
    {
        auto ent_ = std::make_shared<System::NgoamItems::CcItems::ConnectCheckList>();
        ent_->parent = this;
        connectcheck_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NgoamItems::CcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : connectcheck_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NgoamItems::CcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NgoamItems::CcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NgoamItems::CcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ConnectCheck-list")
        return true;
    return false;
}

System::NgoamItems::CcItems::ConnectCheckList::ConnectCheckList()
    :
    ccid{YType::uint16, "ccId"},
    profileid{YType::uint16, "profileId"},
    dstip{YType::str, "dstIp"},
    dstipv6{YType::str, "dstIpv6"},
    dstmac{YType::str, "dstMAC"},
    dstunknown{YType::boolean, "dstUnknown"},
    srcip{YType::str, "srcIp"},
    srcipv6{YType::str, "srcIpv6"},
    dot1q{YType::uint16, "dot1q"},
    srcport{YType::str, "srcPort"},
    count{YType::uint16, "count"},
    timeout{YType::uint8, "timeout"},
    interval{YType::uint8, "interval"},
    datapattern{YType::uint16, "dataPattern"},
    packetsz{YType::uint16, "packetSz"},
    vrf{YType::str, "vrf"},
    vni{YType::uint32, "vni"},
    egressif{YType::str, "egressIf"},
    macsrcif{YType::str, "macsrcif"},
    verifyhost{YType::boolean, "verifyHost"},
    payload_dot1q{YType::uint16, "payload_dot1q"},
    payload_srcip{YType::str, "payload_srcip"},
    payload_srcipv6{YType::str, "payload_srcipv6"},
    payload_srcmac{YType::str, "payload_srcmac"},
    payload_dstip{YType::str, "payload_dstip"},
    payload_dstipv6{YType::str, "payload_dstipv6"},
    payload_dstmac{YType::str, "payload_dstmac"},
    payload_srcport{YType::uint16, "payload_srcport"},
    payload_dstport{YType::uint16, "payload_dstport"},
    payload_protocol{YType::uint16, "payload_protocol"},
    payload_srcif{YType::str, "payload_srcif"}
        ,
    pingnverslt_items(std::make_shared<System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems>())
{
    pingnverslt_items->parent = this;

    yang_name = "ConnectCheck-list"; yang_parent_name = "cc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NgoamItems::CcItems::ConnectCheckList::~ConnectCheckList()
{
}

bool System::NgoamItems::CcItems::ConnectCheckList::has_data() const
{
    if (is_presence_container) return true;
    return ccid.is_set
	|| profileid.is_set
	|| dstip.is_set
	|| dstipv6.is_set
	|| dstmac.is_set
	|| dstunknown.is_set
	|| srcip.is_set
	|| srcipv6.is_set
	|| dot1q.is_set
	|| srcport.is_set
	|| count.is_set
	|| timeout.is_set
	|| interval.is_set
	|| datapattern.is_set
	|| packetsz.is_set
	|| vrf.is_set
	|| vni.is_set
	|| egressif.is_set
	|| macsrcif.is_set
	|| verifyhost.is_set
	|| payload_dot1q.is_set
	|| payload_srcip.is_set
	|| payload_srcipv6.is_set
	|| payload_srcmac.is_set
	|| payload_dstip.is_set
	|| payload_dstipv6.is_set
	|| payload_dstmac.is_set
	|| payload_srcport.is_set
	|| payload_dstport.is_set
	|| payload_protocol.is_set
	|| payload_srcif.is_set
	|| (pingnverslt_items !=  nullptr && pingnverslt_items->has_data());
}

bool System::NgoamItems::CcItems::ConnectCheckList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccid.yfilter)
	|| ydk::is_set(profileid.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(dstipv6.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(dstunknown.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(srcipv6.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(srcport.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(datapattern.yfilter)
	|| ydk::is_set(packetsz.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(egressif.yfilter)
	|| ydk::is_set(macsrcif.yfilter)
	|| ydk::is_set(verifyhost.yfilter)
	|| ydk::is_set(payload_dot1q.yfilter)
	|| ydk::is_set(payload_srcip.yfilter)
	|| ydk::is_set(payload_srcipv6.yfilter)
	|| ydk::is_set(payload_srcmac.yfilter)
	|| ydk::is_set(payload_dstip.yfilter)
	|| ydk::is_set(payload_dstipv6.yfilter)
	|| ydk::is_set(payload_dstmac.yfilter)
	|| ydk::is_set(payload_srcport.yfilter)
	|| ydk::is_set(payload_dstport.yfilter)
	|| ydk::is_set(payload_protocol.yfilter)
	|| ydk::is_set(payload_srcif.yfilter)
	|| (pingnverslt_items !=  nullptr && pingnverslt_items->has_operation());
}

std::string System::NgoamItems::CcItems::ConnectCheckList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ngoam-items/cc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NgoamItems::CcItems::ConnectCheckList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ConnectCheck-list";
    ADD_KEY_TOKEN(ccid, "ccId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgoamItems::CcItems::ConnectCheckList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccid.is_set || is_set(ccid.yfilter)) leaf_name_data.push_back(ccid.get_name_leafdata());
    if (profileid.is_set || is_set(profileid.yfilter)) leaf_name_data.push_back(profileid.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (dstipv6.is_set || is_set(dstipv6.yfilter)) leaf_name_data.push_back(dstipv6.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (dstunknown.is_set || is_set(dstunknown.yfilter)) leaf_name_data.push_back(dstunknown.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (srcipv6.is_set || is_set(srcipv6.yfilter)) leaf_name_data.push_back(srcipv6.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (srcport.is_set || is_set(srcport.yfilter)) leaf_name_data.push_back(srcport.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (datapattern.is_set || is_set(datapattern.yfilter)) leaf_name_data.push_back(datapattern.get_name_leafdata());
    if (packetsz.is_set || is_set(packetsz.yfilter)) leaf_name_data.push_back(packetsz.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (egressif.is_set || is_set(egressif.yfilter)) leaf_name_data.push_back(egressif.get_name_leafdata());
    if (macsrcif.is_set || is_set(macsrcif.yfilter)) leaf_name_data.push_back(macsrcif.get_name_leafdata());
    if (verifyhost.is_set || is_set(verifyhost.yfilter)) leaf_name_data.push_back(verifyhost.get_name_leafdata());
    if (payload_dot1q.is_set || is_set(payload_dot1q.yfilter)) leaf_name_data.push_back(payload_dot1q.get_name_leafdata());
    if (payload_srcip.is_set || is_set(payload_srcip.yfilter)) leaf_name_data.push_back(payload_srcip.get_name_leafdata());
    if (payload_srcipv6.is_set || is_set(payload_srcipv6.yfilter)) leaf_name_data.push_back(payload_srcipv6.get_name_leafdata());
    if (payload_srcmac.is_set || is_set(payload_srcmac.yfilter)) leaf_name_data.push_back(payload_srcmac.get_name_leafdata());
    if (payload_dstip.is_set || is_set(payload_dstip.yfilter)) leaf_name_data.push_back(payload_dstip.get_name_leafdata());
    if (payload_dstipv6.is_set || is_set(payload_dstipv6.yfilter)) leaf_name_data.push_back(payload_dstipv6.get_name_leafdata());
    if (payload_dstmac.is_set || is_set(payload_dstmac.yfilter)) leaf_name_data.push_back(payload_dstmac.get_name_leafdata());
    if (payload_srcport.is_set || is_set(payload_srcport.yfilter)) leaf_name_data.push_back(payload_srcport.get_name_leafdata());
    if (payload_dstport.is_set || is_set(payload_dstport.yfilter)) leaf_name_data.push_back(payload_dstport.get_name_leafdata());
    if (payload_protocol.is_set || is_set(payload_protocol.yfilter)) leaf_name_data.push_back(payload_protocol.get_name_leafdata());
    if (payload_srcif.is_set || is_set(payload_srcif.yfilter)) leaf_name_data.push_back(payload_srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NgoamItems::CcItems::ConnectCheckList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pingnverslt-items")
    {
        if(pingnverslt_items == nullptr)
        {
            pingnverslt_items = std::make_shared<System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems>();
        }
        return pingnverslt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NgoamItems::CcItems::ConnectCheckList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pingnverslt_items != nullptr)
    {
        _children["pingnverslt-items"] = pingnverslt_items;
    }

    return _children;
}

void System::NgoamItems::CcItems::ConnectCheckList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccId")
    {
        ccid = value;
        ccid.value_namespace = name_space;
        ccid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profileId")
    {
        profileid = value;
        profileid.value_namespace = name_space;
        profileid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIpv6")
    {
        dstipv6 = value;
        dstipv6.value_namespace = name_space;
        dstipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMAC")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstUnknown")
    {
        dstunknown = value;
        dstunknown.value_namespace = name_space;
        dstunknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6 = value;
        srcipv6.value_namespace = name_space;
        srcipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort")
    {
        srcport = value;
        srcport.value_namespace = name_space;
        srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataPattern")
    {
        datapattern = value;
        datapattern.value_namespace = name_space;
        datapattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetSz")
    {
        packetsz = value;
        packetsz.value_namespace = name_space;
        packetsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egressIf")
    {
        egressif = value;
        egressif.value_namespace = name_space;
        egressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsrcif")
    {
        macsrcif = value;
        macsrcif.value_namespace = name_space;
        macsrcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verifyHost")
    {
        verifyhost = value;
        verifyhost.value_namespace = name_space;
        verifyhost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dot1q")
    {
        payload_dot1q = value;
        payload_dot1q.value_namespace = name_space;
        payload_dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcip")
    {
        payload_srcip = value;
        payload_srcip.value_namespace = name_space;
        payload_srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcipv6")
    {
        payload_srcipv6 = value;
        payload_srcipv6.value_namespace = name_space;
        payload_srcipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcmac")
    {
        payload_srcmac = value;
        payload_srcmac.value_namespace = name_space;
        payload_srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstip")
    {
        payload_dstip = value;
        payload_dstip.value_namespace = name_space;
        payload_dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstipv6")
    {
        payload_dstipv6 = value;
        payload_dstipv6.value_namespace = name_space;
        payload_dstipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstmac")
    {
        payload_dstmac = value;
        payload_dstmac.value_namespace = name_space;
        payload_dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcport")
    {
        payload_srcport = value;
        payload_srcport.value_namespace = name_space;
        payload_srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstport")
    {
        payload_dstport = value;
        payload_dstport.value_namespace = name_space;
        payload_dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_protocol")
    {
        payload_protocol = value;
        payload_protocol.value_namespace = name_space;
        payload_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcif")
    {
        payload_srcif = value;
        payload_srcif.value_namespace = name_space;
        payload_srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgoamItems::CcItems::ConnectCheckList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccId")
    {
        ccid.yfilter = yfilter;
    }
    if(value_path == "profileId")
    {
        profileid.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "dstIpv6")
    {
        dstipv6.yfilter = yfilter;
    }
    if(value_path == "dstMAC")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "dstUnknown")
    {
        dstunknown.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "srcPort")
    {
        srcport.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "dataPattern")
    {
        datapattern.yfilter = yfilter;
    }
    if(value_path == "packetSz")
    {
        packetsz.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "egressIf")
    {
        egressif.yfilter = yfilter;
    }
    if(value_path == "macsrcif")
    {
        macsrcif.yfilter = yfilter;
    }
    if(value_path == "verifyHost")
    {
        verifyhost.yfilter = yfilter;
    }
    if(value_path == "payload_dot1q")
    {
        payload_dot1q.yfilter = yfilter;
    }
    if(value_path == "payload_srcip")
    {
        payload_srcip.yfilter = yfilter;
    }
    if(value_path == "payload_srcipv6")
    {
        payload_srcipv6.yfilter = yfilter;
    }
    if(value_path == "payload_srcmac")
    {
        payload_srcmac.yfilter = yfilter;
    }
    if(value_path == "payload_dstip")
    {
        payload_dstip.yfilter = yfilter;
    }
    if(value_path == "payload_dstipv6")
    {
        payload_dstipv6.yfilter = yfilter;
    }
    if(value_path == "payload_dstmac")
    {
        payload_dstmac.yfilter = yfilter;
    }
    if(value_path == "payload_srcport")
    {
        payload_srcport.yfilter = yfilter;
    }
    if(value_path == "payload_dstport")
    {
        payload_dstport.yfilter = yfilter;
    }
    if(value_path == "payload_protocol")
    {
        payload_protocol.yfilter = yfilter;
    }
    if(value_path == "payload_srcif")
    {
        payload_srcif.yfilter = yfilter;
    }
}

bool System::NgoamItems::CcItems::ConnectCheckList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pingnverslt-items" || name == "ccId" || name == "profileId" || name == "dstIp" || name == "dstIpv6" || name == "dstMAC" || name == "dstUnknown" || name == "srcIp" || name == "srcIpv6" || name == "dot1q" || name == "srcPort" || name == "count" || name == "timeout" || name == "interval" || name == "dataPattern" || name == "packetSz" || name == "vrf" || name == "vni" || name == "egressIf" || name == "macsrcif" || name == "verifyHost" || name == "payload_dot1q" || name == "payload_srcip" || name == "payload_srcipv6" || name == "payload_srcmac" || name == "payload_dstip" || name == "payload_dstipv6" || name == "payload_dstmac" || name == "payload_srcport" || name == "payload_dstport" || name == "payload_protocol" || name == "payload_srcif")
        return true;
    return false;
}

System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingnversltItems()
    :
    pingnverslt_list(this, {"sessionid"})
{

    yang_name = "pingnverslt-items"; yang_parent_name = "ConnectCheck-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::~PingnversltItems()
{
}

bool System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pingnverslt_list.len(); index++)
    {
        if(pingnverslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::has_operation() const
{
    for (std::size_t index=0; index<pingnverslt_list.len(); index++)
    {
        if(pingnverslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pingnverslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PingNveRslt-list")
    {
        auto ent_ = std::make_shared<System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingNveRsltList>();
        ent_->parent = this;
        pingnverslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pingnverslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PingNveRslt-list")
        return true;
    return false;
}

System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingNveRsltList::PingNveRsltList()
    :
    sessionid{YType::uint16, "sessionId"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"},
    replyip{YType::str, "replyIp"},
    replyipv6{YType::str, "replyIpv6"},
    nodename{YType::str, "nodeName"},
    errorcode{YType::str, "errorCode"},
    failreason{YType::str, "failReason"},
    sport{YType::uint16, "sPort"},
    packetsz{YType::uint16, "packetSz"},
    sentpkts{YType::uint32, "sentPkts"},
    notsentpkts{YType::uint32, "notSentPkts"},
    rcvdpkts{YType::uint32, "rcvdPkts"},
    minrtt{YType::uint32, "minRtt"},
    avgrtt{YType::uint32, "avgRtt"},
    maxrtt{YType::uint32, "maxRtt"},
    totalrtt{YType::uint32, "totalRtt"}
{

    yang_name = "PingNveRslt-list"; yang_parent_name = "pingnverslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingNveRsltList::~PingNveRsltList()
{
}

bool System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingNveRsltList::has_data() const
{
    if (is_presence_container) return true;
    return sessionid.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| replyip.is_set
	|| replyipv6.is_set
	|| nodename.is_set
	|| errorcode.is_set
	|| failreason.is_set
	|| sport.is_set
	|| packetsz.is_set
	|| sentpkts.is_set
	|| notsentpkts.is_set
	|| rcvdpkts.is_set
	|| minrtt.is_set
	|| avgrtt.is_set
	|| maxrtt.is_set
	|| totalrtt.is_set;
}

bool System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingNveRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessionid.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(replyip.yfilter)
	|| ydk::is_set(replyipv6.yfilter)
	|| ydk::is_set(nodename.yfilter)
	|| ydk::is_set(errorcode.yfilter)
	|| ydk::is_set(failreason.yfilter)
	|| ydk::is_set(sport.yfilter)
	|| ydk::is_set(packetsz.yfilter)
	|| ydk::is_set(sentpkts.yfilter)
	|| ydk::is_set(notsentpkts.yfilter)
	|| ydk::is_set(rcvdpkts.yfilter)
	|| ydk::is_set(minrtt.yfilter)
	|| ydk::is_set(avgrtt.yfilter)
	|| ydk::is_set(maxrtt.yfilter)
	|| ydk::is_set(totalrtt.yfilter);
}

std::string System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingNveRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PingNveRslt-list";
    ADD_KEY_TOKEN(sessionid, "sessionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingNveRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessionid.is_set || is_set(sessionid.yfilter)) leaf_name_data.push_back(sessionid.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (replyip.is_set || is_set(replyip.yfilter)) leaf_name_data.push_back(replyip.get_name_leafdata());
    if (replyipv6.is_set || is_set(replyipv6.yfilter)) leaf_name_data.push_back(replyipv6.get_name_leafdata());
    if (nodename.is_set || is_set(nodename.yfilter)) leaf_name_data.push_back(nodename.get_name_leafdata());
    if (errorcode.is_set || is_set(errorcode.yfilter)) leaf_name_data.push_back(errorcode.get_name_leafdata());
    if (failreason.is_set || is_set(failreason.yfilter)) leaf_name_data.push_back(failreason.get_name_leafdata());
    if (sport.is_set || is_set(sport.yfilter)) leaf_name_data.push_back(sport.get_name_leafdata());
    if (packetsz.is_set || is_set(packetsz.yfilter)) leaf_name_data.push_back(packetsz.get_name_leafdata());
    if (sentpkts.is_set || is_set(sentpkts.yfilter)) leaf_name_data.push_back(sentpkts.get_name_leafdata());
    if (notsentpkts.is_set || is_set(notsentpkts.yfilter)) leaf_name_data.push_back(notsentpkts.get_name_leafdata());
    if (rcvdpkts.is_set || is_set(rcvdpkts.yfilter)) leaf_name_data.push_back(rcvdpkts.get_name_leafdata());
    if (minrtt.is_set || is_set(minrtt.yfilter)) leaf_name_data.push_back(minrtt.get_name_leafdata());
    if (avgrtt.is_set || is_set(avgrtt.yfilter)) leaf_name_data.push_back(avgrtt.get_name_leafdata());
    if (maxrtt.is_set || is_set(maxrtt.yfilter)) leaf_name_data.push_back(maxrtt.get_name_leafdata());
    if (totalrtt.is_set || is_set(totalrtt.yfilter)) leaf_name_data.push_back(totalrtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingNveRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingNveRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingNveRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessionId")
    {
        sessionid = value;
        sessionid.value_namespace = name_space;
        sessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replyIp")
    {
        replyip = value;
        replyip.value_namespace = name_space;
        replyip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replyIpv6")
    {
        replyipv6 = value;
        replyipv6.value_namespace = name_space;
        replyipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeName")
    {
        nodename = value;
        nodename.value_namespace = name_space;
        nodename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errorCode")
    {
        errorcode = value;
        errorcode.value_namespace = name_space;
        errorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failReason")
    {
        failreason = value;
        failreason.value_namespace = name_space;
        failreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sPort")
    {
        sport = value;
        sport.value_namespace = name_space;
        sport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetSz")
    {
        packetsz = value;
        packetsz.value_namespace = name_space;
        packetsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentPkts")
    {
        sentpkts = value;
        sentpkts.value_namespace = name_space;
        sentpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notSentPkts")
    {
        notsentpkts = value;
        notsentpkts.value_namespace = name_space;
        notsentpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdPkts")
    {
        rcvdpkts = value;
        rcvdpkts.value_namespace = name_space;
        rcvdpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRtt")
    {
        minrtt = value;
        minrtt.value_namespace = name_space;
        minrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avgRtt")
    {
        avgrtt = value;
        avgrtt.value_namespace = name_space;
        avgrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRtt")
    {
        maxrtt = value;
        maxrtt.value_namespace = name_space;
        maxrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalRtt")
    {
        totalrtt = value;
        totalrtt.value_namespace = name_space;
        totalrtt.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingNveRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessionId")
    {
        sessionid.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "replyIp")
    {
        replyip.yfilter = yfilter;
    }
    if(value_path == "replyIpv6")
    {
        replyipv6.yfilter = yfilter;
    }
    if(value_path == "nodeName")
    {
        nodename.yfilter = yfilter;
    }
    if(value_path == "errorCode")
    {
        errorcode.yfilter = yfilter;
    }
    if(value_path == "failReason")
    {
        failreason.yfilter = yfilter;
    }
    if(value_path == "sPort")
    {
        sport.yfilter = yfilter;
    }
    if(value_path == "packetSz")
    {
        packetsz.yfilter = yfilter;
    }
    if(value_path == "sentPkts")
    {
        sentpkts.yfilter = yfilter;
    }
    if(value_path == "notSentPkts")
    {
        notsentpkts.yfilter = yfilter;
    }
    if(value_path == "rcvdPkts")
    {
        rcvdpkts.yfilter = yfilter;
    }
    if(value_path == "minRtt")
    {
        minrtt.yfilter = yfilter;
    }
    if(value_path == "avgRtt")
    {
        avgrtt.yfilter = yfilter;
    }
    if(value_path == "maxRtt")
    {
        maxrtt.yfilter = yfilter;
    }
    if(value_path == "totalRtt")
    {
        totalrtt.yfilter = yfilter;
    }
}

bool System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingNveRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessionId" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt" || name == "replyIp" || name == "replyIpv6" || name == "nodeName" || name == "errorCode" || name == "failReason" || name == "sPort" || name == "packetSz" || name == "sentPkts" || name == "notSentPkts" || name == "rcvdPkts" || name == "minRtt" || name == "avgRtt" || name == "maxRtt" || name == "totalRtt")
        return true;
    return false;
}

System::NgoamItems::XconnectItems::XconnectItems()
    :
    hbinterval{YType::uint32, "hbinterval"}
{

    yang_name = "xconnect-items"; yang_parent_name = "ngoam-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NgoamItems::XconnectItems::~XconnectItems()
{
}

bool System::NgoamItems::XconnectItems::has_data() const
{
    if (is_presence_container) return true;
    return hbinterval.is_set;
}

bool System::NgoamItems::XconnectItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hbinterval.yfilter);
}

std::string System::NgoamItems::XconnectItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ngoam-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NgoamItems::XconnectItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgoamItems::XconnectItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hbinterval.is_set || is_set(hbinterval.yfilter)) leaf_name_data.push_back(hbinterval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NgoamItems::XconnectItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NgoamItems::XconnectItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NgoamItems::XconnectItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hbinterval")
    {
        hbinterval = value;
        hbinterval.value_namespace = name_space;
        hbinterval.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgoamItems::XconnectItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hbinterval")
    {
        hbinterval.yfilter = yfilter;
    }
}

bool System::NgoamItems::XconnectItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hbinterval")
        return true;
    return false;
}

System::NxapiItems::NxapiItems()
    :
    httpport{YType::int32, "httpPort"},
    httpsport{YType::int32, "httpsPort"},
    usevrf{YType::str, "useVrf"},
    certfile{YType::str, "certFile"},
    keyfile{YType::str, "keyFile"},
    certenable{YType::boolean, "certEnable"},
    sslciphersweak{YType::boolean, "sslCiphersWeak"},
    sslprotocols{YType::str, "sslProtocols"}
{

    yang_name = "nxapi-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NxapiItems::~NxapiItems()
{
}

bool System::NxapiItems::has_data() const
{
    if (is_presence_container) return true;
    return httpport.is_set
	|| httpsport.is_set
	|| usevrf.is_set
	|| certfile.is_set
	|| keyfile.is_set
	|| certenable.is_set
	|| sslciphersweak.is_set
	|| sslprotocols.is_set;
}

bool System::NxapiItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(httpport.yfilter)
	|| ydk::is_set(httpsport.yfilter)
	|| ydk::is_set(usevrf.yfilter)
	|| ydk::is_set(certfile.yfilter)
	|| ydk::is_set(keyfile.yfilter)
	|| ydk::is_set(certenable.yfilter)
	|| ydk::is_set(sslciphersweak.yfilter)
	|| ydk::is_set(sslprotocols.yfilter);
}

std::string System::NxapiItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NxapiItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nxapi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NxapiItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (httpport.is_set || is_set(httpport.yfilter)) leaf_name_data.push_back(httpport.get_name_leafdata());
    if (httpsport.is_set || is_set(httpsport.yfilter)) leaf_name_data.push_back(httpsport.get_name_leafdata());
    if (usevrf.is_set || is_set(usevrf.yfilter)) leaf_name_data.push_back(usevrf.get_name_leafdata());
    if (certfile.is_set || is_set(certfile.yfilter)) leaf_name_data.push_back(certfile.get_name_leafdata());
    if (keyfile.is_set || is_set(keyfile.yfilter)) leaf_name_data.push_back(keyfile.get_name_leafdata());
    if (certenable.is_set || is_set(certenable.yfilter)) leaf_name_data.push_back(certenable.get_name_leafdata());
    if (sslciphersweak.is_set || is_set(sslciphersweak.yfilter)) leaf_name_data.push_back(sslciphersweak.get_name_leafdata());
    if (sslprotocols.is_set || is_set(sslprotocols.yfilter)) leaf_name_data.push_back(sslprotocols.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NxapiItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NxapiItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NxapiItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "httpPort")
    {
        httpport = value;
        httpport.value_namespace = name_space;
        httpport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "httpsPort")
    {
        httpsport = value;
        httpsport.value_namespace = name_space;
        httpsport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useVrf")
    {
        usevrf = value;
        usevrf.value_namespace = name_space;
        usevrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certFile")
    {
        certfile = value;
        certfile.value_namespace = name_space;
        certfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyFile")
    {
        keyfile = value;
        keyfile.value_namespace = name_space;
        keyfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certEnable")
    {
        certenable = value;
        certenable.value_namespace = name_space;
        certenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sslCiphersWeak")
    {
        sslciphersweak = value;
        sslciphersweak.value_namespace = name_space;
        sslciphersweak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sslProtocols")
    {
        sslprotocols = value;
        sslprotocols.value_namespace = name_space;
        sslprotocols.value_namespace_prefix = name_space_prefix;
    }
}

void System::NxapiItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "httpPort")
    {
        httpport.yfilter = yfilter;
    }
    if(value_path == "httpsPort")
    {
        httpsport.yfilter = yfilter;
    }
    if(value_path == "useVrf")
    {
        usevrf.yfilter = yfilter;
    }
    if(value_path == "certFile")
    {
        certfile.yfilter = yfilter;
    }
    if(value_path == "keyFile")
    {
        keyfile.yfilter = yfilter;
    }
    if(value_path == "certEnable")
    {
        certenable.yfilter = yfilter;
    }
    if(value_path == "sslCiphersWeak")
    {
        sslciphersweak.yfilter = yfilter;
    }
    if(value_path == "sslProtocols")
    {
        sslprotocols.yfilter = yfilter;
    }
}

bool System::NxapiItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "httpPort" || name == "httpsPort" || name == "useVrf" || name == "certFile" || name == "keyFile" || name == "certEnable" || name == "sslCiphersWeak" || name == "sslProtocols")
        return true;
    return false;
}

System::PoeItems::PoeItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::PoeItems::InstItems>())
    , physif_items(std::make_shared<System::PoeItems::PhysifItems>())
{
    inst_items->parent = this;
    physif_items->parent = this;

    yang_name = "poe-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PoeItems::~PoeItems()
{
}

bool System::PoeItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data())
	|| (physif_items !=  nullptr && physif_items->has_data());
}

bool System::PoeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation())
	|| (physif_items !=  nullptr && physif_items->has_operation());
}

std::string System::PoeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PoeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PoeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PoeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::PoeItems::InstItems>();
        }
        return inst_items;
    }

    if(child_yang_name == "physif-items")
    {
        if(physif_items == nullptr)
        {
            physif_items = std::make_shared<System::PoeItems::PhysifItems>();
        }
        return physif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PoeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    if(physif_items != nullptr)
    {
        _children["physif-items"] = physif_items;
    }

    return _children;
}

void System::PoeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PoeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PoeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "physif-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::PoeItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
{

    yang_name = "inst-items"; yang_parent_name = "poe-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PoeItems::InstItems::~InstItems()
{
}

bool System::PoeItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set;
}

bool System::PoeItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter);
}

std::string System::PoeItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/poe-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PoeItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PoeItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PoeItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PoeItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PoeItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PoeItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PoeItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::PoeItems::PhysifItems::PhysifItems()
    :
    physif_list(this, {"id"})
{

    yang_name = "physif-items"; yang_parent_name = "poe-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PoeItems::PhysifItems::~PhysifItems()
{
}

bool System::PoeItems::PhysifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PoeItems::PhysifItems::has_operation() const
{
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PoeItems::PhysifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/poe-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PoeItems::PhysifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "physif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PoeItems::PhysifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PoeItems::PhysifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PhysIf-list")
    {
        auto ent_ = std::make_shared<System::PoeItems::PhysifItems::PhysIfList>();
        ent_->parent = this;
        physif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PoeItems::PhysifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : physif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PoeItems::PhysifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PoeItems::PhysifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PoeItems::PhysifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PhysIf-list")
        return true;
    return false;
}

System::PoeItems::PhysifItems::PhysIfList::PhysIfList()
    :
    id{YType::str, "id"},
    portmode{YType::enumeration, "portMode"},
    maxconsumption{YType::uint64, "maxConsumption"},
    portpriority{YType::enumeration, "portPriority"},
    portpolice{YType::enumeration, "portPolice"},
    portdefaultconsumption{YType::uint64, "portDefaultConsumption"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    rtvrfmbr_items(std::make_shared<System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "PhysIf-list"; yang_parent_name = "physif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PoeItems::PhysifItems::PhysIfList::~PhysIfList()
{
}

bool System::PoeItems::PhysifItems::PhysIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| portmode.is_set
	|| maxconsumption.is_set
	|| portpriority.is_set
	|| portpolice.is_set
	|| portdefaultconsumption.is_set
	|| name.is_set
	|| descr.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::PoeItems::PhysifItems::PhysIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(portmode.yfilter)
	|| ydk::is_set(maxconsumption.yfilter)
	|| ydk::is_set(portpriority.yfilter)
	|| ydk::is_set(portpolice.yfilter)
	|| ydk::is_set(portdefaultconsumption.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::PoeItems::PhysifItems::PhysIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/poe-items/physif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PoeItems::PhysifItems::PhysIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PhysIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PoeItems::PhysifItems::PhysIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (portmode.is_set || is_set(portmode.yfilter)) leaf_name_data.push_back(portmode.get_name_leafdata());
    if (maxconsumption.is_set || is_set(maxconsumption.yfilter)) leaf_name_data.push_back(maxconsumption.get_name_leafdata());
    if (portpriority.is_set || is_set(portpriority.yfilter)) leaf_name_data.push_back(portpriority.get_name_leafdata());
    if (portpolice.is_set || is_set(portpolice.yfilter)) leaf_name_data.push_back(portpolice.get_name_leafdata());
    if (portdefaultconsumption.is_set || is_set(portdefaultconsumption.yfilter)) leaf_name_data.push_back(portdefaultconsumption.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PoeItems::PhysifItems::PhysIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PoeItems::PhysifItems::PhysIfList::get_children() const
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

void System::PoeItems::PhysifItems::PhysIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portMode")
    {
        portmode = value;
        portmode.value_namespace = name_space;
        portmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxConsumption")
    {
        maxconsumption = value;
        maxconsumption.value_namespace = name_space;
        maxconsumption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portPriority")
    {
        portpriority = value;
        portpriority.value_namespace = name_space;
        portpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portPolice")
    {
        portpolice = value;
        portpolice.value_namespace = name_space;
        portpolice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portDefaultConsumption")
    {
        portdefaultconsumption = value;
        portdefaultconsumption.value_namespace = name_space;
        portdefaultconsumption.value_namespace_prefix = name_space_prefix;
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

void System::PoeItems::PhysifItems::PhysIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "portMode")
    {
        portmode.yfilter = yfilter;
    }
    if(value_path == "maxConsumption")
    {
        maxconsumption.yfilter = yfilter;
    }
    if(value_path == "portPriority")
    {
        portpriority.yfilter = yfilter;
    }
    if(value_path == "portPolice")
    {
        portpolice.yfilter = yfilter;
    }
    if(value_path == "portDefaultConsumption")
    {
        portdefaultconsumption.yfilter = yfilter;
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

bool System::PoeItems::PhysifItems::PhysIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "portMode" || name == "maxConsumption" || name == "portPriority" || name == "portPolice" || name == "portDefaultConsumption" || name == "name" || name == "descr")
        return true;
    return false;
}

System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_children() const
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

void System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::QosmItems::QosmItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    class_items(std::make_shared<System::QosmItems::ClassItems>())
    , if_items(std::make_shared<System::QosmItems::IfItems>())
    , classp_items(std::make_shared<System::QosmItems::ClasspItems>())
    , dscp_items(std::make_shared<System::QosmItems::DscpItems>())
    , dot1p_items(std::make_shared<System::QosmItems::Dot1pItems>())
    , ip_items(std::make_shared<System::QosmItems::IpItems>())
{
    class_items->parent = this;
    if_items->parent = this;
    classp_items->parent = this;
    dscp_items->parent = this;
    dot1p_items->parent = this;
    ip_items->parent = this;

    yang_name = "qosm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::~QosmItems()
{
}

bool System::QosmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (class_items !=  nullptr && class_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (classp_items !=  nullptr && classp_items->has_data())
	|| (dscp_items !=  nullptr && dscp_items->has_data())
	|| (dot1p_items !=  nullptr && dot1p_items->has_data())
	|| (ip_items !=  nullptr && ip_items->has_data());
}

bool System::QosmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (class_items !=  nullptr && class_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (classp_items !=  nullptr && classp_items->has_operation())
	|| (dscp_items !=  nullptr && dscp_items->has_operation())
	|| (dot1p_items !=  nullptr && dot1p_items->has_operation())
	|| (ip_items !=  nullptr && ip_items->has_operation());
}

std::string System::QosmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-items")
    {
        if(class_items == nullptr)
        {
            class_items = std::make_shared<System::QosmItems::ClassItems>();
        }
        return class_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::QosmItems::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "classp-items")
    {
        if(classp_items == nullptr)
        {
            classp_items = std::make_shared<System::QosmItems::ClasspItems>();
        }
        return classp_items;
    }

    if(child_yang_name == "dscp-items")
    {
        if(dscp_items == nullptr)
        {
            dscp_items = std::make_shared<System::QosmItems::DscpItems>();
        }
        return dscp_items;
    }

    if(child_yang_name == "dot1p-items")
    {
        if(dot1p_items == nullptr)
        {
            dot1p_items = std::make_shared<System::QosmItems::Dot1pItems>();
        }
        return dot1p_items;
    }

    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::QosmItems::IpItems>();
        }
        return ip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(class_items != nullptr)
    {
        _children["class-items"] = class_items;
    }

    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(classp_items != nullptr)
    {
        _children["classp-items"] = classp_items;
    }

    if(dscp_items != nullptr)
    {
        _children["dscp-items"] = dscp_items;
    }

    if(dot1p_items != nullptr)
    {
        _children["dot1p-items"] = dot1p_items;
    }

    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    return _children;
}

void System::QosmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::QosmItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::QosmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-items" || name == "if-items" || name == "classp-items" || name == "dscp-items" || name == "dot1p-items" || name == "ip-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::QosmItems::ClassItems::ClassItems()
    :
    class_list(this, {"qosgrp"})
{

    yang_name = "class-items"; yang_parent_name = "qosm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::ClassItems::~ClassItems()
{
}

bool System::QosmItems::ClassItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_list.len(); index++)
    {
        if(class_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::QosmItems::ClassItems::has_operation() const
{
    for (std::size_t index=0; index<class_list.len(); index++)
    {
        if(class_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::QosmItems::ClassItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::ClassItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClassItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::ClassItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Class-list")
    {
        auto ent_ = std::make_shared<System::QosmItems::ClassItems::ClassList>();
        ent_->parent = this;
        class_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::ClassItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::QosmItems::ClassItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::QosmItems::ClassItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::QosmItems::ClassItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Class-list")
        return true;
    return false;
}

System::QosmItems::ClassItems::ClassList::ClassList()
    :
    qosgrp{YType::enumeration, "qosGrp"}
{

    yang_name = "Class-list"; yang_parent_name = "class-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::ClassItems::ClassList::~ClassList()
{
}

bool System::QosmItems::ClassItems::ClassList::has_data() const
{
    if (is_presence_container) return true;
    return qosgrp.is_set;
}

bool System::QosmItems::ClassItems::ClassList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosgrp.yfilter);
}

std::string System::QosmItems::ClassItems::ClassList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/class-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::ClassItems::ClassList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Class-list";
    ADD_KEY_TOKEN(qosgrp, "qosGrp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClassItems::ClassList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosgrp.is_set || is_set(qosgrp.yfilter)) leaf_name_data.push_back(qosgrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::ClassItems::ClassList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::ClassItems::ClassList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::QosmItems::ClassItems::ClassList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosGrp")
    {
        qosgrp = value;
        qosgrp.value_namespace = name_space;
        qosgrp.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::ClassItems::ClassList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosGrp")
    {
        qosgrp.yfilter = yfilter;
    }
}

bool System::QosmItems::ClassItems::ClassList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosGrp")
        return true;
    return false;
}

System::QosmItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "qosm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::IfItems::~IfItems()
{
}

bool System::QosmItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::QosmItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::QosmItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::QosmItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::IfItems::get_children() const
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

void System::QosmItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::QosmItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::QosmItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::QosmItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"}
        ,
    class_items(std::make_shared<System::QosmItems::IfItems::IfList::ClassItems>())
{
    class_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::IfItems::IfList::~IfList()
{
}

bool System::QosmItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (class_items !=  nullptr && class_items->has_data());
}

bool System::QosmItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (class_items !=  nullptr && class_items->has_operation());
}

std::string System::QosmItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-items")
    {
        if(class_items == nullptr)
        {
            class_items = std::make_shared<System::QosmItems::IfItems::IfList::ClassItems>();
        }
        return class_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(class_items != nullptr)
    {
        _children["class-items"] = class_items;
    }

    return _children;
}

void System::QosmItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::QosmItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-items" || name == "id")
        return true;
    return false;
}

System::QosmItems::IfItems::IfList::ClassItems::ClassItems()
    :
    ifclass_list(this, {"id"})
{

    yang_name = "class-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::QosmItems::IfItems::IfList::ClassItems::~ClassItems()
{
}

bool System::QosmItems::IfItems::IfList::ClassItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifclass_list.len(); index++)
    {
        if(ifclass_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::QosmItems::IfItems::IfList::ClassItems::has_operation() const
{
    for (std::size_t index=0; index<ifclass_list.len(); index++)
    {
        if(ifclass_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::QosmItems::IfItems::IfList::ClassItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::IfItems::IfList::ClassItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::IfItems::IfList::ClassItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfClass-list")
    {
        auto ent_ = std::make_shared<System::QosmItems::IfItems::IfList::ClassItems::IfClassList>();
        ent_->parent = this;
        ifclass_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::IfItems::IfList::ClassItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ifclass_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::QosmItems::IfItems::IfList::ClassItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::QosmItems::IfItems::IfList::ClassItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::QosmItems::IfItems::IfList::ClassItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfClass-list")
        return true;
    return false;
}

System::QosmItems::IfItems::IfList::ClassItems::IfClassList::IfClassList()
    :
    id{YType::enumeration, "id"}
{

    yang_name = "IfClass-list"; yang_parent_name = "class-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::QosmItems::IfItems::IfList::ClassItems::IfClassList::~IfClassList()
{
}

bool System::QosmItems::IfItems::IfList::ClassItems::IfClassList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool System::QosmItems::IfItems::IfList::ClassItems::IfClassList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::QosmItems::IfItems::IfList::ClassItems::IfClassList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfClass-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::IfItems::IfList::ClassItems::IfClassList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::IfItems::IfList::ClassItems::IfClassList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::IfItems::IfList::ClassItems::IfClassList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::QosmItems::IfItems::IfList::ClassItems::IfClassList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::IfItems::IfList::ClassItems::IfClassList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::QosmItems::IfItems::IfList::ClassItems::IfClassList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

System::QosmItems::ClasspItems::ClasspItems()
    :
    class_list(this, {"qosgrp"})
{

    yang_name = "classp-items"; yang_parent_name = "qosm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::ClasspItems::~ClasspItems()
{
}

bool System::QosmItems::ClasspItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_list.len(); index++)
    {
        if(class_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::QosmItems::ClasspItems::has_operation() const
{
    for (std::size_t index=0; index<class_list.len(); index++)
    {
        if(class_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::QosmItems::ClasspItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::ClasspItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClasspItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::ClasspItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Class-list")
    {
        auto ent_ = std::make_shared<System::QosmItems::ClasspItems::ClassList>();
        ent_->parent = this;
        class_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::ClasspItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::QosmItems::ClasspItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::QosmItems::ClasspItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::QosmItems::ClasspItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Class-list")
        return true;
    return false;
}

System::QosmItems::ClasspItems::ClassList::ClassList()
    :
    qosgrp{YType::enumeration, "qosGrp"},
    admin{YType::enumeration, "admin"},
    mtu{YType::uint16, "mtu"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    cong_items(std::make_shared<System::QosmItems::ClasspItems::ClassList::CongItems>())
    , queue_items(std::make_shared<System::QosmItems::ClasspItems::ClassList::QueueItems>())
    , buffer_items(std::make_shared<System::QosmItems::ClasspItems::ClassList::BufferItems>())
    , sched_items(std::make_shared<System::QosmItems::ClasspItems::ClassList::SchedItems>())
{
    cong_items->parent = this;
    queue_items->parent = this;
    buffer_items->parent = this;
    sched_items->parent = this;

    yang_name = "Class-list"; yang_parent_name = "classp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::ClasspItems::ClassList::~ClassList()
{
}

bool System::QosmItems::ClasspItems::ClassList::has_data() const
{
    if (is_presence_container) return true;
    return qosgrp.is_set
	|| admin.is_set
	|| mtu.is_set
	|| operst.is_set
	|| name.is_set
	|| descr.is_set
	|| (cong_items !=  nullptr && cong_items->has_data())
	|| (queue_items !=  nullptr && queue_items->has_data())
	|| (buffer_items !=  nullptr && buffer_items->has_data())
	|| (sched_items !=  nullptr && sched_items->has_data());
}

bool System::QosmItems::ClasspItems::ClassList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosgrp.yfilter)
	|| ydk::is_set(admin.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (cong_items !=  nullptr && cong_items->has_operation())
	|| (queue_items !=  nullptr && queue_items->has_operation())
	|| (buffer_items !=  nullptr && buffer_items->has_operation())
	|| (sched_items !=  nullptr && sched_items->has_operation());
}

std::string System::QosmItems::ClasspItems::ClassList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/classp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::ClasspItems::ClassList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Class-list";
    ADD_KEY_TOKEN(qosgrp, "qosGrp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClasspItems::ClassList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosgrp.is_set || is_set(qosgrp.yfilter)) leaf_name_data.push_back(qosgrp.get_name_leafdata());
    if (admin.is_set || is_set(admin.yfilter)) leaf_name_data.push_back(admin.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::ClasspItems::ClassList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cong-items")
    {
        if(cong_items == nullptr)
        {
            cong_items = std::make_shared<System::QosmItems::ClasspItems::ClassList::CongItems>();
        }
        return cong_items;
    }

    if(child_yang_name == "queue-items")
    {
        if(queue_items == nullptr)
        {
            queue_items = std::make_shared<System::QosmItems::ClasspItems::ClassList::QueueItems>();
        }
        return queue_items;
    }

    if(child_yang_name == "buffer-items")
    {
        if(buffer_items == nullptr)
        {
            buffer_items = std::make_shared<System::QosmItems::ClasspItems::ClassList::BufferItems>();
        }
        return buffer_items;
    }

    if(child_yang_name == "sched-items")
    {
        if(sched_items == nullptr)
        {
            sched_items = std::make_shared<System::QosmItems::ClasspItems::ClassList::SchedItems>();
        }
        return sched_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::ClasspItems::ClassList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cong_items != nullptr)
    {
        _children["cong-items"] = cong_items;
    }

    if(queue_items != nullptr)
    {
        _children["queue-items"] = queue_items;
    }

    if(buffer_items != nullptr)
    {
        _children["buffer-items"] = buffer_items;
    }

    if(sched_items != nullptr)
    {
        _children["sched-items"] = sched_items;
    }

    return _children;
}

void System::QosmItems::ClasspItems::ClassList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosGrp")
    {
        qosgrp = value;
        qosgrp.value_namespace = name_space;
        qosgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin")
    {
        admin = value;
        admin.value_namespace = name_space;
        admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
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
}

void System::QosmItems::ClasspItems::ClassList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosGrp")
    {
        qosgrp.yfilter = yfilter;
    }
    if(value_path == "admin")
    {
        admin.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
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
}

bool System::QosmItems::ClasspItems::ClassList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cong-items" || name == "queue-items" || name == "buffer-items" || name == "sched-items" || name == "qosGrp" || name == "admin" || name == "mtu" || name == "operSt" || name == "name" || name == "descr")
        return true;
    return false;
}

System::QosmItems::ClasspItems::ClassList::CongItems::CongItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    algo{YType::enumeration, "algo"},
    ecn{YType::enumeration, "ecn"}
{

    yang_name = "cong-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::QosmItems::ClasspItems::ClassList::CongItems::~CongItems()
{
}

bool System::QosmItems::ClasspItems::ClassList::CongItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| algo.is_set
	|| ecn.is_set;
}

bool System::QosmItems::ClasspItems::ClassList::CongItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(algo.yfilter)
	|| ydk::is_set(ecn.yfilter);
}

std::string System::QosmItems::ClasspItems::ClassList::CongItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cong-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClasspItems::ClassList::CongItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (algo.is_set || is_set(algo.yfilter)) leaf_name_data.push_back(algo.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::ClasspItems::ClassList::CongItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::ClasspItems::ClassList::CongItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::QosmItems::ClasspItems::ClassList::CongItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "algo")
    {
        algo = value;
        algo.value_namespace = name_space;
        algo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::ClasspItems::ClassList::CongItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "algo")
    {
        algo.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
}

bool System::QosmItems::ClasspItems::ClassList::CongItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "algo" || name == "ecn")
        return true;
    return false;
}

System::QosmItems::ClasspItems::ClassList::QueueItems::QueueItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    meth{YType::enumeration, "meth"},
    limit{YType::uint16, "limit"}
{

    yang_name = "queue-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::QosmItems::ClasspItems::ClassList::QueueItems::~QueueItems()
{
}

bool System::QosmItems::ClasspItems::ClassList::QueueItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| meth.is_set
	|| limit.is_set;
}

bool System::QosmItems::ClasspItems::ClassList::QueueItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(meth.yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string System::QosmItems::ClasspItems::ClassList::QueueItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClasspItems::ClassList::QueueItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (meth.is_set || is_set(meth.yfilter)) leaf_name_data.push_back(meth.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::ClasspItems::ClassList::QueueItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::ClasspItems::ClassList::QueueItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::QosmItems::ClasspItems::ClassList::QueueItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "meth")
    {
        meth = value;
        meth.value_namespace = name_space;
        meth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::ClasspItems::ClassList::QueueItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "meth")
    {
        meth.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool System::QosmItems::ClasspItems::ClassList::QueueItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "meth" || name == "limit")
        return true;
    return false;
}

System::QosmItems::ClasspItems::ClassList::BufferItems::BufferItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    min{YType::uint8, "min"}
{

    yang_name = "buffer-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::QosmItems::ClasspItems::ClassList::BufferItems::~BufferItems()
{
}

bool System::QosmItems::ClasspItems::ClassList::BufferItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| min.is_set;
}

bool System::QosmItems::ClasspItems::ClassList::BufferItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string System::QosmItems::ClasspItems::ClassList::BufferItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClasspItems::ClassList::BufferItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::ClasspItems::ClassList::BufferItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::ClasspItems::ClassList::BufferItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::QosmItems::ClasspItems::ClassList::BufferItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::ClasspItems::ClassList::BufferItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool System::QosmItems::ClasspItems::ClassList::BufferItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "min")
        return true;
    return false;
}

System::QosmItems::ClasspItems::ClassList::SchedItems::SchedItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    meth{YType::enumeration, "meth"},
    bw{YType::uint8, "bw"}
{

    yang_name = "sched-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::QosmItems::ClasspItems::ClassList::SchedItems::~SchedItems()
{
}

bool System::QosmItems::ClasspItems::ClassList::SchedItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| meth.is_set
	|| bw.is_set;
}

bool System::QosmItems::ClasspItems::ClassList::SchedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(meth.yfilter)
	|| ydk::is_set(bw.yfilter);
}

std::string System::QosmItems::ClasspItems::ClassList::SchedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sched-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClasspItems::ClassList::SchedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (meth.is_set || is_set(meth.yfilter)) leaf_name_data.push_back(meth.get_name_leafdata());
    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::ClasspItems::ClassList::SchedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::ClasspItems::ClassList::SchedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::QosmItems::ClasspItems::ClassList::SchedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "meth")
    {
        meth = value;
        meth.value_namespace = name_space;
        meth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::ClasspItems::ClassList::SchedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "meth")
    {
        meth.yfilter = yfilter;
    }
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
}

bool System::QosmItems::ClasspItems::ClassList::SchedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "meth" || name == "bw")
        return true;
    return false;
}

System::QosmItems::DscpItems::DscpItems()
    :
    dscprule_list(this, {"from", "to", "qosgrp", "markdscp"})
{

    yang_name = "dscp-items"; yang_parent_name = "qosm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::DscpItems::~DscpItems()
{
}

bool System::QosmItems::DscpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dscprule_list.len(); index++)
    {
        if(dscprule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::QosmItems::DscpItems::has_operation() const
{
    for (std::size_t index=0; index<dscprule_list.len(); index++)
    {
        if(dscprule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::QosmItems::DscpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::DscpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::DscpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::DscpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DscpRule-list")
    {
        auto ent_ = std::make_shared<System::QosmItems::DscpItems::DscpRuleList>();
        ent_->parent = this;
        dscprule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::DscpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dscprule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::QosmItems::DscpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::QosmItems::DscpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::QosmItems::DscpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DscpRule-list")
        return true;
    return false;
}

System::QosmItems::DscpItems::DscpRuleList::DscpRuleList()
    :
    from{YType::uint8, "from"},
    to{YType::uint8, "to"},
    qosgrp{YType::enumeration, "qosGrp"},
    markdscp{YType::uint8, "markDscp"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "DscpRule-list"; yang_parent_name = "dscp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::DscpItems::DscpRuleList::~DscpRuleList()
{
}

bool System::QosmItems::DscpItems::DscpRuleList::has_data() const
{
    if (is_presence_container) return true;
    return from.is_set
	|| to.is_set
	|| qosgrp.is_set
	|| markdscp.is_set
	|| name.is_set
	|| descr.is_set
	|| operst.is_set;
}

bool System::QosmItems::DscpItems::DscpRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from.yfilter)
	|| ydk::is_set(to.yfilter)
	|| ydk::is_set(qosgrp.yfilter)
	|| ydk::is_set(markdscp.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::QosmItems::DscpItems::DscpRuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/dscp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::DscpItems::DscpRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DscpRule-list";
    ADD_KEY_TOKEN(from, "from");
    ADD_KEY_TOKEN(to, "to");
    ADD_KEY_TOKEN(qosgrp, "qosGrp");
    ADD_KEY_TOKEN(markdscp, "markDscp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::DscpItems::DscpRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.yfilter)) leaf_name_data.push_back(to.get_name_leafdata());
    if (qosgrp.is_set || is_set(qosgrp.yfilter)) leaf_name_data.push_back(qosgrp.get_name_leafdata());
    if (markdscp.is_set || is_set(markdscp.yfilter)) leaf_name_data.push_back(markdscp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::DscpItems::DscpRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::DscpItems::DscpRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::QosmItems::DscpItems::DscpRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to")
    {
        to = value;
        to.value_namespace = name_space;
        to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosGrp")
    {
        qosgrp = value;
        qosgrp.value_namespace = name_space;
        qosgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markDscp")
    {
        markdscp = value;
        markdscp.value_namespace = name_space;
        markdscp.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::DscpItems::DscpRuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
    if(value_path == "to")
    {
        to.yfilter = yfilter;
    }
    if(value_path == "qosGrp")
    {
        qosgrp.yfilter = yfilter;
    }
    if(value_path == "markDscp")
    {
        markdscp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::QosmItems::DscpItems::DscpRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from" || name == "to" || name == "qosGrp" || name == "markDscp" || name == "name" || name == "descr" || name == "operSt")
        return true;
    return false;
}

System::QosmItems::Dot1pItems::Dot1pItems()
    :
    dot1prule_list(this, {"from", "to", "qosgrp", "markdscp"})
{

    yang_name = "dot1p-items"; yang_parent_name = "qosm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::Dot1pItems::~Dot1pItems()
{
}

bool System::QosmItems::Dot1pItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1prule_list.len(); index++)
    {
        if(dot1prule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::QosmItems::Dot1pItems::has_operation() const
{
    for (std::size_t index=0; index<dot1prule_list.len(); index++)
    {
        if(dot1prule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::QosmItems::Dot1pItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::Dot1pItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1p-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::Dot1pItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::Dot1pItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dot1pRule-list")
    {
        auto ent_ = std::make_shared<System::QosmItems::Dot1pItems::Dot1pRuleList>();
        ent_->parent = this;
        dot1prule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::Dot1pItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot1prule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::QosmItems::Dot1pItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::QosmItems::Dot1pItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::QosmItems::Dot1pItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dot1pRule-list")
        return true;
    return false;
}

System::QosmItems::Dot1pItems::Dot1pRuleList::Dot1pRuleList()
    :
    from{YType::uint8, "from"},
    to{YType::uint8, "to"},
    qosgrp{YType::enumeration, "qosGrp"},
    markdscp{YType::uint8, "markDscp"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "Dot1pRule-list"; yang_parent_name = "dot1p-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::Dot1pItems::Dot1pRuleList::~Dot1pRuleList()
{
}

bool System::QosmItems::Dot1pItems::Dot1pRuleList::has_data() const
{
    if (is_presence_container) return true;
    return from.is_set
	|| to.is_set
	|| qosgrp.is_set
	|| markdscp.is_set
	|| name.is_set
	|| descr.is_set
	|| operst.is_set;
}

bool System::QosmItems::Dot1pItems::Dot1pRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from.yfilter)
	|| ydk::is_set(to.yfilter)
	|| ydk::is_set(qosgrp.yfilter)
	|| ydk::is_set(markdscp.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::QosmItems::Dot1pItems::Dot1pRuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/dot1p-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::Dot1pItems::Dot1pRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dot1pRule-list";
    ADD_KEY_TOKEN(from, "from");
    ADD_KEY_TOKEN(to, "to");
    ADD_KEY_TOKEN(qosgrp, "qosGrp");
    ADD_KEY_TOKEN(markdscp, "markDscp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::Dot1pItems::Dot1pRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.yfilter)) leaf_name_data.push_back(to.get_name_leafdata());
    if (qosgrp.is_set || is_set(qosgrp.yfilter)) leaf_name_data.push_back(qosgrp.get_name_leafdata());
    if (markdscp.is_set || is_set(markdscp.yfilter)) leaf_name_data.push_back(markdscp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::Dot1pItems::Dot1pRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::Dot1pItems::Dot1pRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::QosmItems::Dot1pItems::Dot1pRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to")
    {
        to = value;
        to.value_namespace = name_space;
        to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosGrp")
    {
        qosgrp = value;
        qosgrp.value_namespace = name_space;
        qosgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markDscp")
    {
        markdscp = value;
        markdscp.value_namespace = name_space;
        markdscp.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::Dot1pItems::Dot1pRuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
    if(value_path == "to")
    {
        to.yfilter = yfilter;
    }
    if(value_path == "qosGrp")
    {
        qosgrp.yfilter = yfilter;
    }
    if(value_path == "markDscp")
    {
        markdscp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::QosmItems::Dot1pItems::Dot1pRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from" || name == "to" || name == "qosGrp" || name == "markDscp" || name == "name" || name == "descr" || name == "operSt")
        return true;
    return false;
}

System::QosmItems::IpItems::IpItems()
    :
    iprule_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "qosm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::IpItems::~IpItems()
{
}

bool System::QosmItems::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iprule_list.len(); index++)
    {
        if(iprule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::QosmItems::IpItems::has_operation() const
{
    for (std::size_t index=0; index<iprule_list.len(); index++)
    {
        if(iprule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::QosmItems::IpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpRule-list")
    {
        auto ent_ = std::make_shared<System::QosmItems::IpItems::IpRuleList>();
        ent_->parent = this;
        iprule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iprule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::QosmItems::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::QosmItems::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::QosmItems::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpRule-list")
        return true;
    return false;
}

System::QosmItems::IpItems::IpRuleList::IpRuleList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    qosgrp{YType::enumeration, "qosGrp"},
    markdscp{YType::uint8, "markDscp"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "IpRule-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::IpItems::IpRuleList::~IpRuleList()
{
}

bool System::QosmItems::IpItems::IpRuleList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| descr.is_set
	|| qosgrp.is_set
	|| markdscp.is_set
	|| operst.is_set;
}

bool System::QosmItems::IpItems::IpRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(qosgrp.yfilter)
	|| ydk::is_set(markdscp.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::QosmItems::IpItems::IpRuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/ip-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::IpItems::IpRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpRule-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::IpItems::IpRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (qosgrp.is_set || is_set(qosgrp.yfilter)) leaf_name_data.push_back(qosgrp.get_name_leafdata());
    if (markdscp.is_set || is_set(markdscp.yfilter)) leaf_name_data.push_back(markdscp.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::QosmItems::IpItems::IpRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::QosmItems::IpItems::IpRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::QosmItems::IpItems::IpRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "qosGrp")
    {
        qosgrp = value;
        qosgrp.value_namespace = name_space;
        qosgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markDscp")
    {
        markdscp = value;
        markdscp.value_namespace = name_space;
        markdscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::IpItems::IpRuleList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "qosGrp")
    {
        qosgrp.yfilter = yfilter;
    }
    if(value_path == "markDscp")
    {
        markdscp.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::QosmItems::IpItems::IpRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "descr" || name == "qosGrp" || name == "markDscp" || name == "operSt")
        return true;
    return false;
}

System::SisfItems::SisfItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    snooping_items(std::make_shared<System::SisfItems::SnoopingItems>())
    , neighborbinding_items(std::make_shared<System::SisfItems::NeighborbindingItems>())
    , dhcpguard_items(std::make_shared<System::SisfItems::DhcpguardItems>())
    , raguard_items(std::make_shared<System::SisfItems::RaguardItems>())
    , fhsif_items(std::make_shared<System::SisfItems::FhsifItems>())
    , fhsvlan_items(std::make_shared<System::SisfItems::FhsvlanItems>())
{
    snooping_items->parent = this;
    neighborbinding_items->parent = this;
    dhcpguard_items->parent = this;
    raguard_items->parent = this;
    fhsif_items->parent = this;
    fhsvlan_items->parent = this;

    yang_name = "sisf-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::~SisfItems()
{
}

bool System::SisfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (snooping_items !=  nullptr && snooping_items->has_data())
	|| (neighborbinding_items !=  nullptr && neighborbinding_items->has_data())
	|| (dhcpguard_items !=  nullptr && dhcpguard_items->has_data())
	|| (raguard_items !=  nullptr && raguard_items->has_data())
	|| (fhsif_items !=  nullptr && fhsif_items->has_data())
	|| (fhsvlan_items !=  nullptr && fhsvlan_items->has_data());
}

bool System::SisfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (snooping_items !=  nullptr && snooping_items->has_operation())
	|| (neighborbinding_items !=  nullptr && neighborbinding_items->has_operation())
	|| (dhcpguard_items !=  nullptr && dhcpguard_items->has_operation())
	|| (raguard_items !=  nullptr && raguard_items->has_operation())
	|| (fhsif_items !=  nullptr && fhsif_items->has_operation())
	|| (fhsvlan_items !=  nullptr && fhsvlan_items->has_operation());
}

std::string System::SisfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sisf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping-items")
    {
        if(snooping_items == nullptr)
        {
            snooping_items = std::make_shared<System::SisfItems::SnoopingItems>();
        }
        return snooping_items;
    }

    if(child_yang_name == "neighborbinding-items")
    {
        if(neighborbinding_items == nullptr)
        {
            neighborbinding_items = std::make_shared<System::SisfItems::NeighborbindingItems>();
        }
        return neighborbinding_items;
    }

    if(child_yang_name == "dhcpguard-items")
    {
        if(dhcpguard_items == nullptr)
        {
            dhcpguard_items = std::make_shared<System::SisfItems::DhcpguardItems>();
        }
        return dhcpguard_items;
    }

    if(child_yang_name == "raguard-items")
    {
        if(raguard_items == nullptr)
        {
            raguard_items = std::make_shared<System::SisfItems::RaguardItems>();
        }
        return raguard_items;
    }

    if(child_yang_name == "fhsif-items")
    {
        if(fhsif_items == nullptr)
        {
            fhsif_items = std::make_shared<System::SisfItems::FhsifItems>();
        }
        return fhsif_items;
    }

    if(child_yang_name == "fhsvlan-items")
    {
        if(fhsvlan_items == nullptr)
        {
            fhsvlan_items = std::make_shared<System::SisfItems::FhsvlanItems>();
        }
        return fhsvlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snooping_items != nullptr)
    {
        _children["snooping-items"] = snooping_items;
    }

    if(neighborbinding_items != nullptr)
    {
        _children["neighborbinding-items"] = neighborbinding_items;
    }

    if(dhcpguard_items != nullptr)
    {
        _children["dhcpguard-items"] = dhcpguard_items;
    }

    if(raguard_items != nullptr)
    {
        _children["raguard-items"] = raguard_items;
    }

    if(fhsif_items != nullptr)
    {
        _children["fhsif-items"] = fhsif_items;
    }

    if(fhsvlan_items != nullptr)
    {
        _children["fhsvlan-items"] = fhsvlan_items;
    }

    return _children;
}

void System::SisfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SisfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SisfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping-items" || name == "neighborbinding-items" || name == "dhcpguard-items" || name == "raguard-items" || name == "fhsif-items" || name == "fhsvlan-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::SisfItems::SnoopingItems::SnoopingItems()
    :
    instsnooping_list(this, {"policyname"})
{

    yang_name = "snooping-items"; yang_parent_name = "sisf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::SnoopingItems::~SnoopingItems()
{
}

bool System::SisfItems::SnoopingItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instsnooping_list.len(); index++)
    {
        if(instsnooping_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::SnoopingItems::has_operation() const
{
    for (std::size_t index=0; index<instsnooping_list.len(); index++)
    {
        if(instsnooping_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::SnoopingItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::SnoopingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::SnoopingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::SnoopingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InstSnooping-list")
    {
        auto ent_ = std::make_shared<System::SisfItems::SnoopingItems::InstSnoopingList>();
        ent_->parent = this;
        instsnooping_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::SnoopingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instsnooping_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SisfItems::SnoopingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::SnoopingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::SnoopingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InstSnooping-list")
        return true;
    return false;
}

System::SisfItems::SnoopingItems::InstSnoopingList::InstSnoopingList()
    :
    policyname{YType::str, "policyName"},
    trustedportenabled{YType::boolean, "trustedPortEnabled"},
    devicerole{YType::enumeration, "deviceRole"},
    ndpprotocol{YType::enumeration, "ndpProtocol"},
    dhcpprotocol{YType::enumeration, "dhcpProtocol"},
    securitylevel{YType::enumeration, "securityLevel"},
    limitaddresscount{YType::uint16, "limitAddressCount"},
    tracking{YType::enumeration, "tracking"},
    reachablelifetimer{YType::uint64, "reachableLifetimer"},
    stalelifetimer{YType::uint64, "staleLifetimer"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "InstSnooping-list"; yang_parent_name = "snooping-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::SnoopingItems::InstSnoopingList::~InstSnoopingList()
{
}

bool System::SisfItems::SnoopingItems::InstSnoopingList::has_data() const
{
    if (is_presence_container) return true;
    return policyname.is_set
	|| trustedportenabled.is_set
	|| devicerole.is_set
	|| ndpprotocol.is_set
	|| dhcpprotocol.is_set
	|| securitylevel.is_set
	|| limitaddresscount.is_set
	|| tracking.is_set
	|| reachablelifetimer.is_set
	|| stalelifetimer.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::SisfItems::SnoopingItems::InstSnoopingList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policyname.yfilter)
	|| ydk::is_set(trustedportenabled.yfilter)
	|| ydk::is_set(devicerole.yfilter)
	|| ydk::is_set(ndpprotocol.yfilter)
	|| ydk::is_set(dhcpprotocol.yfilter)
	|| ydk::is_set(securitylevel.yfilter)
	|| ydk::is_set(limitaddresscount.yfilter)
	|| ydk::is_set(tracking.yfilter)
	|| ydk::is_set(reachablelifetimer.yfilter)
	|| ydk::is_set(stalelifetimer.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::SisfItems::SnoopingItems::InstSnoopingList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/snooping-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::SnoopingItems::InstSnoopingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InstSnooping-list";
    ADD_KEY_TOKEN(policyname, "policyName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::SnoopingItems::InstSnoopingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policyname.is_set || is_set(policyname.yfilter)) leaf_name_data.push_back(policyname.get_name_leafdata());
    if (trustedportenabled.is_set || is_set(trustedportenabled.yfilter)) leaf_name_data.push_back(trustedportenabled.get_name_leafdata());
    if (devicerole.is_set || is_set(devicerole.yfilter)) leaf_name_data.push_back(devicerole.get_name_leafdata());
    if (ndpprotocol.is_set || is_set(ndpprotocol.yfilter)) leaf_name_data.push_back(ndpprotocol.get_name_leafdata());
    if (dhcpprotocol.is_set || is_set(dhcpprotocol.yfilter)) leaf_name_data.push_back(dhcpprotocol.get_name_leafdata());
    if (securitylevel.is_set || is_set(securitylevel.yfilter)) leaf_name_data.push_back(securitylevel.get_name_leafdata());
    if (limitaddresscount.is_set || is_set(limitaddresscount.yfilter)) leaf_name_data.push_back(limitaddresscount.get_name_leafdata());
    if (tracking.is_set || is_set(tracking.yfilter)) leaf_name_data.push_back(tracking.get_name_leafdata());
    if (reachablelifetimer.is_set || is_set(reachablelifetimer.yfilter)) leaf_name_data.push_back(reachablelifetimer.get_name_leafdata());
    if (stalelifetimer.is_set || is_set(stalelifetimer.yfilter)) leaf_name_data.push_back(stalelifetimer.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::SnoopingItems::InstSnoopingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::SnoopingItems::InstSnoopingList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SisfItems::SnoopingItems::InstSnoopingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policyName")
    {
        policyname = value;
        policyname.value_namespace = name_space;
        policyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trustedPortEnabled")
    {
        trustedportenabled = value;
        trustedportenabled.value_namespace = name_space;
        trustedportenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deviceRole")
    {
        devicerole = value;
        devicerole.value_namespace = name_space;
        devicerole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ndpProtocol")
    {
        ndpprotocol = value;
        ndpprotocol.value_namespace = name_space;
        ndpprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpProtocol")
    {
        dhcpprotocol = value;
        dhcpprotocol.value_namespace = name_space;
        dhcpprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "securityLevel")
    {
        securitylevel = value;
        securitylevel.value_namespace = name_space;
        securitylevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limitAddressCount")
    {
        limitaddresscount = value;
        limitaddresscount.value_namespace = name_space;
        limitaddresscount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracking")
    {
        tracking = value;
        tracking.value_namespace = name_space;
        tracking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachableLifetimer")
    {
        reachablelifetimer = value;
        reachablelifetimer.value_namespace = name_space;
        reachablelifetimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleLifetimer")
    {
        stalelifetimer = value;
        stalelifetimer.value_namespace = name_space;
        stalelifetimer.value_namespace_prefix = name_space_prefix;
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

void System::SisfItems::SnoopingItems::InstSnoopingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policyName")
    {
        policyname.yfilter = yfilter;
    }
    if(value_path == "trustedPortEnabled")
    {
        trustedportenabled.yfilter = yfilter;
    }
    if(value_path == "deviceRole")
    {
        devicerole.yfilter = yfilter;
    }
    if(value_path == "ndpProtocol")
    {
        ndpprotocol.yfilter = yfilter;
    }
    if(value_path == "dhcpProtocol")
    {
        dhcpprotocol.yfilter = yfilter;
    }
    if(value_path == "securityLevel")
    {
        securitylevel.yfilter = yfilter;
    }
    if(value_path == "limitAddressCount")
    {
        limitaddresscount.yfilter = yfilter;
    }
    if(value_path == "tracking")
    {
        tracking.yfilter = yfilter;
    }
    if(value_path == "reachableLifetimer")
    {
        reachablelifetimer.yfilter = yfilter;
    }
    if(value_path == "staleLifetimer")
    {
        stalelifetimer.yfilter = yfilter;
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

bool System::SisfItems::SnoopingItems::InstSnoopingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policyName" || name == "trustedPortEnabled" || name == "deviceRole" || name == "ndpProtocol" || name == "dhcpProtocol" || name == "securityLevel" || name == "limitAddressCount" || name == "tracking" || name == "reachableLifetimer" || name == "staleLifetimer" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::SisfItems::NeighborbindingItems::NeighborbindingItems()
    :
    logging{YType::boolean, "logging"},
    maxentries{YType::uint32, "maxEntries"},
    vlanlimit{YType::uint32, "vlanLimit"},
    maclimit{YType::uint32, "macLimit"},
    portlimit{YType::uint32, "portLimit"},
    reachablelifetimer{YType::uint64, "reachableLifetimer"},
    stalelifetimer{YType::uint64, "staleLifetimer"},
    downlifetimer{YType::uint64, "downLifetimer"},
    tracking{YType::boolean, "tracking"},
    retryinterval{YType::uint16, "retryInterval"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    bindingip_items(std::make_shared<System::SisfItems::NeighborbindingItems::BindingipItems>())
{
    bindingip_items->parent = this;

    yang_name = "neighborbinding-items"; yang_parent_name = "sisf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::NeighborbindingItems::~NeighborbindingItems()
{
}

bool System::SisfItems::NeighborbindingItems::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| maxentries.is_set
	|| vlanlimit.is_set
	|| maclimit.is_set
	|| portlimit.is_set
	|| reachablelifetimer.is_set
	|| stalelifetimer.is_set
	|| downlifetimer.is_set
	|| tracking.is_set
	|| retryinterval.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (bindingip_items !=  nullptr && bindingip_items->has_data());
}

bool System::SisfItems::NeighborbindingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(maxentries.yfilter)
	|| ydk::is_set(vlanlimit.yfilter)
	|| ydk::is_set(maclimit.yfilter)
	|| ydk::is_set(portlimit.yfilter)
	|| ydk::is_set(reachablelifetimer.yfilter)
	|| ydk::is_set(stalelifetimer.yfilter)
	|| ydk::is_set(downlifetimer.yfilter)
	|| ydk::is_set(tracking.yfilter)
	|| ydk::is_set(retryinterval.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (bindingip_items !=  nullptr && bindingip_items->has_operation());
}

std::string System::SisfItems::NeighborbindingItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::NeighborbindingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighborbinding-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::NeighborbindingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (maxentries.is_set || is_set(maxentries.yfilter)) leaf_name_data.push_back(maxentries.get_name_leafdata());
    if (vlanlimit.is_set || is_set(vlanlimit.yfilter)) leaf_name_data.push_back(vlanlimit.get_name_leafdata());
    if (maclimit.is_set || is_set(maclimit.yfilter)) leaf_name_data.push_back(maclimit.get_name_leafdata());
    if (portlimit.is_set || is_set(portlimit.yfilter)) leaf_name_data.push_back(portlimit.get_name_leafdata());
    if (reachablelifetimer.is_set || is_set(reachablelifetimer.yfilter)) leaf_name_data.push_back(reachablelifetimer.get_name_leafdata());
    if (stalelifetimer.is_set || is_set(stalelifetimer.yfilter)) leaf_name_data.push_back(stalelifetimer.get_name_leafdata());
    if (downlifetimer.is_set || is_set(downlifetimer.yfilter)) leaf_name_data.push_back(downlifetimer.get_name_leafdata());
    if (tracking.is_set || is_set(tracking.yfilter)) leaf_name_data.push_back(tracking.get_name_leafdata());
    if (retryinterval.is_set || is_set(retryinterval.yfilter)) leaf_name_data.push_back(retryinterval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::NeighborbindingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bindingip-items")
    {
        if(bindingip_items == nullptr)
        {
            bindingip_items = std::make_shared<System::SisfItems::NeighborbindingItems::BindingipItems>();
        }
        return bindingip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::NeighborbindingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bindingip_items != nullptr)
    {
        _children["bindingip-items"] = bindingip_items;
    }

    return _children;
}

void System::SisfItems::NeighborbindingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxEntries")
    {
        maxentries = value;
        maxentries.value_namespace = name_space;
        maxentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanLimit")
    {
        vlanlimit = value;
        vlanlimit.value_namespace = name_space;
        vlanlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macLimit")
    {
        maclimit = value;
        maclimit.value_namespace = name_space;
        maclimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portLimit")
    {
        portlimit = value;
        portlimit.value_namespace = name_space;
        portlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachableLifetimer")
    {
        reachablelifetimer = value;
        reachablelifetimer.value_namespace = name_space;
        reachablelifetimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleLifetimer")
    {
        stalelifetimer = value;
        stalelifetimer.value_namespace = name_space;
        stalelifetimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downLifetimer")
    {
        downlifetimer = value;
        downlifetimer.value_namespace = name_space;
        downlifetimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracking")
    {
        tracking = value;
        tracking.value_namespace = name_space;
        tracking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retryInterval")
    {
        retryinterval = value;
        retryinterval.value_namespace = name_space;
        retryinterval.value_namespace_prefix = name_space_prefix;
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

void System::SisfItems::NeighborbindingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "maxEntries")
    {
        maxentries.yfilter = yfilter;
    }
    if(value_path == "vlanLimit")
    {
        vlanlimit.yfilter = yfilter;
    }
    if(value_path == "macLimit")
    {
        maclimit.yfilter = yfilter;
    }
    if(value_path == "portLimit")
    {
        portlimit.yfilter = yfilter;
    }
    if(value_path == "reachableLifetimer")
    {
        reachablelifetimer.yfilter = yfilter;
    }
    if(value_path == "staleLifetimer")
    {
        stalelifetimer.yfilter = yfilter;
    }
    if(value_path == "downLifetimer")
    {
        downlifetimer.yfilter = yfilter;
    }
    if(value_path == "tracking")
    {
        tracking.yfilter = yfilter;
    }
    if(value_path == "retryInterval")
    {
        retryinterval.yfilter = yfilter;
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

bool System::SisfItems::NeighborbindingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bindingip-items" || name == "logging" || name == "maxEntries" || name == "vlanLimit" || name == "macLimit" || name == "portLimit" || name == "reachableLifetimer" || name == "staleLifetimer" || name == "downLifetimer" || name == "tracking" || name == "retryInterval" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::SisfItems::NeighborbindingItems::BindingipItems::BindingipItems()
    :
    staticbinding_list(this, {"v6addr", "vlanid"})
{

    yang_name = "bindingip-items"; yang_parent_name = "neighborbinding-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::NeighborbindingItems::BindingipItems::~BindingipItems()
{
}

bool System::SisfItems::NeighborbindingItems::BindingipItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<staticbinding_list.len(); index++)
    {
        if(staticbinding_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::NeighborbindingItems::BindingipItems::has_operation() const
{
    for (std::size_t index=0; index<staticbinding_list.len(); index++)
    {
        if(staticbinding_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::NeighborbindingItems::BindingipItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/neighborbinding-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::NeighborbindingItems::BindingipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindingip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::NeighborbindingItems::BindingipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::NeighborbindingItems::BindingipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StaticBinding-list")
    {
        auto ent_ = std::make_shared<System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList>();
        ent_->parent = this;
        staticbinding_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::NeighborbindingItems::BindingipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : staticbinding_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SisfItems::NeighborbindingItems::BindingipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::NeighborbindingItems::BindingipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::NeighborbindingItems::BindingipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StaticBinding-list")
        return true;
    return false;
}

System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::StaticBindingList()
    :
    v6addr{YType::str, "v6Addr"},
    vlanid{YType::uint16, "vlanID"},
    interface{YType::str, "interface"},
    mac{YType::str, "mac"},
    tracking{YType::enumeration, "tracking"},
    retryinterval{YType::int16, "retryInterval"},
    reachablelifetimer{YType::int32, "reachableLifetimer"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "StaticBinding-list"; yang_parent_name = "bindingip-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::~StaticBindingList()
{
}

bool System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::has_data() const
{
    if (is_presence_container) return true;
    return v6addr.is_set
	|| vlanid.is_set
	|| interface.is_set
	|| mac.is_set
	|| tracking.is_set
	|| retryinterval.is_set
	|| reachablelifetimer.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v6addr.yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(tracking.yfilter)
	|| ydk::is_set(retryinterval.yfilter)
	|| ydk::is_set(reachablelifetimer.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/neighborbinding-items/bindingip-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StaticBinding-list";
    ADD_KEY_TOKEN(v6addr, "v6Addr");
    ADD_KEY_TOKEN(vlanid, "vlanID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v6addr.is_set || is_set(v6addr.yfilter)) leaf_name_data.push_back(v6addr.get_name_leafdata());
    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (tracking.is_set || is_set(tracking.yfilter)) leaf_name_data.push_back(tracking.get_name_leafdata());
    if (retryinterval.is_set || is_set(retryinterval.yfilter)) leaf_name_data.push_back(retryinterval.get_name_leafdata());
    if (reachablelifetimer.is_set || is_set(reachablelifetimer.yfilter)) leaf_name_data.push_back(reachablelifetimer.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v6Addr")
    {
        v6addr = value;
        v6addr.value_namespace = name_space;
        v6addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanID")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracking")
    {
        tracking = value;
        tracking.value_namespace = name_space;
        tracking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retryInterval")
    {
        retryinterval = value;
        retryinterval.value_namespace = name_space;
        retryinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachableLifetimer")
    {
        reachablelifetimer = value;
        reachablelifetimer.value_namespace = name_space;
        reachablelifetimer.value_namespace_prefix = name_space_prefix;
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

void System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v6Addr")
    {
        v6addr.yfilter = yfilter;
    }
    if(value_path == "vlanID")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "tracking")
    {
        tracking.yfilter = yfilter;
    }
    if(value_path == "retryInterval")
    {
        retryinterval.yfilter = yfilter;
    }
    if(value_path == "reachableLifetimer")
    {
        reachablelifetimer.yfilter = yfilter;
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

bool System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v6Addr" || name == "vlanID" || name == "interface" || name == "mac" || name == "tracking" || name == "retryInterval" || name == "reachableLifetimer" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::SisfItems::DhcpguardItems::DhcpguardItems()
    :
    instdhcpguard_list(this, {"policyname"})
{

    yang_name = "dhcpguard-items"; yang_parent_name = "sisf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::DhcpguardItems::~DhcpguardItems()
{
}

bool System::SisfItems::DhcpguardItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instdhcpguard_list.len(); index++)
    {
        if(instdhcpguard_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::DhcpguardItems::has_operation() const
{
    for (std::size_t index=0; index<instdhcpguard_list.len(); index++)
    {
        if(instdhcpguard_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::DhcpguardItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::DhcpguardItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcpguard-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::DhcpguardItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::DhcpguardItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InstDhcpGuard-list")
    {
        auto ent_ = std::make_shared<System::SisfItems::DhcpguardItems::InstDhcpGuardList>();
        ent_->parent = this;
        instdhcpguard_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::DhcpguardItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instdhcpguard_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SisfItems::DhcpguardItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::DhcpguardItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::DhcpguardItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InstDhcpGuard-list")
        return true;
    return false;
}

System::SisfItems::DhcpguardItems::InstDhcpGuardList::InstDhcpGuardList()
    :
    policyname{YType::str, "policyName"},
    devicerole{YType::enumeration, "deviceRole"},
    trustedportenabled{YType::boolean, "trustedPortEnabled"},
    preferencemax{YType::uint16, "preferenceMax"},
    preferencemin{YType::uint16, "preferenceMin"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "InstDhcpGuard-list"; yang_parent_name = "dhcpguard-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::DhcpguardItems::InstDhcpGuardList::~InstDhcpGuardList()
{
}

bool System::SisfItems::DhcpguardItems::InstDhcpGuardList::has_data() const
{
    if (is_presence_container) return true;
    return policyname.is_set
	|| devicerole.is_set
	|| trustedportenabled.is_set
	|| preferencemax.is_set
	|| preferencemin.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::SisfItems::DhcpguardItems::InstDhcpGuardList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policyname.yfilter)
	|| ydk::is_set(devicerole.yfilter)
	|| ydk::is_set(trustedportenabled.yfilter)
	|| ydk::is_set(preferencemax.yfilter)
	|| ydk::is_set(preferencemin.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::SisfItems::DhcpguardItems::InstDhcpGuardList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/dhcpguard-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::DhcpguardItems::InstDhcpGuardList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InstDhcpGuard-list";
    ADD_KEY_TOKEN(policyname, "policyName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::DhcpguardItems::InstDhcpGuardList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policyname.is_set || is_set(policyname.yfilter)) leaf_name_data.push_back(policyname.get_name_leafdata());
    if (devicerole.is_set || is_set(devicerole.yfilter)) leaf_name_data.push_back(devicerole.get_name_leafdata());
    if (trustedportenabled.is_set || is_set(trustedportenabled.yfilter)) leaf_name_data.push_back(trustedportenabled.get_name_leafdata());
    if (preferencemax.is_set || is_set(preferencemax.yfilter)) leaf_name_data.push_back(preferencemax.get_name_leafdata());
    if (preferencemin.is_set || is_set(preferencemin.yfilter)) leaf_name_data.push_back(preferencemin.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::DhcpguardItems::InstDhcpGuardList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::DhcpguardItems::InstDhcpGuardList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SisfItems::DhcpguardItems::InstDhcpGuardList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policyName")
    {
        policyname = value;
        policyname.value_namespace = name_space;
        policyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deviceRole")
    {
        devicerole = value;
        devicerole.value_namespace = name_space;
        devicerole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trustedPortEnabled")
    {
        trustedportenabled = value;
        trustedportenabled.value_namespace = name_space;
        trustedportenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferenceMax")
    {
        preferencemax = value;
        preferencemax.value_namespace = name_space;
        preferencemax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferenceMin")
    {
        preferencemin = value;
        preferencemin.value_namespace = name_space;
        preferencemin.value_namespace_prefix = name_space_prefix;
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

void System::SisfItems::DhcpguardItems::InstDhcpGuardList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policyName")
    {
        policyname.yfilter = yfilter;
    }
    if(value_path == "deviceRole")
    {
        devicerole.yfilter = yfilter;
    }
    if(value_path == "trustedPortEnabled")
    {
        trustedportenabled.yfilter = yfilter;
    }
    if(value_path == "preferenceMax")
    {
        preferencemax.yfilter = yfilter;
    }
    if(value_path == "preferenceMin")
    {
        preferencemin.yfilter = yfilter;
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

bool System::SisfItems::DhcpguardItems::InstDhcpGuardList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policyName" || name == "deviceRole" || name == "trustedPortEnabled" || name == "preferenceMax" || name == "preferenceMin" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::SisfItems::RaguardItems::RaguardItems()
    :
    instraguard_list(this, {"policyname"})
{

    yang_name = "raguard-items"; yang_parent_name = "sisf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::RaguardItems::~RaguardItems()
{
}

bool System::SisfItems::RaguardItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instraguard_list.len(); index++)
    {
        if(instraguard_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::RaguardItems::has_operation() const
{
    for (std::size_t index=0; index<instraguard_list.len(); index++)
    {
        if(instraguard_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::RaguardItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::RaguardItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raguard-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::RaguardItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::RaguardItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InstRaGuard-list")
    {
        auto ent_ = std::make_shared<System::SisfItems::RaguardItems::InstRaGuardList>();
        ent_->parent = this;
        instraguard_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::RaguardItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instraguard_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SisfItems::RaguardItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::RaguardItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::RaguardItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InstRaGuard-list")
        return true;
    return false;
}

System::SisfItems::RaguardItems::InstRaGuardList::InstRaGuardList()
    :
    policyname{YType::str, "policyName"},
    devicerole{YType::enumeration, "deviceRole"},
    trustedportenabled{YType::boolean, "trustedPortEnabled"},
    routerpreferencemaximum{YType::enumeration, "routerPreferenceMaximum"},
    hoplimitmax{YType::uint16, "hopLimitMax"},
    hoplimitmin{YType::uint16, "hopLimitMin"},
    managedconfig{YType::enumeration, "managedConfig"},
    otherconfig{YType::enumeration, "otherConfig"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "InstRaGuard-list"; yang_parent_name = "raguard-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::RaguardItems::InstRaGuardList::~InstRaGuardList()
{
}

bool System::SisfItems::RaguardItems::InstRaGuardList::has_data() const
{
    if (is_presence_container) return true;
    return policyname.is_set
	|| devicerole.is_set
	|| trustedportenabled.is_set
	|| routerpreferencemaximum.is_set
	|| hoplimitmax.is_set
	|| hoplimitmin.is_set
	|| managedconfig.is_set
	|| otherconfig.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::SisfItems::RaguardItems::InstRaGuardList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policyname.yfilter)
	|| ydk::is_set(devicerole.yfilter)
	|| ydk::is_set(trustedportenabled.yfilter)
	|| ydk::is_set(routerpreferencemaximum.yfilter)
	|| ydk::is_set(hoplimitmax.yfilter)
	|| ydk::is_set(hoplimitmin.yfilter)
	|| ydk::is_set(managedconfig.yfilter)
	|| ydk::is_set(otherconfig.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::SisfItems::RaguardItems::InstRaGuardList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/raguard-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::RaguardItems::InstRaGuardList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InstRaGuard-list";
    ADD_KEY_TOKEN(policyname, "policyName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::RaguardItems::InstRaGuardList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policyname.is_set || is_set(policyname.yfilter)) leaf_name_data.push_back(policyname.get_name_leafdata());
    if (devicerole.is_set || is_set(devicerole.yfilter)) leaf_name_data.push_back(devicerole.get_name_leafdata());
    if (trustedportenabled.is_set || is_set(trustedportenabled.yfilter)) leaf_name_data.push_back(trustedportenabled.get_name_leafdata());
    if (routerpreferencemaximum.is_set || is_set(routerpreferencemaximum.yfilter)) leaf_name_data.push_back(routerpreferencemaximum.get_name_leafdata());
    if (hoplimitmax.is_set || is_set(hoplimitmax.yfilter)) leaf_name_data.push_back(hoplimitmax.get_name_leafdata());
    if (hoplimitmin.is_set || is_set(hoplimitmin.yfilter)) leaf_name_data.push_back(hoplimitmin.get_name_leafdata());
    if (managedconfig.is_set || is_set(managedconfig.yfilter)) leaf_name_data.push_back(managedconfig.get_name_leafdata());
    if (otherconfig.is_set || is_set(otherconfig.yfilter)) leaf_name_data.push_back(otherconfig.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::RaguardItems::InstRaGuardList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::RaguardItems::InstRaGuardList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SisfItems::RaguardItems::InstRaGuardList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policyName")
    {
        policyname = value;
        policyname.value_namespace = name_space;
        policyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deviceRole")
    {
        devicerole = value;
        devicerole.value_namespace = name_space;
        devicerole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trustedPortEnabled")
    {
        trustedportenabled = value;
        trustedportenabled.value_namespace = name_space;
        trustedportenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routerPreferenceMaximum")
    {
        routerpreferencemaximum = value;
        routerpreferencemaximum.value_namespace = name_space;
        routerpreferencemaximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hopLimitMax")
    {
        hoplimitmax = value;
        hoplimitmax.value_namespace = name_space;
        hoplimitmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hopLimitMin")
    {
        hoplimitmin = value;
        hoplimitmin.value_namespace = name_space;
        hoplimitmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managedConfig")
    {
        managedconfig = value;
        managedconfig.value_namespace = name_space;
        managedconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otherConfig")
    {
        otherconfig = value;
        otherconfig.value_namespace = name_space;
        otherconfig.value_namespace_prefix = name_space_prefix;
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

void System::SisfItems::RaguardItems::InstRaGuardList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policyName")
    {
        policyname.yfilter = yfilter;
    }
    if(value_path == "deviceRole")
    {
        devicerole.yfilter = yfilter;
    }
    if(value_path == "trustedPortEnabled")
    {
        trustedportenabled.yfilter = yfilter;
    }
    if(value_path == "routerPreferenceMaximum")
    {
        routerpreferencemaximum.yfilter = yfilter;
    }
    if(value_path == "hopLimitMax")
    {
        hoplimitmax.yfilter = yfilter;
    }
    if(value_path == "hopLimitMin")
    {
        hoplimitmin.yfilter = yfilter;
    }
    if(value_path == "managedConfig")
    {
        managedconfig.yfilter = yfilter;
    }
    if(value_path == "otherConfig")
    {
        otherconfig.yfilter = yfilter;
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

bool System::SisfItems::RaguardItems::InstRaGuardList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policyName" || name == "deviceRole" || name == "trustedPortEnabled" || name == "routerPreferenceMaximum" || name == "hopLimitMax" || name == "hopLimitMin" || name == "managedConfig" || name == "otherConfig" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}


}
}

