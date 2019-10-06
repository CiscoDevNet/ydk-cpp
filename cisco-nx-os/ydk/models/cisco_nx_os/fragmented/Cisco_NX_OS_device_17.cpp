
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList>();
        ent_->parent = this;
        ubyte_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "RelayIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::get_children() const
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServerIf-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList>();
        ent_->parent = this;
        serverif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serverif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Complex-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList>();
        ent_->parent = this;
        complex_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList>();
        ent_->parent = this;
        ip_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList>();
        ent_->parent = this;
        mac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List>();
        ent_->parent = this;
        uint64_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List>();
        ent_->parent = this;
        uint32_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List>();
        ent_->parent = this;
        uint16_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList>();
        ent_->parent = this;
        ubyte_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList>();
        ent_->parent = this;
        text_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList>();
        ent_->parent = this;
        text_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList>();
        ent_->parent = this;
        ip_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList>();
        ent_->parent = this;
        mac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List>();
        ent_->parent = this;
        uint64_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List>();
        ent_->parent = this;
        uint32_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List>();
        ent_->parent = this;
        uint16_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList>();
        ent_->parent = this;
        ubyte_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "ServerIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::get_children() const
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::DhcpItems::InstItems::SrcifItems::SrcifItems()
    :
    sourceinterface{YType::str, "sourceInterface"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
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
	|| ctrl.is_set;
}

bool System::DhcpItems::InstItems::SrcifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sourceinterface.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::SrcifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::SrcifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool System::DhcpItems::InstItems::SrcifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sourceInterface" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::DhcpItems::InstItems::V6srcifItems::V6srcifItems()
    :
    v6sourceinterface{YType::str, "v6sourceInterface"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
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
	|| ctrl.is_set;
}

bool System::DhcpItems::InstItems::V6srcifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v6sourceinterface.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::V6srcifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::V6srcifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool System::DhcpItems::InstItems::V6srcifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v6sourceInterface" || name == "name" || name == "adminSt" || name == "ctrl")
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsrcbindipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpSrcBind-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList>();
        ent_->parent = this;
        ipsrcbind_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsrcbindipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipsrcbind_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpsgIf-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList>();
        ent_->parent = this;
        ipsgif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipsgif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Complex-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList>();
        ent_->parent = this;
        complex_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList>();
        ent_->parent = this;
        ip_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "IpsgIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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
}

void System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "SnoopIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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
}

void System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::SnoopifItems::SnoopIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvVNode-list"; yang_parent_name = "rtfvVNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::~RtFvVNodeList()
{
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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
}

void System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RsLNode-list"; yang_parent_name = "rslNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::~RsLNodeList()
{
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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
}

void System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::InbItems::InbandIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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


}
}

