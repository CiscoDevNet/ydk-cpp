
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_17.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::~TextItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList>();
        c->parent = this;
        text_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList::~TextList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "ClientIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::~TextItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList>();
        c->parent = this;
        text_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList::~TextList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "ClientIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::~IpItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList>();
        c->parent = this;
        ip_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList::~IpList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "ClientIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::~MacItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList>();
        c->parent = this;
        mac_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList::~MacList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "ClientIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::~Uint64Items()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List>();
        c->parent = this;
        uint64_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "ClientIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::~Uint32Items()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List>();
        c->parent = this;
        uint32_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "ClientIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::~Uint16Items()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List>();
        c->parent = this;
        uint16_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "ClientIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::~UbyteItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList>();
        c->parent = this;
        ubyte_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList::~UByteList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RspseudoIfItems()
    :
    rspseudoif_list(this, {"tdn"})
{

    yang_name = "rspseudoIf-items"; yang_parent_name = "ClientIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::~RspseudoIfItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rspseudoif_list.len(); index++)
    {
        if(rspseudoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::has_operation() const
{
    for (std::size_t index=0; index<rspseudoif_list.len(); index++)
    {
        if(rspseudoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspseudoIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsPseudoIf-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList>();
        c->parent = this;
        rspseudoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rspseudoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsPseudoIf-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::RsPseudoIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsPseudoIf-list"; yang_parent_name = "rspseudoIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::~RsPseudoIfList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsPseudoIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "ClientIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "ClientIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayifItems()
    :
    relayif_list(this, {"id"})
{

    yang_name = "relayif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::RelayifItems::~RelayifItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<relayif_list.len(); index++)
    {
        if(relayif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::has_operation() const
{
    for (std::size_t index=0; index<relayif_list.len(); index++)
    {
        if(relayif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::RelayifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relayif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RelayIf-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList>();
        c->parent = this;
        relayif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : relayif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::DhcpItems::InstItems::RelayifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RelayIf-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::RelayIfList()
    :
    id{YType::str, "id"},
    options{YType::str, "options"},
    smartrelayenabled{YType::boolean, "SmartRelayEnabled"},
    subnetbroadcastenabled{YType::boolean, "SubnetBroadcastEnabled"},
    informationtrustedenabled{YType::boolean, "InformationTrustedEnabled"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    opt_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems>())
    , addr_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems>())
    , addrv6_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items>())
    , srcif_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems>())
    , v6srcif_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems>())
    , msgstats_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems>())
    , stat_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems>())
    , complex_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems>())
    , text_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems>())
    , ip_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems>())
    , mac_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems>())
    , uint64_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items>())
    , uint32_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items>())
    , uint16_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items>())
    , ubyte_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems>())
    , rtvrfmbr_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems>())
{
    opt_items->parent = this;
    addr_items->parent = this;
    addrv6_items->parent = this;
    srcif_items->parent = this;
    v6srcif_items->parent = this;
    msgstats_items->parent = this;
    stat_items->parent = this;
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

    yang_name = "RelayIf-list"; yang_parent_name = "relayif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::~RelayIfList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| options.is_set
	|| smartrelayenabled.is_set
	|| subnetbroadcastenabled.is_set
	|| informationtrustedenabled.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (opt_items !=  nullptr && opt_items->has_data())
	|| (addr_items !=  nullptr && addr_items->has_data())
	|| (addrv6_items !=  nullptr && addrv6_items->has_data())
	|| (srcif_items !=  nullptr && srcif_items->has_data())
	|| (v6srcif_items !=  nullptr && v6srcif_items->has_data())
	|| (msgstats_items !=  nullptr && msgstats_items->has_data())
	|| (stat_items !=  nullptr && stat_items->has_data())
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(smartrelayenabled.yfilter)
	|| ydk::is_set(subnetbroadcastenabled.yfilter)
	|| ydk::is_set(informationtrustedenabled.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (opt_items !=  nullptr && opt_items->has_operation())
	|| (addr_items !=  nullptr && addr_items->has_operation())
	|| (addrv6_items !=  nullptr && addrv6_items->has_operation())
	|| (srcif_items !=  nullptr && srcif_items->has_operation())
	|| (v6srcif_items !=  nullptr && v6srcif_items->has_operation())
	|| (msgstats_items !=  nullptr && msgstats_items->has_operation())
	|| (stat_items !=  nullptr && stat_items->has_operation())
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

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/relayif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RelayIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());
    if (smartrelayenabled.is_set || is_set(smartrelayenabled.yfilter)) leaf_name_data.push_back(smartrelayenabled.get_name_leafdata());
    if (subnetbroadcastenabled.is_set || is_set(subnetbroadcastenabled.yfilter)) leaf_name_data.push_back(subnetbroadcastenabled.get_name_leafdata());
    if (informationtrustedenabled.is_set || is_set(informationtrustedenabled.yfilter)) leaf_name_data.push_back(informationtrustedenabled.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opt-items")
    {
        if(opt_items == nullptr)
        {
            opt_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems>();
        }
        return opt_items;
    }

    if(child_yang_name == "addr-items")
    {
        if(addr_items == nullptr)
        {
            addr_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems>();
        }
        return addr_items;
    }

    if(child_yang_name == "addrv6-items")
    {
        if(addrv6_items == nullptr)
        {
            addrv6_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items>();
        }
        return addrv6_items;
    }

    if(child_yang_name == "srcif-items")
    {
        if(srcif_items == nullptr)
        {
            srcif_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems>();
        }
        return srcif_items;
    }

    if(child_yang_name == "v6srcif-items")
    {
        if(v6srcif_items == nullptr)
        {
            v6srcif_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems>();
        }
        return v6srcif_items;
    }

    if(child_yang_name == "msgstats-items")
    {
        if(msgstats_items == nullptr)
        {
            msgstats_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems>();
        }
        return msgstats_items;
    }

    if(child_yang_name == "stat-items")
    {
        if(stat_items == nullptr)
        {
            stat_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems>();
        }
        return stat_items;
    }

    if(child_yang_name == "complex-items")
    {
        if(complex_items == nullptr)
        {
            complex_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems>();
        }
        return complex_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems>();
        }
        return text_items;
    }

    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(opt_items != nullptr)
    {
        children["opt-items"] = opt_items;
    }

    if(addr_items != nullptr)
    {
        children["addr-items"] = addr_items;
    }

    if(addrv6_items != nullptr)
    {
        children["addrv6-items"] = addrv6_items;
    }

    if(srcif_items != nullptr)
    {
        children["srcif-items"] = srcif_items;
    }

    if(v6srcif_items != nullptr)
    {
        children["v6srcif-items"] = v6srcif_items;
    }

    if(msgstats_items != nullptr)
    {
        children["msgstats-items"] = msgstats_items;
    }

    if(stat_items != nullptr)
    {
        children["stat-items"] = stat_items;
    }

    if(complex_items != nullptr)
    {
        children["complex-items"] = complex_items;
    }

    if(text_items != nullptr)
    {
        children["text-items"] = text_items;
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SmartRelayEnabled")
    {
        smartrelayenabled = value;
        smartrelayenabled.value_namespace = name_space;
        smartrelayenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SubnetBroadcastEnabled")
    {
        subnetbroadcastenabled = value;
        subnetbroadcastenabled.value_namespace = name_space;
        subnetbroadcastenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "InformationTrustedEnabled")
    {
        informationtrustedenabled = value;
        informationtrustedenabled.value_namespace = name_space;
        informationtrustedenabled.value_namespace_prefix = name_space_prefix;
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "SmartRelayEnabled")
    {
        smartrelayenabled.yfilter = yfilter;
    }
    if(value_path == "SubnetBroadcastEnabled")
    {
        subnetbroadcastenabled.yfilter = yfilter;
    }
    if(value_path == "InformationTrustedEnabled")
    {
        informationtrustedenabled.yfilter = yfilter;
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opt-items" || name == "addr-items" || name == "addrv6-items" || name == "srcif-items" || name == "v6srcif-items" || name == "msgstats-items" || name == "stat-items" || name == "complex-items" || name == "text-items" || name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "options" || name == "SmartRelayEnabled" || name == "SubnetBroadcastEnabled" || name == "InformationTrustedEnabled" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptItems()
    :
    optiondef_list(this, {"name"})
{

    yang_name = "opt-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::~OptItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<optiondef_list.len(); index++)
    {
        if(optiondef_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::has_operation() const
{
    for (std::size_t index=0; index<optiondef_list.len(); index++)
    {
        if(optiondef_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OptionDef-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList>();
        c->parent = this;
        optiondef_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : optiondef_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OptionDef-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::OptionDefList()
    :
    name{YType::str, "name"},
    id{YType::uint8, "id"},
    data{YType::str, "data"}
        ,
    bd_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems>())
{
    bd_items->parent = this;

    yang_name = "OptionDef-list"; yang_parent_name = "opt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::~OptionDefList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set
	|| data.is_set
	|| (bd_items !=  nullptr && bd_items->has_data());
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(data.yfilter)
	|| (bd_items !=  nullptr && bd_items->has_operation());
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OptionDef-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-items")
    {
        if(bd_items == nullptr)
        {
            bd_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems>();
        }
        return bd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bd_items != nullptr)
    {
        children["bd-items"] = bd_items;
    }

    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-items" || name == "name" || name == "id" || name == "data")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::BdItems()
    :
    discnode_list(this, {"encap", "mac", "ciaddr"})
{

    yang_name = "bd-items"; yang_parent_name = "OptionDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::~BdItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<discnode_list.len(); index++)
    {
        if(discnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::has_operation() const
{
    for (std::size_t index=0; index<discnode_list.len(); index++)
    {
        if(discnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DiscNode-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList>();
        c->parent = this;
        discnode_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : discnode_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DiscNode-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList::DiscNodeList()
    :
    encap{YType::str, "encap"},
    mac{YType::str, "mac"},
    ciaddr{YType::str, "ciAddr"},
    siaddr{YType::str, "siAddr"},
    ifid{YType::str, "ifId"},
    ctxencap{YType::str, "ctxEncap"},
    fabencap{YType::str, "fabEncap"},
    notifst{YType::enumeration, "notifSt"}
{

    yang_name = "DiscNode-list"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList::~DiscNodeList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| mac.is_set
	|| ciaddr.is_set
	|| siaddr.is_set
	|| ifid.is_set
	|| ctxencap.is_set
	|| fabencap.is_set
	|| notifst.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(ciaddr.yfilter)
	|| ydk::is_set(siaddr.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(ctxencap.yfilter)
	|| ydk::is_set(fabencap.yfilter)
	|| ydk::is_set(notifst.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DiscNode-list";
    ADD_KEY_TOKEN(encap, "encap");
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(ciaddr, "ciAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (ciaddr.is_set || is_set(ciaddr.yfilter)) leaf_name_data.push_back(ciaddr.get_name_leafdata());
    if (siaddr.is_set || is_set(siaddr.yfilter)) leaf_name_data.push_back(siaddr.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (ctxencap.is_set || is_set(ctxencap.yfilter)) leaf_name_data.push_back(ctxencap.get_name_leafdata());
    if (fabencap.is_set || is_set(fabencap.yfilter)) leaf_name_data.push_back(fabencap.get_name_leafdata());
    if (notifst.is_set || is_set(notifst.yfilter)) leaf_name_data.push_back(notifst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciAddr")
    {
        ciaddr = value;
        ciaddr.value_namespace = name_space;
        ciaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "siAddr")
    {
        siaddr = value;
        siaddr.value_namespace = name_space;
        siaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctxEncap")
    {
        ctxencap = value;
        ctxencap.value_namespace = name_space;
        ctxencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabEncap")
    {
        fabencap = value;
        fabencap.value_namespace = name_space;
        fabencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifSt")
    {
        notifst = value;
        notifst.value_namespace = name_space;
        notifst.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "ciAddr")
    {
        ciaddr.yfilter = yfilter;
    }
    if(value_path == "siAddr")
    {
        siaddr.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "ctxEncap")
    {
        ctxencap.yfilter = yfilter;
    }
    if(value_path == "fabEncap")
    {
        fabencap.yfilter = yfilter;
    }
    if(value_path == "notifSt")
    {
        notifst.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encap" || name == "mac" || name == "ciAddr" || name == "siAddr" || name == "ifId" || name == "ctxEncap" || name == "fabEncap" || name == "notifSt")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::AddrItems()
    :
    relayaddr_list(this, {"vrf", "address"})
{

    yang_name = "addr-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::~AddrItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<relayaddr_list.len(); index++)
    {
        if(relayaddr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::has_operation() const
{
    for (std::size_t index=0; index<relayaddr_list.len(); index++)
    {
        if(relayaddr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RelayAddr-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList>();
        c->parent = this;
        relayaddr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : relayaddr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RelayAddr-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::RelayAddrList()
    :
    vrf{YType::str, "vrf"},
    address{YType::str, "address"},
    gw{YType::str, "gw"},
    mode{YType::enumeration, "mode"},
    counter{YType::uint16, "counter"}
        ,
    gw_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems>())
    , statistics_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems>())
{
    gw_items->parent = this;
    statistics_items->parent = this;

    yang_name = "RelayAddr-list"; yang_parent_name = "addr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::~RelayAddrList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| address.is_set
	|| gw.is_set
	|| mode.is_set
	|| counter.is_set
	|| (gw_items !=  nullptr && gw_items->has_data())
	|| (statistics_items !=  nullptr && statistics_items->has_data());
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(gw.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(counter.yfilter)
	|| (gw_items !=  nullptr && gw_items->has_operation())
	|| (statistics_items !=  nullptr && statistics_items->has_operation());
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RelayAddr-list";
    ADD_KEY_TOKEN(vrf, "vrf");
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (gw.is_set || is_set(gw.yfilter)) leaf_name_data.push_back(gw.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gw-items")
    {
        if(gw_items == nullptr)
        {
            gw_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems>();
        }
        return gw_items;
    }

    if(child_yang_name == "statistics-items")
    {
        if(statistics_items == nullptr)
        {
            statistics_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems>();
        }
        return statistics_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gw_items != nullptr)
    {
        children["gw-items"] = gw_items;
    }

    if(statistics_items != nullptr)
    {
        children["statistics-items"] = statistics_items;
    }

    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gw")
    {
        gw = value;
        gw.value_namespace = name_space;
        gw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "gw")
    {
        gw.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gw-items" || name == "statistics-items" || name == "vrf" || name == "address" || name == "gw" || name == "mode" || name == "counter")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::GwItems()
    :
    relaygw_list(this, {"address"})
{

    yang_name = "gw-items"; yang_parent_name = "RelayAddr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::~GwItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<relaygw_list.len(); index++)
    {
        if(relaygw_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::has_operation() const
{
    for (std::size_t index=0; index<relaygw_list.len(); index++)
    {
        if(relaygw_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gw-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RelayGw-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList>();
        c->parent = this;
        relaygw_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : relaygw_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RelayGw-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList::RelayGwList()
    :
    address{YType::str, "address"}
{

    yang_name = "RelayGw-list"; yang_parent_name = "gw-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList::~RelayGwList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RelayGw-list";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems::StatisticsItems()
    :
    reqpktsent{YType::uint32, "reqPktSent"},
    resppktrcvd{YType::uint32, "respPktRcvd"}
{

    yang_name = "statistics-items"; yang_parent_name = "RelayAddr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems::~StatisticsItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems::has_data() const
{
    if (is_presence_container) return true;
    return reqpktsent.is_set
	|| resppktrcvd.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reqpktsent.yfilter)
	|| ydk::is_set(resppktrcvd.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reqpktsent.is_set || is_set(reqpktsent.yfilter)) leaf_name_data.push_back(reqpktsent.get_name_leafdata());
    if (resppktrcvd.is_set || is_set(resppktrcvd.yfilter)) leaf_name_data.push_back(resppktrcvd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reqPktSent")
    {
        reqpktsent = value;
        reqpktsent.value_namespace = name_space;
        reqpktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respPktRcvd")
    {
        resppktrcvd = value;
        resppktrcvd.value_namespace = name_space;
        resppktrcvd.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reqPktSent")
    {
        reqpktsent.yfilter = yfilter;
    }
    if(value_path == "respPktRcvd")
    {
        resppktrcvd.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reqPktSent" || name == "respPktRcvd")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::Addrv6Items()
    :
    v6relayaddr_list(this, {"vrf", "address", "dstif"})
{

    yang_name = "addrv6-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::~Addrv6Items()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<v6relayaddr_list.len(); index++)
    {
        if(v6relayaddr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::has_operation() const
{
    for (std::size_t index=0; index<v6relayaddr_list.len(); index++)
    {
        if(v6relayaddr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addrv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "V6RelayAddr-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList>();
        c->parent = this;
        v6relayaddr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : v6relayaddr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "V6RelayAddr-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::V6RelayAddrList()
    :
    vrf{YType::str, "vrf"},
    address{YType::str, "address"},
    dstif{YType::str, "dstif"},
    mode{YType::enumeration, "mode"},
    counter{YType::uint16, "counter"}
        ,
    gw_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems>())
{
    gw_items->parent = this;

    yang_name = "V6RelayAddr-list"; yang_parent_name = "addrv6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::~V6RelayAddrList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| address.is_set
	|| dstif.is_set
	|| mode.is_set
	|| counter.is_set
	|| (gw_items !=  nullptr && gw_items->has_data());
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(dstif.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(counter.yfilter)
	|| (gw_items !=  nullptr && gw_items->has_operation());
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "V6RelayAddr-list";
    ADD_KEY_TOKEN(vrf, "vrf");
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(dstif, "dstif");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (dstif.is_set || is_set(dstif.yfilter)) leaf_name_data.push_back(dstif.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gw-items")
    {
        if(gw_items == nullptr)
        {
            gw_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems>();
        }
        return gw_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gw_items != nullptr)
    {
        children["gw-items"] = gw_items;
    }

    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstif")
    {
        dstif = value;
        dstif.value_namespace = name_space;
        dstif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "dstif")
    {
        dstif.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gw-items" || name == "vrf" || name == "address" || name == "dstif" || name == "mode" || name == "counter")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::GwItems()
    :
    v6relaygw_list(this, {"address"})
{

    yang_name = "gw-items"; yang_parent_name = "V6RelayAddr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::~GwItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<v6relaygw_list.len(); index++)
    {
        if(v6relaygw_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::has_operation() const
{
    for (std::size_t index=0; index<v6relaygw_list.len(); index++)
    {
        if(v6relaygw_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gw-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "V6RelayGw-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList>();
        c->parent = this;
        v6relaygw_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : v6relaygw_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "V6RelayGw-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList::V6RelayGwList()
    :
    address{YType::str, "address"}
{

    yang_name = "V6RelayGw-list"; yang_parent_name = "gw-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList::~V6RelayGwList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "V6RelayGw-list";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems::SrcifItems()
    :
    sourceinterface{YType::str, "sourceInterface"}
{

    yang_name = "srcif-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems::~SrcifItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems::has_data() const
{
    if (is_presence_container) return true;
    return sourceinterface.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sourceinterface.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srcif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sourceinterface.is_set || is_set(sourceinterface.yfilter)) leaf_name_data.push_back(sourceinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sourceInterface")
    {
        sourceinterface = value;
        sourceinterface.value_namespace = name_space;
        sourceinterface.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sourceInterface")
    {
        sourceinterface.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sourceInterface")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems::V6srcifItems()
    :
    v6sourceinterface{YType::str, "v6sourceInterface"}
{

    yang_name = "v6srcif-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems::~V6srcifItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems::has_data() const
{
    if (is_presence_container) return true;
    return v6sourceinterface.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v6sourceinterface.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6srcif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v6sourceinterface.is_set || is_set(v6sourceinterface.yfilter)) leaf_name_data.push_back(v6sourceinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v6sourceInterface")
    {
        v6sourceinterface = value;
        v6sourceinterface.value_namespace = name_space;
        v6sourceinterface.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v6sourceInterface")
    {
        v6sourceinterface.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v6sourceInterface")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgstatsItems()
    :
    msgstats_list(this, {"type"})
{

    yang_name = "msgstats-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::~MsgstatsItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<msgstats_list.len(); index++)
    {
        if(msgstats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::has_operation() const
{
    for (std::size_t index=0; index<msgstats_list.len(); index++)
    {
        if(msgstats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msgstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MsgStats-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgStatsList>();
        c->parent = this;
        msgstats_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : msgstats_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MsgStats-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgStatsList::MsgStatsList()
    :
    type{YType::enumeration, "type"},
    pktrcvd{YType::uint32, "pktRcvd"},
    pktsent{YType::uint32, "pktSent"},
    pktdrop{YType::uint32, "pktDrop"}
{

    yang_name = "MsgStats-list"; yang_parent_name = "msgstats-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgStatsList::~MsgStatsList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgStatsList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| pktrcvd.is_set
	|| pktsent.is_set
	|| pktdrop.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(pktrcvd.yfilter)
	|| ydk::is_set(pktsent.yfilter)
	|| ydk::is_set(pktdrop.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MsgStats-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (pktrcvd.is_set || is_set(pktrcvd.yfilter)) leaf_name_data.push_back(pktrcvd.get_name_leafdata());
    if (pktsent.is_set || is_set(pktsent.yfilter)) leaf_name_data.push_back(pktsent.get_name_leafdata());
    if (pktdrop.is_set || is_set(pktdrop.yfilter)) leaf_name_data.push_back(pktdrop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvd")
    {
        pktrcvd = value;
        pktrcvd.value_namespace = name_space;
        pktrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSent")
    {
        pktsent = value;
        pktsent.value_namespace = name_space;
        pktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktDrop")
    {
        pktdrop = value;
        pktdrop.value_namespace = name_space;
        pktdrop.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "pktRcvd")
    {
        pktrcvd.yfilter = yfilter;
    }
    if(value_path == "pktSent")
    {
        pktsent.yfilter = yfilter;
    }
    if(value_path == "pktDrop")
    {
        pktdrop.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "pktRcvd" || name == "pktSent" || name == "pktDrop")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems::StatItems()
    :
    invalidmsgtypedrop{YType::uint32, "invalidMsgTypeDrop"},
    iferrdrop{YType::uint32, "ifErrDrop"},
    sendserverfail{YType::uint32, "sendServerFail"},
    sendclientfail{YType::uint32, "sendClientFail"},
    unkservervrfintfdrop{YType::uint32, "unkServerVrfIntfDrop"},
    maxhopexceeddrop{YType::uint32, "maxHopExceedDrop"},
    opt82faildrop{YType::uint32, "opt82FailDrop"},
    malformpktdrop{YType::uint32, "malformPktDrop"}
{

    yang_name = "stat-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems::~StatItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems::has_data() const
{
    if (is_presence_container) return true;
    return invalidmsgtypedrop.is_set
	|| iferrdrop.is_set
	|| sendserverfail.is_set
	|| sendclientfail.is_set
	|| unkservervrfintfdrop.is_set
	|| maxhopexceeddrop.is_set
	|| opt82faildrop.is_set
	|| malformpktdrop.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(invalidmsgtypedrop.yfilter)
	|| ydk::is_set(iferrdrop.yfilter)
	|| ydk::is_set(sendserverfail.yfilter)
	|| ydk::is_set(sendclientfail.yfilter)
	|| ydk::is_set(unkservervrfintfdrop.yfilter)
	|| ydk::is_set(maxhopexceeddrop.yfilter)
	|| ydk::is_set(opt82faildrop.yfilter)
	|| ydk::is_set(malformpktdrop.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invalidmsgtypedrop.is_set || is_set(invalidmsgtypedrop.yfilter)) leaf_name_data.push_back(invalidmsgtypedrop.get_name_leafdata());
    if (iferrdrop.is_set || is_set(iferrdrop.yfilter)) leaf_name_data.push_back(iferrdrop.get_name_leafdata());
    if (sendserverfail.is_set || is_set(sendserverfail.yfilter)) leaf_name_data.push_back(sendserverfail.get_name_leafdata());
    if (sendclientfail.is_set || is_set(sendclientfail.yfilter)) leaf_name_data.push_back(sendclientfail.get_name_leafdata());
    if (unkservervrfintfdrop.is_set || is_set(unkservervrfintfdrop.yfilter)) leaf_name_data.push_back(unkservervrfintfdrop.get_name_leafdata());
    if (maxhopexceeddrop.is_set || is_set(maxhopexceeddrop.yfilter)) leaf_name_data.push_back(maxhopexceeddrop.get_name_leafdata());
    if (opt82faildrop.is_set || is_set(opt82faildrop.yfilter)) leaf_name_data.push_back(opt82faildrop.get_name_leafdata());
    if (malformpktdrop.is_set || is_set(malformpktdrop.yfilter)) leaf_name_data.push_back(malformpktdrop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "invalidMsgTypeDrop")
    {
        invalidmsgtypedrop = value;
        invalidmsgtypedrop.value_namespace = name_space;
        invalidmsgtypedrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifErrDrop")
    {
        iferrdrop = value;
        iferrdrop.value_namespace = name_space;
        iferrdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendServerFail")
    {
        sendserverfail = value;
        sendserverfail.value_namespace = name_space;
        sendserverfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendClientFail")
    {
        sendclientfail = value;
        sendclientfail.value_namespace = name_space;
        sendclientfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unkServerVrfIntfDrop")
    {
        unkservervrfintfdrop = value;
        unkservervrfintfdrop.value_namespace = name_space;
        unkservervrfintfdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxHopExceedDrop")
    {
        maxhopexceeddrop = value;
        maxhopexceeddrop.value_namespace = name_space;
        maxhopexceeddrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opt82FailDrop")
    {
        opt82faildrop = value;
        opt82faildrop.value_namespace = name_space;
        opt82faildrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformPktDrop")
    {
        malformpktdrop = value;
        malformpktdrop.value_namespace = name_space;
        malformpktdrop.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "invalidMsgTypeDrop")
    {
        invalidmsgtypedrop.yfilter = yfilter;
    }
    if(value_path == "ifErrDrop")
    {
        iferrdrop.yfilter = yfilter;
    }
    if(value_path == "sendServerFail")
    {
        sendserverfail.yfilter = yfilter;
    }
    if(value_path == "sendClientFail")
    {
        sendclientfail.yfilter = yfilter;
    }
    if(value_path == "unkServerVrfIntfDrop")
    {
        unkservervrfintfdrop.yfilter = yfilter;
    }
    if(value_path == "maxHopExceedDrop")
    {
        maxhopexceeddrop.yfilter = yfilter;
    }
    if(value_path == "opt82FailDrop")
    {
        opt82faildrop.yfilter = yfilter;
    }
    if(value_path == "malformPktDrop")
    {
        malformpktdrop.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidMsgTypeDrop" || name == "ifErrDrop" || name == "sendServerFail" || name == "sendClientFail" || name == "unkServerVrfIntfDrop" || name == "maxHopExceedDrop" || name == "opt82FailDrop" || name == "malformPktDrop")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexItems()
    :
    complex_list(this, {"code", "id"})
{

    yang_name = "complex-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::~ComplexItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::has_operation() const
{
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "complex-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Complex-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList>();
        c->parent = this;
        complex_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Complex-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::ComplexList()
    :
    code{YType::uint16, "code"},
    id{YType::uint32, "id"}
        ,
    ip_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems>())
    , mac_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems>())
    , uint64_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items>())
    , uint32_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items>())
    , uint16_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items>())
    , ubyte_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems>())
    , text_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems>())
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

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::~ComplexList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::has_data() const
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::has_operation() const
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

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Complex-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems>();
        }
        return text_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "text-items" || name == "code" || name == "id")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::~IpItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList>();
        c->parent = this;
        ip_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList::~IpList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::~MacItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList>();
        c->parent = this;
        mac_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList::~MacList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::~Uint64Items()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List>();
        c->parent = this;
        uint64_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::~Uint32Items()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List>();
        c->parent = this;
        uint32_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::~Uint16Items()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List>();
        c->parent = this;
        uint16_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::~UbyteItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList>();
        c->parent = this;
        ubyte_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList::~UByteList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::~TextItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList>();
        c->parent = this;
        text_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList::~TextList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::~TextItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList>();
        c->parent = this;
        text_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList::~TextList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::~IpItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList>();
        c->parent = this;
        ip_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList::~IpList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::~MacItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList>();
        c->parent = this;
        mac_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList::~MacList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::~Uint64Items()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List>();
        c->parent = this;
        uint64_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::~Uint32Items()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List>();
        c->parent = this;
        uint32_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::~Uint16Items()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List>();
        c->parent = this;
        uint16_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::~UbyteItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList>();
        c->parent = this;
        ubyte_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList::~UByteList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::get_children() const
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerifItems()
    :
    serverif_list(this, {"id"})
{

    yang_name = "serverif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::ServerifItems::~ServerifItems()
{
}

bool System::DhcpItems::InstItems::ServerifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serverif_list.len(); index++)
    {
        if(serverif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::has_operation() const
{
    for (std::size_t index=0; index<serverif_list.len(); index++)
    {
        if(serverif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::ServerifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serverif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServerIf-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList>();
        c->parent = this;
        serverif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : serverif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::DhcpItems::InstItems::ServerifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServerIf-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ServerIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    complex_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems>())
    , text_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems>())
    , ip_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems>())
    , mac_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems>())
    , uint64_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items>())
    , uint32_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items>())
    , uint16_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items>())
    , ubyte_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems>())
    , rtvrfmbr_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems>())
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

    yang_name = "ServerIf-list"; yang_parent_name = "serverif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::~ServerIfList()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
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

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/serverif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServerIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "complex-items")
    {
        if(complex_items == nullptr)
        {
            complex_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems>();
        }
        return complex_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems>();
        }
        return text_items;
    }

    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(complex_items != nullptr)
    {
        children["complex-items"] = complex_items;
    }

    if(text_items != nullptr)
    {
        children["text-items"] = text_items;
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complex-items" || name == "text-items" || name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexItems()
    :
    complex_list(this, {"code", "id"})
{

    yang_name = "complex-items"; yang_parent_name = "ServerIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::~ComplexItems()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::has_operation() const
{
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "complex-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Complex-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList>();
        c->parent = this;
        complex_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Complex-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::ComplexList()
    :
    code{YType::uint16, "code"},
    id{YType::uint32, "id"}
        ,
    ip_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems>())
    , mac_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems>())
    , uint64_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items>())
    , uint32_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items>())
    , uint16_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items>())
    , ubyte_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems>())
    , text_items(std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems>())
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

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::~ComplexList()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::has_data() const
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::has_operation() const
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

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Complex-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems>();
        }
        return text_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "text-items" || name == "code" || name == "id")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::~IpItems()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList>();
        c->parent = this;
        ip_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList::~IpList()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::~MacItems()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList>();
        c->parent = this;
        mac_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList::~MacList()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::~Uint64Items()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List>();
        c->parent = this;
        uint64_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::~Uint32Items()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List>();
        c->parent = this;
        uint32_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::~Uint16Items()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List>();
        c->parent = this;
        uint16_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::~UbyteItems()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList>();
        c->parent = this;
        ubyte_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList::~UByteList()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::~TextItems()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList>();
        c->parent = this;
        text_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList::~TextList()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "ServerIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::~TextItems()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList>();
        c->parent = this;
        text_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList::~TextList()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "ServerIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::~IpItems()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList>();
        c->parent = this;
        ip_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList::~IpList()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "ServerIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::~MacItems()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList>();
        c->parent = this;
        mac_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList::~MacList()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "ServerIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::~Uint64Items()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List>();
        c->parent = this;
        uint64_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "ServerIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::~Uint32Items()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List>();
        c->parent = this;
        uint32_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "ServerIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::~Uint16Items()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List>();
        c->parent = this;
        uint16_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "ServerIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::~UbyteItems()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList>();
        c->parent = this;
        ubyte_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList::~UByteList()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "ServerIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "ServerIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::get_children() const
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::DhcpItems::InstItems::SrcifItems::SrcifItems()
    :
    sourceinterface{YType::str, "sourceInterface"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "srcif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::SrcifItems::~SrcifItems()
{
}

bool System::DhcpItems::InstItems::SrcifItems::has_data() const
{
    if (is_presence_container) return true;
    return sourceinterface.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::DhcpItems::InstItems::SrcifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sourceinterface.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::DhcpItems::InstItems::SrcifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::SrcifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srcif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::SrcifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sourceinterface.is_set || is_set(sourceinterface.yfilter)) leaf_name_data.push_back(sourceinterface.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::SrcifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::SrcifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::SrcifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sourceInterface")
    {
        sourceinterface = value;
        sourceinterface.value_namespace = name_space;
        sourceinterface.value_namespace_prefix = name_space_prefix;
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

void System::DhcpItems::InstItems::SrcifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sourceInterface")
    {
        sourceinterface.yfilter = yfilter;
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

bool System::DhcpItems::InstItems::SrcifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sourceInterface" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::DhcpItems::InstItems::V6srcifItems::V6srcifItems()
    :
    v6sourceinterface{YType::str, "v6sourceInterface"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "v6srcif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::V6srcifItems::~V6srcifItems()
{
}

bool System::DhcpItems::InstItems::V6srcifItems::has_data() const
{
    if (is_presence_container) return true;
    return v6sourceinterface.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::DhcpItems::InstItems::V6srcifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v6sourceinterface.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::DhcpItems::InstItems::V6srcifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::V6srcifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6srcif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::V6srcifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v6sourceinterface.is_set || is_set(v6sourceinterface.yfilter)) leaf_name_data.push_back(v6sourceinterface.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::V6srcifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::V6srcifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::V6srcifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v6sourceInterface")
    {
        v6sourceinterface = value;
        v6sourceinterface.value_namespace = name_space;
        v6sourceinterface.value_namespace_prefix = name_space_prefix;
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

void System::DhcpItems::InstItems::V6srcifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v6sourceInterface")
    {
        v6sourceinterface.yfilter = yfilter;
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

bool System::DhcpItems::InstItems::V6srcifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v6sourceInterface" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsrcbindipItems::IpsrcbindipItems()
    :
    ipsrcbind_list(this, {"bindip", "bindvlan", "bindmac", "bindintf"})
{

    yang_name = "ipsrcbindip-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::IpsrcbindipItems::~IpsrcbindipItems()
{
}

bool System::DhcpItems::InstItems::IpsrcbindipItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipsrcbind_list.len(); index++)
    {
        if(ipsrcbind_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsrcbindipItems::has_operation() const
{
    for (std::size_t index=0; index<ipsrcbind_list.len(); index++)
    {
        if(ipsrcbind_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsrcbindipItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::IpsrcbindipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsrcbindip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsrcbindipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsrcbindipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpSrcBind-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList>();
        c->parent = this;
        ipsrcbind_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsrcbindipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipsrcbind_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::DhcpItems::InstItems::IpsrcbindipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsrcbindipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsrcbindipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpSrcBind-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList::IpSrcBindList()
    :
    bindip{YType::str, "bindIp"},
    bindvlan{YType::uint16, "bindVlan"},
    bindmac{YType::str, "bindMac"},
    bindintf{YType::str, "bindIntf"}
{

    yang_name = "IpSrcBind-list"; yang_parent_name = "ipsrcbindip-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList::~IpSrcBindList()
{
}

bool System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList::has_data() const
{
    if (is_presence_container) return true;
    return bindip.is_set
	|| bindvlan.is_set
	|| bindmac.is_set
	|| bindintf.is_set;
}

bool System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bindip.yfilter)
	|| ydk::is_set(bindvlan.yfilter)
	|| ydk::is_set(bindmac.yfilter)
	|| ydk::is_set(bindintf.yfilter);
}

std::string System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/ipsrcbindip-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpSrcBind-list";
    ADD_KEY_TOKEN(bindip, "bindIp");
    ADD_KEY_TOKEN(bindvlan, "bindVlan");
    ADD_KEY_TOKEN(bindmac, "bindMac");
    ADD_KEY_TOKEN(bindintf, "bindIntf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bindip.is_set || is_set(bindip.yfilter)) leaf_name_data.push_back(bindip.get_name_leafdata());
    if (bindvlan.is_set || is_set(bindvlan.yfilter)) leaf_name_data.push_back(bindvlan.get_name_leafdata());
    if (bindmac.is_set || is_set(bindmac.yfilter)) leaf_name_data.push_back(bindmac.get_name_leafdata());
    if (bindintf.is_set || is_set(bindintf.yfilter)) leaf_name_data.push_back(bindintf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bindIp")
    {
        bindip = value;
        bindip.value_namespace = name_space;
        bindip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bindVlan")
    {
        bindvlan = value;
        bindvlan.value_namespace = name_space;
        bindvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bindMac")
    {
        bindmac = value;
        bindmac.value_namespace = name_space;
        bindmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bindIntf")
    {
        bindintf = value;
        bindintf.value_namespace = name_space;
        bindintf.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bindIp")
    {
        bindip.yfilter = yfilter;
    }
    if(value_path == "bindVlan")
    {
        bindvlan.yfilter = yfilter;
    }
    if(value_path == "bindMac")
    {
        bindmac.yfilter = yfilter;
    }
    if(value_path == "bindIntf")
    {
        bindintf.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bindIp" || name == "bindVlan" || name == "bindMac" || name == "bindIntf")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgifItems()
    :
    ipsgif_list(this, {"id"})
{

    yang_name = "ipsgif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::IpsgifItems::~IpsgifItems()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipsgif_list.len(); index++)
    {
        if(ipsgif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::has_operation() const
{
    for (std::size_t index=0; index<ipsgif_list.len(); index++)
    {
        if(ipsgif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::IpsgifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsgif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpsgIf-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList>();
        c->parent = this;
        ipsgif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipsgif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::DhcpItems::InstItems::IpsgifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpsgIf-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpsgIfList()
    :
    id{YType::str, "id"},
    ipsgenabled{YType::boolean, "ipsgEnabled"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    complex_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems>())
    , text_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems>())
    , ip_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems>())
    , mac_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems>())
    , uint64_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items>())
    , uint32_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items>())
    , uint16_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items>())
    , ubyte_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems>())
    , rtvrfmbr_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems>())
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

    yang_name = "IpsgIf-list"; yang_parent_name = "ipsgif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::~IpsgIfList()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ipsgenabled.is_set
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ipsgenabled.yfilter)
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

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/ipsgif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpsgIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ipsgenabled.is_set || is_set(ipsgenabled.yfilter)) leaf_name_data.push_back(ipsgenabled.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "complex-items")
    {
        if(complex_items == nullptr)
        {
            complex_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems>();
        }
        return complex_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems>();
        }
        return text_items;
    }

    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(complex_items != nullptr)
    {
        children["complex-items"] = complex_items;
    }

    if(text_items != nullptr)
    {
        children["text-items"] = text_items;
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsgEnabled")
    {
        ipsgenabled = value;
        ipsgenabled.value_namespace = name_space;
        ipsgenabled.value_namespace_prefix = name_space_prefix;
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ipsgEnabled")
    {
        ipsgenabled.yfilter = yfilter;
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complex-items" || name == "text-items" || name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "ipsgEnabled" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexItems()
    :
    complex_list(this, {"code", "id"})
{

    yang_name = "complex-items"; yang_parent_name = "IpsgIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::~ComplexItems()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::has_operation() const
{
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "complex-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Complex-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList>();
        c->parent = this;
        complex_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::get_children() const
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Complex-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::ComplexList()
    :
    code{YType::uint16, "code"},
    id{YType::uint32, "id"}
        ,
    ip_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems>())
    , mac_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems>())
    , uint64_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items>())
    , uint32_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items>())
    , uint16_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items>())
    , ubyte_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems>())
    , text_items(std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems>())
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

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::~ComplexList()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::has_data() const
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::has_operation() const
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

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Complex-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems>();
        }
        return text_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::get_children() const
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "text-items" || name == "code" || name == "id")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::~IpItems()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList>();
        c->parent = this;
        ip_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::get_children() const
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList::~IpList()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList>();
        c->parent = this;
        mac_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::get_children() const
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List>();
        c->parent = this;
        uint64_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::get_children() const
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List>();
        c->parent = this;
        uint32_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::get_children() const
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List>();
        c->parent = this;
        uint16_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::get_children() const
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList>();
        c->parent = this;
        ubyte_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::get_children() const
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList>();
        c->parent = this;
        text_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::get_children() const
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList>();
        c->parent = this;
        text_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::get_children() const
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList>();
        c->parent = this;
        ip_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::get_children() const
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList>();
        c->parent = this;
        mac_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::get_children() const
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List>();
        c->parent = this;
        uint64_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::get_children() const
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List>();
        c->parent = this;
        uint32_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::get_children() const
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List>();
        c->parent = this;
        uint16_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::get_children() const
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList>();
        c->parent = this;
        ubyte_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::get_children() const
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::get_children() const
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgexvlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpsgExVlan-list")
    {
        auto c = std::make_shared<System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList>();
        c->parent = this;
        ipsgexvlan_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgexvlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipsgexvlan_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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


}
}

