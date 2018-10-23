
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_17.hpp"
#include "Cisco_NX_OS_device_18.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::~MacItems()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList>();
        ent_->parent = this;
        mac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList::~MacList()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::~Uint64Items()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List>();
        ent_->parent = this;
        uint64_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint64_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::~Uint32Items()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List>();
        ent_->parent = this;
        uint32_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint32_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::~Uint16Items()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List>();
        ent_->parent = this;
        uint16_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint16_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::~UbyteItems()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList>();
        ent_->parent = this;
        ubyte_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ubyte_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList::~UByteList()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::~TextItems()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList>();
        ent_->parent = this;
        text_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : text_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList::~TextList()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "IpsgIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::~TextItems()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList>();
        ent_->parent = this;
        text_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : text_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList::~TextList()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "IpsgIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::~IpItems()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList>();
        ent_->parent = this;
        ip_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ip_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList::~IpList()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "IpsgIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::~MacItems()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList>();
        ent_->parent = this;
        mac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList::~MacList()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "IpsgIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::~Uint64Items()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List>();
        ent_->parent = this;
        uint64_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint64_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "IpsgIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::~Uint32Items()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List>();
        ent_->parent = this;
        uint32_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint32_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "IpsgIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::~Uint16Items()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List>();
        ent_->parent = this;
        uint16_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint16_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "IpsgIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::~UbyteItems()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList>();
        ent_->parent = this;
        ubyte_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ubyte_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList::~UByteList()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "IpsgIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "IpsgIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::get_children() const
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgexvlanItems::IpsgexvlanItems()
    :
    ipsgexvlan_list(this, {"ipsgexvlannum"})
{

    yang_name = "ipsgexvlan-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::IpsgexvlanItems::~IpsgexvlanItems()
{
}

bool System::DhcpItems::InstItems::IpsgexvlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipsgexvlan_list.len(); index++)
    {
        if(ipsgexvlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgexvlanItems::has_operation() const
{
    for (std::size_t index=0; index<ipsgexvlan_list.len(); index++)
    {
        if(ipsgexvlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgexvlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::IpsgexvlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsgexvlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgexvlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgexvlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpsgExVlan-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList>();
        ent_->parent = this;
        ipsgexvlan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgexvlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipsgexvlan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::IpsgexvlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgexvlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgexvlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpsgExVlan-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList::IpsgExVlanList()
    :
    ipsgexvlannum{YType::uint16, "ipsgExVlanNum"}
{

    yang_name = "IpsgExVlan-list"; yang_parent_name = "ipsgexvlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList::~IpsgExVlanList()
{
}

bool System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList::has_data() const
{
    if (is_presence_container) return true;
    return ipsgexvlannum.is_set;
}

bool System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipsgexvlannum.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/ipsgexvlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpsgExVlan-list";
    ADD_KEY_TOKEN(ipsgexvlannum, "ipsgExVlanNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsgexvlannum.is_set || is_set(ipsgexvlannum.yfilter)) leaf_name_data.push_back(ipsgexvlannum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipsgExVlanNum")
    {
        ipsgexvlannum = value;
        ipsgexvlannum.value_namespace = name_space;
        ipsgexvlannum.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipsgExVlanNum")
    {
        ipsgexvlannum.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsgExVlanNum")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopvlanItems::SnoopvlanItems()
    :
    snoopvlan_list(this, {"snoopvlannum"})
{

    yang_name = "snoopvlan-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::SnoopvlanItems::~SnoopvlanItems()
{
}

bool System::DhcpItems::InstItems::SnoopvlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<snoopvlan_list.len(); index++)
    {
        if(snoopvlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopvlanItems::has_operation() const
{
    for (std::size_t index=0; index<snoopvlan_list.len(); index++)
    {
        if(snoopvlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopvlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::SnoopvlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snoopvlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopvlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopvlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SnoopVlan-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList>();
        ent_->parent = this;
        snoopvlan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopvlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : snoopvlan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopvlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopvlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopvlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SnoopVlan-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList::SnoopVlanList()
    :
    snoopvlannum{YType::uint16, "snoopVlanNum"}
{

    yang_name = "SnoopVlan-list"; yang_parent_name = "snoopvlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList::~SnoopVlanList()
{
}

bool System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList::has_data() const
{
    if (is_presence_container) return true;
    return snoopvlannum.is_set;
}

bool System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snoopvlannum.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/snoopvlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SnoopVlan-list";
    ADD_KEY_TOKEN(snoopvlannum, "snoopVlanNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snoopvlannum.is_set || is_set(snoopvlannum.yfilter)) leaf_name_data.push_back(snoopvlannum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snoopVlanNum")
    {
        snoopvlannum = value;
        snoopvlannum.value_namespace = name_space;
        snoopvlannum.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snoopVlanNum")
    {
        snoopvlannum.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::SnoopvlanItems::SnoopVlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snoopVlanNum")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopifItems()
    :
    snoopif_list(this, {"id"})
{

    yang_name = "snoopif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::SnoopifItems::~SnoopifItems()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<snoopif_list.len(); index++)
    {
        if(snoopif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::has_operation() const
{
    for (std::size_t index=0; index<snoopif_list.len(); index++)
    {
        if(snoopif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::SnoopifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snoopif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SnoopIf-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList>();
        ent_->parent = this;
        snoopif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : snoopif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SnoopIf-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::SnoopIfList()
    :
    id{YType::str, "id"},
    trustenabled{YType::boolean, "trustEnabled"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    complex_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems>())
    , text_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems>())
    , ip_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems>())
    , mac_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems>())
    , uint64_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items>())
    , uint32_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items>())
    , uint16_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items>())
    , ubyte_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems>())
    , rtvrfmbr_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems>())
{
    complex_items->parent = this;
    text_items->parent = this;
    ip_items->parent = this;
    mac_items->parent = this;
    uint64_items->parent = this;
    uint32_items->parent = this;
    uint16_items->parent = this;
    ubyte_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "SnoopIf-list"; yang_parent_name = "snoopif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::~SnoopIfList()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| trustenabled.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (complex_items !=  nullptr && complex_items->has_data())
	|| (text_items !=  nullptr && text_items->has_data())
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data())
	|| (uint64_items !=  nullptr && uint64_items->has_data())
	|| (uint32_items !=  nullptr && uint32_items->has_data())
	|| (uint16_items !=  nullptr && uint16_items->has_data())
	|| (ubyte_items !=  nullptr && ubyte_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(trustenabled.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (complex_items !=  nullptr && complex_items->has_operation())
	|| (text_items !=  nullptr && text_items->has_operation())
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation())
	|| (uint64_items !=  nullptr && uint64_items->has_operation())
	|| (uint32_items !=  nullptr && uint32_items->has_operation())
	|| (uint16_items !=  nullptr && uint16_items->has_operation())
	|| (ubyte_items !=  nullptr && ubyte_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/snoopif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SnoopIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (trustenabled.is_set || is_set(trustenabled.yfilter)) leaf_name_data.push_back(trustenabled.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "complex-items")
    {
        if(complex_items == nullptr)
        {
            complex_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems>();
        }
        return complex_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems>();
        }
        return text_items;
    }

    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(complex_items != nullptr)
    {
        _children["complex-items"] = complex_items;
    }

    if(text_items != nullptr)
    {
        _children["text-items"] = text_items;
    }

    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    if(mac_items != nullptr)
    {
        _children["mac-items"] = mac_items;
    }

    if(uint64_items != nullptr)
    {
        _children["uint64-items"] = uint64_items;
    }

    if(uint32_items != nullptr)
    {
        _children["uint32-items"] = uint32_items;
    }

    if(uint16_items != nullptr)
    {
        _children["uint16-items"] = uint16_items;
    }

    if(ubyte_items != nullptr)
    {
        _children["ubyte-items"] = ubyte_items;
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trustEnabled")
    {
        trustenabled = value;
        trustenabled.value_namespace = name_space;
        trustenabled.value_namespace_prefix = name_space_prefix;
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "trustEnabled")
    {
        trustenabled.yfilter = yfilter;
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complex-items" || name == "text-items" || name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "trustEnabled" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexItems()
    :
    complex_list(this, {"code", "id"})
{

    yang_name = "complex-items"; yang_parent_name = "SnoopIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::~ComplexItems()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::has_operation() const
{
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "complex-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Complex-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList>();
        ent_->parent = this;
        complex_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : complex_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Complex-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::ComplexList()
    :
    code{YType::uint16, "code"},
    id{YType::uint32, "id"}
        ,
    ip_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems>())
    , mac_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems>())
    , uint64_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items>())
    , uint32_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items>())
    , uint16_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items>())
    , ubyte_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems>())
    , text_items(std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems>())
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

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::~ComplexList()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::has_data() const
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::has_operation() const
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

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Complex-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems>();
        }
        return text_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::get_children() const
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

    if(uint64_items != nullptr)
    {
        _children["uint64-items"] = uint64_items;
    }

    if(uint32_items != nullptr)
    {
        _children["uint32-items"] = uint32_items;
    }

    if(uint16_items != nullptr)
    {
        _children["uint16-items"] = uint16_items;
    }

    if(ubyte_items != nullptr)
    {
        _children["ubyte-items"] = ubyte_items;
    }

    if(text_items != nullptr)
    {
        _children["text-items"] = text_items;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "text-items" || name == "code" || name == "id")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::~IpItems()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpList>();
        ent_->parent = this;
        ip_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ip_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpList::~IpList()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::~MacItems()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacList>();
        ent_->parent = this;
        mac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacList::~MacList()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::~Uint64Items()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::UInt64List>();
        ent_->parent = this;
        uint64_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint64_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::~Uint32Items()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::UInt32List>();
        ent_->parent = this;
        uint32_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint32_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::~Uint16Items()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::UInt16List>();
        ent_->parent = this;
        uint16_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint16_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::~UbyteItems()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UByteList>();
        ent_->parent = this;
        ubyte_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ubyte_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UByteList::~UByteList()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::~TextItems()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextList>();
        ent_->parent = this;
        text_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : text_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextList::~TextList()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::ComplexItems::ComplexList::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "SnoopIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::~TextItems()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextList>();
        ent_->parent = this;
        text_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : text_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextList::~TextList()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "SnoopIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::~IpItems()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpList>();
        ent_->parent = this;
        ip_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ip_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpList::~IpList()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "SnoopIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::~MacItems()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacList>();
        ent_->parent = this;
        mac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacList::~MacList()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "SnoopIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::~Uint64Items()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::UInt64List>();
        ent_->parent = this;
        uint64_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint64_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "SnoopIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::~Uint32Items()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::UInt32List>();
        ent_->parent = this;
        uint32_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint32_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "SnoopIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::~Uint16Items()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::UInt16List>();
        ent_->parent = this;
        uint16_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : uint16_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "SnoopIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::~UbyteItems()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UByteList>();
        ent_->parent = this;
        ubyte_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ubyte_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UByteList::~UByteList()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "SnoopIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "SnoopIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::get_children() const
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::DnsItems::DnsItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    prof_items(std::make_shared<System::DnsItems::ProfItems>())
{
    prof_items->parent = this;

    yang_name = "dns-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DnsItems::~DnsItems()
{
}

bool System::DnsItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (prof_items !=  nullptr && prof_items->has_data());
}

bool System::DnsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (prof_items !=  nullptr && prof_items->has_operation());
}

std::string System::DnsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DnsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prof-items")
    {
        if(prof_items == nullptr)
        {
            prof_items = std::make_shared<System::DnsItems::ProfItems>();
        }
        return prof_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prof_items != nullptr)
    {
        _children["prof-items"] = prof_items;
    }

    return _children;
}

void System::DnsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DnsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DnsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prof-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfItems()
    :
    prof_list(this, {"name"})
{

    yang_name = "prof-items"; yang_parent_name = "dns-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DnsItems::ProfItems::~ProfItems()
{
}

bool System::DnsItems::ProfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prof_list.len(); index++)
    {
        if(prof_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DnsItems::ProfItems::has_operation() const
{
    for (std::size_t index=0; index<prof_list.len(); index++)
    {
        if(prof_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DnsItems::ProfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dns-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DnsItems::ProfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prof-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Prof-list")
    {
        auto ent_ = std::make_shared<System::DnsItems::ProfItems::ProfList>();
        ent_->parent = this;
        prof_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prof_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DnsItems::ProfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DnsItems::ProfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DnsItems::ProfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Prof-list")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::ProfList()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    prov_items(std::make_shared<System::DnsItems::ProfItems::ProfList::ProvItems>())
    , vrf_items(std::make_shared<System::DnsItems::ProfItems::ProfList::VrfItems>())
    , dom_items(std::make_shared<System::DnsItems::ProfItems::ProfList::DomItems>())
    , domext_items(std::make_shared<System::DnsItems::ProfItems::ProfList::DomextItems>())
    , host_items(std::make_shared<System::DnsItems::ProfItems::ProfList::HostItems>())
{
    prov_items->parent = this;
    vrf_items->parent = this;
    dom_items->parent = this;
    domext_items->parent = this;
    host_items->parent = this;

    yang_name = "Prof-list"; yang_parent_name = "prof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DnsItems::ProfItems::ProfList::~ProfList()
{
}

bool System::DnsItems::ProfItems::ProfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (prov_items !=  nullptr && prov_items->has_data())
	|| (vrf_items !=  nullptr && vrf_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (domext_items !=  nullptr && domext_items->has_data())
	|| (host_items !=  nullptr && host_items->has_data());
}

bool System::DnsItems::ProfItems::ProfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (prov_items !=  nullptr && prov_items->has_operation())
	|| (vrf_items !=  nullptr && vrf_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (domext_items !=  nullptr && domext_items->has_operation())
	|| (host_items !=  nullptr && host_items->has_operation());
}

std::string System::DnsItems::ProfItems::ProfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dns-items/prof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DnsItems::ProfItems::ProfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Prof-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prov-items")
    {
        if(prov_items == nullptr)
        {
            prov_items = std::make_shared<System::DnsItems::ProfItems::ProfList::ProvItems>();
        }
        return prov_items;
    }

    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::DnsItems::ProfItems::ProfList::VrfItems>();
        }
        return vrf_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::DnsItems::ProfItems::ProfList::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "domext-items")
    {
        if(domext_items == nullptr)
        {
            domext_items = std::make_shared<System::DnsItems::ProfItems::ProfList::DomextItems>();
        }
        return domext_items;
    }

    if(child_yang_name == "host-items")
    {
        if(host_items == nullptr)
        {
            host_items = std::make_shared<System::DnsItems::ProfItems::ProfList::HostItems>();
        }
        return host_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prov_items != nullptr)
    {
        _children["prov-items"] = prov_items;
    }

    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(domext_items != nullptr)
    {
        _children["domext-items"] = domext_items;
    }

    if(host_items != nullptr)
    {
        _children["host-items"] = host_items;
    }

    return _children;
}

void System::DnsItems::ProfItems::ProfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void System::DnsItems::ProfItems::ProfList::set_filter(const std::string & value_path, YFilter yfilter)
{
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
}

bool System::DnsItems::ProfItems::ProfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prov-items" || name == "vrf-items" || name == "dom-items" || name == "domext-items" || name == "host-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::ProvItems::ProvItems()
    :
    provider_list(this, {"addr"})
{

    yang_name = "prov-items"; yang_parent_name = "Prof-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::ProvItems::~ProvItems()
{
}

bool System::DnsItems::ProfItems::ProfList::ProvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<provider_list.len(); index++)
    {
        if(provider_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DnsItems::ProfItems::ProfList::ProvItems::has_operation() const
{
    for (std::size_t index=0; index<provider_list.len(); index++)
    {
        if(provider_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DnsItems::ProfItems::ProfList::ProvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prov-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::ProvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::ProvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Provider-list")
    {
        auto ent_ = std::make_shared<System::DnsItems::ProfItems::ProfList::ProvItems::ProviderList>();
        ent_->parent = this;
        provider_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::ProvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : provider_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DnsItems::ProfItems::ProfList::ProvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DnsItems::ProfItems::ProfList::ProvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DnsItems::ProfItems::ProfList::ProvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Provider-list")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::ProvItems::ProviderList::ProviderList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{

    yang_name = "Provider-list"; yang_parent_name = "prov-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::ProvItems::ProviderList::~ProviderList()
{
}

bool System::DnsItems::ProfItems::ProfList::ProvItems::ProviderList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set;
}

bool System::DnsItems::ProfItems::ProfList::ProvItems::ProviderList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::DnsItems::ProfItems::ProfList::ProvItems::ProviderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Provider-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::ProvItems::ProviderList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::ProvItems::ProviderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::ProvItems::ProviderList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DnsItems::ProfItems::ProfList::ProvItems::ProviderList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DnsItems::ProfItems::ProfList::ProvItems::ProviderList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DnsItems::ProfItems::ProfList::ProvItems::ProviderList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::VrfItems::VrfItems()
    :
    vrf_list(this, {"name"})
{

    yang_name = "vrf-items"; yang_parent_name = "Prof-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::VrfItems::~VrfItems()
{
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DnsItems::ProfItems::ProfList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vrf-list")
    {
        auto ent_ = std::make_shared<System::DnsItems::ProfItems::ProfList::VrfItems::VrfList>();
        ent_->parent = this;
        vrf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::VrfItems::get_children() const
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

void System::DnsItems::ProfItems::ProfList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DnsItems::ProfItems::ProfList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vrf-list")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::VrfList()
    :
    name{YType::str, "name"}
        ,
    prov_items(std::make_shared<System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems>())
    , dom_items(std::make_shared<System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems>())
    , domext_items(std::make_shared<System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems>())
{
    prov_items->parent = this;
    dom_items->parent = this;
    domext_items->parent = this;

    yang_name = "Vrf-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::~VrfList()
{
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (prov_items !=  nullptr && prov_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (domext_items !=  nullptr && domext_items->has_data());
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (prov_items !=  nullptr && prov_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (domext_items !=  nullptr && domext_items->has_operation());
}

std::string System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vrf-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prov-items")
    {
        if(prov_items == nullptr)
        {
            prov_items = std::make_shared<System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems>();
        }
        return prov_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "domext-items")
    {
        if(domext_items == nullptr)
        {
            domext_items = std::make_shared<System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems>();
        }
        return domext_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prov_items != nullptr)
    {
        _children["prov-items"] = prov_items;
    }

    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(domext_items != nullptr)
    {
        _children["domext-items"] = domext_items;
    }

    return _children;
}

void System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prov-items" || name == "dom-items" || name == "domext-items" || name == "name")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProvItems()
    :
    provider_list(this, {"addr"})
{

    yang_name = "prov-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::~ProvItems()
{
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<provider_list.len(); index++)
    {
        if(provider_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::has_operation() const
{
    for (std::size_t index=0; index<provider_list.len(); index++)
    {
        if(provider_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prov-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Provider-list")
    {
        auto ent_ = std::make_shared<System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProviderList>();
        ent_->parent = this;
        provider_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : provider_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Provider-list")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProviderList::ProviderList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{

    yang_name = "Provider-list"; yang_parent_name = "prov-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProviderList::~ProviderList()
{
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProviderList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set;
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProviderList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProviderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Provider-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProviderList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProviderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProviderList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProviderList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProviderList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::ProvItems::ProviderList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems::DomItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "dom-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems::~DomItems()
{
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set;
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomextItems()
    :
    domext_list(this, {"name"})
{

    yang_name = "domext-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::~DomextItems()
{
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domext_list.len(); index++)
    {
        if(domext_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::has_operation() const
{
    for (std::size_t index=0; index<domext_list.len(); index++)
    {
        if(domext_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomExt-list")
    {
        auto ent_ = std::make_shared<System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomExtList>();
        ent_->parent = this;
        domext_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domext_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomExt-list")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomExtList::DomExtList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "DomExt-list"; yang_parent_name = "domext-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomExtList::~DomExtList()
{
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomExtList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set;
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomExtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomExtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomExt-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomExtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomExtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomExtList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomExtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomExtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::DnsItems::ProfItems::ProfList::VrfItems::VrfList::DomextItems::DomExtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::DomItems::DomItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "dom-items"; yang_parent_name = "Prof-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::DomItems::~DomItems()
{
}

bool System::DnsItems::ProfItems::ProfList::DomItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set;
}

bool System::DnsItems::ProfItems::ProfList::DomItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::DnsItems::ProfItems::ProfList::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DnsItems::ProfItems::ProfList::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::DnsItems::ProfItems::ProfList::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::DnsItems::ProfItems::ProfList::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::DomextItems::DomextItems()
    :
    domext_list(this, {"name"})
{

    yang_name = "domext-items"; yang_parent_name = "Prof-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::DomextItems::~DomextItems()
{
}

bool System::DnsItems::ProfItems::ProfList::DomextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domext_list.len(); index++)
    {
        if(domext_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DnsItems::ProfItems::ProfList::DomextItems::has_operation() const
{
    for (std::size_t index=0; index<domext_list.len(); index++)
    {
        if(domext_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DnsItems::ProfItems::ProfList::DomextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::DomextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::DomextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomExt-list")
    {
        auto ent_ = std::make_shared<System::DnsItems::ProfItems::ProfList::DomextItems::DomExtList>();
        ent_->parent = this;
        domext_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::DomextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domext_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DnsItems::ProfItems::ProfList::DomextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DnsItems::ProfItems::ProfList::DomextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DnsItems::ProfItems::ProfList::DomextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomExt-list")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::DomextItems::DomExtList::DomExtList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "DomExt-list"; yang_parent_name = "domext-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::DomextItems::DomExtList::~DomExtList()
{
}

bool System::DnsItems::ProfItems::ProfList::DomextItems::DomExtList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set;
}

bool System::DnsItems::ProfItems::ProfList::DomextItems::DomExtList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::DnsItems::ProfItems::ProfList::DomextItems::DomExtList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomExt-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::DomextItems::DomExtList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::DomextItems::DomExtList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::DomextItems::DomExtList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DnsItems::ProfItems::ProfList::DomextItems::DomExtList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::DnsItems::ProfItems::ProfList::DomextItems::DomExtList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::DnsItems::ProfItems::ProfList::DomextItems::DomExtList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::HostItems::HostItems()
    :
    host_list(this, {"name"})
{

    yang_name = "host-items"; yang_parent_name = "Prof-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::HostItems::~HostItems()
{
}

bool System::DnsItems::ProfItems::ProfList::HostItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host_list.len(); index++)
    {
        if(host_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DnsItems::ProfItems::ProfList::HostItems::has_operation() const
{
    for (std::size_t index=0; index<host_list.len(); index++)
    {
        if(host_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DnsItems::ProfItems::ProfList::HostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::HostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::HostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Host-list")
    {
        auto ent_ = std::make_shared<System::DnsItems::ProfItems::ProfList::HostItems::HostList>();
        ent_->parent = this;
        host_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::HostItems::get_children() const
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

void System::DnsItems::ProfItems::ProfList::HostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DnsItems::ProfItems::ProfList::HostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DnsItems::ProfItems::ProfList::HostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Host-list")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::HostItems::HostList::HostList()
    :
    name{YType::str, "name"}
        ,
    ipv4host_items(std::make_shared<System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems>())
    , ipv6host_items(std::make_shared<System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems>())
{
    ipv4host_items->parent = this;
    ipv6host_items->parent = this;

    yang_name = "Host-list"; yang_parent_name = "host-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::HostItems::HostList::~HostList()
{
}

bool System::DnsItems::ProfItems::ProfList::HostItems::HostList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (ipv4host_items !=  nullptr && ipv4host_items->has_data())
	|| (ipv6host_items !=  nullptr && ipv6host_items->has_data());
}

bool System::DnsItems::ProfItems::ProfList::HostItems::HostList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ipv4host_items !=  nullptr && ipv4host_items->has_operation())
	|| (ipv6host_items !=  nullptr && ipv6host_items->has_operation());
}

std::string System::DnsItems::ProfItems::ProfList::HostItems::HostList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Host-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::HostItems::HostList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::HostItems::HostList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4host-items")
    {
        if(ipv4host_items == nullptr)
        {
            ipv4host_items = std::make_shared<System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems>();
        }
        return ipv4host_items;
    }

    if(child_yang_name == "ipv6host-items")
    {
        if(ipv6host_items == nullptr)
        {
            ipv6host_items = std::make_shared<System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems>();
        }
        return ipv6host_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::HostItems::HostList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4host_items != nullptr)
    {
        _children["ipv4host-items"] = ipv4host_items;
    }

    if(ipv6host_items != nullptr)
    {
        _children["ipv6host-items"] = ipv6host_items;
    }

    return _children;
}

void System::DnsItems::ProfItems::ProfList::HostItems::HostList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::DnsItems::ProfItems::ProfList::HostItems::HostList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::DnsItems::ProfItems::ProfList::HostItems::HostList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4host-items" || name == "ipv6host-items" || name == "name")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems::Ipv4hostItems()
    :
    addr{YType::str, "addr"}
{

    yang_name = "ipv4host-items"; yang_parent_name = "Host-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems::~Ipv4hostItems()
{
}

bool System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set;
}

bool System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4host-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv4hostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr")
        return true;
    return false;
}

System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems::Ipv6hostItems()
    :
    addr{YType::str, "addr"}
{

    yang_name = "ipv6host-items"; yang_parent_name = "Host-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems::~Ipv6hostItems()
{
}

bool System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set;
}

bool System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6host-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool System::DnsItems::ProfItems::ProfList::HostItems::HostList::Ipv6hostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr")
        return true;
    return false;
}

System::DecommissionItems::DecommissionItems()
    :
    nodedn{YType::str, "nodeDn"},
    wipe{YType::boolean, "wipe"},
    targetid{YType::uint32, "targetId"},
    tickcount{YType::uint32, "tickCount"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "decommission-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DecommissionItems::~DecommissionItems()
{
}

bool System::DecommissionItems::has_data() const
{
    if (is_presence_container) return true;
    return nodedn.is_set
	|| wipe.is_set
	|| targetid.is_set
	|| tickcount.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::DecommissionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nodedn.yfilter)
	|| ydk::is_set(wipe.yfilter)
	|| ydk::is_set(targetid.yfilter)
	|| ydk::is_set(tickcount.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::DecommissionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DecommissionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decommission-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DecommissionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nodedn.is_set || is_set(nodedn.yfilter)) leaf_name_data.push_back(nodedn.get_name_leafdata());
    if (wipe.is_set || is_set(wipe.yfilter)) leaf_name_data.push_back(wipe.get_name_leafdata());
    if (targetid.is_set || is_set(targetid.yfilter)) leaf_name_data.push_back(targetid.get_name_leafdata());
    if (tickcount.is_set || is_set(tickcount.yfilter)) leaf_name_data.push_back(tickcount.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DecommissionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DecommissionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DecommissionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nodeDn")
    {
        nodedn = value;
        nodedn.value_namespace = name_space;
        nodedn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wipe")
    {
        wipe = value;
        wipe.value_namespace = name_space;
        wipe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targetId")
    {
        targetid = value;
        targetid.value_namespace = name_space;
        targetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tickCount")
    {
        tickcount = value;
        tickcount.value_namespace = name_space;
        tickcount.value_namespace_prefix = name_space_prefix;
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

void System::DecommissionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nodeDn")
    {
        nodedn.yfilter = yfilter;
    }
    if(value_path == "wipe")
    {
        wipe.yfilter = yfilter;
    }
    if(value_path == "targetId")
    {
        targetid.yfilter = yfilter;
    }
    if(value_path == "tickCount")
    {
        tickcount.yfilter = yfilter;
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

bool System::DecommissionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodeDn" || name == "wipe" || name == "targetId" || name == "tickCount" || name == "name" || name == "descr")
        return true;
    return false;
}

System::InbItems::InbItems()
    :
    inbandif_list(this, {"id"})
{

    yang_name = "inb-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::InbItems::~InbItems()
{
}

bool System::InbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inbandif_list.len(); index++)
    {
        if(inbandif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InbItems::has_operation() const
{
    for (std::size_t index=0; index<inbandif_list.len(); index++)
    {
        if(inbandif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::InbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InbandIf-list")
    {
        auto ent_ = std::make_shared<System::InbItems::InbandIfList>();
        ent_->parent = this;
        inbandif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : inbandif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InbandIf-list")
        return true;
    return false;
}

System::InbItems::InbandIfList::InbandIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    dep_items(std::make_shared<System::InbItems::InbandIfList::DepItems>())
    , vnode_items(std::make_shared<System::InbItems::InbandIfList::VnodeItems>())
    , idep_items(std::make_shared<System::InbItems::InbandIfList::IdepItems>())
    , odev_items(std::make_shared<System::InbItems::InbandIfList::OdevItems>())
    , rsinbandconf_items(std::make_shared<System::InbItems::InbandIfList::RsinbandConfItems>())
    , rtvrfmbr_items(std::make_shared<System::InbItems::InbandIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::InbItems::InbandIfList::RtnwPathToIfItems>())
{
    dep_items->parent = this;
    vnode_items->parent = this;
    idep_items->parent = this;
    odev_items->parent = this;
    rsinbandconf_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "InbandIf-list"; yang_parent_name = "inb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::InbItems::InbandIfList::~InbandIfList()
{
}

bool System::InbItems::InbandIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| (dep_items !=  nullptr && dep_items->has_data())
	|| (vnode_items !=  nullptr && vnode_items->has_data())
	|| (idep_items !=  nullptr && idep_items->has_data())
	|| (odev_items !=  nullptr && odev_items->has_data())
	|| (rsinbandconf_items !=  nullptr && rsinbandconf_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::InbItems::InbandIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (dep_items !=  nullptr && dep_items->has_operation())
	|| (vnode_items !=  nullptr && vnode_items->has_operation())
	|| (idep_items !=  nullptr && idep_items->has_operation())
	|| (odev_items !=  nullptr && odev_items->has_operation())
	|| (rsinbandconf_items !=  nullptr && rsinbandconf_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::InbItems::InbandIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/inb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::InbItems::InbandIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InbandIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dep-items")
    {
        if(dep_items == nullptr)
        {
            dep_items = std::make_shared<System::InbItems::InbandIfList::DepItems>();
        }
        return dep_items;
    }

    if(child_yang_name == "vnode-items")
    {
        if(vnode_items == nullptr)
        {
            vnode_items = std::make_shared<System::InbItems::InbandIfList::VnodeItems>();
        }
        return vnode_items;
    }

    if(child_yang_name == "idep-items")
    {
        if(idep_items == nullptr)
        {
            idep_items = std::make_shared<System::InbItems::InbandIfList::IdepItems>();
        }
        return idep_items;
    }

    if(child_yang_name == "odev-items")
    {
        if(odev_items == nullptr)
        {
            odev_items = std::make_shared<System::InbItems::InbandIfList::OdevItems>();
        }
        return odev_items;
    }

    if(child_yang_name == "rsinbandConf-items")
    {
        if(rsinbandconf_items == nullptr)
        {
            rsinbandconf_items = std::make_shared<System::InbItems::InbandIfList::RsinbandConfItems>();
        }
        return rsinbandconf_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::InbItems::InbandIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::InbItems::InbandIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::get_children() const
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

    if(rsinbandconf_items != nullptr)
    {
        _children["rsinbandConf-items"] = rsinbandconf_items;
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

void System::InbItems::InbandIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::InbItems::InbandIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InbItems::InbandIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dep-items" || name == "vnode-items" || name == "idep-items" || name == "odev-items" || name == "rsinbandConf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr")
        return true;
    return false;
}

System::InbItems::InbandIfList::DepItems::DepItems()
    :
    dep_list(this, {"mac", "encap"})
{

    yang_name = "dep-items"; yang_parent_name = "InbandIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::DepItems::~DepItems()
{
}

bool System::InbItems::InbandIfList::DepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dep_list.len(); index++)
    {
        if(dep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InbItems::InbandIfList::DepItems::has_operation() const
{
    for (std::size_t index=0; index<dep_list.len(); index++)
    {
        if(dep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InbItems::InbandIfList::DepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::DepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::DepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DEp-list")
    {
        auto ent_ = std::make_shared<System::InbItems::InbandIfList::DepItems::DEpList>();
        ent_->parent = this;
        dep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::DepItems::get_children() const
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

void System::InbItems::InbandIfList::DepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InbItems::InbandIfList::DepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InbItems::InbandIfList::DepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DEp-list")
        return true;
    return false;
}

System::InbItems::InbandIfList::DepItems::DEpList::DEpList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    id{YType::uint64, "id"},
    uuid{YType::str, "uuid"}
{

    yang_name = "DEp-list"; yang_parent_name = "dep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::DepItems::DEpList::~DEpList()
{
}

bool System::InbItems::InbandIfList::DepItems::DEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| name.is_set
	|| id.is_set
	|| uuid.is_set;
}

bool System::InbItems::InbandIfList::DepItems::DEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(uuid.yfilter);
}

std::string System::InbItems::InbandIfList::DepItems::DEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::DepItems::DEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::DepItems::DEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::DepItems::DEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InbItems::InbandIfList::DepItems::DEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::InbItems::InbandIfList::DepItems::DEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InbItems::InbandIfList::DepItems::DEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "encap" || name == "name" || name == "id" || name == "uuid")
        return true;
    return false;
}

System::InbItems::InbandIfList::VnodeItems::VnodeItems()
    :
    vnode_list(this, {"devid"})
{

    yang_name = "vnode-items"; yang_parent_name = "InbandIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::VnodeItems::~VnodeItems()
{
}

bool System::InbItems::InbandIfList::VnodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InbItems::InbandIfList::VnodeItems::has_operation() const
{
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InbItems::InbandIfList::VnodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::VnodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::VnodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VNode-list")
    {
        auto ent_ = std::make_shared<System::InbItems::InbandIfList::VnodeItems::VNodeList>();
        ent_->parent = this;
        vnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::VnodeItems::get_children() const
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

void System::InbItems::InbandIfList::VnodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InbItems::InbandIfList::VnodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InbItems::InbandIfList::VnodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VNode-list")
        return true;
    return false;
}

System::InbItems::InbandIfList::VnodeItems::VNodeList::VNodeList()
    :
    devid{YType::uint32, "devId"},
    devtype{YType::enumeration, "devType"},
    lnodedn{YType::str, "lNodeDn"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
        ,
    rtfvvnode_items(std::make_shared<System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems>())
    , rslnode_items(std::make_shared<System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems>())
{
    rtfvvnode_items->parent = this;
    rslnode_items->parent = this;

    yang_name = "VNode-list"; yang_parent_name = "vnode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::VnodeItems::VNodeList::~VNodeList()
{
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::has_data() const
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

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::has_operation() const
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

std::string System::InbItems::InbandIfList::VnodeItems::VNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VNode-list";
    ADD_KEY_TOKEN(devid, "devId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::VnodeItems::VNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (devtype.is_set || is_set(devtype.yfilter)) leaf_name_data.push_back(devtype.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::VnodeItems::VNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvVNode-items")
    {
        if(rtfvvnode_items == nullptr)
        {
            rtfvvnode_items = std::make_shared<System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems>();
        }
        return rtfvvnode_items;
    }

    if(child_yang_name == "rslNode-items")
    {
        if(rslnode_items == nullptr)
        {
            rslnode_items = std::make_shared<System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems>();
        }
        return rslnode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::VnodeItems::VNodeList::get_children() const
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

void System::InbItems::InbandIfList::VnodeItems::VNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::InbItems::InbandIfList::VnodeItems::VNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvVNode-items" || name == "rslNode-items" || name == "devId" || name == "devType" || name == "lNodeDn" || name == "name" || name == "id")
        return true;
    return false;
}

System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtfvVNodeItems()
    :
    rtfvvnode_list(this, {"tdn"})
{

    yang_name = "rtfvVNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::~RtfvVNodeItems()
{
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvVNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvVNode-list")
    {
        auto ent_ = std::make_shared<System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList>();
        ent_->parent = this;
        rtfvvnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::get_children() const
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

void System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvVNode-list")
        return true;
    return false;
}

System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::RtFvVNodeList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvVNode-list"; yang_parent_name = "rtfvVNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::~RtFvVNodeList()
{
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvVNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RslNodeItems()
    :
    rslnode_list(this, {"tdn"})
{

    yang_name = "rslNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::~RslNodeItems()
{
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsLNode-list")
    {
        auto ent_ = std::make_shared<System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList>();
        ent_->parent = this;
        rslnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::get_children() const
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

void System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsLNode-list")
        return true;
    return false;
}

System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::RsLNodeList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsLNode-list"; yang_parent_name = "rslNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::~RsLNodeList()
{
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsLNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::InbItems::InbandIfList::IdepItems::IdepItems()
    :
    idep_list(this, {"mac", "encap"})
{

    yang_name = "idep-items"; yang_parent_name = "InbandIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::IdepItems::~IdepItems()
{
}

bool System::InbItems::InbandIfList::IdepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<idep_list.len(); index++)
    {
        if(idep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InbItems::InbandIfList::IdepItems::has_operation() const
{
    for (std::size_t index=0; index<idep_list.len(); index++)
    {
        if(idep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InbItems::InbandIfList::IdepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InbItems::InbandIfList::IdepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InbItems::InbandIfList::IdepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IDEp-list")
    {
        auto ent_ = std::make_shared<System::InbItems::InbandIfList::IdepItems::IDEpList>();
        ent_->parent = this;
        idep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InbItems::InbandIfList::IdepItems::get_children() const
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

void System::InbItems::InbandIfList::IdepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InbItems::InbandIfList::IdepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InbItems::InbandIfList::IdepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IDEp-list")
        return true;
    return false;
}

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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsVNode-list"; yang_parent_name = "rsvNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::~RsVNodeList()
{
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvVNode-list"; yang_parent_name = "rtfvVNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::~RtFvVNodeList()
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsLNode-list"; yang_parent_name = "rslNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::~RsLNodeList()
{
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsinbandConf-items"; yang_parent_name = "InbandIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::RsinbandConfItems::~RsinbandConfItems()
{
}

bool System::InbItems::InbandIfList::RsinbandConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InbItems::InbandIfList::RsinbandConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::InbItems::InbandIfList::RsinbandConfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InbItems::InbandIfList::RsinbandConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::InbItems::InbandIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "InbandIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::InbItems::InbandIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InbItems::InbandIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::InbItems::InbandIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InbItems::InbandIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvVNode-list"; yang_parent_name = "rtfvVNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::~RtFvVNodeList()
{
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsLNode-list"; yang_parent_name = "rslNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::~RsLNodeList()
{
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsVNode-list"; yang_parent_name = "rsvNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::~RsVNodeList()
{
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvVNode-list"; yang_parent_name = "rtfvVNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::~RtFvVNodeList()
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsLNode-list"; yang_parent_name = "rslNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::~RsLNodeList()
{
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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


}
}

