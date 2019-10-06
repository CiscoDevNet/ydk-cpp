
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_29.hpp"
#include "Cisco_NX_OS_device_31.hpp"
#include "Cisco_NX_OS_device_30.hpp"
#include "Cisco_NX_OS_device_32.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

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

System::SisfItems::FhsifItems::FhsifItems()
    :
    fhsif_list(this, {"id"})
{

    yang_name = "fhsif-items"; yang_parent_name = "sisf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::FhsifItems::~FhsifItems()
{
}

bool System::SisfItems::FhsifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fhsif_list.len(); index++)
    {
        if(fhsif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::FhsifItems::has_operation() const
{
    for (std::size_t index=0; index<fhsif_list.len(); index++)
    {
        if(fhsif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::FhsifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::FhsifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fhsif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::FhsifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FhsIf-list")
    {
        auto ent_ = std::make_shared<System::SisfItems::FhsifItems::FhsIfList>();
        ent_->parent = this;
        fhsif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::FhsifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fhsif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SisfItems::FhsifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::FhsifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::FhsifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FhsIf-list")
        return true;
    return false;
}

System::SisfItems::FhsifItems::FhsIfList::FhsIfList()
    :
    id{YType::str, "id"},
    snoopingpolicyname{YType::str, "snoopingPolicyName"},
    dhcpguardpolicyname{YType::str, "dhcpGuardPolicyName"},
    raguardpolicyname{YType::str, "raGuardPolicyName"},
    deleted{YType::boolean, "deleted"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtvrfmbr_items(std::make_shared<System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "FhsIf-list"; yang_parent_name = "fhsif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::FhsifItems::FhsIfList::~FhsIfList()
{
}

bool System::SisfItems::FhsifItems::FhsIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| snoopingpolicyname.is_set
	|| dhcpguardpolicyname.is_set
	|| raguardpolicyname.is_set
	|| deleted.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::SisfItems::FhsifItems::FhsIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(snoopingpolicyname.yfilter)
	|| ydk::is_set(dhcpguardpolicyname.yfilter)
	|| ydk::is_set(raguardpolicyname.yfilter)
	|| ydk::is_set(deleted.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::SisfItems::FhsifItems::FhsIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/fhsif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::FhsifItems::FhsIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FhsIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsifItems::FhsIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (snoopingpolicyname.is_set || is_set(snoopingpolicyname.yfilter)) leaf_name_data.push_back(snoopingpolicyname.get_name_leafdata());
    if (dhcpguardpolicyname.is_set || is_set(dhcpguardpolicyname.yfilter)) leaf_name_data.push_back(dhcpguardpolicyname.get_name_leafdata());
    if (raguardpolicyname.is_set || is_set(raguardpolicyname.yfilter)) leaf_name_data.push_back(raguardpolicyname.get_name_leafdata());
    if (deleted.is_set || is_set(deleted.yfilter)) leaf_name_data.push_back(deleted.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::FhsifItems::FhsIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::FhsifItems::FhsIfList::get_children() const
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

void System::SisfItems::FhsifItems::FhsIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snoopingPolicyName")
    {
        snoopingpolicyname = value;
        snoopingpolicyname.value_namespace = name_space;
        snoopingpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpGuardPolicyName")
    {
        dhcpguardpolicyname = value;
        dhcpguardpolicyname.value_namespace = name_space;
        dhcpguardpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raGuardPolicyName")
    {
        raguardpolicyname = value;
        raguardpolicyname.value_namespace = name_space;
        raguardpolicyname.value_namespace_prefix = name_space_prefix;
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

void System::SisfItems::FhsifItems::FhsIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "snoopingPolicyName")
    {
        snoopingpolicyname.yfilter = yfilter;
    }
    if(value_path == "dhcpGuardPolicyName")
    {
        dhcpguardpolicyname.yfilter = yfilter;
    }
    if(value_path == "raGuardPolicyName")
    {
        raguardpolicyname.yfilter = yfilter;
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

bool System::SisfItems::FhsifItems::FhsIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "snoopingPolicyName" || name == "dhcpGuardPolicyName" || name == "raGuardPolicyName" || name == "deleted" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "FhsIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "FhsIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::get_children() const
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

void System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::SisfItems::FhsvlanItems::FhsvlanItems()
    :
    fhsvlan_list(this, {"vlanid"})
{

    yang_name = "fhsvlan-items"; yang_parent_name = "sisf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::FhsvlanItems::~FhsvlanItems()
{
}

bool System::SisfItems::FhsvlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fhsvlan_list.len(); index++)
    {
        if(fhsvlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::FhsvlanItems::has_operation() const
{
    for (std::size_t index=0; index<fhsvlan_list.len(); index++)
    {
        if(fhsvlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::FhsvlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::FhsvlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fhsvlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsvlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::FhsvlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FhsVlan-list")
    {
        auto ent_ = std::make_shared<System::SisfItems::FhsvlanItems::FhsVlanList>();
        ent_->parent = this;
        fhsvlan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::FhsvlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fhsvlan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SisfItems::FhsvlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::FhsvlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::FhsvlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FhsVlan-list")
        return true;
    return false;
}

System::SisfItems::FhsvlanItems::FhsVlanList::FhsVlanList()
    :
    vlanid{YType::uint16, "vlanID"},
    snoopingpolicyname{YType::str, "snoopingPolicyName"},
    dhcpguardpolicyname{YType::str, "dhcpGuardPolicyName"},
    raguardpolicyname{YType::str, "raGuardPolicyName"},
    deleted{YType::boolean, "deleted"}
{

    yang_name = "FhsVlan-list"; yang_parent_name = "fhsvlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::FhsvlanItems::FhsVlanList::~FhsVlanList()
{
}

bool System::SisfItems::FhsvlanItems::FhsVlanList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| snoopingpolicyname.is_set
	|| dhcpguardpolicyname.is_set
	|| raguardpolicyname.is_set
	|| deleted.is_set;
}

bool System::SisfItems::FhsvlanItems::FhsVlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(snoopingpolicyname.yfilter)
	|| ydk::is_set(dhcpguardpolicyname.yfilter)
	|| ydk::is_set(raguardpolicyname.yfilter)
	|| ydk::is_set(deleted.yfilter);
}

std::string System::SisfItems::FhsvlanItems::FhsVlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/fhsvlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::FhsvlanItems::FhsVlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FhsVlan-list";
    ADD_KEY_TOKEN(vlanid, "vlanID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsvlanItems::FhsVlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (snoopingpolicyname.is_set || is_set(snoopingpolicyname.yfilter)) leaf_name_data.push_back(snoopingpolicyname.get_name_leafdata());
    if (dhcpguardpolicyname.is_set || is_set(dhcpguardpolicyname.yfilter)) leaf_name_data.push_back(dhcpguardpolicyname.get_name_leafdata());
    if (raguardpolicyname.is_set || is_set(raguardpolicyname.yfilter)) leaf_name_data.push_back(raguardpolicyname.get_name_leafdata());
    if (deleted.is_set || is_set(deleted.yfilter)) leaf_name_data.push_back(deleted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SisfItems::FhsvlanItems::FhsVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SisfItems::FhsvlanItems::FhsVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SisfItems::FhsvlanItems::FhsVlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanID")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snoopingPolicyName")
    {
        snoopingpolicyname = value;
        snoopingpolicyname.value_namespace = name_space;
        snoopingpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpGuardPolicyName")
    {
        dhcpguardpolicyname = value;
        dhcpguardpolicyname.value_namespace = name_space;
        dhcpguardpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raGuardPolicyName")
    {
        raguardpolicyname = value;
        raguardpolicyname.value_namespace = name_space;
        raguardpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted")
    {
        deleted = value;
        deleted.value_namespace = name_space;
        deleted.value_namespace_prefix = name_space_prefix;
    }
}

void System::SisfItems::FhsvlanItems::FhsVlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanID")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "snoopingPolicyName")
    {
        snoopingpolicyname.yfilter = yfilter;
    }
    if(value_path == "dhcpGuardPolicyName")
    {
        dhcpguardpolicyname.yfilter = yfilter;
    }
    if(value_path == "raGuardPolicyName")
    {
        raguardpolicyname.yfilter = yfilter;
    }
    if(value_path == "deleted")
    {
        deleted.yfilter = yfilter;
    }
}

bool System::SisfItems::FhsvlanItems::FhsVlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanID" || name == "snoopingPolicyName" || name == "dhcpGuardPolicyName" || name == "raGuardPolicyName" || name == "deleted")
        return true;
    return false;
}

System::SlaItems::SlaItems()
    :
    inst_items(std::make_shared<System::SlaItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "sla-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SlaItems::~SlaItems()
{
}

bool System::SlaItems::has_data() const
{
    if (is_presence_container) return true;
    return (inst_items !=  nullptr && inst_items->has_data());
}

bool System::SlaItems::has_operation() const
{
    return is_set(yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::SlaItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SlaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::SlaItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::SlaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SlaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SlaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items")
        return true;
    return false;
}

System::SlaItems::InstItems::InstItems()
    :
    sender_items(std::make_shared<System::SlaItems::InstItems::SenderItems>())
{
    sender_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "sla-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SlaItems::InstItems::~InstItems()
{
}

bool System::SlaItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return (sender_items !=  nullptr && sender_items->has_data());
}

bool System::SlaItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| (sender_items !=  nullptr && sender_items->has_operation());
}

std::string System::SlaItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sla-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SlaItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-items")
    {
        if(sender_items == nullptr)
        {
            sender_items = std::make_shared<System::SlaItems::InstItems::SenderItems>();
        }
        return sender_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sender_items != nullptr)
    {
        _children["sender-items"] = sender_items;
    }

    return _children;
}

void System::SlaItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SlaItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SlaItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-items")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::SenderItems()
    :
    resetsender{YType::boolean, "resetSender"}
        ,
    operation_items(std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems>())
    , groupschedule_items(std::make_shared<System::SlaItems::InstItems::SenderItems::GroupscheduleItems>())
{
    operation_items->parent = this;
    groupschedule_items->parent = this;

    yang_name = "sender-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SlaItems::InstItems::SenderItems::~SenderItems()
{
}

bool System::SlaItems::InstItems::SenderItems::has_data() const
{
    if (is_presence_container) return true;
    return resetsender.is_set
	|| (operation_items !=  nullptr && operation_items->has_data())
	|| (groupschedule_items !=  nullptr && groupschedule_items->has_data());
}

bool System::SlaItems::InstItems::SenderItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(resetsender.yfilter)
	|| (operation_items !=  nullptr && operation_items->has_operation())
	|| (groupschedule_items !=  nullptr && groupschedule_items->has_operation());
}

std::string System::SlaItems::InstItems::SenderItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sla-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SlaItems::InstItems::SenderItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resetsender.is_set || is_set(resetsender.yfilter)) leaf_name_data.push_back(resetsender.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operation-items")
    {
        if(operation_items == nullptr)
        {
            operation_items = std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems>();
        }
        return operation_items;
    }

    if(child_yang_name == "groupschedule-items")
    {
        if(groupschedule_items == nullptr)
        {
            groupschedule_items = std::make_shared<System::SlaItems::InstItems::SenderItems::GroupscheduleItems>();
        }
        return groupschedule_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(operation_items != nullptr)
    {
        _children["operation-items"] = operation_items;
    }

    if(groupschedule_items != nullptr)
    {
        _children["groupschedule-items"] = groupschedule_items;
    }

    return _children;
}

void System::SlaItems::InstItems::SenderItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resetSender")
    {
        resetsender = value;
        resetsender.value_namespace = name_space;
        resetsender.value_namespace_prefix = name_space_prefix;
    }
}

void System::SlaItems::InstItems::SenderItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resetSender")
    {
        resetsender.yfilter = yfilter;
    }
}

bool System::SlaItems::InstItems::SenderItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-items" || name == "groupschedule-items" || name == "resetSender")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::OperationItems::OperationItems()
    :
    probe_list(this, {"id"})
{

    yang_name = "operation-items"; yang_parent_name = "sender-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SlaItems::InstItems::SenderItems::OperationItems::~OperationItems()
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<probe_list.len(); index++)
    {
        if(probe_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::has_operation() const
{
    for (std::size_t index=0; index<probe_list.len(); index++)
    {
        if(probe_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SlaItems::InstItems::SenderItems::OperationItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sla-items/inst-items/sender-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SlaItems::InstItems::SenderItems::OperationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::OperationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::OperationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Probe-list")
    {
        auto ent_ = std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList>();
        ent_->parent = this;
        probe_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::OperationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : probe_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SlaItems::InstItems::SenderItems::OperationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SlaItems::InstItems::SenderItems::OperationItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Probe-list")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ProbeList()
    :
    id{YType::uint32, "id"},
    restart{YType::boolean, "restart"}
        ,
    icmpecho_items(std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems>())
    , tcpconnect_items(std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems>())
    , http_items(std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems>())
    , udpecho_items(std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems>())
    , udpjitter_items(std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems>())
    , dns_items(std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems>())
    , schedule_items(std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems>())
    , trigger_items(std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems>())
    , reaction_items(std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems>())
{
    icmpecho_items->parent = this;
    tcpconnect_items->parent = this;
    http_items->parent = this;
    udpecho_items->parent = this;
    udpjitter_items->parent = this;
    dns_items->parent = this;
    schedule_items->parent = this;
    trigger_items->parent = this;
    reaction_items->parent = this;

    yang_name = "Probe-list"; yang_parent_name = "operation-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::~ProbeList()
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| restart.is_set
	|| (icmpecho_items !=  nullptr && icmpecho_items->has_data())
	|| (tcpconnect_items !=  nullptr && tcpconnect_items->has_data())
	|| (http_items !=  nullptr && http_items->has_data())
	|| (udpecho_items !=  nullptr && udpecho_items->has_data())
	|| (udpjitter_items !=  nullptr && udpjitter_items->has_data())
	|| (dns_items !=  nullptr && dns_items->has_data())
	|| (schedule_items !=  nullptr && schedule_items->has_data())
	|| (trigger_items !=  nullptr && trigger_items->has_data())
	|| (reaction_items !=  nullptr && reaction_items->has_data());
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| (icmpecho_items !=  nullptr && icmpecho_items->has_operation())
	|| (tcpconnect_items !=  nullptr && tcpconnect_items->has_operation())
	|| (http_items !=  nullptr && http_items->has_operation())
	|| (udpecho_items !=  nullptr && udpecho_items->has_operation())
	|| (udpjitter_items !=  nullptr && udpjitter_items->has_operation())
	|| (dns_items !=  nullptr && dns_items->has_operation())
	|| (schedule_items !=  nullptr && schedule_items->has_operation())
	|| (trigger_items !=  nullptr && trigger_items->has_operation())
	|| (reaction_items !=  nullptr && reaction_items->has_operation());
}

std::string System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sla-items/inst-items/sender-items/operation-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Probe-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmpecho-items")
    {
        if(icmpecho_items == nullptr)
        {
            icmpecho_items = std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems>();
        }
        return icmpecho_items;
    }

    if(child_yang_name == "tcpconnect-items")
    {
        if(tcpconnect_items == nullptr)
        {
            tcpconnect_items = std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems>();
        }
        return tcpconnect_items;
    }

    if(child_yang_name == "http-items")
    {
        if(http_items == nullptr)
        {
            http_items = std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems>();
        }
        return http_items;
    }

    if(child_yang_name == "udpecho-items")
    {
        if(udpecho_items == nullptr)
        {
            udpecho_items = std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems>();
        }
        return udpecho_items;
    }

    if(child_yang_name == "udpjitter-items")
    {
        if(udpjitter_items == nullptr)
        {
            udpjitter_items = std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems>();
        }
        return udpjitter_items;
    }

    if(child_yang_name == "dns-items")
    {
        if(dns_items == nullptr)
        {
            dns_items = std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems>();
        }
        return dns_items;
    }

    if(child_yang_name == "schedule-items")
    {
        if(schedule_items == nullptr)
        {
            schedule_items = std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems>();
        }
        return schedule_items;
    }

    if(child_yang_name == "trigger-items")
    {
        if(trigger_items == nullptr)
        {
            trigger_items = std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems>();
        }
        return trigger_items;
    }

    if(child_yang_name == "reaction-items")
    {
        if(reaction_items == nullptr)
        {
            reaction_items = std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems>();
        }
        return reaction_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(icmpecho_items != nullptr)
    {
        _children["icmpecho-items"] = icmpecho_items;
    }

    if(tcpconnect_items != nullptr)
    {
        _children["tcpconnect-items"] = tcpconnect_items;
    }

    if(http_items != nullptr)
    {
        _children["http-items"] = http_items;
    }

    if(udpecho_items != nullptr)
    {
        _children["udpecho-items"] = udpecho_items;
    }

    if(udpjitter_items != nullptr)
    {
        _children["udpjitter-items"] = udpjitter_items;
    }

    if(dns_items != nullptr)
    {
        _children["dns-items"] = dns_items;
    }

    if(schedule_items != nullptr)
    {
        _children["schedule-items"] = schedule_items;
    }

    if(trigger_items != nullptr)
    {
        _children["trigger-items"] = trigger_items;
    }

    if(reaction_items != nullptr)
    {
        _children["reaction-items"] = reaction_items;
    }

    return _children;
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmpecho-items" || name == "tcpconnect-items" || name == "http-items" || name == "udpecho-items" || name == "udpjitter-items" || name == "dns-items" || name == "schedule-items" || name == "trigger-items" || name == "reaction-items" || name == "id" || name == "restart")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems::IcmpechoItems()
    :
    frequency{YType::uint32, "frequency"},
    timeout{YType::uint32, "timeout"},
    verifydata{YType::boolean, "verifyData"},
    reqdatasize{YType::uint32, "reqDataSize"},
    srcinterface{YType::str, "srcInterface"},
    vrf{YType::str, "vrf"},
    destip{YType::str, "destip"},
    srcip{YType::str, "srcip"},
    threshold{YType::uint32, "threshold"},
    owner{YType::str, "owner"},
    tag{YType::str, "tag"},
    iptos{YType::uint32, "ipTos"},
    ipv6trafficclass{YType::uint32, "ipv6TrafficClass"},
    srchostname{YType::str, "srcHostName"},
    desthostname{YType::str, "destHostName"}
{

    yang_name = "icmpecho-items"; yang_parent_name = "Probe-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems::~IcmpechoItems()
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems::has_data() const
{
    if (is_presence_container) return true;
    return frequency.is_set
	|| timeout.is_set
	|| verifydata.is_set
	|| reqdatasize.is_set
	|| srcinterface.is_set
	|| vrf.is_set
	|| destip.is_set
	|| srcip.is_set
	|| threshold.is_set
	|| owner.is_set
	|| tag.is_set
	|| iptos.is_set
	|| ipv6trafficclass.is_set
	|| srchostname.is_set
	|| desthostname.is_set;
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(verifydata.yfilter)
	|| ydk::is_set(reqdatasize.yfilter)
	|| ydk::is_set(srcinterface.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(destip.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(iptos.yfilter)
	|| ydk::is_set(ipv6trafficclass.yfilter)
	|| ydk::is_set(srchostname.yfilter)
	|| ydk::is_set(desthostname.yfilter);
}

std::string System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpecho-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (verifydata.is_set || is_set(verifydata.yfilter)) leaf_name_data.push_back(verifydata.get_name_leafdata());
    if (reqdatasize.is_set || is_set(reqdatasize.yfilter)) leaf_name_data.push_back(reqdatasize.get_name_leafdata());
    if (srcinterface.is_set || is_set(srcinterface.yfilter)) leaf_name_data.push_back(srcinterface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (destip.is_set || is_set(destip.yfilter)) leaf_name_data.push_back(destip.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (iptos.is_set || is_set(iptos.yfilter)) leaf_name_data.push_back(iptos.get_name_leafdata());
    if (ipv6trafficclass.is_set || is_set(ipv6trafficclass.yfilter)) leaf_name_data.push_back(ipv6trafficclass.get_name_leafdata());
    if (srchostname.is_set || is_set(srchostname.yfilter)) leaf_name_data.push_back(srchostname.get_name_leafdata());
    if (desthostname.is_set || is_set(desthostname.yfilter)) leaf_name_data.push_back(desthostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verifyData")
    {
        verifydata = value;
        verifydata.value_namespace = name_space;
        verifydata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reqDataSize")
    {
        reqdatasize = value;
        reqdatasize.value_namespace = name_space;
        reqdatasize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcInterface")
    {
        srcinterface = value;
        srcinterface.value_namespace = name_space;
        srcinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destip")
    {
        destip = value;
        destip.value_namespace = name_space;
        destip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipTos")
    {
        iptos = value;
        iptos.value_namespace = name_space;
        iptos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6TrafficClass")
    {
        ipv6trafficclass = value;
        ipv6trafficclass.value_namespace = name_space;
        ipv6trafficclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcHostName")
    {
        srchostname = value;
        srchostname.value_namespace = name_space;
        srchostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destHostName")
    {
        desthostname = value;
        desthostname.value_namespace = name_space;
        desthostname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "verifyData")
    {
        verifydata.yfilter = yfilter;
    }
    if(value_path == "reqDataSize")
    {
        reqdatasize.yfilter = yfilter;
    }
    if(value_path == "srcInterface")
    {
        srcinterface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "destip")
    {
        destip.yfilter = yfilter;
    }
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "ipTos")
    {
        iptos.yfilter = yfilter;
    }
    if(value_path == "ipv6TrafficClass")
    {
        ipv6trafficclass.yfilter = yfilter;
    }
    if(value_path == "srcHostName")
    {
        srchostname.yfilter = yfilter;
    }
    if(value_path == "destHostName")
    {
        desthostname.yfilter = yfilter;
    }
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency" || name == "timeout" || name == "verifyData" || name == "reqDataSize" || name == "srcInterface" || name == "vrf" || name == "destip" || name == "srcip" || name == "threshold" || name == "owner" || name == "tag" || name == "ipTos" || name == "ipv6TrafficClass" || name == "srcHostName" || name == "destHostName")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems::TcpconnectItems()
    :
    frequency{YType::uint32, "frequency"},
    timeout{YType::uint32, "timeout"},
    srcport{YType::uint32, "srcPort"},
    dstport{YType::uint32, "dstPort"},
    control{YType::boolean, "control"},
    vrf{YType::str, "vrf"},
    destip{YType::str, "destip"},
    srcip{YType::str, "srcip"},
    threshold{YType::uint32, "threshold"},
    owner{YType::str, "owner"},
    tag{YType::str, "tag"},
    iptos{YType::uint32, "ipTos"},
    ipv6trafficclass{YType::uint32, "ipv6TrafficClass"},
    srchostname{YType::str, "srcHostName"},
    desthostname{YType::str, "destHostName"}
{

    yang_name = "tcpconnect-items"; yang_parent_name = "Probe-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems::~TcpconnectItems()
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems::has_data() const
{
    if (is_presence_container) return true;
    return frequency.is_set
	|| timeout.is_set
	|| srcport.is_set
	|| dstport.is_set
	|| control.is_set
	|| vrf.is_set
	|| destip.is_set
	|| srcip.is_set
	|| threshold.is_set
	|| owner.is_set
	|| tag.is_set
	|| iptos.is_set
	|| ipv6trafficclass.is_set
	|| srchostname.is_set
	|| desthostname.is_set;
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(srcport.yfilter)
	|| ydk::is_set(dstport.yfilter)
	|| ydk::is_set(control.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(destip.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(iptos.yfilter)
	|| ydk::is_set(ipv6trafficclass.yfilter)
	|| ydk::is_set(srchostname.yfilter)
	|| ydk::is_set(desthostname.yfilter);
}

std::string System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpconnect-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (srcport.is_set || is_set(srcport.yfilter)) leaf_name_data.push_back(srcport.get_name_leafdata());
    if (dstport.is_set || is_set(dstport.yfilter)) leaf_name_data.push_back(dstport.get_name_leafdata());
    if (control.is_set || is_set(control.yfilter)) leaf_name_data.push_back(control.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (destip.is_set || is_set(destip.yfilter)) leaf_name_data.push_back(destip.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (iptos.is_set || is_set(iptos.yfilter)) leaf_name_data.push_back(iptos.get_name_leafdata());
    if (ipv6trafficclass.is_set || is_set(ipv6trafficclass.yfilter)) leaf_name_data.push_back(ipv6trafficclass.get_name_leafdata());
    if (srchostname.is_set || is_set(srchostname.yfilter)) leaf_name_data.push_back(srchostname.get_name_leafdata());
    if (desthostname.is_set || is_set(desthostname.yfilter)) leaf_name_data.push_back(desthostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort")
    {
        srcport = value;
        srcport.value_namespace = name_space;
        srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort")
    {
        dstport = value;
        dstport.value_namespace = name_space;
        dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control")
    {
        control = value;
        control.value_namespace = name_space;
        control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destip")
    {
        destip = value;
        destip.value_namespace = name_space;
        destip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipTos")
    {
        iptos = value;
        iptos.value_namespace = name_space;
        iptos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6TrafficClass")
    {
        ipv6trafficclass = value;
        ipv6trafficclass.value_namespace = name_space;
        ipv6trafficclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcHostName")
    {
        srchostname = value;
        srchostname.value_namespace = name_space;
        srchostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destHostName")
    {
        desthostname = value;
        desthostname.value_namespace = name_space;
        desthostname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "srcPort")
    {
        srcport.yfilter = yfilter;
    }
    if(value_path == "dstPort")
    {
        dstport.yfilter = yfilter;
    }
    if(value_path == "control")
    {
        control.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "destip")
    {
        destip.yfilter = yfilter;
    }
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "ipTos")
    {
        iptos.yfilter = yfilter;
    }
    if(value_path == "ipv6TrafficClass")
    {
        ipv6trafficclass.yfilter = yfilter;
    }
    if(value_path == "srcHostName")
    {
        srchostname.yfilter = yfilter;
    }
    if(value_path == "destHostName")
    {
        desthostname.yfilter = yfilter;
    }
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency" || name == "timeout" || name == "srcPort" || name == "dstPort" || name == "control" || name == "vrf" || name == "destip" || name == "srcip" || name == "threshold" || name == "owner" || name == "tag" || name == "ipTos" || name == "ipv6TrafficClass" || name == "srcHostName" || name == "destHostName")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems::HttpItems()
    :
    frequency{YType::uint32, "frequency"},
    timeout{YType::uint32, "timeout"},
    httpmethod{YType::enumeration, "httpmethod"},
    httpurl{YType::str, "httpurl"},
    proxy{YType::str, "proxy"},
    cache{YType::boolean, "cache"},
    srcport{YType::uint32, "srcPort"},
    version{YType::str, "version"},
    vrf{YType::str, "vrf"},
    destip{YType::str, "destip"},
    srcip{YType::str, "srcip"},
    threshold{YType::uint32, "threshold"},
    owner{YType::str, "owner"},
    tag{YType::str, "tag"},
    iptos{YType::uint32, "ipTos"},
    ipv6trafficclass{YType::uint32, "ipv6TrafficClass"},
    srchostname{YType::str, "srcHostName"},
    desthostname{YType::str, "destHostName"}
{

    yang_name = "http-items"; yang_parent_name = "Probe-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems::~HttpItems()
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems::has_data() const
{
    if (is_presence_container) return true;
    return frequency.is_set
	|| timeout.is_set
	|| httpmethod.is_set
	|| httpurl.is_set
	|| proxy.is_set
	|| cache.is_set
	|| srcport.is_set
	|| version.is_set
	|| vrf.is_set
	|| destip.is_set
	|| srcip.is_set
	|| threshold.is_set
	|| owner.is_set
	|| tag.is_set
	|| iptos.is_set
	|| ipv6trafficclass.is_set
	|| srchostname.is_set
	|| desthostname.is_set;
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(httpmethod.yfilter)
	|| ydk::is_set(httpurl.yfilter)
	|| ydk::is_set(proxy.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(srcport.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(destip.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(iptos.yfilter)
	|| ydk::is_set(ipv6trafficclass.yfilter)
	|| ydk::is_set(srchostname.yfilter)
	|| ydk::is_set(desthostname.yfilter);
}

std::string System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (httpmethod.is_set || is_set(httpmethod.yfilter)) leaf_name_data.push_back(httpmethod.get_name_leafdata());
    if (httpurl.is_set || is_set(httpurl.yfilter)) leaf_name_data.push_back(httpurl.get_name_leafdata());
    if (proxy.is_set || is_set(proxy.yfilter)) leaf_name_data.push_back(proxy.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (srcport.is_set || is_set(srcport.yfilter)) leaf_name_data.push_back(srcport.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (destip.is_set || is_set(destip.yfilter)) leaf_name_data.push_back(destip.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (iptos.is_set || is_set(iptos.yfilter)) leaf_name_data.push_back(iptos.get_name_leafdata());
    if (ipv6trafficclass.is_set || is_set(ipv6trafficclass.yfilter)) leaf_name_data.push_back(ipv6trafficclass.get_name_leafdata());
    if (srchostname.is_set || is_set(srchostname.yfilter)) leaf_name_data.push_back(srchostname.get_name_leafdata());
    if (desthostname.is_set || is_set(desthostname.yfilter)) leaf_name_data.push_back(desthostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "httpmethod")
    {
        httpmethod = value;
        httpmethod.value_namespace = name_space;
        httpmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "httpurl")
    {
        httpurl = value;
        httpurl.value_namespace = name_space;
        httpurl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy")
    {
        proxy = value;
        proxy.value_namespace = name_space;
        proxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort")
    {
        srcport = value;
        srcport.value_namespace = name_space;
        srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destip")
    {
        destip = value;
        destip.value_namespace = name_space;
        destip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipTos")
    {
        iptos = value;
        iptos.value_namespace = name_space;
        iptos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6TrafficClass")
    {
        ipv6trafficclass = value;
        ipv6trafficclass.value_namespace = name_space;
        ipv6trafficclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcHostName")
    {
        srchostname = value;
        srchostname.value_namespace = name_space;
        srchostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destHostName")
    {
        desthostname = value;
        desthostname.value_namespace = name_space;
        desthostname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "httpmethod")
    {
        httpmethod.yfilter = yfilter;
    }
    if(value_path == "httpurl")
    {
        httpurl.yfilter = yfilter;
    }
    if(value_path == "proxy")
    {
        proxy.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "srcPort")
    {
        srcport.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "destip")
    {
        destip.yfilter = yfilter;
    }
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "ipTos")
    {
        iptos.yfilter = yfilter;
    }
    if(value_path == "ipv6TrafficClass")
    {
        ipv6trafficclass.yfilter = yfilter;
    }
    if(value_path == "srcHostName")
    {
        srchostname.yfilter = yfilter;
    }
    if(value_path == "destHostName")
    {
        desthostname.yfilter = yfilter;
    }
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency" || name == "timeout" || name == "httpmethod" || name == "httpurl" || name == "proxy" || name == "cache" || name == "srcPort" || name == "version" || name == "vrf" || name == "destip" || name == "srcip" || name == "threshold" || name == "owner" || name == "tag" || name == "ipTos" || name == "ipv6TrafficClass" || name == "srcHostName" || name == "destHostName")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems::UdpechoItems()
    :
    frequency{YType::uint32, "frequency"},
    timeout{YType::uint32, "timeout"},
    dstport{YType::uint32, "dstPort"},
    srcport{YType::uint32, "srcPort"},
    control{YType::boolean, "control"},
    datapattern{YType::str, "dataPattern"},
    verifydata{YType::boolean, "verifyData"},
    reqdatasize{YType::uint32, "reqDataSize"},
    vrf{YType::str, "vrf"},
    destip{YType::str, "destip"},
    srcip{YType::str, "srcip"},
    threshold{YType::uint32, "threshold"},
    owner{YType::str, "owner"},
    tag{YType::str, "tag"},
    iptos{YType::uint32, "ipTos"},
    ipv6trafficclass{YType::uint32, "ipv6TrafficClass"},
    srchostname{YType::str, "srcHostName"},
    desthostname{YType::str, "destHostName"}
{

    yang_name = "udpecho-items"; yang_parent_name = "Probe-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems::~UdpechoItems()
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems::has_data() const
{
    if (is_presence_container) return true;
    return frequency.is_set
	|| timeout.is_set
	|| dstport.is_set
	|| srcport.is_set
	|| control.is_set
	|| datapattern.is_set
	|| verifydata.is_set
	|| reqdatasize.is_set
	|| vrf.is_set
	|| destip.is_set
	|| srcip.is_set
	|| threshold.is_set
	|| owner.is_set
	|| tag.is_set
	|| iptos.is_set
	|| ipv6trafficclass.is_set
	|| srchostname.is_set
	|| desthostname.is_set;
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(dstport.yfilter)
	|| ydk::is_set(srcport.yfilter)
	|| ydk::is_set(control.yfilter)
	|| ydk::is_set(datapattern.yfilter)
	|| ydk::is_set(verifydata.yfilter)
	|| ydk::is_set(reqdatasize.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(destip.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(iptos.yfilter)
	|| ydk::is_set(ipv6trafficclass.yfilter)
	|| ydk::is_set(srchostname.yfilter)
	|| ydk::is_set(desthostname.yfilter);
}

std::string System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpecho-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (dstport.is_set || is_set(dstport.yfilter)) leaf_name_data.push_back(dstport.get_name_leafdata());
    if (srcport.is_set || is_set(srcport.yfilter)) leaf_name_data.push_back(srcport.get_name_leafdata());
    if (control.is_set || is_set(control.yfilter)) leaf_name_data.push_back(control.get_name_leafdata());
    if (datapattern.is_set || is_set(datapattern.yfilter)) leaf_name_data.push_back(datapattern.get_name_leafdata());
    if (verifydata.is_set || is_set(verifydata.yfilter)) leaf_name_data.push_back(verifydata.get_name_leafdata());
    if (reqdatasize.is_set || is_set(reqdatasize.yfilter)) leaf_name_data.push_back(reqdatasize.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (destip.is_set || is_set(destip.yfilter)) leaf_name_data.push_back(destip.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (iptos.is_set || is_set(iptos.yfilter)) leaf_name_data.push_back(iptos.get_name_leafdata());
    if (ipv6trafficclass.is_set || is_set(ipv6trafficclass.yfilter)) leaf_name_data.push_back(ipv6trafficclass.get_name_leafdata());
    if (srchostname.is_set || is_set(srchostname.yfilter)) leaf_name_data.push_back(srchostname.get_name_leafdata());
    if (desthostname.is_set || is_set(desthostname.yfilter)) leaf_name_data.push_back(desthostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort")
    {
        dstport = value;
        dstport.value_namespace = name_space;
        dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort")
    {
        srcport = value;
        srcport.value_namespace = name_space;
        srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control")
    {
        control = value;
        control.value_namespace = name_space;
        control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataPattern")
    {
        datapattern = value;
        datapattern.value_namespace = name_space;
        datapattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verifyData")
    {
        verifydata = value;
        verifydata.value_namespace = name_space;
        verifydata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reqDataSize")
    {
        reqdatasize = value;
        reqdatasize.value_namespace = name_space;
        reqdatasize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destip")
    {
        destip = value;
        destip.value_namespace = name_space;
        destip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipTos")
    {
        iptos = value;
        iptos.value_namespace = name_space;
        iptos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6TrafficClass")
    {
        ipv6trafficclass = value;
        ipv6trafficclass.value_namespace = name_space;
        ipv6trafficclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcHostName")
    {
        srchostname = value;
        srchostname.value_namespace = name_space;
        srchostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destHostName")
    {
        desthostname = value;
        desthostname.value_namespace = name_space;
        desthostname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "dstPort")
    {
        dstport.yfilter = yfilter;
    }
    if(value_path == "srcPort")
    {
        srcport.yfilter = yfilter;
    }
    if(value_path == "control")
    {
        control.yfilter = yfilter;
    }
    if(value_path == "dataPattern")
    {
        datapattern.yfilter = yfilter;
    }
    if(value_path == "verifyData")
    {
        verifydata.yfilter = yfilter;
    }
    if(value_path == "reqDataSize")
    {
        reqdatasize.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "destip")
    {
        destip.yfilter = yfilter;
    }
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "ipTos")
    {
        iptos.yfilter = yfilter;
    }
    if(value_path == "ipv6TrafficClass")
    {
        ipv6trafficclass.yfilter = yfilter;
    }
    if(value_path == "srcHostName")
    {
        srchostname.yfilter = yfilter;
    }
    if(value_path == "destHostName")
    {
        desthostname.yfilter = yfilter;
    }
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency" || name == "timeout" || name == "dstPort" || name == "srcPort" || name == "control" || name == "dataPattern" || name == "verifyData" || name == "reqDataSize" || name == "vrf" || name == "destip" || name == "srcip" || name == "threshold" || name == "owner" || name == "tag" || name == "ipTos" || name == "ipv6TrafficClass" || name == "srcHostName" || name == "destHostName")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems::UdpjitterItems()
    :
    frequency{YType::uint32, "frequency"},
    timeout{YType::uint32, "timeout"},
    dstport{YType::uint32, "dstPort"},
    srcport{YType::uint32, "srcPort"},
    control{YType::boolean, "control"},
    numpkts{YType::uint32, "numPkts"},
    interval{YType::uint32, "interval"},
    codectype{YType::enumeration, "codecType"},
    codecnumpkts{YType::uint32, "codecNumPkts"},
    codecsize{YType::uint32, "codecSize"},
    codecinterval{YType::uint32, "codecInterval"},
    advfactor{YType::uint8, "advFactor"},
    verifydata{YType::boolean, "verifyData"},
    reqdatasize{YType::uint32, "reqDataSize"},
    precision{YType::enumeration, "precision"},
    operationpktpriority{YType::enumeration, "operationPktPriority"},
    absoluteclocktolerance{YType::uint32, "absoluteClockTolerance"},
    percentclocktolerance{YType::uint32, "percentClockTolerance"},
    vrf{YType::str, "vrf"},
    destip{YType::str, "destip"},
    srcip{YType::str, "srcip"},
    threshold{YType::uint32, "threshold"},
    owner{YType::str, "owner"},
    tag{YType::str, "tag"},
    iptos{YType::uint32, "ipTos"},
    ipv6trafficclass{YType::uint32, "ipv6TrafficClass"},
    srchostname{YType::str, "srcHostName"},
    desthostname{YType::str, "destHostName"}
{

    yang_name = "udpjitter-items"; yang_parent_name = "Probe-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems::~UdpjitterItems()
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems::has_data() const
{
    if (is_presence_container) return true;
    return frequency.is_set
	|| timeout.is_set
	|| dstport.is_set
	|| srcport.is_set
	|| control.is_set
	|| numpkts.is_set
	|| interval.is_set
	|| codectype.is_set
	|| codecnumpkts.is_set
	|| codecsize.is_set
	|| codecinterval.is_set
	|| advfactor.is_set
	|| verifydata.is_set
	|| reqdatasize.is_set
	|| precision.is_set
	|| operationpktpriority.is_set
	|| absoluteclocktolerance.is_set
	|| percentclocktolerance.is_set
	|| vrf.is_set
	|| destip.is_set
	|| srcip.is_set
	|| threshold.is_set
	|| owner.is_set
	|| tag.is_set
	|| iptos.is_set
	|| ipv6trafficclass.is_set
	|| srchostname.is_set
	|| desthostname.is_set;
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(dstport.yfilter)
	|| ydk::is_set(srcport.yfilter)
	|| ydk::is_set(control.yfilter)
	|| ydk::is_set(numpkts.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(codectype.yfilter)
	|| ydk::is_set(codecnumpkts.yfilter)
	|| ydk::is_set(codecsize.yfilter)
	|| ydk::is_set(codecinterval.yfilter)
	|| ydk::is_set(advfactor.yfilter)
	|| ydk::is_set(verifydata.yfilter)
	|| ydk::is_set(reqdatasize.yfilter)
	|| ydk::is_set(precision.yfilter)
	|| ydk::is_set(operationpktpriority.yfilter)
	|| ydk::is_set(absoluteclocktolerance.yfilter)
	|| ydk::is_set(percentclocktolerance.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(destip.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(iptos.yfilter)
	|| ydk::is_set(ipv6trafficclass.yfilter)
	|| ydk::is_set(srchostname.yfilter)
	|| ydk::is_set(desthostname.yfilter);
}

std::string System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpjitter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (dstport.is_set || is_set(dstport.yfilter)) leaf_name_data.push_back(dstport.get_name_leafdata());
    if (srcport.is_set || is_set(srcport.yfilter)) leaf_name_data.push_back(srcport.get_name_leafdata());
    if (control.is_set || is_set(control.yfilter)) leaf_name_data.push_back(control.get_name_leafdata());
    if (numpkts.is_set || is_set(numpkts.yfilter)) leaf_name_data.push_back(numpkts.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (codectype.is_set || is_set(codectype.yfilter)) leaf_name_data.push_back(codectype.get_name_leafdata());
    if (codecnumpkts.is_set || is_set(codecnumpkts.yfilter)) leaf_name_data.push_back(codecnumpkts.get_name_leafdata());
    if (codecsize.is_set || is_set(codecsize.yfilter)) leaf_name_data.push_back(codecsize.get_name_leafdata());
    if (codecinterval.is_set || is_set(codecinterval.yfilter)) leaf_name_data.push_back(codecinterval.get_name_leafdata());
    if (advfactor.is_set || is_set(advfactor.yfilter)) leaf_name_data.push_back(advfactor.get_name_leafdata());
    if (verifydata.is_set || is_set(verifydata.yfilter)) leaf_name_data.push_back(verifydata.get_name_leafdata());
    if (reqdatasize.is_set || is_set(reqdatasize.yfilter)) leaf_name_data.push_back(reqdatasize.get_name_leafdata());
    if (precision.is_set || is_set(precision.yfilter)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (operationpktpriority.is_set || is_set(operationpktpriority.yfilter)) leaf_name_data.push_back(operationpktpriority.get_name_leafdata());
    if (absoluteclocktolerance.is_set || is_set(absoluteclocktolerance.yfilter)) leaf_name_data.push_back(absoluteclocktolerance.get_name_leafdata());
    if (percentclocktolerance.is_set || is_set(percentclocktolerance.yfilter)) leaf_name_data.push_back(percentclocktolerance.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (destip.is_set || is_set(destip.yfilter)) leaf_name_data.push_back(destip.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (iptos.is_set || is_set(iptos.yfilter)) leaf_name_data.push_back(iptos.get_name_leafdata());
    if (ipv6trafficclass.is_set || is_set(ipv6trafficclass.yfilter)) leaf_name_data.push_back(ipv6trafficclass.get_name_leafdata());
    if (srchostname.is_set || is_set(srchostname.yfilter)) leaf_name_data.push_back(srchostname.get_name_leafdata());
    if (desthostname.is_set || is_set(desthostname.yfilter)) leaf_name_data.push_back(desthostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort")
    {
        dstport = value;
        dstport.value_namespace = name_space;
        dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort")
    {
        srcport = value;
        srcport.value_namespace = name_space;
        srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control")
    {
        control = value;
        control.value_namespace = name_space;
        control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPkts")
    {
        numpkts = value;
        numpkts.value_namespace = name_space;
        numpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "codecType")
    {
        codectype = value;
        codectype.value_namespace = name_space;
        codectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "codecNumPkts")
    {
        codecnumpkts = value;
        codecnumpkts.value_namespace = name_space;
        codecnumpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "codecSize")
    {
        codecsize = value;
        codecsize.value_namespace = name_space;
        codecsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "codecInterval")
    {
        codecinterval = value;
        codecinterval.value_namespace = name_space;
        codecinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advFactor")
    {
        advfactor = value;
        advfactor.value_namespace = name_space;
        advfactor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verifyData")
    {
        verifydata = value;
        verifydata.value_namespace = name_space;
        verifydata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reqDataSize")
    {
        reqdatasize = value;
        reqdatasize.value_namespace = name_space;
        reqdatasize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precision")
    {
        precision = value;
        precision.value_namespace = name_space;
        precision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operationPktPriority")
    {
        operationpktpriority = value;
        operationpktpriority.value_namespace = name_space;
        operationpktpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absoluteClockTolerance")
    {
        absoluteclocktolerance = value;
        absoluteclocktolerance.value_namespace = name_space;
        absoluteclocktolerance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percentClockTolerance")
    {
        percentclocktolerance = value;
        percentclocktolerance.value_namespace = name_space;
        percentclocktolerance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destip")
    {
        destip = value;
        destip.value_namespace = name_space;
        destip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipTos")
    {
        iptos = value;
        iptos.value_namespace = name_space;
        iptos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6TrafficClass")
    {
        ipv6trafficclass = value;
        ipv6trafficclass.value_namespace = name_space;
        ipv6trafficclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcHostName")
    {
        srchostname = value;
        srchostname.value_namespace = name_space;
        srchostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destHostName")
    {
        desthostname = value;
        desthostname.value_namespace = name_space;
        desthostname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "dstPort")
    {
        dstport.yfilter = yfilter;
    }
    if(value_path == "srcPort")
    {
        srcport.yfilter = yfilter;
    }
    if(value_path == "control")
    {
        control.yfilter = yfilter;
    }
    if(value_path == "numPkts")
    {
        numpkts.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "codecType")
    {
        codectype.yfilter = yfilter;
    }
    if(value_path == "codecNumPkts")
    {
        codecnumpkts.yfilter = yfilter;
    }
    if(value_path == "codecSize")
    {
        codecsize.yfilter = yfilter;
    }
    if(value_path == "codecInterval")
    {
        codecinterval.yfilter = yfilter;
    }
    if(value_path == "advFactor")
    {
        advfactor.yfilter = yfilter;
    }
    if(value_path == "verifyData")
    {
        verifydata.yfilter = yfilter;
    }
    if(value_path == "reqDataSize")
    {
        reqdatasize.yfilter = yfilter;
    }
    if(value_path == "precision")
    {
        precision.yfilter = yfilter;
    }
    if(value_path == "operationPktPriority")
    {
        operationpktpriority.yfilter = yfilter;
    }
    if(value_path == "absoluteClockTolerance")
    {
        absoluteclocktolerance.yfilter = yfilter;
    }
    if(value_path == "percentClockTolerance")
    {
        percentclocktolerance.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "destip")
    {
        destip.yfilter = yfilter;
    }
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "ipTos")
    {
        iptos.yfilter = yfilter;
    }
    if(value_path == "ipv6TrafficClass")
    {
        ipv6trafficclass.yfilter = yfilter;
    }
    if(value_path == "srcHostName")
    {
        srchostname.yfilter = yfilter;
    }
    if(value_path == "destHostName")
    {
        desthostname.yfilter = yfilter;
    }
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency" || name == "timeout" || name == "dstPort" || name == "srcPort" || name == "control" || name == "numPkts" || name == "interval" || name == "codecType" || name == "codecNumPkts" || name == "codecSize" || name == "codecInterval" || name == "advFactor" || name == "verifyData" || name == "reqDataSize" || name == "precision" || name == "operationPktPriority" || name == "absoluteClockTolerance" || name == "percentClockTolerance" || name == "vrf" || name == "destip" || name == "srcip" || name == "threshold" || name == "owner" || name == "tag" || name == "ipTos" || name == "ipv6TrafficClass" || name == "srcHostName" || name == "destHostName")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems::DnsItems()
    :
    frequency{YType::uint32, "frequency"},
    timeout{YType::uint32, "timeout"},
    srcport{YType::uint32, "srcPort"},
    nameserverhostname{YType::str, "nameServerHostName"},
    nameserverip{YType::str, "nameServerIp"},
    targetentry{YType::str, "targetEntry"},
    vrf{YType::str, "vrf"},
    destip{YType::str, "destip"},
    srcip{YType::str, "srcip"},
    threshold{YType::uint32, "threshold"},
    owner{YType::str, "owner"},
    tag{YType::str, "tag"},
    iptos{YType::uint32, "ipTos"},
    ipv6trafficclass{YType::uint32, "ipv6TrafficClass"},
    srchostname{YType::str, "srcHostName"},
    desthostname{YType::str, "destHostName"}
{

    yang_name = "dns-items"; yang_parent_name = "Probe-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems::~DnsItems()
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems::has_data() const
{
    if (is_presence_container) return true;
    return frequency.is_set
	|| timeout.is_set
	|| srcport.is_set
	|| nameserverhostname.is_set
	|| nameserverip.is_set
	|| targetentry.is_set
	|| vrf.is_set
	|| destip.is_set
	|| srcip.is_set
	|| threshold.is_set
	|| owner.is_set
	|| tag.is_set
	|| iptos.is_set
	|| ipv6trafficclass.is_set
	|| srchostname.is_set
	|| desthostname.is_set;
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(srcport.yfilter)
	|| ydk::is_set(nameserverhostname.yfilter)
	|| ydk::is_set(nameserverip.yfilter)
	|| ydk::is_set(targetentry.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(destip.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(iptos.yfilter)
	|| ydk::is_set(ipv6trafficclass.yfilter)
	|| ydk::is_set(srchostname.yfilter)
	|| ydk::is_set(desthostname.yfilter);
}

std::string System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (srcport.is_set || is_set(srcport.yfilter)) leaf_name_data.push_back(srcport.get_name_leafdata());
    if (nameserverhostname.is_set || is_set(nameserverhostname.yfilter)) leaf_name_data.push_back(nameserverhostname.get_name_leafdata());
    if (nameserverip.is_set || is_set(nameserverip.yfilter)) leaf_name_data.push_back(nameserverip.get_name_leafdata());
    if (targetentry.is_set || is_set(targetentry.yfilter)) leaf_name_data.push_back(targetentry.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (destip.is_set || is_set(destip.yfilter)) leaf_name_data.push_back(destip.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (iptos.is_set || is_set(iptos.yfilter)) leaf_name_data.push_back(iptos.get_name_leafdata());
    if (ipv6trafficclass.is_set || is_set(ipv6trafficclass.yfilter)) leaf_name_data.push_back(ipv6trafficclass.get_name_leafdata());
    if (srchostname.is_set || is_set(srchostname.yfilter)) leaf_name_data.push_back(srchostname.get_name_leafdata());
    if (desthostname.is_set || is_set(desthostname.yfilter)) leaf_name_data.push_back(desthostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort")
    {
        srcport = value;
        srcport.value_namespace = name_space;
        srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nameServerHostName")
    {
        nameserverhostname = value;
        nameserverhostname.value_namespace = name_space;
        nameserverhostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nameServerIp")
    {
        nameserverip = value;
        nameserverip.value_namespace = name_space;
        nameserverip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targetEntry")
    {
        targetentry = value;
        targetentry.value_namespace = name_space;
        targetentry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destip")
    {
        destip = value;
        destip.value_namespace = name_space;
        destip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipTos")
    {
        iptos = value;
        iptos.value_namespace = name_space;
        iptos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6TrafficClass")
    {
        ipv6trafficclass = value;
        ipv6trafficclass.value_namespace = name_space;
        ipv6trafficclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcHostName")
    {
        srchostname = value;
        srchostname.value_namespace = name_space;
        srchostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destHostName")
    {
        desthostname = value;
        desthostname.value_namespace = name_space;
        desthostname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "srcPort")
    {
        srcport.yfilter = yfilter;
    }
    if(value_path == "nameServerHostName")
    {
        nameserverhostname.yfilter = yfilter;
    }
    if(value_path == "nameServerIp")
    {
        nameserverip.yfilter = yfilter;
    }
    if(value_path == "targetEntry")
    {
        targetentry.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "destip")
    {
        destip.yfilter = yfilter;
    }
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "ipTos")
    {
        iptos.yfilter = yfilter;
    }
    if(value_path == "ipv6TrafficClass")
    {
        ipv6trafficclass.yfilter = yfilter;
    }
    if(value_path == "srcHostName")
    {
        srchostname.yfilter = yfilter;
    }
    if(value_path == "destHostName")
    {
        desthostname.yfilter = yfilter;
    }
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency" || name == "timeout" || name == "srcPort" || name == "nameServerHostName" || name == "nameServerIp" || name == "targetEntry" || name == "vrf" || name == "destip" || name == "srcip" || name == "threshold" || name == "owner" || name == "tag" || name == "ipTos" || name == "ipv6TrafficClass" || name == "srcHostName" || name == "destHostName")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::ScheduleItems()
    :
    life{YType::uint64, "life"},
    ageout{YType::uint32, "ageOut"},
    startprobe{YType::enumeration, "startProbe"},
    dayofthemonth{YType::uint16, "dayOfTheMonth"},
    month{YType::enumeration, "month"},
    starttime{YType::str, "startTime"},
    recurring{YType::boolean, "recurring"}
{

    yang_name = "schedule-items"; yang_parent_name = "Probe-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::~ScheduleItems()
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::has_data() const
{
    if (is_presence_container) return true;
    return life.is_set
	|| ageout.is_set
	|| startprobe.is_set
	|| dayofthemonth.is_set
	|| month.is_set
	|| starttime.is_set
	|| recurring.is_set;
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(life.yfilter)
	|| ydk::is_set(ageout.yfilter)
	|| ydk::is_set(startprobe.yfilter)
	|| ydk::is_set(dayofthemonth.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(recurring.yfilter);
}

std::string System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (life.is_set || is_set(life.yfilter)) leaf_name_data.push_back(life.get_name_leafdata());
    if (ageout.is_set || is_set(ageout.yfilter)) leaf_name_data.push_back(ageout.get_name_leafdata());
    if (startprobe.is_set || is_set(startprobe.yfilter)) leaf_name_data.push_back(startprobe.get_name_leafdata());
    if (dayofthemonth.is_set || is_set(dayofthemonth.yfilter)) leaf_name_data.push_back(dayofthemonth.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (recurring.is_set || is_set(recurring.yfilter)) leaf_name_data.push_back(recurring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "life")
    {
        life = value;
        life.value_namespace = name_space;
        life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ageOut")
    {
        ageout = value;
        ageout.value_namespace = name_space;
        ageout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startProbe")
    {
        startprobe = value;
        startprobe.value_namespace = name_space;
        startprobe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dayOfTheMonth")
    {
        dayofthemonth = value;
        dayofthemonth.value_namespace = name_space;
        dayofthemonth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTime")
    {
        starttime = value;
        starttime.value_namespace = name_space;
        starttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring")
    {
        recurring = value;
        recurring.value_namespace = name_space;
        recurring.value_namespace_prefix = name_space_prefix;
    }
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "life")
    {
        life.yfilter = yfilter;
    }
    if(value_path == "ageOut")
    {
        ageout.yfilter = yfilter;
    }
    if(value_path == "startProbe")
    {
        startprobe.yfilter = yfilter;
    }
    if(value_path == "dayOfTheMonth")
    {
        dayofthemonth.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "recurring")
    {
        recurring.yfilter = yfilter;
    }
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "life" || name == "ageOut" || name == "startProbe" || name == "dayOfTheMonth" || name == "month" || name == "startTime" || name == "recurring")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::TriggerItems()
    :
    reactiontrigger_list(this, {"targetprobe"})
{

    yang_name = "trigger-items"; yang_parent_name = "Probe-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::~TriggerItems()
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reactiontrigger_list.len(); index++)
    {
        if(reactiontrigger_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::has_operation() const
{
    for (std::size_t index=0; index<reactiontrigger_list.len(); index++)
    {
        if(reactiontrigger_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReactionTrigger-list")
    {
        auto ent_ = std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::ReactionTriggerList>();
        ent_->parent = this;
        reactiontrigger_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reactiontrigger_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReactionTrigger-list")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::ReactionTriggerList::ReactionTriggerList()
    :
    targetprobe{YType::uint32, "targetProbe"}
{

    yang_name = "ReactionTrigger-list"; yang_parent_name = "trigger-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::ReactionTriggerList::~ReactionTriggerList()
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::ReactionTriggerList::has_data() const
{
    if (is_presence_container) return true;
    return targetprobe.is_set;
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::ReactionTriggerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(targetprobe.yfilter);
}

std::string System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::ReactionTriggerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReactionTrigger-list";
    ADD_KEY_TOKEN(targetprobe, "targetProbe");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::ReactionTriggerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (targetprobe.is_set || is_set(targetprobe.yfilter)) leaf_name_data.push_back(targetprobe.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::ReactionTriggerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::ReactionTriggerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::ReactionTriggerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "targetProbe")
    {
        targetprobe = value;
        targetprobe.value_namespace = name_space;
        targetprobe.value_namespace_prefix = name_space_prefix;
    }
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::ReactionTriggerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "targetProbe")
    {
        targetprobe.yfilter = yfilter;
    }
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::ReactionTriggerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "targetProbe")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionItems()
    :
    reaction_list(this, {"reacton"})
{

    yang_name = "reaction-items"; yang_parent_name = "Probe-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::~ReactionItems()
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reaction_list.len(); index++)
    {
        if(reaction_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::has_operation() const
{
    for (std::size_t index=0; index<reaction_list.len(); index++)
    {
        if(reaction_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reaction-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Reaction-list")
    {
        auto ent_ = std::make_shared<System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionList>();
        ent_->parent = this;
        reaction_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reaction_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Reaction-list")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionList::ReactionList()
    :
    reacton{YType::enumeration, "reactOn"},
    reactiontype{YType::enumeration, "reactionType"},
    thresholdtype{YType::enumeration, "thresholdType"},
    thresholdcountx{YType::uint16, "thresholdCountX"},
    thresholdcounty{YType::uint16, "thresholdCountY"},
    upperthreshold{YType::uint32, "upperThreshold"},
    lowerthreshold{YType::uint32, "lowerThreshold"}
{

    yang_name = "Reaction-list"; yang_parent_name = "reaction-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionList::~ReactionList()
{
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionList::has_data() const
{
    if (is_presence_container) return true;
    return reacton.is_set
	|| reactiontype.is_set
	|| thresholdtype.is_set
	|| thresholdcountx.is_set
	|| thresholdcounty.is_set
	|| upperthreshold.is_set
	|| lowerthreshold.is_set;
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reacton.yfilter)
	|| ydk::is_set(reactiontype.yfilter)
	|| ydk::is_set(thresholdtype.yfilter)
	|| ydk::is_set(thresholdcountx.yfilter)
	|| ydk::is_set(thresholdcounty.yfilter)
	|| ydk::is_set(upperthreshold.yfilter)
	|| ydk::is_set(lowerthreshold.yfilter);
}

std::string System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Reaction-list";
    ADD_KEY_TOKEN(reacton, "reactOn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reacton.is_set || is_set(reacton.yfilter)) leaf_name_data.push_back(reacton.get_name_leafdata());
    if (reactiontype.is_set || is_set(reactiontype.yfilter)) leaf_name_data.push_back(reactiontype.get_name_leafdata());
    if (thresholdtype.is_set || is_set(thresholdtype.yfilter)) leaf_name_data.push_back(thresholdtype.get_name_leafdata());
    if (thresholdcountx.is_set || is_set(thresholdcountx.yfilter)) leaf_name_data.push_back(thresholdcountx.get_name_leafdata());
    if (thresholdcounty.is_set || is_set(thresholdcounty.yfilter)) leaf_name_data.push_back(thresholdcounty.get_name_leafdata());
    if (upperthreshold.is_set || is_set(upperthreshold.yfilter)) leaf_name_data.push_back(upperthreshold.get_name_leafdata());
    if (lowerthreshold.is_set || is_set(lowerthreshold.yfilter)) leaf_name_data.push_back(lowerthreshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reactOn")
    {
        reacton = value;
        reacton.value_namespace = name_space;
        reacton.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reactionType")
    {
        reactiontype = value;
        reactiontype.value_namespace = name_space;
        reactiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresholdType")
    {
        thresholdtype = value;
        thresholdtype.value_namespace = name_space;
        thresholdtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresholdCountX")
    {
        thresholdcountx = value;
        thresholdcountx.value_namespace = name_space;
        thresholdcountx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresholdCountY")
    {
        thresholdcounty = value;
        thresholdcounty.value_namespace = name_space;
        thresholdcounty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upperThreshold")
    {
        upperthreshold = value;
        upperthreshold.value_namespace = name_space;
        upperthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowerThreshold")
    {
        lowerthreshold = value;
        lowerthreshold.value_namespace = name_space;
        lowerthreshold.value_namespace_prefix = name_space_prefix;
    }
}

void System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reactOn")
    {
        reacton.yfilter = yfilter;
    }
    if(value_path == "reactionType")
    {
        reactiontype.yfilter = yfilter;
    }
    if(value_path == "thresholdType")
    {
        thresholdtype.yfilter = yfilter;
    }
    if(value_path == "thresholdCountX")
    {
        thresholdcountx.yfilter = yfilter;
    }
    if(value_path == "thresholdCountY")
    {
        thresholdcounty.yfilter = yfilter;
    }
    if(value_path == "upperThreshold")
    {
        upperthreshold.yfilter = yfilter;
    }
    if(value_path == "lowerThreshold")
    {
        lowerthreshold.yfilter = yfilter;
    }
}

bool System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reactOn" || name == "reactionType" || name == "thresholdType" || name == "thresholdCountX" || name == "thresholdCountY" || name == "upperThreshold" || name == "lowerThreshold")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GroupscheduleItems()
    :
    grpscheduler_list(this, {"grpschedulerid"})
{

    yang_name = "groupschedule-items"; yang_parent_name = "sender-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SlaItems::InstItems::SenderItems::GroupscheduleItems::~GroupscheduleItems()
{
}

bool System::SlaItems::InstItems::SenderItems::GroupscheduleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<grpscheduler_list.len(); index++)
    {
        if(grpscheduler_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SlaItems::InstItems::SenderItems::GroupscheduleItems::has_operation() const
{
    for (std::size_t index=0; index<grpscheduler_list.len(); index++)
    {
        if(grpscheduler_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SlaItems::InstItems::SenderItems::GroupscheduleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sla-items/inst-items/sender-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SlaItems::InstItems::SenderItems::GroupscheduleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groupschedule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::GroupscheduleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::GroupscheduleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "GrpScheduler-list")
    {
        auto ent_ = std::make_shared<System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList>();
        ent_->parent = this;
        grpscheduler_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::GroupscheduleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : grpscheduler_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SlaItems::InstItems::SenderItems::GroupscheduleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SlaItems::InstItems::SenderItems::GroupscheduleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SlaItems::InstItems::SenderItems::GroupscheduleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "GrpScheduler-list")
        return true;
    return false;
}

System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::GrpSchedulerList()
    :
    grpschedulerid{YType::uint32, "grpSchedulerId"},
    probelist{YType::str, "probeList"},
    scheduleperiod{YType::uint32, "schedulePeriod"},
    life{YType::uint32, "life"},
    ageout{YType::uint32, "ageOut"},
    frequency{YType::uint32, "frequency"},
    frequencyrange{YType::str, "frequencyRange"},
    startprobe{YType::enumeration, "startProbe"},
    dayofthemonth{YType::uint16, "dayOfTheMonth"},
    month{YType::enumeration, "month"},
    starttime{YType::str, "startTime"},
    modifygrpschedule{YType::enumeration, "modifyGrpSchedule"},
    reschedule{YType::boolean, "reschedule"}
{

    yang_name = "GrpScheduler-list"; yang_parent_name = "groupschedule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::~GrpSchedulerList()
{
}

bool System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::has_data() const
{
    if (is_presence_container) return true;
    return grpschedulerid.is_set
	|| probelist.is_set
	|| scheduleperiod.is_set
	|| life.is_set
	|| ageout.is_set
	|| frequency.is_set
	|| frequencyrange.is_set
	|| startprobe.is_set
	|| dayofthemonth.is_set
	|| month.is_set
	|| starttime.is_set
	|| modifygrpschedule.is_set
	|| reschedule.is_set;
}

bool System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpschedulerid.yfilter)
	|| ydk::is_set(probelist.yfilter)
	|| ydk::is_set(scheduleperiod.yfilter)
	|| ydk::is_set(life.yfilter)
	|| ydk::is_set(ageout.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(frequencyrange.yfilter)
	|| ydk::is_set(startprobe.yfilter)
	|| ydk::is_set(dayofthemonth.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(modifygrpschedule.yfilter)
	|| ydk::is_set(reschedule.yfilter);
}

std::string System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sla-items/inst-items/sender-items/groupschedule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "GrpScheduler-list";
    ADD_KEY_TOKEN(grpschedulerid, "grpSchedulerId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpschedulerid.is_set || is_set(grpschedulerid.yfilter)) leaf_name_data.push_back(grpschedulerid.get_name_leafdata());
    if (probelist.is_set || is_set(probelist.yfilter)) leaf_name_data.push_back(probelist.get_name_leafdata());
    if (scheduleperiod.is_set || is_set(scheduleperiod.yfilter)) leaf_name_data.push_back(scheduleperiod.get_name_leafdata());
    if (life.is_set || is_set(life.yfilter)) leaf_name_data.push_back(life.get_name_leafdata());
    if (ageout.is_set || is_set(ageout.yfilter)) leaf_name_data.push_back(ageout.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (frequencyrange.is_set || is_set(frequencyrange.yfilter)) leaf_name_data.push_back(frequencyrange.get_name_leafdata());
    if (startprobe.is_set || is_set(startprobe.yfilter)) leaf_name_data.push_back(startprobe.get_name_leafdata());
    if (dayofthemonth.is_set || is_set(dayofthemonth.yfilter)) leaf_name_data.push_back(dayofthemonth.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (modifygrpschedule.is_set || is_set(modifygrpschedule.yfilter)) leaf_name_data.push_back(modifygrpschedule.get_name_leafdata());
    if (reschedule.is_set || is_set(reschedule.yfilter)) leaf_name_data.push_back(reschedule.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpSchedulerId")
    {
        grpschedulerid = value;
        grpschedulerid.value_namespace = name_space;
        grpschedulerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeList")
    {
        probelist = value;
        probelist.value_namespace = name_space;
        probelist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedulePeriod")
    {
        scheduleperiod = value;
        scheduleperiod.value_namespace = name_space;
        scheduleperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life")
    {
        life = value;
        life.value_namespace = name_space;
        life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ageOut")
    {
        ageout = value;
        ageout.value_namespace = name_space;
        ageout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequencyRange")
    {
        frequencyrange = value;
        frequencyrange.value_namespace = name_space;
        frequencyrange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startProbe")
    {
        startprobe = value;
        startprobe.value_namespace = name_space;
        startprobe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dayOfTheMonth")
    {
        dayofthemonth = value;
        dayofthemonth.value_namespace = name_space;
        dayofthemonth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTime")
    {
        starttime = value;
        starttime.value_namespace = name_space;
        starttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modifyGrpSchedule")
    {
        modifygrpschedule = value;
        modifygrpschedule.value_namespace = name_space;
        modifygrpschedule.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reschedule")
    {
        reschedule = value;
        reschedule.value_namespace = name_space;
        reschedule.value_namespace_prefix = name_space_prefix;
    }
}

void System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpSchedulerId")
    {
        grpschedulerid.yfilter = yfilter;
    }
    if(value_path == "probeList")
    {
        probelist.yfilter = yfilter;
    }
    if(value_path == "schedulePeriod")
    {
        scheduleperiod.yfilter = yfilter;
    }
    if(value_path == "life")
    {
        life.yfilter = yfilter;
    }
    if(value_path == "ageOut")
    {
        ageout.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "frequencyRange")
    {
        frequencyrange.yfilter = yfilter;
    }
    if(value_path == "startProbe")
    {
        startprobe.yfilter = yfilter;
    }
    if(value_path == "dayOfTheMonth")
    {
        dayofthemonth.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "modifyGrpSchedule")
    {
        modifygrpschedule.yfilter = yfilter;
    }
    if(value_path == "reschedule")
    {
        reschedule.yfilter = yfilter;
    }
}

bool System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grpSchedulerId" || name == "probeList" || name == "schedulePeriod" || name == "life" || name == "ageOut" || name == "frequency" || name == "frequencyRange" || name == "startProbe" || name == "dayOfTheMonth" || name == "month" || name == "startTime" || name == "modifyGrpSchedule" || name == "reschedule")
        return true;
    return false;
}

System::TmItems::TmItems()
    :
    adminst{YType::enumeration, "adminSt"}
        ,
    certificate_items(std::make_shared<System::TmItems::CertificateItems>())
    , destprof_items(std::make_shared<System::TmItems::DestprofItems>())
    , sensor_items(std::make_shared<System::TmItems::SensorItems>())
    , dest_items(std::make_shared<System::TmItems::DestItems>())
    , subs_items(std::make_shared<System::TmItems::SubsItems>())
{
    certificate_items->parent = this;
    destprof_items->parent = this;
    sensor_items->parent = this;
    dest_items->parent = this;
    subs_items->parent = this;

    yang_name = "tm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::~TmItems()
{
}

bool System::TmItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| (certificate_items !=  nullptr && certificate_items->has_data())
	|| (destprof_items !=  nullptr && destprof_items->has_data())
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (dest_items !=  nullptr && dest_items->has_data())
	|| (subs_items !=  nullptr && subs_items->has_data());
}

bool System::TmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (certificate_items !=  nullptr && certificate_items->has_operation())
	|| (destprof_items !=  nullptr && destprof_items->has_operation())
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (dest_items !=  nullptr && dest_items->has_operation())
	|| (subs_items !=  nullptr && subs_items->has_operation());
}

std::string System::TmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate-items")
    {
        if(certificate_items == nullptr)
        {
            certificate_items = std::make_shared<System::TmItems::CertificateItems>();
        }
        return certificate_items;
    }

    if(child_yang_name == "destprof-items")
    {
        if(destprof_items == nullptr)
        {
            destprof_items = std::make_shared<System::TmItems::DestprofItems>();
        }
        return destprof_items;
    }

    if(child_yang_name == "sensor-items")
    {
        if(sensor_items == nullptr)
        {
            sensor_items = std::make_shared<System::TmItems::SensorItems>();
        }
        return sensor_items;
    }

    if(child_yang_name == "dest-items")
    {
        if(dest_items == nullptr)
        {
            dest_items = std::make_shared<System::TmItems::DestItems>();
        }
        return dest_items;
    }

    if(child_yang_name == "subs-items")
    {
        if(subs_items == nullptr)
        {
            subs_items = std::make_shared<System::TmItems::SubsItems>();
        }
        return subs_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(certificate_items != nullptr)
    {
        _children["certificate-items"] = certificate_items;
    }

    if(destprof_items != nullptr)
    {
        _children["destprof-items"] = destprof_items;
    }

    if(sensor_items != nullptr)
    {
        _children["sensor-items"] = sensor_items;
    }

    if(dest_items != nullptr)
    {
        _children["dest-items"] = dest_items;
    }

    if(subs_items != nullptr)
    {
        _children["subs-items"] = subs_items;
    }

    return _children;
}

void System::TmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::TmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate-items" || name == "destprof-items" || name == "sensor-items" || name == "dest-items" || name == "subs-items" || name == "adminSt")
        return true;
    return false;
}

System::TmItems::CertificateItems::CertificateItems()
    :
    filename{YType::str, "filename"},
    hostname{YType::str, "hostname"}
{

    yang_name = "certificate-items"; yang_parent_name = "tm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::CertificateItems::~CertificateItems()
{
}

bool System::TmItems::CertificateItems::has_data() const
{
    if (is_presence_container) return true;
    return filename.is_set
	|| hostname.is_set;
}

bool System::TmItems::CertificateItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filename.yfilter)
	|| ydk::is_set(hostname.yfilter);
}

std::string System::TmItems::CertificateItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::CertificateItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::CertificateItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::CertificateItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::CertificateItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::CertificateItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::CertificateItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool System::TmItems::CertificateItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filename" || name == "hostname")
        return true;
    return false;
}

System::TmItems::DestprofItems::DestprofItems()
    :
    adminst{YType::enumeration, "adminSt"}
        ,
    vrf_items(std::make_shared<System::TmItems::DestprofItems::VrfItems>())
    , compression_items(std::make_shared<System::TmItems::DestprofItems::CompressionItems>())
    , sourceinterface_items(std::make_shared<System::TmItems::DestprofItems::SourceinterfaceItems>())
    , retry_items(std::make_shared<System::TmItems::DestprofItems::RetryItems>())
    , nodeid_items(std::make_shared<System::TmItems::DestprofItems::NodeidItems>())
{
    vrf_items->parent = this;
    compression_items->parent = this;
    sourceinterface_items->parent = this;
    retry_items->parent = this;
    nodeid_items->parent = this;

    yang_name = "destprof-items"; yang_parent_name = "tm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestprofItems::~DestprofItems()
{
}

bool System::TmItems::DestprofItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| (vrf_items !=  nullptr && vrf_items->has_data())
	|| (compression_items !=  nullptr && compression_items->has_data())
	|| (sourceinterface_items !=  nullptr && sourceinterface_items->has_data())
	|| (retry_items !=  nullptr && retry_items->has_data())
	|| (nodeid_items !=  nullptr && nodeid_items->has_data());
}

bool System::TmItems::DestprofItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation())
	|| (compression_items !=  nullptr && compression_items->has_operation())
	|| (sourceinterface_items !=  nullptr && sourceinterface_items->has_operation())
	|| (retry_items !=  nullptr && retry_items->has_operation())
	|| (nodeid_items !=  nullptr && nodeid_items->has_operation());
}

std::string System::TmItems::DestprofItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestprofItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destprof-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestprofItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestprofItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::TmItems::DestprofItems::VrfItems>();
        }
        return vrf_items;
    }

    if(child_yang_name == "compression-items")
    {
        if(compression_items == nullptr)
        {
            compression_items = std::make_shared<System::TmItems::DestprofItems::CompressionItems>();
        }
        return compression_items;
    }

    if(child_yang_name == "sourceinterface-items")
    {
        if(sourceinterface_items == nullptr)
        {
            sourceinterface_items = std::make_shared<System::TmItems::DestprofItems::SourceinterfaceItems>();
        }
        return sourceinterface_items;
    }

    if(child_yang_name == "retry-items")
    {
        if(retry_items == nullptr)
        {
            retry_items = std::make_shared<System::TmItems::DestprofItems::RetryItems>();
        }
        return retry_items;
    }

    if(child_yang_name == "nodeid-items")
    {
        if(nodeid_items == nullptr)
        {
            nodeid_items = std::make_shared<System::TmItems::DestprofItems::NodeidItems>();
        }
        return nodeid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestprofItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    if(compression_items != nullptr)
    {
        _children["compression-items"] = compression_items;
    }

    if(sourceinterface_items != nullptr)
    {
        _children["sourceinterface-items"] = sourceinterface_items;
    }

    if(retry_items != nullptr)
    {
        _children["retry-items"] = retry_items;
    }

    if(nodeid_items != nullptr)
    {
        _children["nodeid-items"] = nodeid_items;
    }

    return _children;
}

void System::TmItems::DestprofItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestprofItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::TmItems::DestprofItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items" || name == "compression-items" || name == "sourceinterface-items" || name == "retry-items" || name == "nodeid-items" || name == "adminSt")
        return true;
    return false;
}

System::TmItems::DestprofItems::VrfItems::VrfItems()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf-items"; yang_parent_name = "destprof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestprofItems::VrfItems::~VrfItems()
{
}

bool System::TmItems::DestprofItems::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::TmItems::DestprofItems::VrfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::TmItems::DestprofItems::VrfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/destprof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestprofItems::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestprofItems::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestprofItems::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestprofItems::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::DestprofItems::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestprofItems::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::TmItems::DestprofItems::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::TmItems::DestprofItems::CompressionItems::CompressionItems()
    :
    name{YType::enumeration, "name"}
{

    yang_name = "compression-items"; yang_parent_name = "destprof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestprofItems::CompressionItems::~CompressionItems()
{
}

bool System::TmItems::DestprofItems::CompressionItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::TmItems::DestprofItems::CompressionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::TmItems::DestprofItems::CompressionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/destprof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestprofItems::CompressionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "compression-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestprofItems::CompressionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestprofItems::CompressionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestprofItems::CompressionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::DestprofItems::CompressionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestprofItems::CompressionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::TmItems::DestprofItems::CompressionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::TmItems::DestprofItems::SourceinterfaceItems::SourceinterfaceItems()
    :
    name{YType::str, "name"}
{

    yang_name = "sourceinterface-items"; yang_parent_name = "destprof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestprofItems::SourceinterfaceItems::~SourceinterfaceItems()
{
}

bool System::TmItems::DestprofItems::SourceinterfaceItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::TmItems::DestprofItems::SourceinterfaceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::TmItems::DestprofItems::SourceinterfaceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/destprof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestprofItems::SourceinterfaceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourceinterface-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestprofItems::SourceinterfaceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestprofItems::SourceinterfaceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestprofItems::SourceinterfaceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::DestprofItems::SourceinterfaceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestprofItems::SourceinterfaceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::TmItems::DestprofItems::SourceinterfaceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::TmItems::DestprofItems::RetryItems::RetryItems()
    :
    size{YType::uint32, "size"}
{

    yang_name = "retry-items"; yang_parent_name = "destprof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestprofItems::RetryItems::~RetryItems()
{
}

bool System::TmItems::DestprofItems::RetryItems::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set;
}

bool System::TmItems::DestprofItems::RetryItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::TmItems::DestprofItems::RetryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/destprof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestprofItems::RetryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestprofItems::RetryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestprofItems::RetryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestprofItems::RetryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::DestprofItems::RetryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestprofItems::RetryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool System::TmItems::DestprofItems::RetryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

System::TmItems::DestprofItems::NodeidItems::NodeidItems()
    :
    name{YType::str, "name"}
{

    yang_name = "nodeid-items"; yang_parent_name = "destprof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestprofItems::NodeidItems::~NodeidItems()
{
}

bool System::TmItems::DestprofItems::NodeidItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::TmItems::DestprofItems::NodeidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::TmItems::DestprofItems::NodeidItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/destprof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestprofItems::NodeidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodeid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestprofItems::NodeidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestprofItems::NodeidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestprofItems::NodeidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::DestprofItems::NodeidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestprofItems::NodeidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::TmItems::DestprofItems::NodeidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorItems()
    :
    sensorgroup_list(this, {"id"})
{

    yang_name = "sensor-items"; yang_parent_name = "tm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::SensorItems::~SensorItems()
{
}

bool System::TmItems::SensorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensorgroup_list.len(); index++)
    {
        if(sensorgroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SensorItems::has_operation() const
{
    for (std::size_t index=0; index<sensorgroup_list.len(); index++)
    {
        if(sensorgroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SensorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::SensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SensorGroup-list")
    {
        auto ent_ = std::make_shared<System::TmItems::SensorItems::SensorGroupList>();
        ent_->parent = this;
        sensorgroup_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensorgroup_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TmItems::SensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SensorGroup-list")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorGroupList::SensorGroupList()
    :
    id{YType::str, "id"},
    datasrc{YType::enumeration, "dataSrc"}
        ,
    path_items(std::make_shared<System::TmItems::SensorItems::SensorGroupList::PathItems>())
{
    path_items->parent = this;

    yang_name = "SensorGroup-list"; yang_parent_name = "sensor-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::SensorItems::SensorGroupList::~SensorGroupList()
{
}

bool System::TmItems::SensorItems::SensorGroupList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| datasrc.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::TmItems::SensorItems::SensorGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(datasrc.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::TmItems::SensorItems::SensorGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/sensor-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::SensorItems::SensorGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SensorGroup-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::SensorGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (datasrc.is_set || is_set(datasrc.yfilter)) leaf_name_data.push_back(datasrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SensorItems::SensorGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::TmItems::SensorItems::SensorGroupList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SensorItems::SensorGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_items != nullptr)
    {
        _children["path-items"] = path_items;
    }

    return _children;
}

void System::TmItems::SensorItems::SensorGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataSrc")
    {
        datasrc = value;
        datasrc.value_namespace = name_space;
        datasrc.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::SensorItems::SensorGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "dataSrc")
    {
        datasrc.yfilter = yfilter;
    }
}

bool System::TmItems::SensorItems::SensorGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "id" || name == "dataSrc")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorGroupList::PathItems::PathItems()
    :
    sensorpath_list(this, {"path"})
{

    yang_name = "path-items"; yang_parent_name = "SensorGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SensorItems::SensorGroupList::PathItems::~PathItems()
{
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensorpath_list.len(); index++)
    {
        if(sensorpath_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<sensorpath_list.len(); index++)
    {
        if(sensorpath_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SensorItems::SensorGroupList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::SensorGroupList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SensorItems::SensorGroupList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SensorPath-list")
    {
        auto ent_ = std::make_shared<System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList>();
        ent_->parent = this;
        sensorpath_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SensorItems::SensorGroupList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensorpath_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SensorPath-list")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::SensorPathList()
    :
    path{YType::str, "path"},
    querycondition{YType::str, "queryCondition"},
    filtercondition{YType::str, "filterCondition"},
    depth{YType::uint32, "depth"}
{

    yang_name = "SensorPath-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::~SensorPathList()
{
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| querycondition.is_set
	|| filtercondition.is_set
	|| depth.is_set;
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(querycondition.yfilter)
	|| ydk::is_set(filtercondition.yfilter)
	|| ydk::is_set(depth.yfilter);
}

std::string System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SensorPath-list";
    ADD_KEY_TOKEN(path, "path");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (querycondition.is_set || is_set(querycondition.yfilter)) leaf_name_data.push_back(querycondition.get_name_leafdata());
    if (filtercondition.is_set || is_set(filtercondition.yfilter)) leaf_name_data.push_back(filtercondition.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queryCondition")
    {
        querycondition = value;
        querycondition.value_namespace = name_space;
        querycondition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filterCondition")
    {
        filtercondition = value;
        filtercondition.value_namespace = name_space;
        filtercondition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "queryCondition")
    {
        querycondition.yfilter = yfilter;
    }
    if(value_path == "filterCondition")
    {
        filtercondition.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "queryCondition" || name == "filterCondition" || name == "depth")
        return true;
    return false;
}

System::TmItems::DestItems::DestItems()
    :
    destgroup_list(this, {"id"})
{

    yang_name = "dest-items"; yang_parent_name = "tm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestItems::~DestItems()
{
}

bool System::TmItems::DestItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destgroup_list.len(); index++)
    {
        if(destgroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::DestItems::has_operation() const
{
    for (std::size_t index=0; index<destgroup_list.len(); index++)
    {
        if(destgroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::DestItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DestGroup-list")
    {
        auto ent_ = std::make_shared<System::TmItems::DestItems::DestGroupList>();
        ent_->parent = this;
        destgroup_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : destgroup_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TmItems::DestItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::DestItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::DestItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DestGroup-list")
        return true;
    return false;
}

System::TmItems::DestItems::DestGroupList::DestGroupList()
    :
    id{YType::str, "id"}
        ,
    addr_items(std::make_shared<System::TmItems::DestItems::DestGroupList::AddrItems>())
    , chunking_items(std::make_shared<System::TmItems::DestItems::DestGroupList::ChunkingItems>())
{
    addr_items->parent = this;
    chunking_items->parent = this;

    yang_name = "DestGroup-list"; yang_parent_name = "dest-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestItems::DestGroupList::~DestGroupList()
{
}

bool System::TmItems::DestItems::DestGroupList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (addr_items !=  nullptr && addr_items->has_data())
	|| (chunking_items !=  nullptr && chunking_items->has_data());
}

bool System::TmItems::DestItems::DestGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (addr_items !=  nullptr && addr_items->has_operation())
	|| (chunking_items !=  nullptr && chunking_items->has_operation());
}

std::string System::TmItems::DestItems::DestGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/dest-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestItems::DestGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DestGroup-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestItems::DestGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestItems::DestGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr-items")
    {
        if(addr_items == nullptr)
        {
            addr_items = std::make_shared<System::TmItems::DestItems::DestGroupList::AddrItems>();
        }
        return addr_items;
    }

    if(child_yang_name == "chunking-items")
    {
        if(chunking_items == nullptr)
        {
            chunking_items = std::make_shared<System::TmItems::DestItems::DestGroupList::ChunkingItems>();
        }
        return chunking_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestItems::DestGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr_items != nullptr)
    {
        _children["addr-items"] = addr_items;
    }

    if(chunking_items != nullptr)
    {
        _children["chunking-items"] = chunking_items;
    }

    return _children;
}

void System::TmItems::DestItems::DestGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestItems::DestGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::TmItems::DestItems::DestGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-items" || name == "chunking-items" || name == "id")
        return true;
    return false;
}

System::TmItems::DestItems::DestGroupList::AddrItems::AddrItems()
    :
    dest_list(this, {"addr", "port"})
{

    yang_name = "addr-items"; yang_parent_name = "DestGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::DestItems::DestGroupList::AddrItems::~AddrItems()
{
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dest_list.len(); index++)
    {
        if(dest_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::has_operation() const
{
    for (std::size_t index=0; index<dest_list.len(); index++)
    {
        if(dest_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::DestItems::DestGroupList::AddrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestItems::DestGroupList::AddrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestItems::DestGroupList::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dest-list")
    {
        auto ent_ = std::make_shared<System::TmItems::DestItems::DestGroupList::AddrItems::DestList>();
        ent_->parent = this;
        dest_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestItems::DestGroupList::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dest_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TmItems::DestItems::DestGroupList::AddrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::DestItems::DestGroupList::AddrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dest-list")
        return true;
    return false;
}

System::TmItems::DestItems::DestGroupList::AddrItems::DestList::DestList()
    :
    addr{YType::str, "addr"},
    port{YType::uint16, "port"},
    proto{YType::enumeration, "proto"},
    enc{YType::enumeration, "enc"}
{

    yang_name = "Dest-list"; yang_parent_name = "addr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::DestItems::DestGroupList::AddrItems::DestList::~DestList()
{
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::DestList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| port.is_set
	|| proto.is_set
	|| enc.is_set;
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::DestList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(enc.yfilter);
}

std::string System::TmItems::DestItems::DestGroupList::AddrItems::DestList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dest-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestItems::DestGroupList::AddrItems::DestList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (enc.is_set || is_set(enc.yfilter)) leaf_name_data.push_back(enc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestItems::DestGroupList::AddrItems::DestList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestItems::DestGroupList::AddrItems::DestList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::DestItems::DestGroupList::AddrItems::DestList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enc")
    {
        enc = value;
        enc.value_namespace = name_space;
        enc.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestItems::DestGroupList::AddrItems::DestList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "enc")
    {
        enc.yfilter = yfilter;
    }
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::DestList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "port" || name == "proto" || name == "enc")
        return true;
    return false;
}

System::TmItems::DestItems::DestGroupList::ChunkingItems::ChunkingItems()
    :
    chunksize{YType::uint32, "chunkSize"}
{

    yang_name = "chunking-items"; yang_parent_name = "DestGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::DestItems::DestGroupList::ChunkingItems::~ChunkingItems()
{
}

bool System::TmItems::DestItems::DestGroupList::ChunkingItems::has_data() const
{
    if (is_presence_container) return true;
    return chunksize.is_set;
}

bool System::TmItems::DestItems::DestGroupList::ChunkingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chunksize.yfilter);
}

std::string System::TmItems::DestItems::DestGroupList::ChunkingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chunking-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestItems::DestGroupList::ChunkingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chunksize.is_set || is_set(chunksize.yfilter)) leaf_name_data.push_back(chunksize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::DestItems::DestGroupList::ChunkingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::DestItems::DestGroupList::ChunkingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::DestItems::DestGroupList::ChunkingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chunkSize")
    {
        chunksize = value;
        chunksize.value_namespace = name_space;
        chunksize.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestItems::DestGroupList::ChunkingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chunkSize")
    {
        chunksize.yfilter = yfilter;
    }
}

bool System::TmItems::DestItems::DestGroupList::ChunkingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chunkSize")
        return true;
    return false;
}

System::TmItems::SubsItems::SubsItems()
    :
    subscription_list(this, {"id"})
{

    yang_name = "subs-items"; yang_parent_name = "tm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::SubsItems::~SubsItems()
{
}

bool System::TmItems::SubsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscription_list.len(); index++)
    {
        if(subscription_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SubsItems::has_operation() const
{
    for (std::size_t index=0; index<subscription_list.len(); index++)
    {
        if(subscription_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SubsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::SubsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SubsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Subscription-list")
    {
        auto ent_ = std::make_shared<System::TmItems::SubsItems::SubscriptionList>();
        ent_->parent = this;
        subscription_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SubsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subscription_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TmItems::SubsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SubsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SubsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Subscription-list")
        return true;
    return false;
}

System::TmItems::SubsItems::SubscriptionList::SubscriptionList()
    :
    id{YType::uint64, "id"}
        ,
    rssensorgrouprel_items(std::make_shared<System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems>())
    , rsdestgrouprel_items(std::make_shared<System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems>())
{
    rssensorgrouprel_items->parent = this;
    rsdestgrouprel_items->parent = this;

    yang_name = "Subscription-list"; yang_parent_name = "subs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::SubsItems::SubscriptionList::~SubscriptionList()
{
}

bool System::TmItems::SubsItems::SubscriptionList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (rssensorgrouprel_items !=  nullptr && rssensorgrouprel_items->has_data())
	|| (rsdestgrouprel_items !=  nullptr && rsdestgrouprel_items->has_data());
}

bool System::TmItems::SubsItems::SubscriptionList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (rssensorgrouprel_items !=  nullptr && rssensorgrouprel_items->has_operation())
	|| (rsdestgrouprel_items !=  nullptr && rsdestgrouprel_items->has_operation());
}

std::string System::TmItems::SubsItems::SubscriptionList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/subs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::SubsItems::SubscriptionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Subscription-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::SubscriptionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SubsItems::SubscriptionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rssensorGroupRel-items")
    {
        if(rssensorgrouprel_items == nullptr)
        {
            rssensorgrouprel_items = std::make_shared<System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems>();
        }
        return rssensorgrouprel_items;
    }

    if(child_yang_name == "rsdestGroupRel-items")
    {
        if(rsdestgrouprel_items == nullptr)
        {
            rsdestgrouprel_items = std::make_shared<System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems>();
        }
        return rsdestgrouprel_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SubsItems::SubscriptionList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rssensorgrouprel_items != nullptr)
    {
        _children["rssensorGroupRel-items"] = rssensorgrouprel_items;
    }

    if(rsdestgrouprel_items != nullptr)
    {
        _children["rsdestGroupRel-items"] = rsdestgrouprel_items;
    }

    return _children;
}

void System::TmItems::SubsItems::SubscriptionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::SubsItems::SubscriptionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::TmItems::SubsItems::SubscriptionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rssensorGroupRel-items" || name == "rsdestGroupRel-items" || name == "id")
        return true;
    return false;
}

System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RssensorGroupRelItems()
    :
    rssensorgrouprel_list(this, {"tdn"})
{

    yang_name = "rssensorGroupRel-items"; yang_parent_name = "Subscription-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::~RssensorGroupRelItems()
{
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rssensorgrouprel_list.len(); index++)
    {
        if(rssensorgrouprel_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::has_operation() const
{
    for (std::size_t index=0; index<rssensorgrouprel_list.len(); index++)
    {
        if(rssensorgrouprel_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rssensorGroupRel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsSensorGroupRel-list")
    {
        auto ent_ = std::make_shared<System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList>();
        ent_->parent = this;
        rssensorgrouprel_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rssensorgrouprel_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsSensorGroupRel-list")
        return true;
    return false;
}

System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::RsSensorGroupRelList()
    :
    tdn{YType::str, "tDn"},
    sampleintvl{YType::uint64, "sampleIntvl"}
{

    yang_name = "RsSensorGroupRel-list"; yang_parent_name = "rssensorGroupRel-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::~RsSensorGroupRelList()
{
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| sampleintvl.is_set;
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(sampleintvl.yfilter);
}

std::string System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsSensorGroupRel-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (sampleintvl.is_set || is_set(sampleintvl.yfilter)) leaf_name_data.push_back(sampleintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampleIntvl")
    {
        sampleintvl = value;
        sampleintvl.value_namespace = name_space;
        sampleintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "sampleIntvl")
    {
        sampleintvl.yfilter = yfilter;
    }
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "sampleIntvl")
        return true;
    return false;
}

System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsdestGroupRelItems()
    :
    rsdestgrouprel_list(this, {"tdn"})
{

    yang_name = "rsdestGroupRel-items"; yang_parent_name = "Subscription-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::~RsdestGroupRelItems()
{
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsdestgrouprel_list.len(); index++)
    {
        if(rsdestgrouprel_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::has_operation() const
{
    for (std::size_t index=0; index<rsdestgrouprel_list.len(); index++)
    {
        if(rsdestgrouprel_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdestGroupRel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsDestGroupRel-list")
    {
        auto ent_ = std::make_shared<System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList>();
        ent_->parent = this;
        rsdestgrouprel_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsdestgrouprel_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsDestGroupRel-list")
        return true;
    return false;
}

System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::RsDestGroupRelList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsDestGroupRel-list"; yang_parent_name = "rsdestGroupRel-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::~RsDestGroupRelList()
{
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsDestGroupRel-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::TrackItems::TrackItems()
    :
    object_items(std::make_shared<System::TrackItems::ObjectItems>())
{
    object_items->parent = this;

    yang_name = "track-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TrackItems::~TrackItems()
{
}

bool System::TrackItems::has_data() const
{
    if (is_presence_container) return true;
    return (object_items !=  nullptr && object_items->has_data());
}

bool System::TrackItems::has_operation() const
{
    return is_set(yfilter)
	|| (object_items !=  nullptr && object_items->has_operation());
}

std::string System::TrackItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TrackItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object-items")
    {
        if(object_items == nullptr)
        {
            object_items = std::make_shared<System::TrackItems::ObjectItems>();
        }
        return object_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(object_items != nullptr)
    {
        _children["object-items"] = object_items;
    }

    return _children;
}

void System::TrackItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TrackItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TrackItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-items")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectItems()
    :
    object_list(this, {"id"})
{

    yang_name = "object-items"; yang_parent_name = "track-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TrackItems::ObjectItems::~ObjectItems()
{
}

bool System::TrackItems::ObjectItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<object_list.len(); index++)
    {
        if(object_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TrackItems::ObjectItems::has_operation() const
{
    for (std::size_t index=0; index<object_list.len(); index++)
    {
        if(object_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TrackItems::ObjectItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/track-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TrackItems::ObjectItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Object-list")
    {
        auto ent_ = std::make_shared<System::TrackItems::ObjectItems::ObjectList>();
        ent_->parent = this;
        object_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : object_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TrackItems::ObjectItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TrackItems::ObjectItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TrackItems::ObjectItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Object-list")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::ObjectList()
    :
    id{YType::uint16, "id"},
    clients{YType::uint16, "clients"}
        ,
    if_items(std::make_shared<System::TrackItems::ObjectItems::ObjectList::IfItems>())
    , iprt_items(std::make_shared<System::TrackItems::ObjectItems::ObjectList::IprtItems>())
    , ipsla_items(std::make_shared<System::TrackItems::ObjectItems::ObjectList::IpslaItems>())
    , list_items(std::make_shared<System::TrackItems::ObjectItems::ObjectList::ListItems>())
{
    if_items->parent = this;
    iprt_items->parent = this;
    ipsla_items->parent = this;
    list_items->parent = this;

    yang_name = "Object-list"; yang_parent_name = "object-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TrackItems::ObjectItems::ObjectList::~ObjectList()
{
}

bool System::TrackItems::ObjectItems::ObjectList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| clients.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (iprt_items !=  nullptr && iprt_items->has_data())
	|| (ipsla_items !=  nullptr && ipsla_items->has_data())
	|| (list_items !=  nullptr && list_items->has_data());
}

bool System::TrackItems::ObjectItems::ObjectList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clients.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (iprt_items !=  nullptr && iprt_items->has_operation())
	|| (ipsla_items !=  nullptr && ipsla_items->has_operation())
	|| (list_items !=  nullptr && list_items->has_operation());
}

std::string System::TrackItems::ObjectItems::ObjectList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/track-items/object-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TrackItems::ObjectItems::ObjectList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Object-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clients.is_set || is_set(clients.yfilter)) leaf_name_data.push_back(clients.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::ObjectList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::TrackItems::ObjectItems::ObjectList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "iprt-items")
    {
        if(iprt_items == nullptr)
        {
            iprt_items = std::make_shared<System::TrackItems::ObjectItems::ObjectList::IprtItems>();
        }
        return iprt_items;
    }

    if(child_yang_name == "ipsla-items")
    {
        if(ipsla_items == nullptr)
        {
            ipsla_items = std::make_shared<System::TrackItems::ObjectItems::ObjectList::IpslaItems>();
        }
        return ipsla_items;
    }

    if(child_yang_name == "list-items")
    {
        if(list_items == nullptr)
        {
            list_items = std::make_shared<System::TrackItems::ObjectItems::ObjectList::ListItems>();
        }
        return list_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::ObjectList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(iprt_items != nullptr)
    {
        _children["iprt-items"] = iprt_items;
    }

    if(ipsla_items != nullptr)
    {
        _children["ipsla-items"] = ipsla_items;
    }

    if(list_items != nullptr)
    {
        _children["list-items"] = list_items;
    }

    return _children;
}

void System::TrackItems::ObjectItems::ObjectList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clients")
    {
        clients = value;
        clients.value_namespace = name_space;
        clients.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clients")
    {
        clients.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "iprt-items" || name == "ipsla-items" || name == "list-items" || name == "id" || name == "clients")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::IfItems::IfItems()
    :
    id{YType::str, "id"},
    protocoltype{YType::enumeration, "protocolType"}
{

    yang_name = "if-items"; yang_parent_name = "Object-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::IfItems::~IfItems()
{
}

bool System::TrackItems::ObjectItems::ObjectList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| protocoltype.is_set;
}

bool System::TrackItems::ObjectItems::ObjectList::IfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(protocoltype.yfilter);
}

std::string System::TrackItems::ObjectItems::ObjectList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (protocoltype.is_set || is_set(protocoltype.yfilter)) leaf_name_data.push_back(protocoltype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::ObjectList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::ObjectList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TrackItems::ObjectItems::ObjectList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolType")
    {
        protocoltype = value;
        protocoltype.value_namespace = name_space;
        protocoltype.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "protocolType")
    {
        protocoltype.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "protocolType")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::IprtItems::IprtItems()
    :
    af{YType::enumeration, "af"},
    prefix{YType::str, "prefix"},
    routestate{YType::enumeration, "routeState"},
    vrf{YType::str, "vrf"},
    routeowner{YType::enumeration, "routeOwner"}
{

    yang_name = "iprt-items"; yang_parent_name = "Object-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::IprtItems::~IprtItems()
{
}

bool System::TrackItems::ObjectItems::ObjectList::IprtItems::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| prefix.is_set
	|| routestate.is_set
	|| vrf.is_set
	|| routeowner.is_set;
}

bool System::TrackItems::ObjectItems::ObjectList::IprtItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(routestate.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(routeowner.yfilter);
}

std::string System::TrackItems::ObjectItems::ObjectList::IprtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iprt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::IprtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (routestate.is_set || is_set(routestate.yfilter)) leaf_name_data.push_back(routestate.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (routeowner.is_set || is_set(routeowner.yfilter)) leaf_name_data.push_back(routeowner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::ObjectList::IprtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::ObjectList::IprtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TrackItems::ObjectItems::ObjectList::IprtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeState")
    {
        routestate = value;
        routestate.value_namespace = name_space;
        routestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeOwner")
    {
        routeowner = value;
        routeowner.value_namespace = name_space;
        routeowner.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::IprtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "routeState")
    {
        routestate.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "routeOwner")
    {
        routeowner.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::IprtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "prefix" || name == "routeState" || name == "vrf" || name == "routeOwner")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::IpslaItems::IpslaItems()
    :
    probeid{YType::uint32, "probeId"},
    probestate{YType::enumeration, "probeState"}
{

    yang_name = "ipsla-items"; yang_parent_name = "Object-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::IpslaItems::~IpslaItems()
{
}

bool System::TrackItems::ObjectItems::ObjectList::IpslaItems::has_data() const
{
    if (is_presence_container) return true;
    return probeid.is_set
	|| probestate.is_set;
}

bool System::TrackItems::ObjectItems::ObjectList::IpslaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probeid.yfilter)
	|| ydk::is_set(probestate.yfilter);
}

std::string System::TrackItems::ObjectItems::ObjectList::IpslaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::IpslaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probeid.is_set || is_set(probeid.yfilter)) leaf_name_data.push_back(probeid.get_name_leafdata());
    if (probestate.is_set || is_set(probestate.yfilter)) leaf_name_data.push_back(probestate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::ObjectList::IpslaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::ObjectList::IpslaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TrackItems::ObjectItems::ObjectList::IpslaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probeId")
    {
        probeid = value;
        probeid.value_namespace = name_space;
        probeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeState")
    {
        probestate = value;
        probestate.value_namespace = name_space;
        probestate.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::IpslaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probeId")
    {
        probeid.yfilter = yfilter;
    }
    if(value_path == "probeState")
    {
        probestate.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::IpslaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probeId" || name == "probeState")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::ListItems::ListItems()
    :
    type{YType::enumeration, "type"},
    percentageup{YType::uint16, "percentageUp"},
    percentagedown{YType::uint16, "percentageDown"},
    weightup{YType::uint16, "weightUp"},
    weightdown{YType::uint16, "weightDown"}
        ,
    obj_items(std::make_shared<System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems>())
{
    obj_items->parent = this;

    yang_name = "list-items"; yang_parent_name = "Object-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::ListItems::~ListItems()
{
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| percentageup.is_set
	|| percentagedown.is_set
	|| weightup.is_set
	|| weightdown.is_set
	|| (obj_items !=  nullptr && obj_items->has_data());
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(percentageup.yfilter)
	|| ydk::is_set(percentagedown.yfilter)
	|| ydk::is_set(weightup.yfilter)
	|| ydk::is_set(weightdown.yfilter)
	|| (obj_items !=  nullptr && obj_items->has_operation());
}

std::string System::TrackItems::ObjectItems::ObjectList::ListItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::ListItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (percentageup.is_set || is_set(percentageup.yfilter)) leaf_name_data.push_back(percentageup.get_name_leafdata());
    if (percentagedown.is_set || is_set(percentagedown.yfilter)) leaf_name_data.push_back(percentagedown.get_name_leafdata());
    if (weightup.is_set || is_set(weightup.yfilter)) leaf_name_data.push_back(weightup.get_name_leafdata());
    if (weightdown.is_set || is_set(weightdown.yfilter)) leaf_name_data.push_back(weightdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::ObjectList::ListItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "obj-items")
    {
        if(obj_items == nullptr)
        {
            obj_items = std::make_shared<System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems>();
        }
        return obj_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::ObjectList::ListItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(obj_items != nullptr)
    {
        _children["obj-items"] = obj_items;
    }

    return _children;
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percentageUp")
    {
        percentageup = value;
        percentageup.value_namespace = name_space;
        percentageup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percentageDown")
    {
        percentagedown = value;
        percentagedown.value_namespace = name_space;
        percentagedown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weightUp")
    {
        weightup = value;
        weightup.value_namespace = name_space;
        weightup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weightDown")
    {
        weightdown = value;
        weightdown.value_namespace = name_space;
        weightdown.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "percentageUp")
    {
        percentageup.yfilter = yfilter;
    }
    if(value_path == "percentageDown")
    {
        percentagedown.yfilter = yfilter;
    }
    if(value_path == "weightUp")
    {
        weightup.yfilter = yfilter;
    }
    if(value_path == "weightDown")
    {
        weightdown.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "obj-items" || name == "type" || name == "percentageUp" || name == "percentageDown" || name == "weightUp" || name == "weightDown")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::ObjItems()
    :
    member_list(this, {"id"})
{

    yang_name = "obj-items"; yang_parent_name = "list-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::~ObjItems()
{
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member_list.len(); index++)
    {
        if(member_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::has_operation() const
{
    for (std::size_t index=0; index<member_list.len(); index++)
    {
        if(member_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Member-list")
    {
        auto ent_ = std::make_shared<System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList>();
        ent_->parent = this;
        member_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : member_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Member-list")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::MemberList()
    :
    id{YType::uint16, "id"},
    weight{YType::uint16, "weight"},
    not_{YType::boolean, "not"}
{

    yang_name = "Member-list"; yang_parent_name = "obj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::~MemberList()
{
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| weight.is_set
	|| not_.is_set;
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(not_.yfilter);
}

std::string System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Member-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (not_.is_set || is_set(not_.yfilter)) leaf_name_data.push_back(not_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not")
    {
        not_ = value;
        not_.value_namespace = name_space;
        not_.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "not")
    {
        not_.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "weight" || name == "not")
        return true;
    return false;
}

System::UdldItems::UdldItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::UdldItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "udld-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UdldItems::~UdldItems()
{
}

bool System::UdldItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::UdldItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::UdldItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UdldItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udld-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::UdldItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::UdldItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UdldItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UdldItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::UdldItems::InstItems::InstItems()
    :
    aggressive{YType::enumeration, "aggressive"},
    msgintvl{YType::uint8, "msgIntvl"},
    error{YType::uint64, "error"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    physif_items(std::make_shared<System::UdldItems::InstItems::PhysifItems>())
{
    physif_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "udld-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UdldItems::InstItems::~InstItems()
{
}

bool System::UdldItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return aggressive.is_set
	|| msgintvl.is_set
	|| error.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (physif_items !=  nullptr && physif_items->has_data());
}

bool System::UdldItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggressive.yfilter)
	|| ydk::is_set(msgintvl.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (physif_items !=  nullptr && physif_items->has_operation());
}

std::string System::UdldItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/udld-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UdldItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive.is_set || is_set(aggressive.yfilter)) leaf_name_data.push_back(aggressive.get_name_leafdata());
    if (msgintvl.is_set || is_set(msgintvl.yfilter)) leaf_name_data.push_back(msgintvl.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "physif-items")
    {
        if(physif_items == nullptr)
        {
            physif_items = std::make_shared<System::UdldItems::InstItems::PhysifItems>();
        }
        return physif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(physif_items != nullptr)
    {
        _children["physif-items"] = physif_items;
    }

    return _children;
}

void System::UdldItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggressive")
    {
        aggressive = value;
        aggressive.value_namespace = name_space;
        aggressive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msgIntvl")
    {
        msgintvl = value;
        msgintvl.value_namespace = name_space;
        msgintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
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

void System::UdldItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggressive")
    {
        aggressive.yfilter = yfilter;
    }
    if(value_path == "msgIntvl")
    {
        msgintvl.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
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

bool System::UdldItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "physif-items" || name == "aggressive" || name == "msgIntvl" || name == "error" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysifItems()
    :
    physif_list(this, {"id"})
{

    yang_name = "physif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UdldItems::InstItems::PhysifItems::~PhysifItems()
{
}

bool System::UdldItems::InstItems::PhysifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UdldItems::InstItems::PhysifItems::has_operation() const
{
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/udld-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UdldItems::InstItems::PhysifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "physif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::PhysifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PhysIf-list")
    {
        auto ent_ = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList>();
        ent_->parent = this;
        physif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::PhysifItems::get_children() const
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

void System::UdldItems::InstItems::PhysifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UdldItems::InstItems::PhysifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UdldItems::InstItems::PhysifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PhysIf-list")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::PhysIfList()
    :
    id{YType::str, "id"},
    aggressive{YType::enumeration, "aggressive"},
    bidirdetect{YType::enumeration, "biDirDetect"},
    fiber{YType::enumeration, "fiber"},
    error{YType::uint64, "error"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    ptimest_items(std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems>())
    , rtvrfmbr_items(std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems>())
{
    ptimest_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "PhysIf-list"; yang_parent_name = "physif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::~PhysIfList()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| aggressive.is_set
	|| bidirdetect.is_set
	|| fiber.is_set
	|| error.is_set
	|| name.is_set
	|| descr.is_set
	|| (ptimest_items !=  nullptr && ptimest_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(aggressive.yfilter)
	|| ydk::is_set(bidirdetect.yfilter)
	|| ydk::is_set(fiber.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (ptimest_items !=  nullptr && ptimest_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/udld-items/inst-items/physif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PhysIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (aggressive.is_set || is_set(aggressive.yfilter)) leaf_name_data.push_back(aggressive.get_name_leafdata());
    if (bidirdetect.is_set || is_set(bidirdetect.yfilter)) leaf_name_data.push_back(bidirdetect.get_name_leafdata());
    if (fiber.is_set || is_set(fiber.yfilter)) leaf_name_data.push_back(fiber.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptimest-items")
    {
        if(ptimest_items == nullptr)
        {
            ptimest_items = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems>();
        }
        return ptimest_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ptimest_items != nullptr)
    {
        _children["ptimest-items"] = ptimest_items;
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

void System::UdldItems::InstItems::PhysifItems::PhysIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggressive")
    {
        aggressive = value;
        aggressive.value_namespace = name_space;
        aggressive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "biDirDetect")
    {
        bidirdetect = value;
        bidirdetect.value_namespace = name_space;
        bidirdetect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fiber")
    {
        fiber = value;
        fiber.value_namespace = name_space;
        fiber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
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

void System::UdldItems::InstItems::PhysifItems::PhysIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "aggressive")
    {
        aggressive.yfilter = yfilter;
    }
    if(value_path == "biDirDetect")
    {
        bidirdetect.yfilter = yfilter;
    }
    if(value_path == "fiber")
    {
        fiber.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
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

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptimest-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "aggressive" || name == "biDirDetect" || name == "fiber" || name == "error" || name == "name" || name == "descr")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PtimestItems()
    :
    pktts_list(this, {"dir"})
{

    yang_name = "ptimest-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::~PtimestItems()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pktts_list.len(); index++)
    {
        if(pktts_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::has_operation() const
{
    for (std::size_t index=0; index<pktts_list.len(); index++)
    {
        if(pktts_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptimest-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PktTs-list")
    {
        auto ent_ = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList>();
        ent_->parent = this;
        pktts_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pktts_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PktTs-list")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::PktTsList()
    :
    dir{YType::enumeration, "dir"}
{

    yang_name = "PktTs-list"; yang_parent_name = "ptimest-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::~PktTsList()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::has_data() const
{
    if (is_presence_container) return true;
    return dir.is_set;
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dir.yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PktTs-list";
    ADD_KEY_TOKEN(dir, "dir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dir")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_children() const
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

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::AcllogItems::AcllogItems()
    :
    inst_items(std::make_shared<System::AcllogItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "acllog-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcllogItems::~AcllogItems()
{
}

bool System::AcllogItems::has_data() const
{
    if (is_presence_container) return true;
    return (inst_items !=  nullptr && inst_items->has_data());
}

bool System::AcllogItems::has_operation() const
{
    return is_set(yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::AcllogItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcllogItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acllog-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcllogItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AcllogItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::AcllogItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AcllogItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::AcllogItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AcllogItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AcllogItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items")
        return true;
    return false;
}

System::AcllogItems::InstItems::InstItems()
    :
    log_items(std::make_shared<System::AcllogItems::InstItems::LogItems>())
{
    log_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "acllog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcllogItems::InstItems::~InstItems()
{
}

bool System::AcllogItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return (log_items !=  nullptr && log_items->has_data());
}

bool System::AcllogItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| (log_items !=  nullptr && log_items->has_operation());
}

std::string System::AcllogItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acllog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcllogItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcllogItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AcllogItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-items")
    {
        if(log_items == nullptr)
        {
            log_items = std::make_shared<System::AcllogItems::InstItems::LogItems>();
        }
        return log_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AcllogItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log_items != nullptr)
    {
        _children["log-items"] = log_items;
    }

    return _children;
}

void System::AcllogItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AcllogItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AcllogItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-items")
        return true;
    return false;
}

System::AcllogItems::InstItems::LogItems::LogItems()
    :
    interval{YType::str, "interval"},
    matchlevel{YType::uint8, "matchLevel"},
    loglevel{YType::uint8, "logLevel"}
{

    yang_name = "log-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcllogItems::InstItems::LogItems::~LogItems()
{
}

bool System::AcllogItems::InstItems::LogItems::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| matchlevel.is_set
	|| loglevel.is_set;
}

bool System::AcllogItems::InstItems::LogItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(matchlevel.yfilter)
	|| ydk::is_set(loglevel.yfilter);
}

std::string System::AcllogItems::InstItems::LogItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acllog-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcllogItems::InstItems::LogItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcllogItems::InstItems::LogItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (matchlevel.is_set || is_set(matchlevel.yfilter)) leaf_name_data.push_back(matchlevel.get_name_leafdata());
    if (loglevel.is_set || is_set(loglevel.yfilter)) leaf_name_data.push_back(loglevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AcllogItems::InstItems::LogItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AcllogItems::InstItems::LogItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AcllogItems::InstItems::LogItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchLevel")
    {
        matchlevel = value;
        matchlevel.value_namespace = name_space;
        matchlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logLevel")
    {
        loglevel = value;
        loglevel.value_namespace = name_space;
        loglevel.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcllogItems::InstItems::LogItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "matchLevel")
    {
        matchlevel.yfilter = yfilter;
    }
    if(value_path == "logLevel")
    {
        loglevel.yfilter = yfilter;
    }
}

bool System::AcllogItems::InstItems::LogItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "matchLevel" || name == "logLevel")
        return true;
    return false;
}

System::BdItems::BdItems()
    :
    descr{YType::str, "descr"},
    sysdefaultsviautostate{YType::enumeration, "sysDefaultSVIAutostate"}
        ,
    vlanconfig_items(std::make_shared<System::BdItems::VlanconfigItems>())
    , bd_items(std::make_shared<System::BdItems::BdItems_>())
    , vlan_items(std::make_shared<System::BdItems::VlanItems>())
    , vxlan_items(std::make_shared<System::BdItems::VxlanItems>())
    , resvlan_items(std::make_shared<System::BdItems::ResvlanItems>())
{
    vlanconfig_items->parent = this;
    bd_items->parent = this;
    vlan_items->parent = this;
    vxlan_items->parent = this;
    resvlan_items->parent = this;

    yang_name = "bd-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::~BdItems()
{
}

bool System::BdItems::has_data() const
{
    if (is_presence_container) return true;
    return descr.is_set
	|| sysdefaultsviautostate.is_set
	|| (vlanconfig_items !=  nullptr && vlanconfig_items->has_data())
	|| (bd_items !=  nullptr && bd_items->has_data())
	|| (vlan_items !=  nullptr && vlan_items->has_data())
	|| (vxlan_items !=  nullptr && vxlan_items->has_data())
	|| (resvlan_items !=  nullptr && resvlan_items->has_data());
}

bool System::BdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(sysdefaultsviautostate.yfilter)
	|| (vlanconfig_items !=  nullptr && vlanconfig_items->has_operation())
	|| (bd_items !=  nullptr && bd_items->has_operation())
	|| (vlan_items !=  nullptr && vlan_items->has_operation())
	|| (vxlan_items !=  nullptr && vxlan_items->has_operation())
	|| (resvlan_items !=  nullptr && resvlan_items->has_operation());
}

std::string System::BdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (sysdefaultsviautostate.is_set || is_set(sysdefaultsviautostate.yfilter)) leaf_name_data.push_back(sysdefaultsviautostate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlanconfig-items")
    {
        if(vlanconfig_items == nullptr)
        {
            vlanconfig_items = std::make_shared<System::BdItems::VlanconfigItems>();
        }
        return vlanconfig_items;
    }

    if(child_yang_name == "bd-items")
    {
        if(bd_items == nullptr)
        {
            bd_items = std::make_shared<System::BdItems::BdItems_>();
        }
        return bd_items;
    }

    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::BdItems::VlanItems>();
        }
        return vlan_items;
    }

    if(child_yang_name == "vxlan-items")
    {
        if(vxlan_items == nullptr)
        {
            vxlan_items = std::make_shared<System::BdItems::VxlanItems>();
        }
        return vxlan_items;
    }

    if(child_yang_name == "resvlan-items")
    {
        if(resvlan_items == nullptr)
        {
            resvlan_items = std::make_shared<System::BdItems::ResvlanItems>();
        }
        return resvlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlanconfig_items != nullptr)
    {
        _children["vlanconfig-items"] = vlanconfig_items;
    }

    if(bd_items != nullptr)
    {
        _children["bd-items"] = bd_items;
    }

    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    if(vxlan_items != nullptr)
    {
        _children["vxlan-items"] = vxlan_items;
    }

    if(resvlan_items != nullptr)
    {
        _children["resvlan-items"] = resvlan_items;
    }

    return _children;
}

void System::BdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysDefaultSVIAutostate")
    {
        sysdefaultsviautostate = value;
        sysdefaultsviautostate.value_namespace = name_space;
        sysdefaultsviautostate.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "sysDefaultSVIAutostate")
    {
        sysdefaultsviautostate.yfilter = yfilter;
    }
}

bool System::BdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanconfig-items" || name == "bd-items" || name == "vlan-items" || name == "vxlan-items" || name == "resvlan-items" || name == "descr" || name == "sysDefaultSVIAutostate")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanconfigItems()
    :
    vlanconfig_list(this, {"accencap"})
{

    yang_name = "vlanconfig-items"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VlanconfigItems::~VlanconfigItems()
{
}

bool System::BdItems::VlanconfigItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanconfig_list.len(); index++)
    {
        if(vlanconfig_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::has_operation() const
{
    for (std::size_t index=0; index<vlanconfig_list.len(); index++)
    {
        if(vlanconfig_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VlanconfigItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanconfig-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanConfig-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList>();
        ent_->parent = this;
        vlanconfig_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlanconfig_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanConfig-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::VlanConfigList()
    :
    accencap{YType::str, "accEncap"},
    vlanmaclearn{YType::enumeration, "vlanMacLearn"}
        ,
    ipqos_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems>())
{
    ipqos_items->parent = this;

    yang_name = "VlanConfig-list"; yang_parent_name = "vlanconfig-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VlanconfigItems::VlanConfigList::~VlanConfigList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::has_data() const
{
    if (is_presence_container) return true;
    return accencap.is_set
	|| vlanmaclearn.is_set
	|| (ipqos_items !=  nullptr && ipqos_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accencap.yfilter)
	|| ydk::is_set(vlanmaclearn.yfilter)
	|| (ipqos_items !=  nullptr && ipqos_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/vlanconfig-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanConfig-list";
    ADD_KEY_TOKEN(accencap, "accEncap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accencap.is_set || is_set(accencap.yfilter)) leaf_name_data.push_back(accencap.get_name_leafdata());
    if (vlanmaclearn.is_set || is_set(vlanmaclearn.yfilter)) leaf_name_data.push_back(vlanmaclearn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipqos-items")
    {
        if(ipqos_items == nullptr)
        {
            ipqos_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems>();
        }
        return ipqos_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipqos_items != nullptr)
    {
        _children["ipqos-items"] = ipqos_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accEncap")
    {
        accencap = value;
        accencap.value_namespace = name_space;
        accencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanMacLearn")
    {
        vlanmaclearn = value;
        vlanmaclearn.value_namespace = name_space;
        vlanmaclearn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accEncap")
    {
        accencap.yfilter = yfilter;
    }
    if(value_path == "vlanMacLearn")
    {
        vlanmaclearn.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipqos-items" || name == "accEncap" || name == "vlanMacLearn")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::IpqosItems()
    :
    statsstate{YType::enumeration, "statsState"},
    qospoliciesstatsstate{YType::enumeration, "qosPoliciesStatsState"}
        ,
    statclear_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems>())
    , queuing_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems>())
    , nw_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems>())
    , dflt_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems>())
    , globalpriorflowctrl_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::GlobalpriorflowctrlItems>())
{
    statclear_items->parent = this;
    queuing_items->parent = this;
    nw_items->parent = this;
    dflt_items->parent = this;
    globalpriorflowctrl_items->parent = this;

    yang_name = "ipqos-items"; yang_parent_name = "VlanConfig-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::~IpqosItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::has_data() const
{
    if (is_presence_container) return true;
    return statsstate.is_set
	|| qospoliciesstatsstate.is_set
	|| (statclear_items !=  nullptr && statclear_items->has_data())
	|| (queuing_items !=  nullptr && queuing_items->has_data())
	|| (nw_items !=  nullptr && nw_items->has_data())
	|| (dflt_items !=  nullptr && dflt_items->has_data())
	|| (globalpriorflowctrl_items !=  nullptr && globalpriorflowctrl_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statsstate.yfilter)
	|| ydk::is_set(qospoliciesstatsstate.yfilter)
	|| (statclear_items !=  nullptr && statclear_items->has_operation())
	|| (queuing_items !=  nullptr && queuing_items->has_operation())
	|| (nw_items !=  nullptr && nw_items->has_operation())
	|| (dflt_items !=  nullptr && dflt_items->has_operation())
	|| (globalpriorflowctrl_items !=  nullptr && globalpriorflowctrl_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipqos-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statsstate.is_set || is_set(statsstate.yfilter)) leaf_name_data.push_back(statsstate.get_name_leafdata());
    if (qospoliciesstatsstate.is_set || is_set(qospoliciesstatsstate.yfilter)) leaf_name_data.push_back(qospoliciesstatsstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statClear-items")
    {
        if(statclear_items == nullptr)
        {
            statclear_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems>();
        }
        return statclear_items;
    }

    if(child_yang_name == "queuing-items")
    {
        if(queuing_items == nullptr)
        {
            queuing_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems>();
        }
        return queuing_items;
    }

    if(child_yang_name == "nw-items")
    {
        if(nw_items == nullptr)
        {
            nw_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems>();
        }
        return nw_items;
    }

    if(child_yang_name == "dflt-items")
    {
        if(dflt_items == nullptr)
        {
            dflt_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems>();
        }
        return dflt_items;
    }

    if(child_yang_name == "globalpriorflowctrl-items")
    {
        if(globalpriorflowctrl_items == nullptr)
        {
            globalpriorflowctrl_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::GlobalpriorflowctrlItems>();
        }
        return globalpriorflowctrl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statclear_items != nullptr)
    {
        _children["statClear-items"] = statclear_items;
    }

    if(queuing_items != nullptr)
    {
        _children["queuing-items"] = queuing_items;
    }

    if(nw_items != nullptr)
    {
        _children["nw-items"] = nw_items;
    }

    if(dflt_items != nullptr)
    {
        _children["dflt-items"] = dflt_items;
    }

    if(globalpriorflowctrl_items != nullptr)
    {
        _children["globalpriorflowctrl-items"] = globalpriorflowctrl_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statsState")
    {
        statsstate = value;
        statsstate.value_namespace = name_space;
        statsstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosPoliciesStatsState")
    {
        qospoliciesstatsstate = value;
        qospoliciesstatsstate.value_namespace = name_space;
        qospoliciesstatsstate.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statsState")
    {
        statsstate.yfilter = yfilter;
    }
    if(value_path == "qosPoliciesStatsState")
    {
        qospoliciesstatsstate.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statClear-items" || name == "queuing-items" || name == "nw-items" || name == "dflt-items" || name == "globalpriorflowctrl-items" || name == "statsState" || name == "qosPoliciesStatsState")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::StatClearItems()
    :
    pmaptype{YType::enumeration, "pmapType"},
    direction{YType::enumeration, "direction"},
    ethernet{YType::str, "ethernet"},
    vlan{YType::str, "vlan"},
    portchan{YType::str, "portChan"},
    timestamp{YType::str, "timeStamp"}
{

    yang_name = "statClear-items"; yang_parent_name = "ipqos-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::~StatClearItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::has_data() const
{
    if (is_presence_container) return true;
    return pmaptype.is_set
	|| direction.is_set
	|| ethernet.is_set
	|| vlan.is_set
	|| portchan.is_set
	|| timestamp.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pmaptype.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(portchan.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statClear-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pmaptype.is_set || is_set(pmaptype.yfilter)) leaf_name_data.push_back(pmaptype.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (portchan.is_set || is_set(portchan.yfilter)) leaf_name_data.push_back(portchan.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pmapType")
    {
        pmaptype = value;
        pmaptype.value_namespace = name_space;
        pmaptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portChan")
    {
        portchan = value;
        portchan.value_namespace = name_space;
        portchan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeStamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pmapType")
    {
        pmaptype.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "portChan")
    {
        portchan.yfilter = yfilter;
    }
    if(value_path == "timeStamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmapType" || name == "direction" || name == "ethernet" || name == "vlan" || name == "portChan" || name == "timeStamp")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::QueuingItems()
    :
    policy_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems>())
    , c_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems>())
    , p_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems>())
    , copypmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems>())
{
    policy_items->parent = this;
    c_items->parent = this;
    p_items->parent = this;
    copypmap_items->parent = this;

    yang_name = "queuing-items"; yang_parent_name = "ipqos-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::~QueuingItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::has_data() const
{
    if (is_presence_container) return true;
    return (policy_items !=  nullptr && policy_items->has_data())
	|| (c_items !=  nullptr && c_items->has_data())
	|| (p_items !=  nullptr && p_items->has_data())
	|| (copypmap_items !=  nullptr && copypmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::has_operation() const
{
    return is_set(yfilter)
	|| (policy_items !=  nullptr && policy_items->has_operation())
	|| (c_items !=  nullptr && c_items->has_operation())
	|| (p_items !=  nullptr && p_items->has_operation())
	|| (copypmap_items !=  nullptr && copypmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queuing-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems>();
        }
        return policy_items;
    }

    if(child_yang_name == "c-items")
    {
        if(c_items == nullptr)
        {
            c_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems>();
        }
        return c_items;
    }

    if(child_yang_name == "p-items")
    {
        if(p_items == nullptr)
        {
            p_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems>();
        }
        return p_items;
    }

    if(child_yang_name == "copyPMap-items")
    {
        if(copypmap_items == nullptr)
        {
            copypmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems>();
        }
        return copypmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_items != nullptr)
    {
        _children["policy-items"] = policy_items;
    }

    if(c_items != nullptr)
    {
        _children["c-items"] = c_items;
    }

    if(p_items != nullptr)
    {
        _children["p-items"] = p_items;
    }

    if(copypmap_items != nullptr)
    {
        _children["copyPMap-items"] = copypmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-items" || name == "c-items" || name == "p-items" || name == "copyPMap-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::PolicyItems()
    :
    in_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems>())
    , out_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems>())
{
    in_items->parent = this;
    out_items->parent = this;

    yang_name = "policy-items"; yang_parent_name = "queuing-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::~PolicyItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    return (in_items !=  nullptr && in_items->has_data())
	|| (out_items !=  nullptr && out_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::has_operation() const
{
    return is_set(yfilter)
	|| (in_items !=  nullptr && in_items->has_operation())
	|| (out_items !=  nullptr && out_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-items")
    {
        if(in_items == nullptr)
        {
            in_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems>();
        }
        return in_items;
    }

    if(child_yang_name == "out-items")
    {
        if(out_items == nullptr)
        {
            out_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems>();
        }
        return out_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in_items != nullptr)
    {
        _children["in-items"] = in_items;
    }

    if(out_items != nullptr)
    {
        _children["out-items"] = out_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-items" || name == "out-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::InItems()
    :
    intf_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems>())
    , sys_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems>())
    , pmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems>())
{
    intf_items->parent = this;
    sys_items->parent = this;
    pmap_items->parent = this;

    yang_name = "in-items"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::~InItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (sys_items !=  nullptr && sys_items->has_data())
	|| (pmap_items !=  nullptr && pmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (sys_items !=  nullptr && sys_items->has_operation())
	|| (pmap_items !=  nullptr && pmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "sys-items")
    {
        if(sys_items == nullptr)
        {
            sys_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems>();
        }
        return sys_items;
    }

    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems>();
        }
        return pmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    if(sys_items != nullptr)
    {
        _children["sys-items"] = sys_items;
    }

    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "sys-items" || name == "pmap-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IntfItems()
    :
    if_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "in-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::~IntfItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::get_children() const
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::IfList()
    :
    name{YType::str, "name"},
    delintfbit{YType::boolean, "delIntfBit"}
        ,
    pmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems>())
    , cmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems>())
    , quecmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems>())
{
    pmap_items->parent = this;
    cmap_items->parent = this;
    quecmap_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::~IfList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| delintfbit.is_set
	|| (pmap_items !=  nullptr && pmap_items->has_data())
	|| (cmap_items !=  nullptr && cmap_items->has_data())
	|| (quecmap_items !=  nullptr && quecmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delintfbit.yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation())
	|| (cmap_items !=  nullptr && cmap_items->has_operation())
	|| (quecmap_items !=  nullptr && quecmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delintfbit.is_set || is_set(delintfbit.yfilter)) leaf_name_data.push_back(delintfbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems>();
        }
        return pmap_items;
    }

    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems>();
        }
        return cmap_items;
    }

    if(child_yang_name == "queCmap-items")
    {
        if(quecmap_items == nullptr)
        {
            quecmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems>();
        }
        return quecmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    if(cmap_items != nullptr)
    {
        _children["cmap-items"] = cmap_items;
    }

    if(quecmap_items != nullptr)
    {
        _children["queCmap-items"] = quecmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit = value;
        delintfbit.value_namespace = name_space;
        delintfbit.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items" || name == "cmap-items" || name == "queCmap-items" || name == "name" || name == "delIntfBit")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::~PmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::CmapItems()
    :
    stats_list(this, {"cmapname", "stattype"})
{

    yang_name = "cmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::~CmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Stats-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList>();
        ent_->parent = this;
        stats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Stats-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::StatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    conformbytes{YType::uint64, "conformBytes"},
    exceedbytes{YType::uint64, "exceedBytes"},
    violatebytes{YType::uint64, "violateBytes"}
{

    yang_name = "Stats-list"; yang_parent_name = "cmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::~StatsList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| conformbytes.is_set
	|| exceedbytes.is_set
	|| violatebytes.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(conformbytes.yfilter)
	|| ydk::is_set(exceedbytes.yfilter)
	|| ydk::is_set(violatebytes.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Stats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (conformbytes.is_set || is_set(conformbytes.yfilter)) leaf_name_data.push_back(conformbytes.get_name_leafdata());
    if (exceedbytes.is_set || is_set(exceedbytes.yfilter)) leaf_name_data.push_back(exceedbytes.get_name_leafdata());
    if (violatebytes.is_set || is_set(violatebytes.yfilter)) leaf_name_data.push_back(violatebytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformBytes")
    {
        conformbytes = value;
        conformbytes.value_namespace = name_space;
        conformbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes = value;
        exceedbytes.value_namespace = name_space;
        exceedbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateBytes")
    {
        violatebytes = value;
        violatebytes.value_namespace = name_space;
        violatebytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "conformBytes")
    {
        conformbytes.yfilter = yfilter;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes.yfilter = yfilter;
    }
    if(value_path == "violateBytes")
    {
        violatebytes.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "conformBytes" || name == "exceedBytes" || name == "violateBytes")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueCmapItems()
    :
    queuingstats_list(this, {"cmapname", "stattype"})
{

    yang_name = "queCmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::~QueCmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::has_operation() const
{
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queCmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QueuingStats-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList>();
        ent_->parent = this;
        queuingstats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : queuingstats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QueuingStats-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::QueuingStatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    currqueuedepth{YType::uint64, "currQueueDepth"},
    maxqueuedepth{YType::uint64, "maxQueueDepth"},
    ingqdroppackets{YType::uint64, "ingQDropPackets"},
    ingqdepthbytes{YType::uint64, "ingQDepthBytes"},
    randdropbytes{YType::uint64, "randDropBytes"},
    randdroppackets{YType::uint64, "randDropPackets"},
    randecnmarkedpackets{YType::uint64, "randEcnMarkedPackets"},
    pfctxppp{YType::uint64, "pfcTxPpp"},
    pfcrxppp{YType::uint64, "pfcRxPpp"},
    pfcwdshutdowncount{YType::uint64, "pfcwdShutdownCount"},
    pfcwdrestoredcount{YType::uint64, "pfcwdRestoredCount"},
    pfcwdflushedpackets{YType::uint64, "pfcwdFlushedPackets"}
{

    yang_name = "QueuingStats-list"; yang_parent_name = "queCmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::~QueuingStatsList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| currqueuedepth.is_set
	|| maxqueuedepth.is_set
	|| ingqdroppackets.is_set
	|| ingqdepthbytes.is_set
	|| randdropbytes.is_set
	|| randdroppackets.is_set
	|| randecnmarkedpackets.is_set
	|| pfctxppp.is_set
	|| pfcrxppp.is_set
	|| pfcwdshutdowncount.is_set
	|| pfcwdrestoredcount.is_set
	|| pfcwdflushedpackets.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(currqueuedepth.yfilter)
	|| ydk::is_set(maxqueuedepth.yfilter)
	|| ydk::is_set(ingqdroppackets.yfilter)
	|| ydk::is_set(ingqdepthbytes.yfilter)
	|| ydk::is_set(randdropbytes.yfilter)
	|| ydk::is_set(randdroppackets.yfilter)
	|| ydk::is_set(randecnmarkedpackets.yfilter)
	|| ydk::is_set(pfctxppp.yfilter)
	|| ydk::is_set(pfcrxppp.yfilter)
	|| ydk::is_set(pfcwdshutdowncount.yfilter)
	|| ydk::is_set(pfcwdrestoredcount.yfilter)
	|| ydk::is_set(pfcwdflushedpackets.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QueuingStats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (currqueuedepth.is_set || is_set(currqueuedepth.yfilter)) leaf_name_data.push_back(currqueuedepth.get_name_leafdata());
    if (maxqueuedepth.is_set || is_set(maxqueuedepth.yfilter)) leaf_name_data.push_back(maxqueuedepth.get_name_leafdata());
    if (ingqdroppackets.is_set || is_set(ingqdroppackets.yfilter)) leaf_name_data.push_back(ingqdroppackets.get_name_leafdata());
    if (ingqdepthbytes.is_set || is_set(ingqdepthbytes.yfilter)) leaf_name_data.push_back(ingqdepthbytes.get_name_leafdata());
    if (randdropbytes.is_set || is_set(randdropbytes.yfilter)) leaf_name_data.push_back(randdropbytes.get_name_leafdata());
    if (randdroppackets.is_set || is_set(randdroppackets.yfilter)) leaf_name_data.push_back(randdroppackets.get_name_leafdata());
    if (randecnmarkedpackets.is_set || is_set(randecnmarkedpackets.yfilter)) leaf_name_data.push_back(randecnmarkedpackets.get_name_leafdata());
    if (pfctxppp.is_set || is_set(pfctxppp.yfilter)) leaf_name_data.push_back(pfctxppp.get_name_leafdata());
    if (pfcrxppp.is_set || is_set(pfcrxppp.yfilter)) leaf_name_data.push_back(pfcrxppp.get_name_leafdata());
    if (pfcwdshutdowncount.is_set || is_set(pfcwdshutdowncount.yfilter)) leaf_name_data.push_back(pfcwdshutdowncount.get_name_leafdata());
    if (pfcwdrestoredcount.is_set || is_set(pfcwdrestoredcount.yfilter)) leaf_name_data.push_back(pfcwdrestoredcount.get_name_leafdata());
    if (pfcwdflushedpackets.is_set || is_set(pfcwdflushedpackets.yfilter)) leaf_name_data.push_back(pfcwdflushedpackets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth = value;
        currqueuedepth.value_namespace = name_space;
        currqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth = value;
        maxqueuedepth.value_namespace = name_space;
        maxqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets = value;
        ingqdroppackets.value_namespace = name_space;
        ingqdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes = value;
        ingqdepthbytes.value_namespace = name_space;
        ingqdepthbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes = value;
        randdropbytes.value_namespace = name_space;
        randdropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets = value;
        randdroppackets.value_namespace = name_space;
        randdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets = value;
        randecnmarkedpackets.value_namespace = name_space;
        randecnmarkedpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp = value;
        pfctxppp.value_namespace = name_space;
        pfctxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp = value;
        pfcrxppp.value_namespace = name_space;
        pfcrxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount = value;
        pfcwdshutdowncount.value_namespace = name_space;
        pfcwdshutdowncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount = value;
        pfcwdrestoredcount.value_namespace = name_space;
        pfcwdrestoredcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets = value;
        pfcwdflushedpackets.value_namespace = name_space;
        pfcwdflushedpackets.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth.yfilter = yfilter;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth.yfilter = yfilter;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets.yfilter = yfilter;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes.yfilter = yfilter;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes.yfilter = yfilter;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets.yfilter = yfilter;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets.yfilter = yfilter;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp.yfilter = yfilter;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp.yfilter = yfilter;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount.yfilter = yfilter;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount.yfilter = yfilter;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "currQueueDepth" || name == "maxQueueDepth" || name == "ingQDropPackets" || name == "ingQDepthBytes" || name == "randDropBytes" || name == "randDropPackets" || name == "randEcnMarkedPackets" || name == "pfcTxPpp" || name == "pfcRxPpp" || name == "pfcwdShutdownCount" || name == "pfcwdRestoredCount" || name == "pfcwdFlushedPackets")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::SysItems()
    :
    pmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems>())
{
    pmap_items->parent = this;

    yang_name = "sys-items"; yang_parent_name = "in-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::~SysItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::has_data() const
{
    if (is_presence_container) return true;
    return (pmap_items !=  nullptr && pmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::has_operation() const
{
    return is_set(yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems>();
        }
        return pmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "sys-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::~PmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "in-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::~PmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::OutItems()
    :
    intf_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems>())
    , sys_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems>())
    , pmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems>())
{
    intf_items->parent = this;
    sys_items->parent = this;
    pmap_items->parent = this;

    yang_name = "out-items"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::~OutItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (sys_items !=  nullptr && sys_items->has_data())
	|| (pmap_items !=  nullptr && pmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (sys_items !=  nullptr && sys_items->has_operation())
	|| (pmap_items !=  nullptr && pmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "sys-items")
    {
        if(sys_items == nullptr)
        {
            sys_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems>();
        }
        return sys_items;
    }

    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems>();
        }
        return pmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    if(sys_items != nullptr)
    {
        _children["sys-items"] = sys_items;
    }

    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "sys-items" || name == "pmap-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IntfItems()
    :
    if_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "out-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::~IntfItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::get_children() const
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::IfList()
    :
    name{YType::str, "name"},
    delintfbit{YType::boolean, "delIntfBit"}
        ,
    pmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems>())
    , cmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems>())
    , quecmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems>())
{
    pmap_items->parent = this;
    cmap_items->parent = this;
    quecmap_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::~IfList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| delintfbit.is_set
	|| (pmap_items !=  nullptr && pmap_items->has_data())
	|| (cmap_items !=  nullptr && cmap_items->has_data())
	|| (quecmap_items !=  nullptr && quecmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delintfbit.yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation())
	|| (cmap_items !=  nullptr && cmap_items->has_operation())
	|| (quecmap_items !=  nullptr && quecmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delintfbit.is_set || is_set(delintfbit.yfilter)) leaf_name_data.push_back(delintfbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems>();
        }
        return pmap_items;
    }

    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems>();
        }
        return cmap_items;
    }

    if(child_yang_name == "queCmap-items")
    {
        if(quecmap_items == nullptr)
        {
            quecmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems>();
        }
        return quecmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    if(cmap_items != nullptr)
    {
        _children["cmap-items"] = cmap_items;
    }

    if(quecmap_items != nullptr)
    {
        _children["queCmap-items"] = quecmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit = value;
        delintfbit.value_namespace = name_space;
        delintfbit.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items" || name == "cmap-items" || name == "queCmap-items" || name == "name" || name == "delIntfBit")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::~PmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::CmapItems()
    :
    stats_list(this, {"cmapname", "stattype"})
{

    yang_name = "cmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::~CmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Stats-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList>();
        ent_->parent = this;
        stats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Stats-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::StatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    conformbytes{YType::uint64, "conformBytes"},
    exceedbytes{YType::uint64, "exceedBytes"},
    violatebytes{YType::uint64, "violateBytes"}
{

    yang_name = "Stats-list"; yang_parent_name = "cmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::~StatsList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| conformbytes.is_set
	|| exceedbytes.is_set
	|| violatebytes.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(conformbytes.yfilter)
	|| ydk::is_set(exceedbytes.yfilter)
	|| ydk::is_set(violatebytes.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Stats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (conformbytes.is_set || is_set(conformbytes.yfilter)) leaf_name_data.push_back(conformbytes.get_name_leafdata());
    if (exceedbytes.is_set || is_set(exceedbytes.yfilter)) leaf_name_data.push_back(exceedbytes.get_name_leafdata());
    if (violatebytes.is_set || is_set(violatebytes.yfilter)) leaf_name_data.push_back(violatebytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformBytes")
    {
        conformbytes = value;
        conformbytes.value_namespace = name_space;
        conformbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes = value;
        exceedbytes.value_namespace = name_space;
        exceedbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateBytes")
    {
        violatebytes = value;
        violatebytes.value_namespace = name_space;
        violatebytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "conformBytes")
    {
        conformbytes.yfilter = yfilter;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes.yfilter = yfilter;
    }
    if(value_path == "violateBytes")
    {
        violatebytes.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "conformBytes" || name == "exceedBytes" || name == "violateBytes")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueCmapItems()
    :
    queuingstats_list(this, {"cmapname", "stattype"})
{

    yang_name = "queCmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::~QueCmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::has_operation() const
{
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queCmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QueuingStats-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList>();
        ent_->parent = this;
        queuingstats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : queuingstats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QueuingStats-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::QueuingStatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    currqueuedepth{YType::uint64, "currQueueDepth"},
    maxqueuedepth{YType::uint64, "maxQueueDepth"},
    ingqdroppackets{YType::uint64, "ingQDropPackets"},
    ingqdepthbytes{YType::uint64, "ingQDepthBytes"},
    randdropbytes{YType::uint64, "randDropBytes"},
    randdroppackets{YType::uint64, "randDropPackets"},
    randecnmarkedpackets{YType::uint64, "randEcnMarkedPackets"},
    pfctxppp{YType::uint64, "pfcTxPpp"},
    pfcrxppp{YType::uint64, "pfcRxPpp"},
    pfcwdshutdowncount{YType::uint64, "pfcwdShutdownCount"},
    pfcwdrestoredcount{YType::uint64, "pfcwdRestoredCount"},
    pfcwdflushedpackets{YType::uint64, "pfcwdFlushedPackets"}
{

    yang_name = "QueuingStats-list"; yang_parent_name = "queCmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::~QueuingStatsList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| currqueuedepth.is_set
	|| maxqueuedepth.is_set
	|| ingqdroppackets.is_set
	|| ingqdepthbytes.is_set
	|| randdropbytes.is_set
	|| randdroppackets.is_set
	|| randecnmarkedpackets.is_set
	|| pfctxppp.is_set
	|| pfcrxppp.is_set
	|| pfcwdshutdowncount.is_set
	|| pfcwdrestoredcount.is_set
	|| pfcwdflushedpackets.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(currqueuedepth.yfilter)
	|| ydk::is_set(maxqueuedepth.yfilter)
	|| ydk::is_set(ingqdroppackets.yfilter)
	|| ydk::is_set(ingqdepthbytes.yfilter)
	|| ydk::is_set(randdropbytes.yfilter)
	|| ydk::is_set(randdroppackets.yfilter)
	|| ydk::is_set(randecnmarkedpackets.yfilter)
	|| ydk::is_set(pfctxppp.yfilter)
	|| ydk::is_set(pfcrxppp.yfilter)
	|| ydk::is_set(pfcwdshutdowncount.yfilter)
	|| ydk::is_set(pfcwdrestoredcount.yfilter)
	|| ydk::is_set(pfcwdflushedpackets.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QueuingStats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (currqueuedepth.is_set || is_set(currqueuedepth.yfilter)) leaf_name_data.push_back(currqueuedepth.get_name_leafdata());
    if (maxqueuedepth.is_set || is_set(maxqueuedepth.yfilter)) leaf_name_data.push_back(maxqueuedepth.get_name_leafdata());
    if (ingqdroppackets.is_set || is_set(ingqdroppackets.yfilter)) leaf_name_data.push_back(ingqdroppackets.get_name_leafdata());
    if (ingqdepthbytes.is_set || is_set(ingqdepthbytes.yfilter)) leaf_name_data.push_back(ingqdepthbytes.get_name_leafdata());
    if (randdropbytes.is_set || is_set(randdropbytes.yfilter)) leaf_name_data.push_back(randdropbytes.get_name_leafdata());
    if (randdroppackets.is_set || is_set(randdroppackets.yfilter)) leaf_name_data.push_back(randdroppackets.get_name_leafdata());
    if (randecnmarkedpackets.is_set || is_set(randecnmarkedpackets.yfilter)) leaf_name_data.push_back(randecnmarkedpackets.get_name_leafdata());
    if (pfctxppp.is_set || is_set(pfctxppp.yfilter)) leaf_name_data.push_back(pfctxppp.get_name_leafdata());
    if (pfcrxppp.is_set || is_set(pfcrxppp.yfilter)) leaf_name_data.push_back(pfcrxppp.get_name_leafdata());
    if (pfcwdshutdowncount.is_set || is_set(pfcwdshutdowncount.yfilter)) leaf_name_data.push_back(pfcwdshutdowncount.get_name_leafdata());
    if (pfcwdrestoredcount.is_set || is_set(pfcwdrestoredcount.yfilter)) leaf_name_data.push_back(pfcwdrestoredcount.get_name_leafdata());
    if (pfcwdflushedpackets.is_set || is_set(pfcwdflushedpackets.yfilter)) leaf_name_data.push_back(pfcwdflushedpackets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth = value;
        currqueuedepth.value_namespace = name_space;
        currqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth = value;
        maxqueuedepth.value_namespace = name_space;
        maxqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets = value;
        ingqdroppackets.value_namespace = name_space;
        ingqdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes = value;
        ingqdepthbytes.value_namespace = name_space;
        ingqdepthbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes = value;
        randdropbytes.value_namespace = name_space;
        randdropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets = value;
        randdroppackets.value_namespace = name_space;
        randdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets = value;
        randecnmarkedpackets.value_namespace = name_space;
        randecnmarkedpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp = value;
        pfctxppp.value_namespace = name_space;
        pfctxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp = value;
        pfcrxppp.value_namespace = name_space;
        pfcrxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount = value;
        pfcwdshutdowncount.value_namespace = name_space;
        pfcwdshutdowncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount = value;
        pfcwdrestoredcount.value_namespace = name_space;
        pfcwdrestoredcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets = value;
        pfcwdflushedpackets.value_namespace = name_space;
        pfcwdflushedpackets.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth.yfilter = yfilter;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth.yfilter = yfilter;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets.yfilter = yfilter;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes.yfilter = yfilter;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes.yfilter = yfilter;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets.yfilter = yfilter;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets.yfilter = yfilter;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp.yfilter = yfilter;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp.yfilter = yfilter;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount.yfilter = yfilter;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount.yfilter = yfilter;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "currQueueDepth" || name == "maxQueueDepth" || name == "ingQDropPackets" || name == "ingQDepthBytes" || name == "randDropBytes" || name == "randDropPackets" || name == "randEcnMarkedPackets" || name == "pfcTxPpp" || name == "pfcRxPpp" || name == "pfcwdShutdownCount" || name == "pfcwdRestoredCount" || name == "pfcwdFlushedPackets")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::SysItems()
    :
    pmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems>())
{
    pmap_items->parent = this;

    yang_name = "sys-items"; yang_parent_name = "out-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::~SysItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::has_data() const
{
    if (is_presence_container) return true;
    return (pmap_items !=  nullptr && pmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::has_operation() const
{
    return is_set(yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems>();
        }
        return pmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pmap_items != nullptr)
    {
        _children["pmap-items"] = pmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "sys-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::~PmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "out-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::~PmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        _children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::CItems()
    :
    name_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems>())
{
    name_items->parent = this;

    yang_name = "c-items"; yang_parent_name = "queuing-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::~CItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::has_data() const
{
    if (is_presence_container) return true;
    return (name_items !=  nullptr && name_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::has_operation() const
{
    return is_set(yfilter)
	|| (name_items !=  nullptr && name_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-items")
    {
        if(name_items == nullptr)
        {
            name_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems>();
        }
        return name_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_items != nullptr)
    {
        _children["name-items"] = name_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::NameItems()
    :
    cmapinst_list(this, {"name"})
{

    yang_name = "name-items"; yang_parent_name = "c-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::~NameItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmapinst_list.len(); index++)
    {
        if(cmapinst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::has_operation() const
{
    for (std::size_t index=0; index<cmapinst_list.len(); index++)
    {
        if(cmapinst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CMapInst-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList>();
        ent_->parent = this;
        cmapinst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmapinst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CMapInst-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CMapInstList()
    :
    name{YType::str, "name"},
    matchtype{YType::enumeration, "matchType"},
    configstatus{YType::uint32, "configStatus"}
        ,
    acl_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems>())
    , dscp_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems>())
    , iprtp_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems>())
    , packetlength_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems>())
    , cos_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems>())
    , mplsexperimental_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems>())
    , precedence_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems>())
    , protocol_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems>())
    , description_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems>())
    , dscpnot_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems>())
    , cosnot_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems>())
    , mplsexperimentalnot_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems>())
    , precedencenot_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems>())
    , protocolnot_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems>())
    , iprtpnot_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems>())
    , packetlengthnot_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems>())
    , grp_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems>())
    , rsclassmaptopolicymap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems>())
{
    acl_items->parent = this;
    dscp_items->parent = this;
    iprtp_items->parent = this;
    packetlength_items->parent = this;
    cos_items->parent = this;
    mplsexperimental_items->parent = this;
    precedence_items->parent = this;
    protocol_items->parent = this;
    description_items->parent = this;
    dscpnot_items->parent = this;
    cosnot_items->parent = this;
    mplsexperimentalnot_items->parent = this;
    precedencenot_items->parent = this;
    protocolnot_items->parent = this;
    iprtpnot_items->parent = this;
    packetlengthnot_items->parent = this;
    grp_items->parent = this;
    rsclassmaptopolicymap_items->parent = this;

    yang_name = "CMapInst-list"; yang_parent_name = "name-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::~CMapInstList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| matchtype.is_set
	|| configstatus.is_set
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (dscp_items !=  nullptr && dscp_items->has_data())
	|| (iprtp_items !=  nullptr && iprtp_items->has_data())
	|| (packetlength_items !=  nullptr && packetlength_items->has_data())
	|| (cos_items !=  nullptr && cos_items->has_data())
	|| (mplsexperimental_items !=  nullptr && mplsexperimental_items->has_data())
	|| (precedence_items !=  nullptr && precedence_items->has_data())
	|| (protocol_items !=  nullptr && protocol_items->has_data())
	|| (description_items !=  nullptr && description_items->has_data())
	|| (dscpnot_items !=  nullptr && dscpnot_items->has_data())
	|| (cosnot_items !=  nullptr && cosnot_items->has_data())
	|| (mplsexperimentalnot_items !=  nullptr && mplsexperimentalnot_items->has_data())
	|| (precedencenot_items !=  nullptr && precedencenot_items->has_data())
	|| (protocolnot_items !=  nullptr && protocolnot_items->has_data())
	|| (iprtpnot_items !=  nullptr && iprtpnot_items->has_data())
	|| (packetlengthnot_items !=  nullptr && packetlengthnot_items->has_data())
	|| (grp_items !=  nullptr && grp_items->has_data())
	|| (rsclassmaptopolicymap_items !=  nullptr && rsclassmaptopolicymap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(matchtype.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation())
	|| (dscp_items !=  nullptr && dscp_items->has_operation())
	|| (iprtp_items !=  nullptr && iprtp_items->has_operation())
	|| (packetlength_items !=  nullptr && packetlength_items->has_operation())
	|| (cos_items !=  nullptr && cos_items->has_operation())
	|| (mplsexperimental_items !=  nullptr && mplsexperimental_items->has_operation())
	|| (precedence_items !=  nullptr && precedence_items->has_operation())
	|| (protocol_items !=  nullptr && protocol_items->has_operation())
	|| (description_items !=  nullptr && description_items->has_operation())
	|| (dscpnot_items !=  nullptr && dscpnot_items->has_operation())
	|| (cosnot_items !=  nullptr && cosnot_items->has_operation())
	|| (mplsexperimentalnot_items !=  nullptr && mplsexperimentalnot_items->has_operation())
	|| (precedencenot_items !=  nullptr && precedencenot_items->has_operation())
	|| (protocolnot_items !=  nullptr && protocolnot_items->has_operation())
	|| (iprtpnot_items !=  nullptr && iprtpnot_items->has_operation())
	|| (packetlengthnot_items !=  nullptr && packetlengthnot_items->has_operation())
	|| (grp_items !=  nullptr && grp_items->has_operation())
	|| (rsclassmaptopolicymap_items !=  nullptr && rsclassmaptopolicymap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CMapInst-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (matchtype.is_set || is_set(matchtype.yfilter)) leaf_name_data.push_back(matchtype.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems>();
        }
        return acl_items;
    }

    if(child_yang_name == "dscp-items")
    {
        if(dscp_items == nullptr)
        {
            dscp_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems>();
        }
        return dscp_items;
    }

    if(child_yang_name == "ipRtp-items")
    {
        if(iprtp_items == nullptr)
        {
            iprtp_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems>();
        }
        return iprtp_items;
    }

    if(child_yang_name == "packetLength-items")
    {
        if(packetlength_items == nullptr)
        {
            packetlength_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems>();
        }
        return packetlength_items;
    }

    if(child_yang_name == "cos-items")
    {
        if(cos_items == nullptr)
        {
            cos_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems>();
        }
        return cos_items;
    }

    if(child_yang_name == "mplsExperimental-items")
    {
        if(mplsexperimental_items == nullptr)
        {
            mplsexperimental_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems>();
        }
        return mplsexperimental_items;
    }

    if(child_yang_name == "precedence-items")
    {
        if(precedence_items == nullptr)
        {
            precedence_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems>();
        }
        return precedence_items;
    }

    if(child_yang_name == "protocol-items")
    {
        if(protocol_items == nullptr)
        {
            protocol_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems>();
        }
        return protocol_items;
    }

    if(child_yang_name == "Description-items")
    {
        if(description_items == nullptr)
        {
            description_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems>();
        }
        return description_items;
    }

    if(child_yang_name == "dscpNot-items")
    {
        if(dscpnot_items == nullptr)
        {
            dscpnot_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems>();
        }
        return dscpnot_items;
    }

    if(child_yang_name == "cosNot-items")
    {
        if(cosnot_items == nullptr)
        {
            cosnot_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems>();
        }
        return cosnot_items;
    }

    if(child_yang_name == "mplsExperimentalNot-items")
    {
        if(mplsexperimentalnot_items == nullptr)
        {
            mplsexperimentalnot_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems>();
        }
        return mplsexperimentalnot_items;
    }

    if(child_yang_name == "precedenceNot-items")
    {
        if(precedencenot_items == nullptr)
        {
            precedencenot_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems>();
        }
        return precedencenot_items;
    }

    if(child_yang_name == "protocolNot-items")
    {
        if(protocolnot_items == nullptr)
        {
            protocolnot_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems>();
        }
        return protocolnot_items;
    }

    if(child_yang_name == "ipRtpNot-items")
    {
        if(iprtpnot_items == nullptr)
        {
            iprtpnot_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems>();
        }
        return iprtpnot_items;
    }

    if(child_yang_name == "packetLengthNot-items")
    {
        if(packetlengthnot_items == nullptr)
        {
            packetlengthnot_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems>();
        }
        return packetlengthnot_items;
    }

    if(child_yang_name == "grp-items")
    {
        if(grp_items == nullptr)
        {
            grp_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems>();
        }
        return grp_items;
    }

    if(child_yang_name == "rsclassMapToPolicyMap-items")
    {
        if(rsclassmaptopolicymap_items == nullptr)
        {
            rsclassmaptopolicymap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems>();
        }
        return rsclassmaptopolicymap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    if(dscp_items != nullptr)
    {
        _children["dscp-items"] = dscp_items;
    }

    if(iprtp_items != nullptr)
    {
        _children["ipRtp-items"] = iprtp_items;
    }

    if(packetlength_items != nullptr)
    {
        _children["packetLength-items"] = packetlength_items;
    }

    if(cos_items != nullptr)
    {
        _children["cos-items"] = cos_items;
    }

    if(mplsexperimental_items != nullptr)
    {
        _children["mplsExperimental-items"] = mplsexperimental_items;
    }

    if(precedence_items != nullptr)
    {
        _children["precedence-items"] = precedence_items;
    }

    if(protocol_items != nullptr)
    {
        _children["protocol-items"] = protocol_items;
    }

    if(description_items != nullptr)
    {
        _children["Description-items"] = description_items;
    }

    if(dscpnot_items != nullptr)
    {
        _children["dscpNot-items"] = dscpnot_items;
    }

    if(cosnot_items != nullptr)
    {
        _children["cosNot-items"] = cosnot_items;
    }

    if(mplsexperimentalnot_items != nullptr)
    {
        _children["mplsExperimentalNot-items"] = mplsexperimentalnot_items;
    }

    if(precedencenot_items != nullptr)
    {
        _children["precedenceNot-items"] = precedencenot_items;
    }

    if(protocolnot_items != nullptr)
    {
        _children["protocolNot-items"] = protocolnot_items;
    }

    if(iprtpnot_items != nullptr)
    {
        _children["ipRtpNot-items"] = iprtpnot_items;
    }

    if(packetlengthnot_items != nullptr)
    {
        _children["packetLengthNot-items"] = packetlengthnot_items;
    }

    if(grp_items != nullptr)
    {
        _children["grp-items"] = grp_items;
    }

    if(rsclassmaptopolicymap_items != nullptr)
    {
        _children["rsclassMapToPolicyMap-items"] = rsclassmaptopolicymap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "matchType")
    {
        matchtype.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "dscp-items" || name == "ipRtp-items" || name == "packetLength-items" || name == "cos-items" || name == "mplsExperimental-items" || name == "precedence-items" || name == "protocol-items" || name == "Description-items" || name == "dscpNot-items" || name == "cosNot-items" || name == "mplsExperimentalNot-items" || name == "precedenceNot-items" || name == "protocolNot-items" || name == "ipRtpNot-items" || name == "packetLengthNot-items" || name == "grp-items" || name == "rsclassMapToPolicyMap-items" || name == "name" || name == "matchType" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclItems()
    :
    acl_list(this, {"name"})
{

    yang_name = "acl-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::~AclItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acl_list.len(); index++)
    {
        if(acl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::has_operation() const
{
    for (std::size_t index=0; index<acl_list.len(); index++)
    {
        if(acl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Acl-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList>();
        ent_->parent = this;
        acl_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::get_children() const
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Acl-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::AclList()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Acl-list"; yang_parent_name = "acl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::~AclList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Acl-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpItems()
    :
    dscp_list(this, {"val"})
{

    yang_name = "dscp-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::~DscpItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dscp_list.len(); index++)
    {
        if(dscp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::has_operation() const
{
    for (std::size_t index=0; index<dscp_list.len(); index++)
    {
        if(dscp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dscp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList>();
        ent_->parent = this;
        dscp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dscp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dscp-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::DscpList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Dscp-list"; yang_parent_name = "dscp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::~DscpList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dscp-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::IpRtpItems()
    :
    configstatus{YType::uint32, "configStatus"},
    range{YType::str, "range"}
{

    yang_name = "ipRtp-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::~IpRtpItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set
	|| range.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipRtp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus" || name == "range")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::PacketLengthItems()
    :
    configstatus{YType::uint32, "configStatus"},
    range{YType::str, "range"}
{

    yang_name = "packetLength-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::~PacketLengthItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set
	|| range.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packetLength-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus" || name == "range")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosItems()
    :
    cos_list(this, {"val"})
{

    yang_name = "cos-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::~CosItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cos_list.len(); index++)
    {
        if(cos_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::has_operation() const
{
    for (std::size_t index=0; index<cos_list.len(); index++)
    {
        if(cos_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cos-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList>();
        ent_->parent = this;
        cos_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cos_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Cos-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::CosList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Cos-list"; yang_parent_name = "cos-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::~CosList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cos-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MplsExperimentalItems()
    :
    mplsexperimental_list(this, {"val"})
{

    yang_name = "mplsExperimental-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::~MplsExperimentalItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsexperimental_list.len(); index++)
    {
        if(mplsexperimental_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::has_operation() const
{
    for (std::size_t index=0; index<mplsexperimental_list.len(); index++)
    {
        if(mplsexperimental_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsExperimental-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MPLSExperimental-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList>();
        ent_->parent = this;
        mplsexperimental_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::get_children() const
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MPLSExperimental-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::MPLSExperimentalList()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "MPLSExperimental-list"; yang_parent_name = "mplsExperimental-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::~MPLSExperimentalList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLSExperimental-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceItems()
    :
    precedence_list(this, {"val"})
{

    yang_name = "precedence-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::~PrecedenceItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<precedence_list.len(); index++)
    {
        if(precedence_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::has_operation() const
{
    for (std::size_t index=0; index<precedence_list.len(); index++)
    {
        if(precedence_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Precedence-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList>();
        ent_->parent = this;
        precedence_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::get_children() const
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Precedence-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::PrecedenceList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Precedence-list"; yang_parent_name = "precedence-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::~PrecedenceList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Precedence-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolItems()
    :
    protocol_list(this, {"val"})
{

    yang_name = "protocol-items"; yang_parent_name = "CMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::~ProtocolItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol_list.len(); index++)
    {
        if(protocol_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::has_operation() const
{
    for (std::size_t index=0; index<protocol_list.len(); index++)
    {
        if(protocol_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Protocol-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList>();
        ent_->parent = this;
        protocol_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::get_children() const
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Protocol-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::ProtocolList()
    :
    val{YType::enumeration, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "Protocol-list"; yang_parent_name = "protocol-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::~ProtocolList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Protocol-list";
    ADD_KEY_TOKEN(val, "val");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::StartProbe::Now {1, "Now"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::StartProbe::At {2, "At"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::StartProbe::Pending {3, "Pending"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::StartProbe::After {4, "After"};

const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::Month::None {0, "None"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::Month::January {1, "January"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::Month::February {2, "February"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::Month::March {3, "March"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::Month::April {4, "April"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::Month::May {5, "May"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::Month::June {6, "June"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::Month::July {7, "July"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::Month::August {8, "August"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::Month::September {9, "September"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::Month::October {10, "October"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::Month::November {11, "November"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::Month::December {12, "December"};

const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::StartProbe::Now {1, "Now"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::StartProbe::At {2, "At"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::StartProbe::Pending {3, "Pending"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::StartProbe::After {4, "After"};

const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::Month::None {0, "None"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::Month::January {1, "January"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::Month::February {2, "February"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::Month::March {3, "March"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::Month::April {4, "April"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::Month::May {5, "May"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::Month::June {6, "June"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::Month::July {7, "July"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::Month::August {8, "August"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::Month::September {9, "September"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::Month::October {10, "October"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::Month::November {11, "November"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::Month::December {12, "December"};

const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::ModifyGrpSchedule::create {0, "create"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::ModifyGrpSchedule::add {1, "add"};
const Enum::YLeaf System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::ModifyGrpSchedule::delete_ {2, "delete"};


}
}

