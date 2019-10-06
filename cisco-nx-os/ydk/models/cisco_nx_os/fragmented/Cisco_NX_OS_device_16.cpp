
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_16.hpp"
#include "Cisco_NX_OS_device_17.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::DhcpItems::InstItems::DaiifItems::DaiifItems()
    :
    daiif_list(this, {"id"})
{

    yang_name = "daiif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::DaiifItems::~DaiifItems()
{
}

bool System::DhcpItems::InstItems::DaiifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<daiif_list.len(); index++)
    {
        if(daiif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::has_operation() const
{
    for (std::size_t index=0; index<daiif_list.len(); index++)
    {
        if(daiif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::DaiifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daiif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DAIIf-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList>();
        ent_->parent = this;
        daiif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : daiif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DAIIf-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::DAIIfList()
    :
    id{YType::str, "id"},
    daienabled{YType::boolean, "daiEnabled"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    complex_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems>())
    , text_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems>())
    , ip_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems>())
    , mac_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems>())
    , uint64_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items>())
    , uint32_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items>())
    , uint16_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items>())
    , ubyte_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems>())
    , rtvrfmbr_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems>())
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

    yang_name = "DAIIf-list"; yang_parent_name = "daiif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::~DAIIfList()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| daienabled.is_set
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(daienabled.yfilter)
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

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/daiif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DAIIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (daienabled.is_set || is_set(daienabled.yfilter)) leaf_name_data.push_back(daienabled.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "complex-items")
    {
        if(complex_items == nullptr)
        {
            complex_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems>();
        }
        return complex_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems>();
        }
        return text_items;
    }

    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "daiEnabled")
    {
        daienabled = value;
        daienabled.value_namespace = name_space;
        daienabled.value_namespace_prefix = name_space_prefix;
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "daiEnabled")
    {
        daienabled.yfilter = yfilter;
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complex-items" || name == "text-items" || name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "daiEnabled" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexItems()
    :
    complex_list(this, {"code", "id"})
{

    yang_name = "complex-items"; yang_parent_name = "DAIIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::~ComplexItems()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::has_operation() const
{
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "complex-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Complex-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList>();
        ent_->parent = this;
        complex_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Complex-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::ComplexList()
    :
    code{YType::uint16, "code"},
    id{YType::uint32, "id"}
        ,
    ip_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems>())
    , mac_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems>())
    , uint64_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items>())
    , uint32_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items>())
    , uint16_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items>())
    , ubyte_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems>())
    , text_items(std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems>())
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

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::~ComplexList()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::has_data() const
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::has_operation() const
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

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Complex-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems>();
        }
        return text_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "text-items" || name == "code" || name == "id")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::~IpItems()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpList>();
        ent_->parent = this;
        ip_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpList::~IpList()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::~MacItems()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacList>();
        ent_->parent = this;
        mac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacList::~MacList()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::~Uint64Items()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::UInt64List>();
        ent_->parent = this;
        uint64_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::~Uint32Items()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::UInt32List>();
        ent_->parent = this;
        uint32_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::~Uint16Items()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::UInt16List>();
        ent_->parent = this;
        uint16_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::~UbyteItems()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UByteList>();
        ent_->parent = this;
        ubyte_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UByteList::~UByteList()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::~TextItems()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextList>();
        ent_->parent = this;
        text_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextList::~TextList()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::ComplexItems::ComplexList::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "DAIIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::~TextItems()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextList>();
        ent_->parent = this;
        text_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextList::~TextList()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "DAIIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::~IpItems()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpList>();
        ent_->parent = this;
        ip_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpList::~IpList()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "DAIIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::~MacItems()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacList>();
        ent_->parent = this;
        mac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacList::~MacList()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "DAIIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::~Uint64Items()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::UInt64List>();
        ent_->parent = this;
        uint64_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "DAIIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::~Uint32Items()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::UInt32List>();
        ent_->parent = this;
        uint32_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "DAIIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::~Uint16Items()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::UInt16List>();
        ent_->parent = this;
        uint16_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "DAIIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::~UbyteItems()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UByteList>();
        ent_->parent = this;
        ubyte_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UByteList::~UByteList()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "DAIIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "DAIIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::get_children() const
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

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::DaiifItems::DAIIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientifItems()
    :
    clientif_list(this, {"id"})
{

    yang_name = "clientif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::ClientifItems::~ClientifItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clientif_list.len(); index++)
    {
        if(clientif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::has_operation() const
{
    for (std::size_t index=0; index<clientif_list.len(); index++)
    {
        if(clientif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::ClientifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clientif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ClientIf-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList>();
        ent_->parent = this;
        clientif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clientif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ClientIf-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ClientIfList()
    :
    id{YType::str, "id"},
    operst{YType::enumeration, "operSt"},
    adminst{YType::enumeration, "adminSt"}
        ,
    addr_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems>())
    , addrv6_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items>())
    , resp_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems>())
    , complex_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems>())
    , text_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems>())
    , ip_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems>())
    , mac_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems>())
    , uint64_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items>())
    , uint32_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items>())
    , uint16_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items>())
    , ubyte_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems>())
    , rspseudoif_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems>())
    , rtvrfmbr_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems>())
{
    addr_items->parent = this;
    addrv6_items->parent = this;
    resp_items->parent = this;
    complex_items->parent = this;
    text_items->parent = this;
    ip_items->parent = this;
    mac_items->parent = this;
    uint64_items->parent = this;
    uint32_items->parent = this;
    uint16_items->parent = this;
    ubyte_items->parent = this;
    rspseudoif_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "ClientIf-list"; yang_parent_name = "clientif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::~ClientIfList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| adminst.is_set
	|| (addr_items !=  nullptr && addr_items->has_data())
	|| (addrv6_items !=  nullptr && addrv6_items->has_data())
	|| (resp_items !=  nullptr && resp_items->has_data())
	|| (complex_items !=  nullptr && complex_items->has_data())
	|| (text_items !=  nullptr && text_items->has_data())
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data())
	|| (uint64_items !=  nullptr && uint64_items->has_data())
	|| (uint32_items !=  nullptr && uint32_items->has_data())
	|| (uint16_items !=  nullptr && uint16_items->has_data())
	|| (ubyte_items !=  nullptr && ubyte_items->has_data())
	|| (rspseudoif_items !=  nullptr && rspseudoif_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (addr_items !=  nullptr && addr_items->has_operation())
	|| (addrv6_items !=  nullptr && addrv6_items->has_operation())
	|| (resp_items !=  nullptr && resp_items->has_operation())
	|| (complex_items !=  nullptr && complex_items->has_operation())
	|| (text_items !=  nullptr && text_items->has_operation())
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation())
	|| (uint64_items !=  nullptr && uint64_items->has_operation())
	|| (uint32_items !=  nullptr && uint32_items->has_operation())
	|| (uint16_items !=  nullptr && uint16_items->has_operation())
	|| (ubyte_items !=  nullptr && ubyte_items->has_operation())
	|| (rspseudoif_items !=  nullptr && rspseudoif_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/dhcp-items/inst-items/clientif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ClientIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr-items")
    {
        if(addr_items == nullptr)
        {
            addr_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems>();
        }
        return addr_items;
    }

    if(child_yang_name == "addrv6-items")
    {
        if(addrv6_items == nullptr)
        {
            addrv6_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items>();
        }
        return addrv6_items;
    }

    if(child_yang_name == "resp-items")
    {
        if(resp_items == nullptr)
        {
            resp_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems>();
        }
        return resp_items;
    }

    if(child_yang_name == "complex-items")
    {
        if(complex_items == nullptr)
        {
            complex_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems>();
        }
        return complex_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems>();
        }
        return text_items;
    }

    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "rspseudoIf-items")
    {
        if(rspseudoif_items == nullptr)
        {
            rspseudoif_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems>();
        }
        return rspseudoif_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr_items != nullptr)
    {
        _children["addr-items"] = addr_items;
    }

    if(addrv6_items != nullptr)
    {
        _children["addrv6-items"] = addrv6_items;
    }

    if(resp_items != nullptr)
    {
        _children["resp-items"] = resp_items;
    }

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

    if(rspseudoif_items != nullptr)
    {
        _children["rspseudoIf-items"] = rspseudoif_items;
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-items" || name == "addrv6-items" || name == "resp-items" || name == "complex-items" || name == "text-items" || name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "rspseudoIf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "operSt" || name == "adminSt")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::AddrItems()
    :
    clientaddr_list(this, {"address"})
{

    yang_name = "addr-items"; yang_parent_name = "ClientIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::~AddrItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clientaddr_list.len(); index++)
    {
        if(clientaddr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::has_operation() const
{
    for (std::size_t index=0; index<clientaddr_list.len(); index++)
    {
        if(clientaddr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ClientAddr-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::ClientAddrList>();
        ent_->parent = this;
        clientaddr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clientaddr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ClientAddr-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::ClientAddrList::ClientAddrList()
    :
    address{YType::str, "address"}
{

    yang_name = "ClientAddr-list"; yang_parent_name = "addr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::ClientAddrList::~ClientAddrList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::ClientAddrList::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::ClientAddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::ClientAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ClientAddr-list";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::ClientAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::ClientAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::ClientAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::ClientAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::ClientAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::AddrItems::ClientAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Addrv6Items()
    :
    clientv6addr_list(this, {"address"})
{

    yang_name = "addrv6-items"; yang_parent_name = "ClientIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::~Addrv6Items()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clientv6addr_list.len(); index++)
    {
        if(clientv6addr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::has_operation() const
{
    for (std::size_t index=0; index<clientv6addr_list.len(); index++)
    {
        if(clientv6addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addrv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Clientv6Addr-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Clientv6AddrList>();
        ent_->parent = this;
        clientv6addr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clientv6addr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Clientv6Addr-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Clientv6AddrList::Clientv6AddrList()
    :
    address{YType::str, "address"}
{

    yang_name = "Clientv6Addr-list"; yang_parent_name = "addrv6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Clientv6AddrList::~Clientv6AddrList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Clientv6AddrList::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Clientv6AddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Clientv6AddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Clientv6Addr-list";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Clientv6AddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Clientv6AddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Clientv6AddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Clientv6AddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Clientv6AddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::Addrv6Items::Clientv6AddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::RespItems()
    :
    ip_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems>())
    , mac_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems>())
    , uint64_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items>())
    , uint32_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items>())
    , uint16_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items>())
    , ubyte_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems>())
    , text_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems>())
    , complex_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;
    uint64_items->parent = this;
    uint32_items->parent = this;
    uint16_items->parent = this;
    ubyte_items->parent = this;
    text_items->parent = this;
    complex_items->parent = this;

    yang_name = "resp-items"; yang_parent_name = "ClientIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::~RespItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::has_data() const
{
    if (is_presence_container) return true;
    return (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data())
	|| (uint64_items !=  nullptr && uint64_items->has_data())
	|| (uint32_items !=  nullptr && uint32_items->has_data())
	|| (uint16_items !=  nullptr && uint16_items->has_data())
	|| (ubyte_items !=  nullptr && ubyte_items->has_data())
	|| (text_items !=  nullptr && text_items->has_data())
	|| (complex_items !=  nullptr && complex_items->has_data());
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::has_operation() const
{
    return is_set(yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation())
	|| (uint64_items !=  nullptr && uint64_items->has_operation())
	|| (uint32_items !=  nullptr && uint32_items->has_operation())
	|| (uint16_items !=  nullptr && uint16_items->has_operation())
	|| (ubyte_items !=  nullptr && ubyte_items->has_operation())
	|| (text_items !=  nullptr && text_items->has_operation())
	|| (complex_items !=  nullptr && complex_items->has_operation());
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems>();
        }
        return text_items;
    }

    if(child_yang_name == "complex-items")
    {
        if(complex_items == nullptr)
        {
            complex_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems>();
        }
        return complex_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::get_children() const
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

    if(complex_items != nullptr)
    {
        _children["complex-items"] = complex_items;
    }

    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "text-items" || name == "complex-items")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "resp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::~IpItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpList>();
        ent_->parent = this;
        ip_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpList::~IpList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "resp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::~MacItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacList>();
        ent_->parent = this;
        mac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacList::~MacList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "resp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::~Uint64Items()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::UInt64List>();
        ent_->parent = this;
        uint64_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "resp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::~Uint32Items()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::UInt32List>();
        ent_->parent = this;
        uint32_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "resp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::~Uint16Items()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::UInt16List>();
        ent_->parent = this;
        uint16_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "resp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::~UbyteItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UByteList>();
        ent_->parent = this;
        ubyte_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UByteList::~UByteList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "resp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::~TextItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextList>();
        ent_->parent = this;
        text_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextList::~TextList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexItems()
    :
    complex_list(this, {"code", "id"})
{

    yang_name = "complex-items"; yang_parent_name = "resp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::~ComplexItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::has_operation() const
{
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "complex-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Complex-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList>();
        ent_->parent = this;
        complex_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Complex-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::ComplexList()
    :
    code{YType::uint16, "code"},
    id{YType::uint32, "id"}
        ,
    ip_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems>())
    , mac_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems>())
    , uint64_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items>())
    , uint32_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items>())
    , uint16_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items>())
    , ubyte_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems>())
    , text_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems>())
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

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::~ComplexList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::has_data() const
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::has_operation() const
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

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Complex-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems>();
        }
        return text_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "text-items" || name == "code" || name == "id")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::~IpItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpList>();
        ent_->parent = this;
        ip_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpList::~IpList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::~MacItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacList>();
        ent_->parent = this;
        mac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacList::~MacList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::~Uint64Items()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::UInt64List>();
        ent_->parent = this;
        uint64_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::~Uint32Items()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::UInt32List>();
        ent_->parent = this;
        uint32_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::~Uint16Items()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::UInt16List>();
        ent_->parent = this;
        uint16_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::~UbyteItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UByteList>();
        ent_->parent = this;
        ubyte_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UByteList::~UByteList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextItems()
    :
    text_list(this, {"code"})
{

    yang_name = "text-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::~TextItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::has_operation() const
{
    for (std::size_t index=0; index<text_list.len(); index++)
    {
        if(text_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextList>();
        ent_->parent = this;
        text_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Text-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextList::TextList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Text-list"; yang_parent_name = "text-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextList::~TextList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Text-list";
    ADD_KEY_TOKEN(code, "code");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RespItems::ComplexItems::ComplexList::TextItems::TextList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexItems()
    :
    complex_list(this, {"code", "id"})
{

    yang_name = "complex-items"; yang_parent_name = "ClientIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::~ComplexItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::has_operation() const
{
    for (std::size_t index=0; index<complex_list.len(); index++)
    {
        if(complex_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "complex-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Complex-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList>();
        ent_->parent = this;
        complex_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Complex-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::ComplexList()
    :
    code{YType::uint16, "code"},
    id{YType::uint32, "id"}
        ,
    ip_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems>())
    , mac_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems>())
    , uint64_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items>())
    , uint32_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items>())
    , uint16_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items>())
    , ubyte_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems>())
    , text_items(std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems>())
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

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::~ComplexList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::has_data() const
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::has_operation() const
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

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Complex-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "uint64-items")
    {
        if(uint64_items == nullptr)
        {
            uint64_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items>();
        }
        return uint64_items;
    }

    if(child_yang_name == "uint32-items")
    {
        if(uint32_items == nullptr)
        {
            uint32_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items>();
        }
        return uint32_items;
    }

    if(child_yang_name == "uint16-items")
    {
        if(uint16_items == nullptr)
        {
            uint16_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items>();
        }
        return uint16_items;
    }

    if(child_yang_name == "ubyte-items")
    {
        if(ubyte_items == nullptr)
        {
            ubyte_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems>();
        }
        return ubyte_items;
    }

    if(child_yang_name == "text-items")
    {
        if(text_items == nullptr)
        {
            text_items = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems>();
        }
        return text_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "text-items" || name == "code" || name == "id")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpItems()
    :
    ip_list(this, {"code", "value_"})
{

    yang_name = "ip-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::~IpItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ip_list.len(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpList>();
        ent_->parent = this;
        ip_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ip-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpList::IpList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Ip-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpList::~IpList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ip-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::IpItems::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacItems()
    :
    mac_list(this, {"code", "value_"})
{

    yang_name = "mac-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::~MacItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<mac_list.len(); index++)
    {
        if(mac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacList>();
        ent_->parent = this;
        mac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mac-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacList::MacList()
    :
    code{YType::uint16, "code"},
    value_{YType::str, "value"}
{

    yang_name = "Mac-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacList::~MacList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mac-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::MacItems::MacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::Uint64Items()
    :
    uint64_list(this, {"code", "value_"})
{

    yang_name = "uint64-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::~Uint64Items()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::has_operation() const
{
    for (std::size_t index=0; index<uint64_list.len(); index++)
    {
        if(uint64_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint64-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::UInt64List>();
        ent_->parent = this;
        uint64_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt64-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::UInt64List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint64, "value"}
{

    yang_name = "UInt64-list"; yang_parent_name = "uint64-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::~UInt64List()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt64-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::Uint32Items()
    :
    uint32_list(this, {"code", "value_"})
{

    yang_name = "uint32-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::~Uint32Items()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::has_operation() const
{
    for (std::size_t index=0; index<uint32_list.len(); index++)
    {
        if(uint32_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::UInt32List>();
        ent_->parent = this;
        uint32_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt32-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::UInt32List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint32, "value"}
{

    yang_name = "UInt32-list"; yang_parent_name = "uint32-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::~UInt32List()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt32-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::Uint16Items()
    :
    uint16_list(this, {"code", "value_"})
{

    yang_name = "uint16-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::~Uint16Items()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::has_operation() const
{
    for (std::size_t index=0; index<uint16_list.len(); index++)
    {
        if(uint16_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::UInt16List>();
        ent_->parent = this;
        uint16_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UInt16-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::UInt16List()
    :
    code{YType::uint16, "code"},
    value_{YType::uint16, "value"}
{

    yang_name = "UInt16-list"; yang_parent_name = "uint16-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::~UInt16List()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UInt16-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UbyteItems()
    :
    ubyte_list(this, {"code", "value_"})
{

    yang_name = "ubyte-items"; yang_parent_name = "Complex-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::~UbyteItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::has_operation() const
{
    for (std::size_t index=0; index<ubyte_list.len(); index++)
    {
        if(ubyte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubyte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UByteList>();
        ent_->parent = this;
        ubyte_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::get_children() const
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UByte-list")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UByteList::UByteList()
    :
    code{YType::uint16, "code"},
    value_{YType::uint8, "value"}
{

    yang_name = "UByte-list"; yang_parent_name = "ubyte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UByteList::~UByteList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_data() const
{
    if (is_presence_container) return true;
    return code.is_set
	|| value_.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UByte-list";
    ADD_KEY_TOKEN(code, "code");
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UByteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UByteList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::UbyteItems::UByteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "value")
        return true;
    return false;
}

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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList>();
        ent_->parent = this;
        text_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList>();
        ent_->parent = this;
        text_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList>();
        ent_->parent = this;
        ip_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList>();
        ent_->parent = this;
        mac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List>();
        ent_->parent = this;
        uint64_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List>();
        ent_->parent = this;
        uint32_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List>();
        ent_->parent = this;
        uint16_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList>();
        ent_->parent = this;
        ubyte_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsPseudoIf-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList>();
        ent_->parent = this;
        rspseudoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rspseudoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RsPseudoIf-list"; yang_parent_name = "rspseudoIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::~RsPseudoIfList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "ClientIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::get_children() const
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
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RelayIf-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList>();
        ent_->parent = this;
        relayif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : relayif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    adminst{YType::enumeration, "adminSt"}
        ,
    opt_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems>())
    , addr_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems>())
    , addrv6_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items>())
    , srcif_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems>())
    , v6srcif_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems>())
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
	|| adminst.is_set
	|| (opt_items !=  nullptr && opt_items->has_data())
	|| (addr_items !=  nullptr && addr_items->has_data())
	|| (addrv6_items !=  nullptr && addrv6_items->has_data())
	|| (srcif_items !=  nullptr && srcif_items->has_data())
	|| (v6srcif_items !=  nullptr && v6srcif_items->has_data())
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
	|| ydk::is_set(adminst.yfilter)
	|| (opt_items !=  nullptr && opt_items->has_operation())
	|| (addr_items !=  nullptr && addr_items->has_operation())
	|| (addrv6_items !=  nullptr && addrv6_items->has_operation())
	|| (srcif_items !=  nullptr && srcif_items->has_operation())
	|| (v6srcif_items !=  nullptr && v6srcif_items->has_operation())
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
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(opt_items != nullptr)
    {
        _children["opt-items"] = opt_items;
    }

    if(addr_items != nullptr)
    {
        _children["addr-items"] = addr_items;
    }

    if(addrv6_items != nullptr)
    {
        _children["addrv6-items"] = addrv6_items;
    }

    if(srcif_items != nullptr)
    {
        _children["srcif-items"] = srcif_items;
    }

    if(v6srcif_items != nullptr)
    {
        _children["v6srcif-items"] = v6srcif_items;
    }

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
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opt-items" || name == "addr-items" || name == "addrv6-items" || name == "srcif-items" || name == "v6srcif-items" || name == "complex-items" || name == "text-items" || name == "ip-items" || name == "mac-items" || name == "uint64-items" || name == "uint32-items" || name == "uint16-items" || name == "ubyte-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "options" || name == "SmartRelayEnabled" || name == "SubnetBroadcastEnabled" || name == "InformationTrustedEnabled" || name == "adminSt")
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OptionDef-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList>();
        ent_->parent = this;
        optiondef_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : optiondef_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bd_items != nullptr)
    {
        _children["bd-items"] = bd_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DiscNode-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList>();
        ent_->parent = this;
        discnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : discnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    ctxencap{YType::str, "ctxEncap"},
    fabencap{YType::str, "fabEncap"}
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
	|| ctxencap.is_set
	|| fabencap.is_set;
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(ciaddr.yfilter)
	|| ydk::is_set(ctxencap.yfilter)
	|| ydk::is_set(fabencap.yfilter);
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
    if (ctxencap.is_set || is_set(ctxencap.yfilter)) leaf_name_data.push_back(ctxencap.get_name_leafdata());
    if (fabencap.is_set || is_set(fabencap.yfilter)) leaf_name_data.push_back(fabencap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "ctxEncap")
    {
        ctxencap.yfilter = yfilter;
    }
    if(value_path == "fabEncap")
    {
        fabencap.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encap" || name == "mac" || name == "ciAddr" || name == "ctxEncap" || name == "fabEncap")
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RelayAddr-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList>();
        ent_->parent = this;
        relayaddr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : relayaddr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    counter{YType::uint16, "counter"}
        ,
    gw_items(std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems>())
{
    gw_items->parent = this;

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
	|| counter.is_set
	|| (gw_items !=  nullptr && gw_items->has_data());
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(counter.yfilter)
	|| (gw_items !=  nullptr && gw_items->has_operation());
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
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gw-items")
    {
        if(gw_items == nullptr)
        {
            gw_items = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems>();
        }
        return gw_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gw_items != nullptr)
    {
        _children["gw-items"] = gw_items;
    }

    return _children;
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
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gw-items" || name == "vrf" || name == "address" || name == "counter")
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RelayGw-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList>();
        ent_->parent = this;
        relaygw_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : relaygw_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "V6RelayAddr-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList>();
        ent_->parent = this;
        v6relayaddr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : v6relayaddr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
	|| counter.is_set
	|| (gw_items !=  nullptr && gw_items->has_data());
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(dstif.yfilter)
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
    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gw_items != nullptr)
    {
        _children["gw-items"] = gw_items;
    }

    return _children;
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
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gw-items" || name == "vrf" || name == "address" || name == "dstif" || name == "counter")
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "V6RelayGw-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList>();
        ent_->parent = this;
        v6relaygw_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : v6relaygw_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Complex-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList>();
        ent_->parent = this;
        complex_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList>();
        ent_->parent = this;
        ip_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList>();
        ent_->parent = this;
        mac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List>();
        ent_->parent = this;
        uint64_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List>();
        ent_->parent = this;
        uint32_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List>();
        ent_->parent = this;
        uint16_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UByte-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList>();
        ent_->parent = this;
        ubyte_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList>();
        ent_->parent = this;
        text_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Text-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList>();
        ent_->parent = this;
        text_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ip-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList>();
        ent_->parent = this;
        ip_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mac-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList>();
        ent_->parent = this;
        mac_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt64-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List>();
        ent_->parent = this;
        uint64_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt32-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List>();
        ent_->parent = this;
        uint32_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::get_children() const
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UInt16-list")
    {
        auto ent_ = std::make_shared<System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List>();
        ent_->parent = this;
        uint16_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::get_children() const
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


}
}

