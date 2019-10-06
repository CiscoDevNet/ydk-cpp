
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_33.hpp"
#include "Cisco_NX_OS_device_34.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vnsegment-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::TacacsplusItems::TacacsplusItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    service_items(std::make_shared<System::FmItems::TacacsplusItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "tacacsplus-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TacacsplusItems::~TacacsplusItems()
{
}

bool System::FmItems::TacacsplusItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::TacacsplusItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::TacacsplusItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TacacsplusItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacsplus-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TacacsplusItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TacacsplusItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::TacacsplusItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TacacsplusItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::TacacsplusItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::FmItems::TacacsplusItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::TacacsplusItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::TacacsplusItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "tacacsplus-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TacacsplusItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::TacacsplusItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::TacacsplusItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::TacacsplusItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/tacacsplus-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TacacsplusItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TacacsplusItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TacacsplusItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TacacsplusItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::TacacsplusItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::TacacsplusItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::TacacsplusItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/tacacsplus-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::LdapItems::LdapItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    service_items(std::make_shared<System::FmItems::LdapItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "ldap-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::LdapItems::~LdapItems()
{
}

bool System::FmItems::LdapItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::LdapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::LdapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::LdapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::LdapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::LdapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::LdapItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::LdapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::LdapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::FmItems::LdapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::LdapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::LdapItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "ldap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::LdapItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::LdapItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::LdapItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::LdapItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ldap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::LdapItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::LdapItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::LdapItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::LdapItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::LdapItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::LdapItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::LdapItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::LdapItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::LdapItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::LdapItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::LdapItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::LdapItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::LdapItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ldap-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::LdapItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::LdapItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::LdapItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::LdapItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::LdapItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::LdapItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::LdapItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::SchedulerItems::SchedulerItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    service_items(std::make_shared<System::FmItems::SchedulerItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "scheduler-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SchedulerItems::~SchedulerItems()
{
}

bool System::FmItems::SchedulerItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::SchedulerItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::SchedulerItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SchedulerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduler-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SchedulerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SchedulerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::SchedulerItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SchedulerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::SchedulerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::FmItems::SchedulerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::SchedulerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::SchedulerItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "scheduler-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SchedulerItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::SchedulerItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::SchedulerItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::SchedulerItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/scheduler-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SchedulerItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SchedulerItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SchedulerItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SchedulerItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::SchedulerItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::SchedulerItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::SchedulerItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/scheduler-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::ImpItems::ImpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    service_items(std::make_shared<System::FmItems::ImpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "imp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::ImpItems::~ImpItems()
{
}

bool System::FmItems::ImpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::ImpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::ImpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::ImpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::ImpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::ImpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::ImpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::ImpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::ImpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::FmItems::ImpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::ImpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::ImpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "imp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::ImpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::ImpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::ImpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::ImpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/imp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::ImpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::ImpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::ImpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::ImpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::ImpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::ImpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::ImpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::ImpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::ImpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::ImpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::ImpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::ImpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::ImpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/imp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::ImpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::ImpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::ImpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::ImpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::ImpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::ImpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::ImpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::UdldItems::UdldItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::UdldItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "udld-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::UdldItems::~UdldItems()
{
}

bool System::FmItems::UdldItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::UdldItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::UdldItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::UdldItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udld-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::UdldItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::UdldItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::UdldItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::UdldItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::UdldItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::UdldItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::UdldItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::UdldItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "udld-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::UdldItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::UdldItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::UdldItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::UdldItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/udld-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::UdldItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::UdldItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::UdldItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::UdldItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::UdldItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::UdldItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::UdldItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::UdldItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/udld-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::UdldItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NatItems::NatItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NatItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "nat-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NatItems::~NatItems()
{
}

bool System::FmItems::NatItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NatItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NatItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NatItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "nat-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NatItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NatItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NatItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NatItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nat-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NatItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NatItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NatItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NatItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NatItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NatItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NatItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NatItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NatItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NatItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NatItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NatItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NatItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nat-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NatItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NatItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NatItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NatItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NatItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NatItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NatItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::Vrrpv3Items::Vrrpv3Items()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::Vrrpv3Items::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "vrrpv3-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Vrrpv3Items::~Vrrpv3Items()
{
}

bool System::FmItems::Vrrpv3Items::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::Vrrpv3Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::Vrrpv3Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Vrrpv3Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrpv3-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Vrrpv3Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Vrrpv3Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::Vrrpv3Items::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Vrrpv3Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::Vrrpv3Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::Vrrpv3Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::Vrrpv3Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::Vrrpv3Items::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "vrrpv3-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Vrrpv3Items::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::Vrrpv3Items::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::Vrrpv3Items::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::Vrrpv3Items::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vrrpv3-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Vrrpv3Items::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Vrrpv3Items::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Vrrpv3Items::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Vrrpv3Items::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::Vrrpv3Items::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::Vrrpv3Items::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::Vrrpv3Items::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vrrpv3-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::VrrpItems::VrrpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::VrrpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "vrrp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VrrpItems::~VrrpItems()
{
}

bool System::FmItems::VrrpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::VrrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::VrrpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VrrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VrrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VrrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::VrrpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VrrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::VrrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::VrrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::VrrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::VrrpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "vrrp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VrrpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::VrrpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::VrrpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::VrrpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vrrp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VrrpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VrrpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VrrpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VrrpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::VrrpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::VrrpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::VrrpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vrrp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::HsrpItems::HsrpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::HsrpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "hsrp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HsrpItems::~HsrpItems()
{
}

bool System::FmItems::HsrpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::HsrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::HsrpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HsrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hsrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HsrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HsrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::HsrpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HsrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::HsrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::HsrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::HsrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::HsrpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "hsrp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HsrpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::HsrpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::HsrpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::HsrpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/hsrp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HsrpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HsrpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HsrpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HsrpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::HsrpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::HsrpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::HsrpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/hsrp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NetflowItems::NetflowItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NetflowItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "netflow-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NetflowItems::~NetflowItems()
{
}

bool System::FmItems::NetflowItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NetflowItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NetflowItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NetflowItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netflow-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NetflowItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NetflowItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NetflowItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NetflowItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NetflowItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NetflowItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NetflowItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NetflowItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "netflow-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NetflowItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NetflowItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NetflowItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NetflowItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/netflow-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NetflowItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NetflowItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NetflowItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NetflowItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NetflowItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NetflowItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NetflowItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/netflow-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::AnalyticsItems::AnalyticsItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::AnalyticsItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "analytics-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::AnalyticsItems::~AnalyticsItems()
{
}

bool System::FmItems::AnalyticsItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::AnalyticsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::AnalyticsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::AnalyticsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "analytics-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::AnalyticsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::AnalyticsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::AnalyticsItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::AnalyticsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::AnalyticsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::AnalyticsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::AnalyticsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::AnalyticsItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "analytics-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::AnalyticsItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::AnalyticsItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::AnalyticsItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::AnalyticsItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/analytics-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::AnalyticsItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::AnalyticsItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::AnalyticsItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::AnalyticsItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::AnalyticsItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::AnalyticsItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::AnalyticsItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/analytics-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::BfdItems::BfdItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::BfdItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "bfd-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BfdItems::~BfdItems()
{
}

bool System::FmItems::BfdItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::BfdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::BfdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BfdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BfdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BfdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::BfdItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BfdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::BfdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::BfdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::BfdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::BfdItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "bfd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BfdItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::BfdItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::BfdItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::BfdItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/bfd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BfdItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BfdItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BfdItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::BfdItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BfdItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::BfdItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::BfdItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::BfdItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/bfd-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::BfdItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::TunnelifItems::TunnelifItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::TunnelifItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "tunnelif-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TunnelifItems::~TunnelifItems()
{
}

bool System::FmItems::TunnelifItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::TunnelifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::TunnelifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TunnelifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TunnelifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TunnelifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::TunnelifItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TunnelifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::TunnelifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::TunnelifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::TunnelifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::TunnelifItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "tunnelif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TunnelifItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::TunnelifItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::TunnelifItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::TunnelifItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/tunnelif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TunnelifItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TunnelifItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TunnelifItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TunnelifItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::TunnelifItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::TunnelifItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::TunnelifItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/tunnelif-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NvoItems::NvoItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NvoItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "nvo-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NvoItems::~NvoItems()
{
}

bool System::FmItems::NvoItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NvoItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NvoItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NvoItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nvo-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NvoItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NvoItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NvoItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NvoItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NvoItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NvoItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NvoItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NvoItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "nvo-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NvoItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NvoItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NvoItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NvoItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nvo-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NvoItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NvoItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NvoItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NvoItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NvoItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NvoItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NvoItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NvoItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nvo-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NvoItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::PbrItems::PbrItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::PbrItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "pbr-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PbrItems::~PbrItems()
{
}

bool System::FmItems::PbrItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::PbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::PbrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::PbrItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::PbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::PbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::PbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::PbrItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "pbr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PbrItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::PbrItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::PbrItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::PbrItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pbr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PbrItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PbrItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PbrItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::PbrItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PbrItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::PbrItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::PbrItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::PbrItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pbr-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::PbrItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::PimItems::PimItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::PimItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "pim-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PimItems::~PimItems()
{
}

bool System::FmItems::PimItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::PimItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::PimItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PimItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PimItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PimItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::PimItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PimItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::PimItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::PimItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::PimItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::PimItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "pim-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PimItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::PimItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::PimItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::PimItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pim-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PimItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PimItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PimItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::PimItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PimItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::PimItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::PimItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::PimItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::PimItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PimItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::PimItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::PimItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::PimItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pim-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PimItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PimItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PimItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PimItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::PimItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::PimItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::PimItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NgmvpnItems::NgmvpnItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NgmvpnItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "ngmvpn-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NgmvpnItems::~NgmvpnItems()
{
}

bool System::FmItems::NgmvpnItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NgmvpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NgmvpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NgmvpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ngmvpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NgmvpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NgmvpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NgmvpnItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NgmvpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NgmvpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NgmvpnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NgmvpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NgmvpnItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "ngmvpn-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NgmvpnItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NgmvpnItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NgmvpnItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NgmvpnItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ngmvpn-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NgmvpnItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NgmvpnItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NgmvpnItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NgmvpnItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NgmvpnItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NgmvpnItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NgmvpnItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ngmvpn-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::VpcItems::VpcItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::VpcItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "vpc-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VpcItems::~VpcItems()
{
}

bool System::FmItems::VpcItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::VpcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::VpcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VpcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VpcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::VpcItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::VpcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::VpcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::VpcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::VpcItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "vpc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VpcItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::VpcItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::VpcItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::VpcItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vpc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VpcItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VpcItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VpcItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::VpcItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VpcItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::VpcItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::VpcItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::VpcItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vpc-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::VpcItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::VtpItems::VtpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::VtpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "vtp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VtpItems::~VtpItems()
{
}

bool System::FmItems::VtpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::VtpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::VtpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VtpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VtpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VtpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::VtpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VtpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::VtpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::VtpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::VtpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::VtpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "vtp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VtpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::VtpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::VtpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::VtpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vtp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VtpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VtpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VtpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::VtpItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VtpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::VtpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::VtpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::VtpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/vtp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::VtpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::PvlanItems::PvlanItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::PvlanItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "pvlan-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PvlanItems::~PvlanItems()
{
}

bool System::FmItems::PvlanItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::PvlanItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::PvlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PvlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PvlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PvlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::PvlanItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PvlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::PvlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::PvlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::PvlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::PvlanItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "pvlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PvlanItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::PvlanItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::PvlanItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::PvlanItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pvlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PvlanItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PvlanItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PvlanItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PvlanItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::PvlanItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::PvlanItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::PvlanItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pvlan-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NtpdItems::NtpdItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ntpd-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NtpdItems::~NtpdItems()
{
}

bool System::FmItems::NtpdItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set;
}

bool System::FmItems::NtpdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NtpdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NtpdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntpd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NtpdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NtpdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NtpdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NtpdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::FmItems::NtpdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NtpdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NbmItems::NbmItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NbmItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "nbm-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NbmItems::~NbmItems()
{
}

bool System::FmItems::NbmItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NbmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NbmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NbmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NbmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NbmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NbmItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NbmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NbmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NbmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NbmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NbmItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "nbm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NbmItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NbmItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NbmItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NbmItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nbm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NbmItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NbmItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NbmItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NbmItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NbmItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NbmItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NbmItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NbmItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NbmItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NbmItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NbmItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NbmItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NbmItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/nbm-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NbmItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NbmItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NbmItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NbmItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NbmItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NbmItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NbmItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::TelemetryItems::TelemetryItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::TelemetryItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "telemetry-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TelemetryItems::~TelemetryItems()
{
}

bool System::FmItems::TelemetryItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::TelemetryItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::TelemetryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TelemetryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telemetry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TelemetryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TelemetryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::TelemetryItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TelemetryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::TelemetryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::TelemetryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::TelemetryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::TelemetryItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "telemetry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TelemetryItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::TelemetryItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::TelemetryItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::TelemetryItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/telemetry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TelemetryItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TelemetryItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TelemetryItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TelemetryItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::TelemetryItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::TelemetryItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::TelemetryItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/telemetry-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::OspfItems::OspfItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::OspfItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "ospf-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::OspfItems::~OspfItems()
{
}

bool System::FmItems::OspfItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::OspfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::OspfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::OspfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::OspfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::OspfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::OspfItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::OspfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::OspfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::OspfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::OspfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::OspfItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "ospf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::OspfItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::OspfItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::OspfItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::OspfItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ospf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::OspfItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::OspfItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::OspfItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::OspfItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::OspfItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::OspfItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::OspfItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::OspfItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ospf-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::OspfItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::Ospfv3Items::Ospfv3Items()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::Ospfv3Items::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "ospfv3-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Ospfv3Items::~Ospfv3Items()
{
}

bool System::FmItems::Ospfv3Items::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::Ospfv3Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::Ospfv3Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Ospfv3Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Ospfv3Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Ospfv3Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::Ospfv3Items::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Ospfv3Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::Ospfv3Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::Ospfv3Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::Ospfv3Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::Ospfv3Items::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "ospfv3-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Ospfv3Items::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::Ospfv3Items::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::Ospfv3Items::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::Ospfv3Items::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ospfv3-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Ospfv3Items::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Ospfv3Items::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Ospfv3Items::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Ospfv3Items::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::Ospfv3Items::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::Ospfv3Items::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::Ospfv3Items::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ospfv3-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::VctrlItems::VctrlItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "vctrl-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::VctrlItems::~VctrlItems()
{
}

bool System::FmItems::VctrlItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set;
}

bool System::FmItems::VctrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::VctrlItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::VctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::VctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::VctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::VctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::VctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::FmItems::VctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::VctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::MacsecItems::MacsecItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::MacsecItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "macsec-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MacsecItems::~MacsecItems()
{
}

bool System::FmItems::MacsecItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::MacsecItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::MacsecItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MacsecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MacsecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MacsecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::MacsecItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MacsecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::MacsecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MacsecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::MacsecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::MacsecItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "macsec-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MacsecItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::MacsecItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::MacsecItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::MacsecItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/macsec-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MacsecItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MacsecItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MacsecItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MacsecItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::MacsecItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::MacsecItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::MacsecItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/macsec-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NpivItems::NpivItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    service_items(std::make_shared<System::FmItems::NpivItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "npiv-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NpivItems::~NpivItems()
{
}

bool System::FmItems::NpivItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NpivItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NpivItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NpivItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npiv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NpivItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NpivItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NpivItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NpivItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NpivItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::FmItems::NpivItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NpivItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NpivItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "npiv-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NpivItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NpivItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NpivItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NpivItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/npiv-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NpivItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NpivItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NpivItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NpivItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NpivItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NpivItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NpivItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NpivItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/npiv-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::Pim6Items::Pim6Items()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::Pim6Items::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "pim6-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Pim6Items::~Pim6Items()
{
}

bool System::FmItems::Pim6Items::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::Pim6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::Pim6Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Pim6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Pim6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Pim6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::Pim6Items::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Pim6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::Pim6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::Pim6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::Pim6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::Pim6Items::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "pim6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Pim6Items::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::Pim6Items::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::Pim6Items::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::Pim6Items::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pim6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Pim6Items::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Pim6Items::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Pim6Items::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Pim6Items::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::Pim6Items::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::Pim6Items::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::Pim6Items::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pim6-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::IsisItems::IsisItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::IsisItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "isis-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::IsisItems::~IsisItems()
{
}

bool System::FmItems::IsisItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::IsisItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::IsisItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::IsisItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::IsisItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::IsisItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::IsisItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::IsisItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::IsisItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::IsisItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::IsisItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::IsisItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "isis-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::IsisItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::IsisItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::IsisItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::IsisItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/isis-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::IsisItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::IsisItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::IsisItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::IsisItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::IsisItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::IsisItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::IsisItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::IsisItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/isis-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::HwtelemetryItems::HwtelemetryItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::HwtelemetryItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "hwtelemetry-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HwtelemetryItems::~HwtelemetryItems()
{
}

bool System::FmItems::HwtelemetryItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::HwtelemetryItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::HwtelemetryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HwtelemetryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hwtelemetry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HwtelemetryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HwtelemetryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::HwtelemetryItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HwtelemetryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::HwtelemetryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::HwtelemetryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::HwtelemetryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::HwtelemetryItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "hwtelemetry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HwtelemetryItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::HwtelemetryItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::HwtelemetryItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::HwtelemetryItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/hwtelemetry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HwtelemetryItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HwtelemetryItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HwtelemetryItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HwtelemetryItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::HwtelemetryItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::HwtelemetryItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::HwtelemetryItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/hwtelemetry-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::ItdItems::ItdItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::ItdItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "itd-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::ItdItems::~ItdItems()
{
}

bool System::FmItems::ItdItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::ItdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::ItdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::ItdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::ItdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::ItdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::ItdItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::ItdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::ItdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::ItdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::ItdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::ItdItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "itd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::ItdItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::ItdItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::ItdItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::ItdItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/itd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::ItdItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::ItdItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::ItdItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::ItdItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::ItdItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::ItdItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::ItdItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::ItdItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::ItdItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::ItdItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::ItdItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::ItdItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::ItdItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/itd-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::ItdItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::ItdItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::ItdItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::ItdItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::ItdItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::ItdItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::ItdItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::PortsecItems::PortsecItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    service_items(std::make_shared<System::FmItems::PortsecItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "portsec-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PortsecItems::~PortsecItems()
{
}

bool System::FmItems::PortsecItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::PortsecItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::PortsecItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PortsecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portsec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PortsecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PortsecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::PortsecItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PortsecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::PortsecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::FmItems::PortsecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::PortsecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::PortsecItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "portsec-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PortsecItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::PortsecItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::PortsecItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::PortsecItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/portsec-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PortsecItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PortsecItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PortsecItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PortsecItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::PortsecItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::PortsecItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::PortsecItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/portsec-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::FlexlinkItems::FlexlinkItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::FlexlinkItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "flexlink-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::FlexlinkItems::~FlexlinkItems()
{
}

bool System::FmItems::FlexlinkItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::FlexlinkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::FlexlinkItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::FlexlinkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexlink-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::FlexlinkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::FlexlinkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::FlexlinkItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::FlexlinkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::FlexlinkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::FlexlinkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::FlexlinkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::FlexlinkItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "flexlink-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::FlexlinkItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::FlexlinkItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::FlexlinkItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::FlexlinkItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/flexlink-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::FlexlinkItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::FlexlinkItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::FlexlinkItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::FlexlinkItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::FlexlinkItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::FlexlinkItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::FlexlinkItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/flexlink-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::SlasenderItems::SlasenderItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    service_items(std::make_shared<System::FmItems::SlasenderItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "slasender-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SlasenderItems::~SlasenderItems()
{
}

bool System::FmItems::SlasenderItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::SlasenderItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::SlasenderItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SlasenderItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slasender-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SlasenderItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SlasenderItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::SlasenderItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SlasenderItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::SlasenderItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::FmItems::SlasenderItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::SlasenderItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::SlasenderItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "slasender-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SlasenderItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::SlasenderItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::SlasenderItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::SlasenderItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/slasender-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SlasenderItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SlasenderItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SlasenderItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SlasenderItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::SlasenderItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::SlasenderItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::SlasenderItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/slasender-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::SlaresponderItems::SlaresponderItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    service_items(std::make_shared<System::FmItems::SlaresponderItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "slaresponder-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SlaresponderItems::~SlaresponderItems()
{
}

bool System::FmItems::SlaresponderItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::SlaresponderItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::SlaresponderItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SlaresponderItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slaresponder-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SlaresponderItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SlaresponderItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::SlaresponderItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SlaresponderItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::SlaresponderItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::FmItems::SlaresponderItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::SlaresponderItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::SlaresponderItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "slaresponder-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SlaresponderItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::SlaresponderItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::SlaresponderItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::SlaresponderItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/slaresponder-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SlaresponderItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SlaresponderItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SlaresponderItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SlaresponderItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::SlaresponderItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::SlaresponderItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::SlaresponderItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/slaresponder-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::SlatwampserverItems::SlatwampserverItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    service_items(std::make_shared<System::FmItems::SlatwampserverItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "slatwampserver-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SlatwampserverItems::~SlatwampserverItems()
{
}

bool System::FmItems::SlatwampserverItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::SlatwampserverItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::SlatwampserverItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SlatwampserverItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slatwampserver-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SlatwampserverItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SlatwampserverItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::SlatwampserverItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SlatwampserverItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::SlatwampserverItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::FmItems::SlatwampserverItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::SlatwampserverItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::SlatwampserverItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "slatwampserver-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SlatwampserverItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::SlatwampserverItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::SlatwampserverItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::SlatwampserverItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/slatwampserver-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SlatwampserverItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SlatwampserverItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SlatwampserverItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SlatwampserverItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::SlatwampserverItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::SlatwampserverItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::SlatwampserverItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/slatwampserver-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FsetItems::FsetItems()
    :
    featureset_list(this, {"name"})
{

    yang_name = "fset-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FsetItems::~FsetItems()
{
}

bool System::FsetItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<featureset_list.len(); index++)
    {
        if(featureset_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FsetItems::has_operation() const
{
    for (std::size_t index=0; index<featureset_list.len(); index++)
    {
        if(featureset_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FsetItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FsetItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fset-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FsetItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FsetItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FeatureSet-list")
    {
        auto ent_ = std::make_shared<System::FsetItems::FeatureSetList>();
        ent_->parent = this;
        featureset_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FsetItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : featureset_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FsetItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FsetItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FsetItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FeatureSet-list")
        return true;
    return false;
}

System::FsetItems::FeatureSetList::FeatureSetList()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    force{YType::boolean, "force"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "FeatureSet-list"; yang_parent_name = "fset-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FsetItems::FeatureSetList::~FeatureSetList()
{
}

bool System::FsetItems::FeatureSetList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| force.is_set
	|| operst.is_set;
}

bool System::FsetItems::FeatureSetList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(force.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FsetItems::FeatureSetList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fset-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FsetItems::FeatureSetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FeatureSet-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FsetItems::FeatureSetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FsetItems::FeatureSetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FsetItems::FeatureSetList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FsetItems::FeatureSetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::FsetItems::FeatureSetList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FsetItems::FeatureSetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "adminSt" || name == "force" || name == "operSt")
        return true;
    return false;
}

System::InstallItems::InstallItems()
    :
    imgpath{YType::str, "imgPath"},
    imgname{YType::str, "imgName"},
    operation_{YType::enumeration, "operation"},
    installtype{YType::enumeration, "installType"},
    packagepath{YType::str, "packagePath"},
    packagename{YType::str, "packageName"},
    override{YType::enumeration, "override"},
    biosforce{YType::enumeration, "biosForce"},
    stage{YType::enumeration, "stage"},
    upgerr{YType::enumeration, "upgErr"},
    upgerrstr{YType::str, "upgErrStr"}
        ,
    mod_items(std::make_shared<System::InstallItems::ModItems>())
{
    mod_items->parent = this;

    yang_name = "install-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::InstallItems::~InstallItems()
{
}

bool System::InstallItems::has_data() const
{
    if (is_presence_container) return true;
    return imgpath.is_set
	|| imgname.is_set
	|| operation_.is_set
	|| installtype.is_set
	|| packagepath.is_set
	|| packagename.is_set
	|| override.is_set
	|| biosforce.is_set
	|| stage.is_set
	|| upgerr.is_set
	|| upgerrstr.is_set
	|| (mod_items !=  nullptr && mod_items->has_data());
}

bool System::InstallItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(imgpath.yfilter)
	|| ydk::is_set(imgname.yfilter)
	|| ydk::is_set(operation_.yfilter)
	|| ydk::is_set(installtype.yfilter)
	|| ydk::is_set(packagepath.yfilter)
	|| ydk::is_set(packagename.yfilter)
	|| ydk::is_set(override.yfilter)
	|| ydk::is_set(biosforce.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(upgerr.yfilter)
	|| ydk::is_set(upgerrstr.yfilter)
	|| (mod_items !=  nullptr && mod_items->has_operation());
}

std::string System::InstallItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::InstallItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstallItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (imgpath.is_set || is_set(imgpath.yfilter)) leaf_name_data.push_back(imgpath.get_name_leafdata());
    if (imgname.is_set || is_set(imgname.yfilter)) leaf_name_data.push_back(imgname.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());
    if (installtype.is_set || is_set(installtype.yfilter)) leaf_name_data.push_back(installtype.get_name_leafdata());
    if (packagepath.is_set || is_set(packagepath.yfilter)) leaf_name_data.push_back(packagepath.get_name_leafdata());
    if (packagename.is_set || is_set(packagename.yfilter)) leaf_name_data.push_back(packagename.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());
    if (biosforce.is_set || is_set(biosforce.yfilter)) leaf_name_data.push_back(biosforce.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (upgerr.is_set || is_set(upgerr.yfilter)) leaf_name_data.push_back(upgerr.get_name_leafdata());
    if (upgerrstr.is_set || is_set(upgerrstr.yfilter)) leaf_name_data.push_back(upgerrstr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstallItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mod-items")
    {
        if(mod_items == nullptr)
        {
            mod_items = std::make_shared<System::InstallItems::ModItems>();
        }
        return mod_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstallItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mod_items != nullptr)
    {
        _children["mod-items"] = mod_items;
    }

    return _children;
}

void System::InstallItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "imgPath")
    {
        imgpath = value;
        imgpath.value_namespace = name_space;
        imgpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imgName")
    {
        imgname = value;
        imgname.value_namespace = name_space;
        imgname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "installType")
    {
        installtype = value;
        installtype.value_namespace = name_space;
        installtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packagePath")
    {
        packagepath = value;
        packagepath.value_namespace = name_space;
        packagepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packageName")
    {
        packagename = value;
        packagename.value_namespace = name_space;
        packagename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "biosForce")
    {
        biosforce = value;
        biosforce.value_namespace = name_space;
        biosforce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upgErr")
    {
        upgerr = value;
        upgerr.value_namespace = name_space;
        upgerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upgErrStr")
    {
        upgerrstr = value;
        upgerrstr.value_namespace = name_space;
        upgerrstr.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstallItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "imgPath")
    {
        imgpath.yfilter = yfilter;
    }
    if(value_path == "imgName")
    {
        imgname.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
    if(value_path == "installType")
    {
        installtype.yfilter = yfilter;
    }
    if(value_path == "packagePath")
    {
        packagepath.yfilter = yfilter;
    }
    if(value_path == "packageName")
    {
        packagename.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
    if(value_path == "biosForce")
    {
        biosforce.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "upgErr")
    {
        upgerr.yfilter = yfilter;
    }
    if(value_path == "upgErrStr")
    {
        upgerrstr.yfilter = yfilter;
    }
}

bool System::InstallItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mod-items" || name == "imgPath" || name == "imgName" || name == "operation" || name == "installType" || name == "packagePath" || name == "packageName" || name == "override" || name == "biosForce" || name == "stage" || name == "upgErr" || name == "upgErrStr")
        return true;
    return false;
}

System::InstallItems::ModItems::ModItems()
    :
    installupgtable_list(this, {"module"})
{

    yang_name = "mod-items"; yang_parent_name = "install-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::InstallItems::ModItems::~ModItems()
{
}

bool System::InstallItems::ModItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<installupgtable_list.len(); index++)
    {
        if(installupgtable_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstallItems::ModItems::has_operation() const
{
    for (std::size_t index=0; index<installupgtable_list.len(); index++)
    {
        if(installupgtable_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstallItems::ModItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/install-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::InstallItems::ModItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mod-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstallItems::ModItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstallItems::ModItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InstallUpgTable-list")
    {
        auto ent_ = std::make_shared<System::InstallItems::ModItems::InstallUpgTableList>();
        ent_->parent = this;
        installupgtable_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstallItems::ModItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : installupgtable_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstallItems::ModItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstallItems::ModItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstallItems::ModItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InstallUpgTable-list")
        return true;
    return false;
}

System::InstallItems::ModItems::InstallUpgTableList::InstallUpgTableList()
    :
    module{YType::uint32, "module"}
        ,
    modtype_items(std::make_shared<System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems>())
{
    modtype_items->parent = this;

    yang_name = "InstallUpgTable-list"; yang_parent_name = "mod-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::InstallItems::ModItems::InstallUpgTableList::~InstallUpgTableList()
{
}

bool System::InstallItems::ModItems::InstallUpgTableList::has_data() const
{
    if (is_presence_container) return true;
    return module.is_set
	|| (modtype_items !=  nullptr && modtype_items->has_data());
}

bool System::InstallItems::ModItems::InstallUpgTableList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module.yfilter)
	|| (modtype_items !=  nullptr && modtype_items->has_operation());
}

std::string System::InstallItems::ModItems::InstallUpgTableList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/install-items/mod-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::InstallItems::ModItems::InstallUpgTableList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InstallUpgTable-list";
    ADD_KEY_TOKEN(module, "module");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstallItems::ModItems::InstallUpgTableList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstallItems::ModItems::InstallUpgTableList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "modtype-items")
    {
        if(modtype_items == nullptr)
        {
            modtype_items = std::make_shared<System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems>();
        }
        return modtype_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstallItems::ModItems::InstallUpgTableList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(modtype_items != nullptr)
    {
        _children["modtype-items"] = modtype_items;
    }

    return _children;
}

void System::InstallItems::ModItems::InstallUpgTableList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstallItems::ModItems::InstallUpgTableList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
}

bool System::InstallItems::ModItems::InstallUpgTableList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modtype-items" || name == "module")
        return true;
    return false;
}

System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModtypeItems()
    :
    modupgtable_list(this, {"modtype"})
{

    yang_name = "modtype-items"; yang_parent_name = "InstallUpgTable-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::~ModtypeItems()
{
}

bool System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<modupgtable_list.len(); index++)
    {
        if(modupgtable_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::has_operation() const
{
    for (std::size_t index=0; index<modupgtable_list.len(); index++)
    {
        if(modupgtable_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modtype-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ModUpgTable-list")
    {
        auto ent_ = std::make_shared<System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList>();
        ent_->parent = this;
        modupgtable_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : modupgtable_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ModUpgTable-list")
        return true;
    return false;
}

System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::ModUpgTableList()
    :
    modtype{YType::enumeration, "modType"},
    module{YType::uint32, "module"},
    runver{YType::str, "runVer"},
    targetver{YType::str, "targetVer"},
    upgreq{YType::enumeration, "upgReq"},
    upgstatus{YType::enumeration, "upgStatus"},
    failstr{YType::str, "failStr"}
{

    yang_name = "ModUpgTable-list"; yang_parent_name = "modtype-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::~ModUpgTableList()
{
}

bool System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::has_data() const
{
    if (is_presence_container) return true;
    return modtype.is_set
	|| module.is_set
	|| runver.is_set
	|| targetver.is_set
	|| upgreq.is_set
	|| upgstatus.is_set
	|| failstr.is_set;
}

bool System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(modtype.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(runver.yfilter)
	|| ydk::is_set(targetver.yfilter)
	|| ydk::is_set(upgreq.yfilter)
	|| ydk::is_set(upgstatus.yfilter)
	|| ydk::is_set(failstr.yfilter);
}

std::string System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ModUpgTable-list";
    ADD_KEY_TOKEN(modtype, "modType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (modtype.is_set || is_set(modtype.yfilter)) leaf_name_data.push_back(modtype.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (runver.is_set || is_set(runver.yfilter)) leaf_name_data.push_back(runver.get_name_leafdata());
    if (targetver.is_set || is_set(targetver.yfilter)) leaf_name_data.push_back(targetver.get_name_leafdata());
    if (upgreq.is_set || is_set(upgreq.yfilter)) leaf_name_data.push_back(upgreq.get_name_leafdata());
    if (upgstatus.is_set || is_set(upgstatus.yfilter)) leaf_name_data.push_back(upgstatus.get_name_leafdata());
    if (failstr.is_set || is_set(failstr.yfilter)) leaf_name_data.push_back(failstr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "modType")
    {
        modtype = value;
        modtype.value_namespace = name_space;
        modtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runVer")
    {
        runver = value;
        runver.value_namespace = name_space;
        runver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targetVer")
    {
        targetver = value;
        targetver.value_namespace = name_space;
        targetver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upgReq")
    {
        upgreq = value;
        upgreq.value_namespace = name_space;
        upgreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upgStatus")
    {
        upgstatus = value;
        upgstatus.value_namespace = name_space;
        upgstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failStr")
    {
        failstr = value;
        failstr.value_namespace = name_space;
        failstr.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "modType")
    {
        modtype.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "runVer")
    {
        runver.yfilter = yfilter;
    }
    if(value_path == "targetVer")
    {
        targetver.yfilter = yfilter;
    }
    if(value_path == "upgReq")
    {
        upgreq.yfilter = yfilter;
    }
    if(value_path == "upgStatus")
    {
        upgstatus.yfilter = yfilter;
    }
    if(value_path == "failStr")
    {
        failstr.yfilter = yfilter;
    }
}

bool System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modType" || name == "module" || name == "runVer" || name == "targetVer" || name == "upgReq" || name == "upgStatus" || name == "failStr")
        return true;
    return false;
}

System::IntfItems::IntfItems()
    :
    descr{YType::str, "descr"}
        ,
    phys_items(std::make_shared<System::IntfItems::PhysItems>())
    , aggr_items(std::make_shared<System::IntfItems::AggrItems>())
    , rtd_items(std::make_shared<System::IntfItems::RtdItems>())
    , lb_items(std::make_shared<System::IntfItems::LbItems>())
    , encrtd_items(std::make_shared<System::IntfItems::EncrtdItems>())
    , svi_items(std::make_shared<System::IntfItems::SviItems>())
    , tunnelif_items(std::make_shared<System::IntfItems::TunnelifItems>())
{
    phys_items->parent = this;
    aggr_items->parent = this;
    rtd_items->parent = this;
    lb_items->parent = this;
    encrtd_items->parent = this;
    svi_items->parent = this;
    tunnelif_items->parent = this;

    yang_name = "intf-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::~IntfItems()
{
}

bool System::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    return descr.is_set
	|| (phys_items !=  nullptr && phys_items->has_data())
	|| (aggr_items !=  nullptr && aggr_items->has_data())
	|| (rtd_items !=  nullptr && rtd_items->has_data())
	|| (lb_items !=  nullptr && lb_items->has_data())
	|| (encrtd_items !=  nullptr && encrtd_items->has_data())
	|| (svi_items !=  nullptr && svi_items->has_data())
	|| (tunnelif_items !=  nullptr && tunnelif_items->has_data());
}

bool System::IntfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (phys_items !=  nullptr && phys_items->has_operation())
	|| (aggr_items !=  nullptr && aggr_items->has_operation())
	|| (rtd_items !=  nullptr && rtd_items->has_operation())
	|| (lb_items !=  nullptr && lb_items->has_operation())
	|| (encrtd_items !=  nullptr && encrtd_items->has_operation())
	|| (svi_items !=  nullptr && svi_items->has_operation())
	|| (tunnelif_items !=  nullptr && tunnelif_items->has_operation());
}

std::string System::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "phys-items")
    {
        if(phys_items == nullptr)
        {
            phys_items = std::make_shared<System::IntfItems::PhysItems>();
        }
        return phys_items;
    }

    if(child_yang_name == "aggr-items")
    {
        if(aggr_items == nullptr)
        {
            aggr_items = std::make_shared<System::IntfItems::AggrItems>();
        }
        return aggr_items;
    }

    if(child_yang_name == "rtd-items")
    {
        if(rtd_items == nullptr)
        {
            rtd_items = std::make_shared<System::IntfItems::RtdItems>();
        }
        return rtd_items;
    }

    if(child_yang_name == "lb-items")
    {
        if(lb_items == nullptr)
        {
            lb_items = std::make_shared<System::IntfItems::LbItems>();
        }
        return lb_items;
    }

    if(child_yang_name == "encrtd-items")
    {
        if(encrtd_items == nullptr)
        {
            encrtd_items = std::make_shared<System::IntfItems::EncrtdItems>();
        }
        return encrtd_items;
    }

    if(child_yang_name == "svi-items")
    {
        if(svi_items == nullptr)
        {
            svi_items = std::make_shared<System::IntfItems::SviItems>();
        }
        return svi_items;
    }

    if(child_yang_name == "tunnelif-items")
    {
        if(tunnelif_items == nullptr)
        {
            tunnelif_items = std::make_shared<System::IntfItems::TunnelifItems>();
        }
        return tunnelif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(phys_items != nullptr)
    {
        _children["phys-items"] = phys_items;
    }

    if(aggr_items != nullptr)
    {
        _children["aggr-items"] = aggr_items;
    }

    if(rtd_items != nullptr)
    {
        _children["rtd-items"] = rtd_items;
    }

    if(lb_items != nullptr)
    {
        _children["lb-items"] = lb_items;
    }

    if(encrtd_items != nullptr)
    {
        _children["encrtd-items"] = encrtd_items;
    }

    if(svi_items != nullptr)
    {
        _children["svi-items"] = svi_items;
    }

    if(tunnelif_items != nullptr)
    {
        _children["tunnelif-items"] = tunnelif_items;
    }

    return _children;
}

void System::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "phys-items" || name == "aggr-items" || name == "rtd-items" || name == "lb-items" || name == "encrtd-items" || name == "svi-items" || name == "tunnelif-items" || name == "descr")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysItems()
    :
    physif_list(this, {"id"})
{

    yang_name = "phys-items"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::PhysItems::~PhysItems()
{
}

bool System::IntfItems::PhysItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::has_operation() const
{
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::PhysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PhysIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList>();
        ent_->parent = this;
        physif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::get_children() const
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

void System::IntfItems::PhysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PhysIf-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysIfList()
    :
    id{YType::str, "id"},
    linktransmitreset{YType::enumeration, "linkTransmitReset"},
    linkdebouncelinkup{YType::uint16, "linkDebounceLinkUp"},
    dfetuningdelay{YType::uint16, "dfeTuningDelay"},
    packettimestampstate{YType::enumeration, "packetTimestampState"},
    packettimestampingresssourceid{YType::uint32, "packetTimestampIngressSourceId"},
    packettimestampegresssourceid{YType::uint32, "packetTimestampEgressSourceId"},
    speedgroup{YType::enumeration, "speedGroup"},
    beacon{YType::enumeration, "beacon"},
    voicevlanid{YType::uint16, "voiceVlanId"},
    voicevlantype{YType::enumeration, "voiceVlanType"},
    voiceportcos{YType::int8, "voicePortCos"},
    voiceporttrust{YType::int8, "voicePortTrust"},
    fecmode{YType::enumeration, "FECMode"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    switchingst{YType::enumeration, "switchingSt"},
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
    nfmphysif_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::NfmphysifItems>())
    , priorflowctrl_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems>())
    , priorflowctrlwd_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems>())
    , physextd_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysExtdItems>())
    , eeep_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::EeepItems>())
    , stormctrlp_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::StormctrlpItems>())
    , loadp_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::LoadpItems>())
    , vlanmapping_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::VlanmappingItems>())
    , vrf_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::VrfItems>())
    , phys_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_>())
    , hwifdetails_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems>())
    , aggrmbrif_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems>())
    , multisiteiftracking_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems>())
    , dom_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems>())
    , rtinbandconf_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems>())
    , rtextconf_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtextConfItems>())
    , rtbrconf_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtbrConfItems>())
    , rtfvnodeportatt_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems>())
    , rtmbrifs_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems>())
    , rtvrfmbr_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems>())
    , rtphysrtdconf_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems>())
    , rtl3encphysrtdconf_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems>())
    , rttunneltunnelmbrifs_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems>())
    , rtlsnodetoif_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems>())
    , dbgifin_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfInItems>())
    , dbgifout_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems>())
    , dbgipin_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIpInItems>())
    , dbgdot1d_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems>())
    , dbgetherstats_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems>())
    , dbgdot3stats_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems>())
    , dbgifhcin_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems>())
    , dbgifhcout_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems>())
    , dbgipv6ifstats_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems>())
    , dbgifstorm_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems>())
{
    nfmphysif_items->parent = this;
    priorflowctrl_items->parent = this;
    priorflowctrlwd_items->parent = this;
    physextd_items->parent = this;
    eeep_items->parent = this;
    stormctrlp_items->parent = this;
    loadp_items->parent = this;
    vlanmapping_items->parent = this;
    vrf_items->parent = this;
    phys_items->parent = this;
    hwifdetails_items->parent = this;
    aggrmbrif_items->parent = this;
    multisiteiftracking_items->parent = this;
    dom_items->parent = this;
    rtinbandconf_items->parent = this;
    rtextconf_items->parent = this;
    rtbrconf_items->parent = this;
    rtfvnodeportatt_items->parent = this;
    rtmbrifs_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtphysrtdconf_items->parent = this;
    rtl3encphysrtdconf_items->parent = this;
    rtnwpathtoif_items->parent = this;
    rttunneltunnelmbrifs_items->parent = this;
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

    yang_name = "PhysIf-list"; yang_parent_name = "phys-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::PhysItems::PhysIfList::~PhysIfList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| linktransmitreset.is_set
	|| linkdebouncelinkup.is_set
	|| dfetuningdelay.is_set
	|| packettimestampstate.is_set
	|| packettimestampingresssourceid.is_set
	|| packettimestampegresssourceid.is_set
	|| speedgroup.is_set
	|| beacon.is_set
	|| voicevlanid.is_set
	|| voicevlantype.is_set
	|| voiceportcos.is_set
	|| voiceporttrust.is_set
	|| fecmode.is_set
	|| name.is_set
	|| descr.is_set
	|| switchingst.is_set
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
	|| (nfmphysif_items !=  nullptr && nfmphysif_items->has_data())
	|| (priorflowctrl_items !=  nullptr && priorflowctrl_items->has_data())
	|| (priorflowctrlwd_items !=  nullptr && priorflowctrlwd_items->has_data())
	|| (physextd_items !=  nullptr && physextd_items->has_data())
	|| (eeep_items !=  nullptr && eeep_items->has_data())
	|| (stormctrlp_items !=  nullptr && stormctrlp_items->has_data())
	|| (loadp_items !=  nullptr && loadp_items->has_data())
	|| (vlanmapping_items !=  nullptr && vlanmapping_items->has_data())
	|| (vrf_items !=  nullptr && vrf_items->has_data())
	|| (phys_items !=  nullptr && phys_items->has_data())
	|| (hwifdetails_items !=  nullptr && hwifdetails_items->has_data())
	|| (aggrmbrif_items !=  nullptr && aggrmbrif_items->has_data())
	|| (multisiteiftracking_items !=  nullptr && multisiteiftracking_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (rtinbandconf_items !=  nullptr && rtinbandconf_items->has_data())
	|| (rtextconf_items !=  nullptr && rtextconf_items->has_data())
	|| (rtbrconf_items !=  nullptr && rtbrconf_items->has_data())
	|| (rtfvnodeportatt_items !=  nullptr && rtfvnodeportatt_items->has_data())
	|| (rtmbrifs_items !=  nullptr && rtmbrifs_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtphysrtdconf_items !=  nullptr && rtphysrtdconf_items->has_data())
	|| (rtl3encphysrtdconf_items !=  nullptr && rtl3encphysrtdconf_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data())
	|| (rttunneltunnelmbrifs_items !=  nullptr && rttunneltunnelmbrifs_items->has_data())
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

bool System::IntfItems::PhysItems::PhysIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(linktransmitreset.yfilter)
	|| ydk::is_set(linkdebouncelinkup.yfilter)
	|| ydk::is_set(dfetuningdelay.yfilter)
	|| ydk::is_set(packettimestampstate.yfilter)
	|| ydk::is_set(packettimestampingresssourceid.yfilter)
	|| ydk::is_set(packettimestampegresssourceid.yfilter)
	|| ydk::is_set(speedgroup.yfilter)
	|| ydk::is_set(beacon.yfilter)
	|| ydk::is_set(voicevlanid.yfilter)
	|| ydk::is_set(voicevlantype.yfilter)
	|| ydk::is_set(voiceportcos.yfilter)
	|| ydk::is_set(voiceporttrust.yfilter)
	|| ydk::is_set(fecmode.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(switchingst.yfilter)
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
	|| (nfmphysif_items !=  nullptr && nfmphysif_items->has_operation())
	|| (priorflowctrl_items !=  nullptr && priorflowctrl_items->has_operation())
	|| (priorflowctrlwd_items !=  nullptr && priorflowctrlwd_items->has_operation())
	|| (physextd_items !=  nullptr && physextd_items->has_operation())
	|| (eeep_items !=  nullptr && eeep_items->has_operation())
	|| (stormctrlp_items !=  nullptr && stormctrlp_items->has_operation())
	|| (loadp_items !=  nullptr && loadp_items->has_operation())
	|| (vlanmapping_items !=  nullptr && vlanmapping_items->has_operation())
	|| (vrf_items !=  nullptr && vrf_items->has_operation())
	|| (phys_items !=  nullptr && phys_items->has_operation())
	|| (hwifdetails_items !=  nullptr && hwifdetails_items->has_operation())
	|| (aggrmbrif_items !=  nullptr && aggrmbrif_items->has_operation())
	|| (multisiteiftracking_items !=  nullptr && multisiteiftracking_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (rtinbandconf_items !=  nullptr && rtinbandconf_items->has_operation())
	|| (rtextconf_items !=  nullptr && rtextconf_items->has_operation())
	|| (rtbrconf_items !=  nullptr && rtbrconf_items->has_operation())
	|| (rtfvnodeportatt_items !=  nullptr && rtfvnodeportatt_items->has_operation())
	|| (rtmbrifs_items !=  nullptr && rtmbrifs_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtphysrtdconf_items !=  nullptr && rtphysrtdconf_items->has_operation())
	|| (rtl3encphysrtdconf_items !=  nullptr && rtl3encphysrtdconf_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation())
	|| (rttunneltunnelmbrifs_items !=  nullptr && rttunneltunnelmbrifs_items->has_operation())
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

std::string System::IntfItems::PhysItems::PhysIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/phys-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::PhysItems::PhysIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PhysIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (linktransmitreset.is_set || is_set(linktransmitreset.yfilter)) leaf_name_data.push_back(linktransmitreset.get_name_leafdata());
    if (linkdebouncelinkup.is_set || is_set(linkdebouncelinkup.yfilter)) leaf_name_data.push_back(linkdebouncelinkup.get_name_leafdata());
    if (dfetuningdelay.is_set || is_set(dfetuningdelay.yfilter)) leaf_name_data.push_back(dfetuningdelay.get_name_leafdata());
    if (packettimestampstate.is_set || is_set(packettimestampstate.yfilter)) leaf_name_data.push_back(packettimestampstate.get_name_leafdata());
    if (packettimestampingresssourceid.is_set || is_set(packettimestampingresssourceid.yfilter)) leaf_name_data.push_back(packettimestampingresssourceid.get_name_leafdata());
    if (packettimestampegresssourceid.is_set || is_set(packettimestampegresssourceid.yfilter)) leaf_name_data.push_back(packettimestampegresssourceid.get_name_leafdata());
    if (speedgroup.is_set || is_set(speedgroup.yfilter)) leaf_name_data.push_back(speedgroup.get_name_leafdata());
    if (beacon.is_set || is_set(beacon.yfilter)) leaf_name_data.push_back(beacon.get_name_leafdata());
    if (voicevlanid.is_set || is_set(voicevlanid.yfilter)) leaf_name_data.push_back(voicevlanid.get_name_leafdata());
    if (voicevlantype.is_set || is_set(voicevlantype.yfilter)) leaf_name_data.push_back(voicevlantype.get_name_leafdata());
    if (voiceportcos.is_set || is_set(voiceportcos.yfilter)) leaf_name_data.push_back(voiceportcos.get_name_leafdata());
    if (voiceporttrust.is_set || is_set(voiceporttrust.yfilter)) leaf_name_data.push_back(voiceporttrust.get_name_leafdata());
    if (fecmode.is_set || is_set(fecmode.yfilter)) leaf_name_data.push_back(fecmode.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (switchingst.is_set || is_set(switchingst.yfilter)) leaf_name_data.push_back(switchingst.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nfmphysif-items")
    {
        if(nfmphysif_items == nullptr)
        {
            nfmphysif_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::NfmphysifItems>();
        }
        return nfmphysif_items;
    }

    if(child_yang_name == "priorflowctrl-items")
    {
        if(priorflowctrl_items == nullptr)
        {
            priorflowctrl_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems>();
        }
        return priorflowctrl_items;
    }

    if(child_yang_name == "priorflowctrlwd-items")
    {
        if(priorflowctrlwd_items == nullptr)
        {
            priorflowctrlwd_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems>();
        }
        return priorflowctrlwd_items;
    }

    if(child_yang_name == "physExtd-items")
    {
        if(physextd_items == nullptr)
        {
            physextd_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysExtdItems>();
        }
        return physextd_items;
    }

    if(child_yang_name == "eeep-items")
    {
        if(eeep_items == nullptr)
        {
            eeep_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::EeepItems>();
        }
        return eeep_items;
    }

    if(child_yang_name == "stormctrlp-items")
    {
        if(stormctrlp_items == nullptr)
        {
            stormctrlp_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::StormctrlpItems>();
        }
        return stormctrlp_items;
    }

    if(child_yang_name == "loadp-items")
    {
        if(loadp_items == nullptr)
        {
            loadp_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::LoadpItems>();
        }
        return loadp_items;
    }

    if(child_yang_name == "vlanmapping-items")
    {
        if(vlanmapping_items == nullptr)
        {
            vlanmapping_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::VlanmappingItems>();
        }
        return vlanmapping_items;
    }

    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::VrfItems>();
        }
        return vrf_items;
    }

    if(child_yang_name == "phys-items")
    {
        if(phys_items == nullptr)
        {
            phys_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_>();
        }
        return phys_items;
    }

    if(child_yang_name == "hwifdetails-items")
    {
        if(hwifdetails_items == nullptr)
        {
            hwifdetails_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems>();
        }
        return hwifdetails_items;
    }

    if(child_yang_name == "aggrmbrif-items")
    {
        if(aggrmbrif_items == nullptr)
        {
            aggrmbrif_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems>();
        }
        return aggrmbrif_items;
    }

    if(child_yang_name == "multisiteiftracking-items")
    {
        if(multisiteiftracking_items == nullptr)
        {
            multisiteiftracking_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems>();
        }
        return multisiteiftracking_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "rtInbandConf-items")
    {
        if(rtinbandconf_items == nullptr)
        {
            rtinbandconf_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems>();
        }
        return rtinbandconf_items;
    }

    if(child_yang_name == "rtextConf-items")
    {
        if(rtextconf_items == nullptr)
        {
            rtextconf_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtextConfItems>();
        }
        return rtextconf_items;
    }

    if(child_yang_name == "rtbrConf-items")
    {
        if(rtbrconf_items == nullptr)
        {
            rtbrconf_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtbrConfItems>();
        }
        return rtbrconf_items;
    }

    if(child_yang_name == "rtfvNodePortAtt-items")
    {
        if(rtfvnodeportatt_items == nullptr)
        {
            rtfvnodeportatt_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems>();
        }
        return rtfvnodeportatt_items;
    }

    if(child_yang_name == "rtmbrIfs-items")
    {
        if(rtmbrifs_items == nullptr)
        {
            rtmbrifs_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems>();
        }
        return rtmbrifs_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtphysRtdConf-items")
    {
        if(rtphysrtdconf_items == nullptr)
        {
            rtphysrtdconf_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems>();
        }
        return rtphysrtdconf_items;
    }

    if(child_yang_name == "rtl3EncPhysRtdConf-items")
    {
        if(rtl3encphysrtdconf_items == nullptr)
        {
            rtl3encphysrtdconf_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems>();
        }
        return rtl3encphysrtdconf_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    if(child_yang_name == "rttunnelTunnelMbrIfs-items")
    {
        if(rttunneltunnelmbrifs_items == nullptr)
        {
            rttunneltunnelmbrifs_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems>();
        }
        return rttunneltunnelmbrifs_items;
    }

    if(child_yang_name == "rtLsNodeToIf-items")
    {
        if(rtlsnodetoif_items == nullptr)
        {
            rtlsnodetoif_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems>();
        }
        return rtlsnodetoif_items;
    }

    if(child_yang_name == "dbgIfIn-items")
    {
        if(dbgifin_items == nullptr)
        {
            dbgifin_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfInItems>();
        }
        return dbgifin_items;
    }

    if(child_yang_name == "dbgIfOut-items")
    {
        if(dbgifout_items == nullptr)
        {
            dbgifout_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems>();
        }
        return dbgifout_items;
    }

    if(child_yang_name == "dbgIpIn-items")
    {
        if(dbgipin_items == nullptr)
        {
            dbgipin_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIpInItems>();
        }
        return dbgipin_items;
    }

    if(child_yang_name == "dbgDot1d-items")
    {
        if(dbgdot1d_items == nullptr)
        {
            dbgdot1d_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems>();
        }
        return dbgdot1d_items;
    }

    if(child_yang_name == "dbgEtherStats-items")
    {
        if(dbgetherstats_items == nullptr)
        {
            dbgetherstats_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems>();
        }
        return dbgetherstats_items;
    }

    if(child_yang_name == "dbgDot3Stats-items")
    {
        if(dbgdot3stats_items == nullptr)
        {
            dbgdot3stats_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems>();
        }
        return dbgdot3stats_items;
    }

    if(child_yang_name == "dbgIfHCIn-items")
    {
        if(dbgifhcin_items == nullptr)
        {
            dbgifhcin_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems>();
        }
        return dbgifhcin_items;
    }

    if(child_yang_name == "dbgIfHCOut-items")
    {
        if(dbgifhcout_items == nullptr)
        {
            dbgifhcout_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems>();
        }
        return dbgifhcout_items;
    }

    if(child_yang_name == "dbgIpv6IfStats-items")
    {
        if(dbgipv6ifstats_items == nullptr)
        {
            dbgipv6ifstats_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems>();
        }
        return dbgipv6ifstats_items;
    }

    if(child_yang_name == "dbgIfStorm-items")
    {
        if(dbgifstorm_items == nullptr)
        {
            dbgifstorm_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems>();
        }
        return dbgifstorm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nfmphysif_items != nullptr)
    {
        _children["nfmphysif-items"] = nfmphysif_items;
    }

    if(priorflowctrl_items != nullptr)
    {
        _children["priorflowctrl-items"] = priorflowctrl_items;
    }

    if(priorflowctrlwd_items != nullptr)
    {
        _children["priorflowctrlwd-items"] = priorflowctrlwd_items;
    }

    if(physextd_items != nullptr)
    {
        _children["physExtd-items"] = physextd_items;
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

    if(vlanmapping_items != nullptr)
    {
        _children["vlanmapping-items"] = vlanmapping_items;
    }

    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    if(phys_items != nullptr)
    {
        _children["phys-items"] = phys_items;
    }

    if(hwifdetails_items != nullptr)
    {
        _children["hwifdetails-items"] = hwifdetails_items;
    }

    if(aggrmbrif_items != nullptr)
    {
        _children["aggrmbrif-items"] = aggrmbrif_items;
    }

    if(multisiteiftracking_items != nullptr)
    {
        _children["multisiteiftracking-items"] = multisiteiftracking_items;
    }

    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(rtinbandconf_items != nullptr)
    {
        _children["rtInbandConf-items"] = rtinbandconf_items;
    }

    if(rtextconf_items != nullptr)
    {
        _children["rtextConf-items"] = rtextconf_items;
    }

    if(rtbrconf_items != nullptr)
    {
        _children["rtbrConf-items"] = rtbrconf_items;
    }

    if(rtfvnodeportatt_items != nullptr)
    {
        _children["rtfvNodePortAtt-items"] = rtfvnodeportatt_items;
    }

    if(rtmbrifs_items != nullptr)
    {
        _children["rtmbrIfs-items"] = rtmbrifs_items;
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

    if(rttunneltunnelmbrifs_items != nullptr)
    {
        _children["rttunnelTunnelMbrIfs-items"] = rttunneltunnelmbrifs_items;
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

void System::IntfItems::PhysItems::PhysIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkTransmitReset")
    {
        linktransmitreset = value;
        linktransmitreset.value_namespace = name_space;
        linktransmitreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkDebounceLinkUp")
    {
        linkdebouncelinkup = value;
        linkdebouncelinkup.value_namespace = name_space;
        linkdebouncelinkup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfeTuningDelay")
    {
        dfetuningdelay = value;
        dfetuningdelay.value_namespace = name_space;
        dfetuningdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetTimestampState")
    {
        packettimestampstate = value;
        packettimestampstate.value_namespace = name_space;
        packettimestampstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetTimestampIngressSourceId")
    {
        packettimestampingresssourceid = value;
        packettimestampingresssourceid.value_namespace = name_space;
        packettimestampingresssourceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetTimestampEgressSourceId")
    {
        packettimestampegresssourceid = value;
        packettimestampegresssourceid.value_namespace = name_space;
        packettimestampegresssourceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speedGroup")
    {
        speedgroup = value;
        speedgroup.value_namespace = name_space;
        speedgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "beacon")
    {
        beacon = value;
        beacon.value_namespace = name_space;
        beacon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voiceVlanId")
    {
        voicevlanid = value;
        voicevlanid.value_namespace = name_space;
        voicevlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voiceVlanType")
    {
        voicevlantype = value;
        voicevlantype.value_namespace = name_space;
        voicevlantype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voicePortCos")
    {
        voiceportcos = value;
        voiceportcos.value_namespace = name_space;
        voiceportcos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voicePortTrust")
    {
        voiceporttrust = value;
        voiceporttrust.value_namespace = name_space;
        voiceporttrust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FECMode")
    {
        fecmode = value;
        fecmode.value_namespace = name_space;
        fecmode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "switchingSt")
    {
        switchingst = value;
        switchingst.value_namespace = name_space;
        switchingst.value_namespace_prefix = name_space_prefix;
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

void System::IntfItems::PhysItems::PhysIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "linkTransmitReset")
    {
        linktransmitreset.yfilter = yfilter;
    }
    if(value_path == "linkDebounceLinkUp")
    {
        linkdebouncelinkup.yfilter = yfilter;
    }
    if(value_path == "dfeTuningDelay")
    {
        dfetuningdelay.yfilter = yfilter;
    }
    if(value_path == "packetTimestampState")
    {
        packettimestampstate.yfilter = yfilter;
    }
    if(value_path == "packetTimestampIngressSourceId")
    {
        packettimestampingresssourceid.yfilter = yfilter;
    }
    if(value_path == "packetTimestampEgressSourceId")
    {
        packettimestampegresssourceid.yfilter = yfilter;
    }
    if(value_path == "speedGroup")
    {
        speedgroup.yfilter = yfilter;
    }
    if(value_path == "beacon")
    {
        beacon.yfilter = yfilter;
    }
    if(value_path == "voiceVlanId")
    {
        voicevlanid.yfilter = yfilter;
    }
    if(value_path == "voiceVlanType")
    {
        voicevlantype.yfilter = yfilter;
    }
    if(value_path == "voicePortCos")
    {
        voiceportcos.yfilter = yfilter;
    }
    if(value_path == "voicePortTrust")
    {
        voiceporttrust.yfilter = yfilter;
    }
    if(value_path == "FECMode")
    {
        fecmode.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "switchingSt")
    {
        switchingst.yfilter = yfilter;
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

bool System::IntfItems::PhysItems::PhysIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nfmphysif-items" || name == "priorflowctrl-items" || name == "priorflowctrlwd-items" || name == "physExtd-items" || name == "eeep-items" || name == "stormctrlp-items" || name == "loadp-items" || name == "vlanmapping-items" || name == "vrf-items" || name == "phys-items" || name == "hwifdetails-items" || name == "aggrmbrif-items" || name == "multisiteiftracking-items" || name == "dom-items" || name == "rtInbandConf-items" || name == "rtextConf-items" || name == "rtbrConf-items" || name == "rtfvNodePortAtt-items" || name == "rtmbrIfs-items" || name == "rtvrfMbr-items" || name == "rtphysRtdConf-items" || name == "rtl3EncPhysRtdConf-items" || name == "rtnwPathToIf-items" || name == "rttunnelTunnelMbrIfs-items" || name == "rtLsNodeToIf-items" || name == "dbgIfIn-items" || name == "dbgIfOut-items" || name == "dbgIpIn-items" || name == "dbgDot1d-items" || name == "dbgEtherStats-items" || name == "dbgDot3Stats-items" || name == "dbgIfHCIn-items" || name == "dbgIfHCOut-items" || name == "dbgIpv6IfStats-items" || name == "dbgIfStorm-items" || name == "id" || name == "linkTransmitReset" || name == "linkDebounceLinkUp" || name == "dfeTuningDelay" || name == "packetTimestampState" || name == "packetTimestampIngressSourceId" || name == "packetTimestampEgressSourceId" || name == "speedGroup" || name == "beacon" || name == "voiceVlanId" || name == "voiceVlanType" || name == "voicePortCos" || name == "voicePortTrust" || name == "FECMode" || name == "name" || name == "descr" || name == "switchingSt" || name == "adminSt" || name == "speed" || name == "duplex" || name == "autoNeg" || name == "mtu" || name == "snmpTrapSt" || name == "mode" || name == "layer" || name == "mdix" || name == "delay" || name == "linkDebounce" || name == "dot1qEtherType" || name == "bw" || name == "medium" || name == "inhBw" || name == "spanMode" || name == "linkLog" || name == "trunkLog" || name == "routerMac" || name == "portT" || name == "usage" || name == "trunkVlans" || name == "accessVlan" || name == "controllerId" || name == "nativeVlan" || name == "userCfgdFlags")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::NfmphysifItems()
    :
    slicesrcid{YType::uint32, "sliceSrcId"},
    slotnum{YType::uint32, "slotNum"},
    asicnum{YType::uint32, "asicNum"},
    slicenum{YType::uint32, "sliceNum"}
{

    yang_name = "nfmphysif-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::~NfmphysifItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::has_data() const
{
    if (is_presence_container) return true;
    return slicesrcid.is_set
	|| slotnum.is_set
	|| asicnum.is_set
	|| slicenum.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slicesrcid.yfilter)
	|| ydk::is_set(slotnum.yfilter)
	|| ydk::is_set(asicnum.yfilter)
	|| ydk::is_set(slicenum.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nfmphysif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slicesrcid.is_set || is_set(slicesrcid.yfilter)) leaf_name_data.push_back(slicesrcid.get_name_leafdata());
    if (slotnum.is_set || is_set(slotnum.yfilter)) leaf_name_data.push_back(slotnum.get_name_leafdata());
    if (asicnum.is_set || is_set(asicnum.yfilter)) leaf_name_data.push_back(asicnum.get_name_leafdata());
    if (slicenum.is_set || is_set(slicenum.yfilter)) leaf_name_data.push_back(slicenum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sliceSrcId")
    {
        slicesrcid = value;
        slicesrcid.value_namespace = name_space;
        slicesrcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slotNum")
    {
        slotnum = value;
        slotnum.value_namespace = name_space;
        slotnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asicNum")
    {
        asicnum = value;
        asicnum.value_namespace = name_space;
        asicnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sliceNum")
    {
        slicenum = value;
        slicenum.value_namespace = name_space;
        slicenum.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sliceSrcId")
    {
        slicesrcid.yfilter = yfilter;
    }
    if(value_path == "slotNum")
    {
        slotnum.yfilter = yfilter;
    }
    if(value_path == "asicNum")
    {
        asicnum.yfilter = yfilter;
    }
    if(value_path == "sliceNum")
    {
        slicenum.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sliceSrcId" || name == "slotNum" || name == "asicNum" || name == "sliceNum")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::PriorflowctrlItems()
    :
    mode{YType::uint8, "mode"},
    send_tlv{YType::boolean, "send_tlv"}
{

    yang_name = "priorflowctrl-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::~PriorflowctrlItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| send_tlv.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(send_tlv.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priorflowctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (send_tlv.is_set || is_set(send_tlv.yfilter)) leaf_name_data.push_back(send_tlv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "send_tlv")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::PriorflowctrlwdItems()
    :
    watchdoginterval{YType::uint8, "watchDogInterval"},
    disableaction{YType::boolean, "disableAction"},
    interfacemutiplier{YType::uint8, "interfaceMutiplier"}
{

    yang_name = "priorflowctrlwd-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::~PriorflowctrlwdItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::has_data() const
{
    if (is_presence_container) return true;
    return watchdoginterval.is_set
	|| disableaction.is_set
	|| interfacemutiplier.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(watchdoginterval.yfilter)
	|| ydk::is_set(disableaction.yfilter)
	|| ydk::is_set(interfacemutiplier.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priorflowctrlwd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (watchdoginterval.is_set || is_set(watchdoginterval.yfilter)) leaf_name_data.push_back(watchdoginterval.get_name_leafdata());
    if (disableaction.is_set || is_set(disableaction.yfilter)) leaf_name_data.push_back(disableaction.get_name_leafdata());
    if (interfacemutiplier.is_set || is_set(interfacemutiplier.yfilter)) leaf_name_data.push_back(interfacemutiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "watchDogInterval" || name == "disableAction" || name == "interfaceMutiplier")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::PhysExtdItems()
    :
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
    rtvrfmbr_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "physExtd-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::~PhysExtdItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
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

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::has_operation() const
{
    return is_set(yfilter)
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

std::string System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "physExtd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

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

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::get_children() const
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

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "name" || name == "descr" || name == "id" || name == "portTypeFabric" || name == "routerMacIpv6Extract" || name == "switchportBlock" || name == "switchportIsolated" || name == "switchportMacLearn" || name == "flowCtrl" || name == "stormCtrlBCastLevel" || name == "stormCtrlBCastPPS" || name == "stormCtrlMCastLevel" || name == "stormCtrlMCastPPS" || name == "stormCtrlUCastLevel" || name == "stormCtrlUCastPPS" || name == "stormCtrlAct" || name == "bufferBoost" || name == "switchportVirtualEthernetBridge" || name == "allowMultiTag")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "physExtd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "physExtd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::get_children() const
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

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::EeepItems::EeepItems()
    :
    eeestate{YType::enumeration, "eeeState"},
    eeelpi{YType::enumeration, "eeeLpi"},
    eeelat{YType::enumeration, "eeeLat"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "eeep-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::EeepItems::~EeepItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::EeepItems::has_data() const
{
    if (is_presence_container) return true;
    return eeestate.is_set
	|| eeelpi.is_set
	|| eeelat.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::EeepItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eeestate.yfilter)
	|| ydk::is_set(eeelpi.yfilter)
	|| ydk::is_set(eeelat.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::EeepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::EeepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eeestate.is_set || is_set(eeestate.yfilter)) leaf_name_data.push_back(eeestate.get_name_leafdata());
    if (eeelpi.is_set || is_set(eeelpi.yfilter)) leaf_name_data.push_back(eeelpi.get_name_leafdata());
    if (eeelat.is_set || is_set(eeelat.yfilter)) leaf_name_data.push_back(eeelat.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::EeepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::EeepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::EeepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::EeepItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::EeepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eeeState" || name == "eeeLpi" || name == "eeeLat" || name == "name" || name == "descr")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::StormctrlpItems()
    :
    type{YType::enumeration, "type"},
    rate{YType::str, "rate"},
    burstrate{YType::str, "burstRate"},
    ratepps{YType::uint32, "ratePps"},
    burstpps{YType::uint32, "burstPps"}
{

    yang_name = "stormctrlp-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::~StormctrlpItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| rate.is_set
	|| burstrate.is_set
	|| ratepps.is_set
	|| burstpps.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(burstrate.yfilter)
	|| ydk::is_set(ratepps.yfilter)
	|| ydk::is_set(burstpps.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stormctrlp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (burstrate.is_set || is_set(burstrate.yfilter)) leaf_name_data.push_back(burstrate.get_name_leafdata());
    if (ratepps.is_set || is_set(ratepps.yfilter)) leaf_name_data.push_back(ratepps.get_name_leafdata());
    if (burstpps.is_set || is_set(burstpps.yfilter)) leaf_name_data.push_back(burstpps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "rate" || name == "burstRate" || name == "ratePps" || name == "burstPps")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::LoadpItems::LoadpItems()
    :
    loadintvl1{YType::uint16, "loadIntvl1"},
    loadintvl2{YType::uint16, "loadIntvl2"},
    loadintvl3{YType::uint16, "loadIntvl3"}
{

    yang_name = "loadp-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::LoadpItems::~LoadpItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::LoadpItems::has_data() const
{
    if (is_presence_container) return true;
    return loadintvl1.is_set
	|| loadintvl2.is_set
	|| loadintvl3.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::LoadpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loadintvl1.yfilter)
	|| ydk::is_set(loadintvl2.yfilter)
	|| ydk::is_set(loadintvl3.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::LoadpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loadp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::LoadpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loadintvl1.is_set || is_set(loadintvl1.yfilter)) leaf_name_data.push_back(loadintvl1.get_name_leafdata());
    if (loadintvl2.is_set || is_set(loadintvl2.yfilter)) leaf_name_data.push_back(loadintvl2.get_name_leafdata());
    if (loadintvl3.is_set || is_set(loadintvl3.yfilter)) leaf_name_data.push_back(loadintvl3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::LoadpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::LoadpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::LoadpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::LoadpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::LoadpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loadIntvl1" || name == "loadIntvl2" || name == "loadIntvl3")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlanmappingItems()
    :
    enabled{YType::boolean, "Enabled"}
        ,
    vlantranslatetable_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems>())
{
    vlantranslatetable_items->parent = this;

    yang_name = "vlanmapping-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::~VlanmappingItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| (vlantranslatetable_items !=  nullptr && vlantranslatetable_items->has_data());
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (vlantranslatetable_items !=  nullptr && vlantranslatetable_items->has_operation());
}

std::string System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanmapping-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlantranslatetable-items")
    {
        if(vlantranslatetable_items == nullptr)
        {
            vlantranslatetable_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems>();
        }
        return vlantranslatetable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlantranslatetable_items != nullptr)
    {
        _children["vlantranslatetable-items"] = vlantranslatetable_items;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlantranslatetable-items" || name == "Enabled")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlantranslatetableItems()
    :
    vlan_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems>())
{
    vlan_items->parent = this;

    yang_name = "vlantranslatetable-items"; yang_parent_name = "vlanmapping-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::~VlantranslatetableItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlantranslatetable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanItems()
    :
    vlantranslateentry_list(this, {"vlanid"})
{

    yang_name = "vlan-items"; yang_parent_name = "vlantranslatetable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::~VlanItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlantranslateentry_list.len(); index++)
    {
        if(vlantranslateentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<vlantranslateentry_list.len(); index++)
    {
        if(vlantranslateentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanTranslateEntry-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList>();
        ent_->parent = this;
        vlantranslateentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_children() const
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

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanTranslateEntry-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::VlanTranslateEntryList()
    :
    vlanid{YType::str, "vlanid"},
    innervlanid{YType::str, "innervlanid"},
    translatevlanid{YType::str, "translatevlanid"}
{

    yang_name = "VlanTranslateEntry-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::~VlanTranslateEntryList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| innervlanid.is_set
	|| translatevlanid.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(innervlanid.yfilter)
	|| ydk::is_set(translatevlanid.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanTranslateEntry-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (innervlanid.is_set || is_set(innervlanid.yfilter)) leaf_name_data.push_back(innervlanid.get_name_leafdata());
    if (translatevlanid.is_set || is_set(translatevlanid.yfilter)) leaf_name_data.push_back(translatevlanid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "innervlanid" || name == "translatevlanid")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::VrfItems::VrfItems()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::VrfItems::~VrfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::VrfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::PhysItems_()
    :
    operlinkdebounce{YType::uint16, "operLinkDebounce"},
    sharestate{YType::enumeration, "shareState"},
    operfecmode{YType::enumeration, "operFECMode"},
    cachedusercfgdflags{YType::str, "cachedUserCfgdFlags"},
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
    gport{YType::uint32, "gport"},
    silist{YType::str, "siList"},
    dynamicvlan{YType::boolean, "dynamicVlan"},
    usage{YType::str, "usage"}
        ,
    fcot_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems>())
    , fcotx2_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items>())
    , fcotdd_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems>())
    , portcap_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems>())
{
    fcot_items->parent = this;
    fcotx2_items->parent = this;
    fcotdd_items->parent = this;
    portcap_items->parent = this;

    yang_name = "phys-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::~PhysItems_()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::has_data() const
{
    if (is_presence_container) return true;
    return operlinkdebounce.is_set
	|| sharestate.is_set
	|| operfecmode.is_set
	|| cachedusercfgdflags.is_set
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
	|| gport.is_set
	|| silist.is_set
	|| dynamicvlan.is_set
	|| usage.is_set
	|| (fcot_items !=  nullptr && fcot_items->has_data())
	|| (fcotx2_items !=  nullptr && fcotx2_items->has_data())
	|| (fcotdd_items !=  nullptr && fcotdd_items->has_data())
	|| (portcap_items !=  nullptr && portcap_items->has_data());
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operlinkdebounce.yfilter)
	|| ydk::is_set(sharestate.yfilter)
	|| ydk::is_set(operfecmode.yfilter)
	|| ydk::is_set(cachedusercfgdflags.yfilter)
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
	|| ydk::is_set(gport.yfilter)
	|| ydk::is_set(silist.yfilter)
	|| ydk::is_set(dynamicvlan.yfilter)
	|| ydk::is_set(usage.yfilter)
	|| (fcot_items !=  nullptr && fcot_items->has_operation())
	|| (fcotx2_items !=  nullptr && fcotx2_items->has_operation())
	|| (fcotdd_items !=  nullptr && fcotdd_items->has_operation())
	|| (portcap_items !=  nullptr && portcap_items->has_operation());
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operlinkdebounce.is_set || is_set(operlinkdebounce.yfilter)) leaf_name_data.push_back(operlinkdebounce.get_name_leafdata());
    if (sharestate.is_set || is_set(sharestate.yfilter)) leaf_name_data.push_back(sharestate.get_name_leafdata());
    if (operfecmode.is_set || is_set(operfecmode.yfilter)) leaf_name_data.push_back(operfecmode.get_name_leafdata());
    if (cachedusercfgdflags.is_set || is_set(cachedusercfgdflags.yfilter)) leaf_name_data.push_back(cachedusercfgdflags.get_name_leafdata());
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
    if (gport.is_set || is_set(gport.yfilter)) leaf_name_data.push_back(gport.get_name_leafdata());
    if (silist.is_set || is_set(silist.yfilter)) leaf_name_data.push_back(silist.get_name_leafdata());
    if (dynamicvlan.is_set || is_set(dynamicvlan.yfilter)) leaf_name_data.push_back(dynamicvlan.get_name_leafdata());
    if (usage.is_set || is_set(usage.yfilter)) leaf_name_data.push_back(usage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fcot-items")
    {
        if(fcot_items == nullptr)
        {
            fcot_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems>();
        }
        return fcot_items;
    }

    if(child_yang_name == "fcotx2-items")
    {
        if(fcotx2_items == nullptr)
        {
            fcotx2_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items>();
        }
        return fcotx2_items;
    }

    if(child_yang_name == "fcotdd-items")
    {
        if(fcotdd_items == nullptr)
        {
            fcotdd_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems>();
        }
        return fcotdd_items;
    }

    if(child_yang_name == "portcap-items")
    {
        if(portcap_items == nullptr)
        {
            portcap_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems>();
        }
        return portcap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fcot_items != nullptr)
    {
        _children["fcot-items"] = fcot_items;
    }

    if(fcotx2_items != nullptr)
    {
        _children["fcotx2-items"] = fcotx2_items;
    }

    if(fcotdd_items != nullptr)
    {
        _children["fcotdd-items"] = fcotdd_items;
    }

    if(portcap_items != nullptr)
    {
        _children["portcap-items"] = portcap_items;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operLinkDebounce")
    {
        operlinkdebounce = value;
        operlinkdebounce.value_namespace = name_space;
        operlinkdebounce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shareState")
    {
        sharestate = value;
        sharestate.value_namespace = name_space;
        sharestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operFECMode")
    {
        operfecmode = value;
        operfecmode.value_namespace = name_space;
        operfecmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cachedUserCfgdFlags")
    {
        cachedusercfgdflags = value;
        cachedusercfgdflags.value_namespace = name_space;
        cachedusercfgdflags.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "gport")
    {
        gport = value;
        gport.value_namespace = name_space;
        gport.value_namespace_prefix = name_space_prefix;
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

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operLinkDebounce")
    {
        operlinkdebounce.yfilter = yfilter;
    }
    if(value_path == "shareState")
    {
        sharestate.yfilter = yfilter;
    }
    if(value_path == "operFECMode")
    {
        operfecmode.yfilter = yfilter;
    }
    if(value_path == "cachedUserCfgdFlags")
    {
        cachedusercfgdflags.yfilter = yfilter;
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
    if(value_path == "gport")
    {
        gport.yfilter = yfilter;
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

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fcot-items" || name == "fcotx2-items" || name == "fcotdd-items" || name == "portcap-items" || name == "operLinkDebounce" || name == "shareState" || name == "operFECMode" || name == "cachedUserCfgdFlags" || name == "ifIndex" || name == "operAutoNeg" || name == "operMtu" || name == "adminSt" || name == "operDescr" || name == "operSt" || name == "operStQual" || name == "operStQualCode" || name == "operErrDisQual" || name == "operSpeed" || name == "operMode" || name == "operDuplex" || name == "operFlowCtrl" || name == "operPhyEnSt" || name == "backplaneMac" || name == "operRouterMac" || name == "txT" || name == "lastLinkStChg" || name == "portCfgWaitFlags" || name == "accessVlan" || name == "nativeVlan" || name == "cfgNativeVlan" || name == "cfgAccessVlan" || name == "primaryVlan" || name == "operBitset" || name == "vdcId" || name == "resetCtr" || name == "media" || name == "encap" || name == "iod" || name == "allowedVlans" || name == "operVlans" || name == "errVlans" || name == "operTrunkStatus" || name == "bundleIndex" || name == "operMdix" || name == "currErrIndex" || name == "lastErrors" || name == "errDisTimerRunning" || name == "bundleBupId" || name == "operDceMode" || name == "intfT" || name == "diags" || name == "operEEEState" || name == "operEEETxWkTime" || name == "operEEERxWkTime" || name == "userCfgdFlags" || name == "numOfSI" || name == "gport" || name == "siList" || name == "dynamicVlan" || name == "usage")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::FcotItems()
    :
    partnumber{YType::str, "partNumber"},
    versionid{YType::str, "versionId"},
    description{YType::str, "description"},
    isfcotpresent{YType::boolean, "isFcotPresent"},
    state{YType::enumeration, "state"},
    flags{YType::enumeration, "flags"},
    type{YType::enumeration, "type"},
    typename_{YType::str, "typeName"},
    eid{YType::str, "eid"},
    xcvrid{YType::uint8, "xcvrId"},
    xcvrextid{YType::uint8, "xcvrExtId"},
    connecttype{YType::uint8, "connectType"},
    xcvrcode{YType::str, "xcvrCode"},
    encoding{YType::uint8, "encoding"},
    brin100mhz{YType::uint8, "brIn100MHz"},
    baseresvd1{YType::uint8, "baseResvd1"},
    distinkmfor9u{YType::uint8, "distInKmFor9u"},
    distin100mfor9u{YType::uint8, "distIn100mFor9u"},
    distin10mfor50u{YType::uint8, "distIn10mFor50u"},
    distin10mfor60u{YType::uint8, "distIn10mFor60u"},
    distin1mforcu{YType::uint8, "distIn1mForCu"},
    baseresvd2{YType::uint8, "baseResvd2"},
    vendorname{YType::str, "vendorName"},
    baseresvd3{YType::uint8, "baseResvd3"},
    vendorid{YType::str, "vendorId"},
    vendorpn{YType::str, "vendorPn"},
    vendorrev{YType::str, "vendorRev"},
    baseresvd4{YType::str, "baseResvd4"},
    ccid{YType::uint8, "ccid"},
    extoption{YType::str, "extOption"},
    brmaxmargin{YType::uint8, "brMaxMargin"},
    brminmargin{YType::uint8, "brMinMargin"},
    vendorsn{YType::str, "vendorSn"},
    datecode{YType::str, "dateCode"},
    diagmontype{YType::uint8, "diagMonType"},
    enhoption{YType::uint8, "enhOption"},
    sff8472compl{YType::uint8, "sff8472Compl"},
    ccex{YType::uint8, "ccex"},
    vendordata{YType::str, "vendorData"},
    maxspeed{YType::uint32, "maxSpeed"},
    minspeed{YType::uint32, "minSpeed"},
    fcotnum{YType::uint8, "fcotNum"},
    fcottype{YType::uint8, "fcotType"},
    gigethcc{YType::uint8, "gigEthCC"},
    fctxtype{YType::uint8, "fCTxType"}
        ,
    lane_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems>())
    , domstats_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems>())
{
    lane_items->parent = this;
    domstats_items->parent = this;

    yang_name = "fcot-items"; yang_parent_name = "phys-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::~FcotItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::has_data() const
{
    if (is_presence_container) return true;
    return partnumber.is_set
	|| versionid.is_set
	|| description.is_set
	|| isfcotpresent.is_set
	|| state.is_set
	|| flags.is_set
	|| type.is_set
	|| typename_.is_set
	|| eid.is_set
	|| xcvrid.is_set
	|| xcvrextid.is_set
	|| connecttype.is_set
	|| xcvrcode.is_set
	|| encoding.is_set
	|| brin100mhz.is_set
	|| baseresvd1.is_set
	|| distinkmfor9u.is_set
	|| distin100mfor9u.is_set
	|| distin10mfor50u.is_set
	|| distin10mfor60u.is_set
	|| distin1mforcu.is_set
	|| baseresvd2.is_set
	|| vendorname.is_set
	|| baseresvd3.is_set
	|| vendorid.is_set
	|| vendorpn.is_set
	|| vendorrev.is_set
	|| baseresvd4.is_set
	|| ccid.is_set
	|| extoption.is_set
	|| brmaxmargin.is_set
	|| brminmargin.is_set
	|| vendorsn.is_set
	|| datecode.is_set
	|| diagmontype.is_set
	|| enhoption.is_set
	|| sff8472compl.is_set
	|| ccex.is_set
	|| vendordata.is_set
	|| maxspeed.is_set
	|| minspeed.is_set
	|| fcotnum.is_set
	|| fcottype.is_set
	|| gigethcc.is_set
	|| fctxtype.is_set
	|| (lane_items !=  nullptr && lane_items->has_data())
	|| (domstats_items !=  nullptr && domstats_items->has_data());
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(versionid.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(isfcotpresent.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(typename_.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(xcvrid.yfilter)
	|| ydk::is_set(xcvrextid.yfilter)
	|| ydk::is_set(connecttype.yfilter)
	|| ydk::is_set(xcvrcode.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(brin100mhz.yfilter)
	|| ydk::is_set(baseresvd1.yfilter)
	|| ydk::is_set(distinkmfor9u.yfilter)
	|| ydk::is_set(distin100mfor9u.yfilter)
	|| ydk::is_set(distin10mfor50u.yfilter)
	|| ydk::is_set(distin10mfor60u.yfilter)
	|| ydk::is_set(distin1mforcu.yfilter)
	|| ydk::is_set(baseresvd2.yfilter)
	|| ydk::is_set(vendorname.yfilter)
	|| ydk::is_set(baseresvd3.yfilter)
	|| ydk::is_set(vendorid.yfilter)
	|| ydk::is_set(vendorpn.yfilter)
	|| ydk::is_set(vendorrev.yfilter)
	|| ydk::is_set(baseresvd4.yfilter)
	|| ydk::is_set(ccid.yfilter)
	|| ydk::is_set(extoption.yfilter)
	|| ydk::is_set(brmaxmargin.yfilter)
	|| ydk::is_set(brminmargin.yfilter)
	|| ydk::is_set(vendorsn.yfilter)
	|| ydk::is_set(datecode.yfilter)
	|| ydk::is_set(diagmontype.yfilter)
	|| ydk::is_set(enhoption.yfilter)
	|| ydk::is_set(sff8472compl.yfilter)
	|| ydk::is_set(ccex.yfilter)
	|| ydk::is_set(vendordata.yfilter)
	|| ydk::is_set(maxspeed.yfilter)
	|| ydk::is_set(minspeed.yfilter)
	|| ydk::is_set(fcotnum.yfilter)
	|| ydk::is_set(fcottype.yfilter)
	|| ydk::is_set(gigethcc.yfilter)
	|| ydk::is_set(fctxtype.yfilter)
	|| (lane_items !=  nullptr && lane_items->has_operation())
	|| (domstats_items !=  nullptr && domstats_items->has_operation());
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (versionid.is_set || is_set(versionid.yfilter)) leaf_name_data.push_back(versionid.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (isfcotpresent.is_set || is_set(isfcotpresent.yfilter)) leaf_name_data.push_back(isfcotpresent.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (typename_.is_set || is_set(typename_.yfilter)) leaf_name_data.push_back(typename_.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (xcvrid.is_set || is_set(xcvrid.yfilter)) leaf_name_data.push_back(xcvrid.get_name_leafdata());
    if (xcvrextid.is_set || is_set(xcvrextid.yfilter)) leaf_name_data.push_back(xcvrextid.get_name_leafdata());
    if (connecttype.is_set || is_set(connecttype.yfilter)) leaf_name_data.push_back(connecttype.get_name_leafdata());
    if (xcvrcode.is_set || is_set(xcvrcode.yfilter)) leaf_name_data.push_back(xcvrcode.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (brin100mhz.is_set || is_set(brin100mhz.yfilter)) leaf_name_data.push_back(brin100mhz.get_name_leafdata());
    if (baseresvd1.is_set || is_set(baseresvd1.yfilter)) leaf_name_data.push_back(baseresvd1.get_name_leafdata());
    if (distinkmfor9u.is_set || is_set(distinkmfor9u.yfilter)) leaf_name_data.push_back(distinkmfor9u.get_name_leafdata());
    if (distin100mfor9u.is_set || is_set(distin100mfor9u.yfilter)) leaf_name_data.push_back(distin100mfor9u.get_name_leafdata());
    if (distin10mfor50u.is_set || is_set(distin10mfor50u.yfilter)) leaf_name_data.push_back(distin10mfor50u.get_name_leafdata());
    if (distin10mfor60u.is_set || is_set(distin10mfor60u.yfilter)) leaf_name_data.push_back(distin10mfor60u.get_name_leafdata());
    if (distin1mforcu.is_set || is_set(distin1mforcu.yfilter)) leaf_name_data.push_back(distin1mforcu.get_name_leafdata());
    if (baseresvd2.is_set || is_set(baseresvd2.yfilter)) leaf_name_data.push_back(baseresvd2.get_name_leafdata());
    if (vendorname.is_set || is_set(vendorname.yfilter)) leaf_name_data.push_back(vendorname.get_name_leafdata());
    if (baseresvd3.is_set || is_set(baseresvd3.yfilter)) leaf_name_data.push_back(baseresvd3.get_name_leafdata());
    if (vendorid.is_set || is_set(vendorid.yfilter)) leaf_name_data.push_back(vendorid.get_name_leafdata());
    if (vendorpn.is_set || is_set(vendorpn.yfilter)) leaf_name_data.push_back(vendorpn.get_name_leafdata());
    if (vendorrev.is_set || is_set(vendorrev.yfilter)) leaf_name_data.push_back(vendorrev.get_name_leafdata());
    if (baseresvd4.is_set || is_set(baseresvd4.yfilter)) leaf_name_data.push_back(baseresvd4.get_name_leafdata());
    if (ccid.is_set || is_set(ccid.yfilter)) leaf_name_data.push_back(ccid.get_name_leafdata());
    if (extoption.is_set || is_set(extoption.yfilter)) leaf_name_data.push_back(extoption.get_name_leafdata());
    if (brmaxmargin.is_set || is_set(brmaxmargin.yfilter)) leaf_name_data.push_back(brmaxmargin.get_name_leafdata());
    if (brminmargin.is_set || is_set(brminmargin.yfilter)) leaf_name_data.push_back(brminmargin.get_name_leafdata());
    if (vendorsn.is_set || is_set(vendorsn.yfilter)) leaf_name_data.push_back(vendorsn.get_name_leafdata());
    if (datecode.is_set || is_set(datecode.yfilter)) leaf_name_data.push_back(datecode.get_name_leafdata());
    if (diagmontype.is_set || is_set(diagmontype.yfilter)) leaf_name_data.push_back(diagmontype.get_name_leafdata());
    if (enhoption.is_set || is_set(enhoption.yfilter)) leaf_name_data.push_back(enhoption.get_name_leafdata());
    if (sff8472compl.is_set || is_set(sff8472compl.yfilter)) leaf_name_data.push_back(sff8472compl.get_name_leafdata());
    if (ccex.is_set || is_set(ccex.yfilter)) leaf_name_data.push_back(ccex.get_name_leafdata());
    if (vendordata.is_set || is_set(vendordata.yfilter)) leaf_name_data.push_back(vendordata.get_name_leafdata());
    if (maxspeed.is_set || is_set(maxspeed.yfilter)) leaf_name_data.push_back(maxspeed.get_name_leafdata());
    if (minspeed.is_set || is_set(minspeed.yfilter)) leaf_name_data.push_back(minspeed.get_name_leafdata());
    if (fcotnum.is_set || is_set(fcotnum.yfilter)) leaf_name_data.push_back(fcotnum.get_name_leafdata());
    if (fcottype.is_set || is_set(fcottype.yfilter)) leaf_name_data.push_back(fcottype.get_name_leafdata());
    if (gigethcc.is_set || is_set(gigethcc.yfilter)) leaf_name_data.push_back(gigethcc.get_name_leafdata());
    if (fctxtype.is_set || is_set(fctxtype.yfilter)) leaf_name_data.push_back(fctxtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lane-items")
    {
        if(lane_items == nullptr)
        {
            lane_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems>();
        }
        return lane_items;
    }

    if(child_yang_name == "domstats-items")
    {
        if(domstats_items == nullptr)
        {
            domstats_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems>();
        }
        return domstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lane_items != nullptr)
    {
        _children["lane-items"] = lane_items;
    }

    if(domstats_items != nullptr)
    {
        _children["domstats-items"] = domstats_items;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "versionId")
    {
        versionid = value;
        versionid.value_namespace = name_space;
        versionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isFcotPresent")
    {
        isfcotpresent = value;
        isfcotpresent.value_namespace = name_space;
        isfcotpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "typeName")
    {
        typename_ = value;
        typename_.value_namespace = name_space;
        typename_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvrId")
    {
        xcvrid = value;
        xcvrid.value_namespace = name_space;
        xcvrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvrExtId")
    {
        xcvrextid = value;
        xcvrextid.value_namespace = name_space;
        xcvrextid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connectType")
    {
        connecttype = value;
        connecttype.value_namespace = name_space;
        connecttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvrCode")
    {
        xcvrcode = value;
        xcvrcode.value_namespace = name_space;
        xcvrcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brIn100MHz")
    {
        brin100mhz = value;
        brin100mhz.value_namespace = name_space;
        brin100mhz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd1")
    {
        baseresvd1 = value;
        baseresvd1.value_namespace = name_space;
        baseresvd1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distInKmFor9u")
    {
        distinkmfor9u = value;
        distinkmfor9u.value_namespace = name_space;
        distinkmfor9u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn100mFor9u")
    {
        distin100mfor9u = value;
        distin100mfor9u.value_namespace = name_space;
        distin100mfor9u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn10mFor50u")
    {
        distin10mfor50u = value;
        distin10mfor50u.value_namespace = name_space;
        distin10mfor50u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn10mFor60u")
    {
        distin10mfor60u = value;
        distin10mfor60u.value_namespace = name_space;
        distin10mfor60u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn1mForCu")
    {
        distin1mforcu = value;
        distin1mforcu.value_namespace = name_space;
        distin1mforcu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd2")
    {
        baseresvd2 = value;
        baseresvd2.value_namespace = name_space;
        baseresvd2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorName")
    {
        vendorname = value;
        vendorname.value_namespace = name_space;
        vendorname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd3")
    {
        baseresvd3 = value;
        baseresvd3.value_namespace = name_space;
        baseresvd3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorId")
    {
        vendorid = value;
        vendorid.value_namespace = name_space;
        vendorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorPn")
    {
        vendorpn = value;
        vendorpn.value_namespace = name_space;
        vendorpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorRev")
    {
        vendorrev = value;
        vendorrev.value_namespace = name_space;
        vendorrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd4")
    {
        baseresvd4 = value;
        baseresvd4.value_namespace = name_space;
        baseresvd4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccid")
    {
        ccid = value;
        ccid.value_namespace = name_space;
        ccid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extOption")
    {
        extoption = value;
        extoption.value_namespace = name_space;
        extoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brMaxMargin")
    {
        brmaxmargin = value;
        brmaxmargin.value_namespace = name_space;
        brmaxmargin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brMinMargin")
    {
        brminmargin = value;
        brminmargin.value_namespace = name_space;
        brminmargin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorSn")
    {
        vendorsn = value;
        vendorsn.value_namespace = name_space;
        vendorsn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dateCode")
    {
        datecode = value;
        datecode.value_namespace = name_space;
        datecode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagMonType")
    {
        diagmontype = value;
        diagmontype.value_namespace = name_space;
        diagmontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhOption")
    {
        enhoption = value;
        enhoption.value_namespace = name_space;
        enhoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sff8472Compl")
    {
        sff8472compl = value;
        sff8472compl.value_namespace = name_space;
        sff8472compl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccex")
    {
        ccex = value;
        ccex.value_namespace = name_space;
        ccex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorData")
    {
        vendordata = value;
        vendordata.value_namespace = name_space;
        vendordata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed = value;
        maxspeed.value_namespace = name_space;
        maxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minSpeed")
    {
        minspeed = value;
        minspeed.value_namespace = name_space;
        minspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotNum")
    {
        fcotnum = value;
        fcotnum.value_namespace = name_space;
        fcotnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotType")
    {
        fcottype = value;
        fcottype.value_namespace = name_space;
        fcottype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc = value;
        gigethcc.value_namespace = name_space;
        gigethcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fCTxType")
    {
        fctxtype = value;
        fctxtype.value_namespace = name_space;
        fctxtype.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "versionId")
    {
        versionid.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "isFcotPresent")
    {
        isfcotpresent.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "typeName")
    {
        typename_.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "xcvrId")
    {
        xcvrid.yfilter = yfilter;
    }
    if(value_path == "xcvrExtId")
    {
        xcvrextid.yfilter = yfilter;
    }
    if(value_path == "connectType")
    {
        connecttype.yfilter = yfilter;
    }
    if(value_path == "xcvrCode")
    {
        xcvrcode.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "brIn100MHz")
    {
        brin100mhz.yfilter = yfilter;
    }
    if(value_path == "baseResvd1")
    {
        baseresvd1.yfilter = yfilter;
    }
    if(value_path == "distInKmFor9u")
    {
        distinkmfor9u.yfilter = yfilter;
    }
    if(value_path == "distIn100mFor9u")
    {
        distin100mfor9u.yfilter = yfilter;
    }
    if(value_path == "distIn10mFor50u")
    {
        distin10mfor50u.yfilter = yfilter;
    }
    if(value_path == "distIn10mFor60u")
    {
        distin10mfor60u.yfilter = yfilter;
    }
    if(value_path == "distIn1mForCu")
    {
        distin1mforcu.yfilter = yfilter;
    }
    if(value_path == "baseResvd2")
    {
        baseresvd2.yfilter = yfilter;
    }
    if(value_path == "vendorName")
    {
        vendorname.yfilter = yfilter;
    }
    if(value_path == "baseResvd3")
    {
        baseresvd3.yfilter = yfilter;
    }
    if(value_path == "vendorId")
    {
        vendorid.yfilter = yfilter;
    }
    if(value_path == "vendorPn")
    {
        vendorpn.yfilter = yfilter;
    }
    if(value_path == "vendorRev")
    {
        vendorrev.yfilter = yfilter;
    }
    if(value_path == "baseResvd4")
    {
        baseresvd4.yfilter = yfilter;
    }
    if(value_path == "ccid")
    {
        ccid.yfilter = yfilter;
    }
    if(value_path == "extOption")
    {
        extoption.yfilter = yfilter;
    }
    if(value_path == "brMaxMargin")
    {
        brmaxmargin.yfilter = yfilter;
    }
    if(value_path == "brMinMargin")
    {
        brminmargin.yfilter = yfilter;
    }
    if(value_path == "vendorSn")
    {
        vendorsn.yfilter = yfilter;
    }
    if(value_path == "dateCode")
    {
        datecode.yfilter = yfilter;
    }
    if(value_path == "diagMonType")
    {
        diagmontype.yfilter = yfilter;
    }
    if(value_path == "enhOption")
    {
        enhoption.yfilter = yfilter;
    }
    if(value_path == "sff8472Compl")
    {
        sff8472compl.yfilter = yfilter;
    }
    if(value_path == "ccex")
    {
        ccex.yfilter = yfilter;
    }
    if(value_path == "vendorData")
    {
        vendordata.yfilter = yfilter;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed.yfilter = yfilter;
    }
    if(value_path == "minSpeed")
    {
        minspeed.yfilter = yfilter;
    }
    if(value_path == "fcotNum")
    {
        fcotnum.yfilter = yfilter;
    }
    if(value_path == "fcotType")
    {
        fcottype.yfilter = yfilter;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc.yfilter = yfilter;
    }
    if(value_path == "fCTxType")
    {
        fctxtype.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lane-items" || name == "domstats-items" || name == "partNumber" || name == "versionId" || name == "description" || name == "isFcotPresent" || name == "state" || name == "flags" || name == "type" || name == "typeName" || name == "eid" || name == "xcvrId" || name == "xcvrExtId" || name == "connectType" || name == "xcvrCode" || name == "encoding" || name == "brIn100MHz" || name == "baseResvd1" || name == "distInKmFor9u" || name == "distIn100mFor9u" || name == "distIn10mFor50u" || name == "distIn10mFor60u" || name == "distIn1mForCu" || name == "baseResvd2" || name == "vendorName" || name == "baseResvd3" || name == "vendorId" || name == "vendorPn" || name == "vendorRev" || name == "baseResvd4" || name == "ccid" || name == "extOption" || name == "brMaxMargin" || name == "brMinMargin" || name == "vendorSn" || name == "dateCode" || name == "diagMonType" || name == "enhOption" || name == "sff8472Compl" || name == "ccex" || name == "vendorData" || name == "maxSpeed" || name == "minSpeed" || name == "fcotNum" || name == "fcotType" || name == "gigEthCC" || name == "fCTxType")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::LaneItems()
    :
    fcotsensor_list(this, {"laneid", "sensorid"})
{

    yang_name = "lane-items"; yang_parent_name = "fcot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::~LaneItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fcotsensor_list.len(); index++)
    {
        if(fcotsensor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::has_operation() const
{
    for (std::size_t index=0; index<fcotsensor_list.len(); index++)
    {
        if(fcotsensor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lane-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FcotSensor-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList>();
        ent_->parent = this;
        fcotsensor_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fcotsensor_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FcotSensor-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::FcotSensorList()
    :
    laneid{YType::uint16, "laneId"},
    sensorid{YType::uint16, "sensorId"},
    lanetype{YType::enumeration, "laneType"},
    description{YType::str, "description"},
    unit{YType::str, "unit"},
    value_{YType::str, "value"},
    highalarm{YType::str, "highAlarm"},
    highwarning{YType::str, "highWarning"},
    lowalarm{YType::str, "lowAlarm"},
    lowwarning{YType::str, "lowWarning"},
    max{YType::str, "max"},
    min{YType::str, "min"},
    avg{YType::str, "avg"},
    instant{YType::str, "instant"},
    alert{YType::enumeration, "alert"}
{

    yang_name = "FcotSensor-list"; yang_parent_name = "lane-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::~FcotSensorList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::has_data() const
{
    if (is_presence_container) return true;
    return laneid.is_set
	|| sensorid.is_set
	|| lanetype.is_set
	|| description.is_set
	|| unit.is_set
	|| value_.is_set
	|| highalarm.is_set
	|| highwarning.is_set
	|| lowalarm.is_set
	|| lowwarning.is_set
	|| max.is_set
	|| min.is_set
	|| avg.is_set
	|| instant.is_set
	|| alert.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(laneid.yfilter)
	|| ydk::is_set(sensorid.yfilter)
	|| ydk::is_set(lanetype.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(highalarm.yfilter)
	|| ydk::is_set(highwarning.yfilter)
	|| ydk::is_set(lowalarm.yfilter)
	|| ydk::is_set(lowwarning.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(instant.yfilter)
	|| ydk::is_set(alert.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FcotSensor-list";
    ADD_KEY_TOKEN(laneid, "laneId");
    ADD_KEY_TOKEN(sensorid, "sensorId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (laneid.is_set || is_set(laneid.yfilter)) leaf_name_data.push_back(laneid.get_name_leafdata());
    if (sensorid.is_set || is_set(sensorid.yfilter)) leaf_name_data.push_back(sensorid.get_name_leafdata());
    if (lanetype.is_set || is_set(lanetype.yfilter)) leaf_name_data.push_back(lanetype.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (highalarm.is_set || is_set(highalarm.yfilter)) leaf_name_data.push_back(highalarm.get_name_leafdata());
    if (highwarning.is_set || is_set(highwarning.yfilter)) leaf_name_data.push_back(highwarning.get_name_leafdata());
    if (lowalarm.is_set || is_set(lowalarm.yfilter)) leaf_name_data.push_back(lowalarm.get_name_leafdata());
    if (lowwarning.is_set || is_set(lowwarning.yfilter)) leaf_name_data.push_back(lowwarning.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());
    if (alert.is_set || is_set(alert.yfilter)) leaf_name_data.push_back(alert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "laneId")
    {
        laneid = value;
        laneid.value_namespace = name_space;
        laneid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensorId")
    {
        sensorid = value;
        sensorid.value_namespace = name_space;
        sensorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laneType")
    {
        lanetype = value;
        lanetype.value_namespace = name_space;
        lanetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highAlarm")
    {
        highalarm = value;
        highalarm.value_namespace = name_space;
        highalarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highWarning")
    {
        highwarning = value;
        highwarning.value_namespace = name_space;
        highwarning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowAlarm")
    {
        lowalarm = value;
        lowalarm.value_namespace = name_space;
        lowalarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowWarning")
    {
        lowwarning = value;
        lowwarning.value_namespace = name_space;
        lowwarning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alert")
    {
        alert = value;
        alert.value_namespace = name_space;
        alert.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "laneId")
    {
        laneid.yfilter = yfilter;
    }
    if(value_path == "sensorId")
    {
        sensorid.yfilter = yfilter;
    }
    if(value_path == "laneType")
    {
        lanetype.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "highAlarm")
    {
        highalarm.yfilter = yfilter;
    }
    if(value_path == "highWarning")
    {
        highwarning.yfilter = yfilter;
    }
    if(value_path == "lowAlarm")
    {
        lowalarm.yfilter = yfilter;
    }
    if(value_path == "lowWarning")
    {
        lowwarning.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
    if(value_path == "alert")
    {
        alert.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "laneId" || name == "sensorId" || name == "laneType" || name == "description" || name == "unit" || name == "value" || name == "highAlarm" || name == "highWarning" || name == "lowAlarm" || name == "lowWarning" || name == "max" || name == "min" || name == "avg" || name == "instant" || name == "alert")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::DomstatsItems()
    :
    numlanes{YType::uint16, "numLanes"}
        ,
    lane_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems>())
{
    lane_items->parent = this;

    yang_name = "domstats-items"; yang_parent_name = "fcot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::~DomstatsItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return numlanes.is_set
	|| (lane_items !=  nullptr && lane_items->has_data());
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(numlanes.yfilter)
	|| (lane_items !=  nullptr && lane_items->has_operation());
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (numlanes.is_set || is_set(numlanes.yfilter)) leaf_name_data.push_back(numlanes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lane-items")
    {
        if(lane_items == nullptr)
        {
            lane_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems>();
        }
        return lane_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lane_items != nullptr)
    {
        _children["lane-items"] = lane_items;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "numLanes")
    {
        numlanes = value;
        numlanes.value_namespace = name_space;
        numlanes.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "numLanes")
    {
        numlanes.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lane-items" || name == "numLanes")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::LaneItems()
    :
    fcotlane_list(this, {"laneid"})
{

    yang_name = "lane-items"; yang_parent_name = "domstats-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::~LaneItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fcotlane_list.len(); index++)
    {
        if(fcotlane_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::has_operation() const
{
    for (std::size_t index=0; index<fcotlane_list.len(); index++)
    {
        if(fcotlane_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lane-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FcotLane-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::FcotLaneList>();
        ent_->parent = this;
        fcotlane_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fcotlane_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FcotLane-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::FcotLaneList::FcotLaneList()
    :
    laneid{YType::uint16, "laneId"},
    description{YType::str, "description"},
    transmitfaultcount{YType::uint64, "transmitFaultCount"}
{

    yang_name = "FcotLane-list"; yang_parent_name = "lane-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::FcotLaneList::~FcotLaneList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::FcotLaneList::has_data() const
{
    if (is_presence_container) return true;
    return laneid.is_set
	|| description.is_set
	|| transmitfaultcount.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::FcotLaneList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(laneid.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(transmitfaultcount.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::FcotLaneList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FcotLane-list";
    ADD_KEY_TOKEN(laneid, "laneId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::FcotLaneList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (laneid.is_set || is_set(laneid.yfilter)) leaf_name_data.push_back(laneid.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (transmitfaultcount.is_set || is_set(transmitfaultcount.yfilter)) leaf_name_data.push_back(transmitfaultcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::FcotLaneList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::FcotLaneList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::FcotLaneList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "laneId")
    {
        laneid = value;
        laneid.value_namespace = name_space;
        laneid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitFaultCount")
    {
        transmitfaultcount = value;
        transmitfaultcount.value_namespace = name_space;
        transmitfaultcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::FcotLaneList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "laneId")
    {
        laneid.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "transmitFaultCount")
    {
        transmitfaultcount.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::FcotLaneList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "laneId" || name == "description" || name == "transmitFaultCount")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::Fcotx2Items()
    :
    partnumber{YType::str, "partNumber"},
    versionid{YType::str, "versionId"},
    description{YType::str, "description"},
    isfcotpresent{YType::boolean, "isFcotPresent"},
    state{YType::enumeration, "state"},
    flags{YType::enumeration, "flags"},
    type{YType::enumeration, "type"},
    typename_{YType::str, "typeName"},
    eid{YType::str, "eid"},
    xcvrtype{YType::uint8, "xcvrType"},
    connecttype{YType::uint8, "connectType"},
    bitencoding{YType::uint8, "bitEncoding"},
    bitratembps{YType::str, "bitRateMbps"},
    protocoltype{YType::uint8, "protocolType"},
    xgethcode{YType::str, "xgEthCode"},
    sonetsdhcode{YType::str, "sonetSdhCode"},
    xgfccode{YType::str, "xgFcCode"},
    range{YType::str, "range"},
    fibretype{YType::str, "fibreType"},
    wavelench0{YType::str, "waveLenCh0"},
    wavelench1{YType::str, "waveLenCh1"},
    wavelench2{YType::str, "waveLenCh2"},
    wavelench3{YType::str, "waveLenCh3"},
    packageoui{YType::str, "packageOui"},
    vendorname{YType::str, "vendorName"},
    vendorpn{YType::str, "vendorPn"},
    vendorrev{YType::str, "vendorRev"},
    vendorserno{YType::str, "vendorSerNo"},
    datecode{YType::str, "dateCode"},
    lotcode{YType::str, "lotCode"},
    fivevstressenv{YType::uint8, "fiveVStressEnv"},
    threethreevstressenv{YType::uint8, "threeThreeVStressEnv"},
    apsstressenv{YType::uint8, "apsStressEnv"},
    normalapsvolt{YType::uint8, "normalApsVolt"},
    diagoptmoncap{YType::uint8, "diagOptMonCap"},
    lowpwrstartupcap{YType::uint8, "lowPwrStartupCap"},
    reserved{YType::uint8, "reserved"},
    checksum{YType::uint8, "checksum"},
    ciscopid{YType::str, "ciscoPid"},
    ciscovid{YType::str, "ciscoVid"},
    ciscosn{YType::str, "ciscoSN"},
    ciscopn{YType::str, "ciscoPN"},
    ciscorev{YType::str, "ciscoRev"},
    extvendorspecific{YType::str, "extVendorSpecific"},
    maxspeed{YType::uint32, "maxSpeed"},
    minspeed{YType::uint32, "minSpeed"},
    fcotnum{YType::uint8, "fcotNum"},
    fcottype{YType::uint8, "fcotType"},
    gigethcc{YType::uint8, "gigEthCC"},
    fctxtype{YType::uint8, "fCTxType"}
{

    yang_name = "fcotx2-items"; yang_parent_name = "phys-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::~Fcotx2Items()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::has_data() const
{
    if (is_presence_container) return true;
    return partnumber.is_set
	|| versionid.is_set
	|| description.is_set
	|| isfcotpresent.is_set
	|| state.is_set
	|| flags.is_set
	|| type.is_set
	|| typename_.is_set
	|| eid.is_set
	|| xcvrtype.is_set
	|| connecttype.is_set
	|| bitencoding.is_set
	|| bitratembps.is_set
	|| protocoltype.is_set
	|| xgethcode.is_set
	|| sonetsdhcode.is_set
	|| xgfccode.is_set
	|| range.is_set
	|| fibretype.is_set
	|| wavelench0.is_set
	|| wavelench1.is_set
	|| wavelench2.is_set
	|| wavelench3.is_set
	|| packageoui.is_set
	|| vendorname.is_set
	|| vendorpn.is_set
	|| vendorrev.is_set
	|| vendorserno.is_set
	|| datecode.is_set
	|| lotcode.is_set
	|| fivevstressenv.is_set
	|| threethreevstressenv.is_set
	|| apsstressenv.is_set
	|| normalapsvolt.is_set
	|| diagoptmoncap.is_set
	|| lowpwrstartupcap.is_set
	|| reserved.is_set
	|| checksum.is_set
	|| ciscopid.is_set
	|| ciscovid.is_set
	|| ciscosn.is_set
	|| ciscopn.is_set
	|| ciscorev.is_set
	|| extvendorspecific.is_set
	|| maxspeed.is_set
	|| minspeed.is_set
	|| fcotnum.is_set
	|| fcottype.is_set
	|| gigethcc.is_set
	|| fctxtype.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(versionid.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(isfcotpresent.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(typename_.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(xcvrtype.yfilter)
	|| ydk::is_set(connecttype.yfilter)
	|| ydk::is_set(bitencoding.yfilter)
	|| ydk::is_set(bitratembps.yfilter)
	|| ydk::is_set(protocoltype.yfilter)
	|| ydk::is_set(xgethcode.yfilter)
	|| ydk::is_set(sonetsdhcode.yfilter)
	|| ydk::is_set(xgfccode.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(fibretype.yfilter)
	|| ydk::is_set(wavelench0.yfilter)
	|| ydk::is_set(wavelench1.yfilter)
	|| ydk::is_set(wavelench2.yfilter)
	|| ydk::is_set(wavelench3.yfilter)
	|| ydk::is_set(packageoui.yfilter)
	|| ydk::is_set(vendorname.yfilter)
	|| ydk::is_set(vendorpn.yfilter)
	|| ydk::is_set(vendorrev.yfilter)
	|| ydk::is_set(vendorserno.yfilter)
	|| ydk::is_set(datecode.yfilter)
	|| ydk::is_set(lotcode.yfilter)
	|| ydk::is_set(fivevstressenv.yfilter)
	|| ydk::is_set(threethreevstressenv.yfilter)
	|| ydk::is_set(apsstressenv.yfilter)
	|| ydk::is_set(normalapsvolt.yfilter)
	|| ydk::is_set(diagoptmoncap.yfilter)
	|| ydk::is_set(lowpwrstartupcap.yfilter)
	|| ydk::is_set(reserved.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(ciscopid.yfilter)
	|| ydk::is_set(ciscovid.yfilter)
	|| ydk::is_set(ciscosn.yfilter)
	|| ydk::is_set(ciscopn.yfilter)
	|| ydk::is_set(ciscorev.yfilter)
	|| ydk::is_set(extvendorspecific.yfilter)
	|| ydk::is_set(maxspeed.yfilter)
	|| ydk::is_set(minspeed.yfilter)
	|| ydk::is_set(fcotnum.yfilter)
	|| ydk::is_set(fcottype.yfilter)
	|| ydk::is_set(gigethcc.yfilter)
	|| ydk::is_set(fctxtype.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcotx2-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (versionid.is_set || is_set(versionid.yfilter)) leaf_name_data.push_back(versionid.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (isfcotpresent.is_set || is_set(isfcotpresent.yfilter)) leaf_name_data.push_back(isfcotpresent.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (typename_.is_set || is_set(typename_.yfilter)) leaf_name_data.push_back(typename_.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (xcvrtype.is_set || is_set(xcvrtype.yfilter)) leaf_name_data.push_back(xcvrtype.get_name_leafdata());
    if (connecttype.is_set || is_set(connecttype.yfilter)) leaf_name_data.push_back(connecttype.get_name_leafdata());
    if (bitencoding.is_set || is_set(bitencoding.yfilter)) leaf_name_data.push_back(bitencoding.get_name_leafdata());
    if (bitratembps.is_set || is_set(bitratembps.yfilter)) leaf_name_data.push_back(bitratembps.get_name_leafdata());
    if (protocoltype.is_set || is_set(protocoltype.yfilter)) leaf_name_data.push_back(protocoltype.get_name_leafdata());
    if (xgethcode.is_set || is_set(xgethcode.yfilter)) leaf_name_data.push_back(xgethcode.get_name_leafdata());
    if (sonetsdhcode.is_set || is_set(sonetsdhcode.yfilter)) leaf_name_data.push_back(sonetsdhcode.get_name_leafdata());
    if (xgfccode.is_set || is_set(xgfccode.yfilter)) leaf_name_data.push_back(xgfccode.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (fibretype.is_set || is_set(fibretype.yfilter)) leaf_name_data.push_back(fibretype.get_name_leafdata());
    if (wavelench0.is_set || is_set(wavelench0.yfilter)) leaf_name_data.push_back(wavelench0.get_name_leafdata());
    if (wavelench1.is_set || is_set(wavelench1.yfilter)) leaf_name_data.push_back(wavelench1.get_name_leafdata());
    if (wavelench2.is_set || is_set(wavelench2.yfilter)) leaf_name_data.push_back(wavelench2.get_name_leafdata());
    if (wavelench3.is_set || is_set(wavelench3.yfilter)) leaf_name_data.push_back(wavelench3.get_name_leafdata());
    if (packageoui.is_set || is_set(packageoui.yfilter)) leaf_name_data.push_back(packageoui.get_name_leafdata());
    if (vendorname.is_set || is_set(vendorname.yfilter)) leaf_name_data.push_back(vendorname.get_name_leafdata());
    if (vendorpn.is_set || is_set(vendorpn.yfilter)) leaf_name_data.push_back(vendorpn.get_name_leafdata());
    if (vendorrev.is_set || is_set(vendorrev.yfilter)) leaf_name_data.push_back(vendorrev.get_name_leafdata());
    if (vendorserno.is_set || is_set(vendorserno.yfilter)) leaf_name_data.push_back(vendorserno.get_name_leafdata());
    if (datecode.is_set || is_set(datecode.yfilter)) leaf_name_data.push_back(datecode.get_name_leafdata());
    if (lotcode.is_set || is_set(lotcode.yfilter)) leaf_name_data.push_back(lotcode.get_name_leafdata());
    if (fivevstressenv.is_set || is_set(fivevstressenv.yfilter)) leaf_name_data.push_back(fivevstressenv.get_name_leafdata());
    if (threethreevstressenv.is_set || is_set(threethreevstressenv.yfilter)) leaf_name_data.push_back(threethreevstressenv.get_name_leafdata());
    if (apsstressenv.is_set || is_set(apsstressenv.yfilter)) leaf_name_data.push_back(apsstressenv.get_name_leafdata());
    if (normalapsvolt.is_set || is_set(normalapsvolt.yfilter)) leaf_name_data.push_back(normalapsvolt.get_name_leafdata());
    if (diagoptmoncap.is_set || is_set(diagoptmoncap.yfilter)) leaf_name_data.push_back(diagoptmoncap.get_name_leafdata());
    if (lowpwrstartupcap.is_set || is_set(lowpwrstartupcap.yfilter)) leaf_name_data.push_back(lowpwrstartupcap.get_name_leafdata());
    if (reserved.is_set || is_set(reserved.yfilter)) leaf_name_data.push_back(reserved.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (ciscopid.is_set || is_set(ciscopid.yfilter)) leaf_name_data.push_back(ciscopid.get_name_leafdata());
    if (ciscovid.is_set || is_set(ciscovid.yfilter)) leaf_name_data.push_back(ciscovid.get_name_leafdata());
    if (ciscosn.is_set || is_set(ciscosn.yfilter)) leaf_name_data.push_back(ciscosn.get_name_leafdata());
    if (ciscopn.is_set || is_set(ciscopn.yfilter)) leaf_name_data.push_back(ciscopn.get_name_leafdata());
    if (ciscorev.is_set || is_set(ciscorev.yfilter)) leaf_name_data.push_back(ciscorev.get_name_leafdata());
    if (extvendorspecific.is_set || is_set(extvendorspecific.yfilter)) leaf_name_data.push_back(extvendorspecific.get_name_leafdata());
    if (maxspeed.is_set || is_set(maxspeed.yfilter)) leaf_name_data.push_back(maxspeed.get_name_leafdata());
    if (minspeed.is_set || is_set(minspeed.yfilter)) leaf_name_data.push_back(minspeed.get_name_leafdata());
    if (fcotnum.is_set || is_set(fcotnum.yfilter)) leaf_name_data.push_back(fcotnum.get_name_leafdata());
    if (fcottype.is_set || is_set(fcottype.yfilter)) leaf_name_data.push_back(fcottype.get_name_leafdata());
    if (gigethcc.is_set || is_set(gigethcc.yfilter)) leaf_name_data.push_back(gigethcc.get_name_leafdata());
    if (fctxtype.is_set || is_set(fctxtype.yfilter)) leaf_name_data.push_back(fctxtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "versionId")
    {
        versionid = value;
        versionid.value_namespace = name_space;
        versionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isFcotPresent")
    {
        isfcotpresent = value;
        isfcotpresent.value_namespace = name_space;
        isfcotpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "typeName")
    {
        typename_ = value;
        typename_.value_namespace = name_space;
        typename_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvrType")
    {
        xcvrtype = value;
        xcvrtype.value_namespace = name_space;
        xcvrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connectType")
    {
        connecttype = value;
        connecttype.value_namespace = name_space;
        connecttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitEncoding")
    {
        bitencoding = value;
        bitencoding.value_namespace = name_space;
        bitencoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitRateMbps")
    {
        bitratembps = value;
        bitratembps.value_namespace = name_space;
        bitratembps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolType")
    {
        protocoltype = value;
        protocoltype.value_namespace = name_space;
        protocoltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xgEthCode")
    {
        xgethcode = value;
        xgethcode.value_namespace = name_space;
        xgethcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSdhCode")
    {
        sonetsdhcode = value;
        sonetsdhcode.value_namespace = name_space;
        sonetsdhcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xgFcCode")
    {
        xgfccode = value;
        xgfccode.value_namespace = name_space;
        xgfccode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fibreType")
    {
        fibretype = value;
        fibretype.value_namespace = name_space;
        fibretype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh0")
    {
        wavelench0 = value;
        wavelench0.value_namespace = name_space;
        wavelench0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh1")
    {
        wavelench1 = value;
        wavelench1.value_namespace = name_space;
        wavelench1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh2")
    {
        wavelench2 = value;
        wavelench2.value_namespace = name_space;
        wavelench2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh3")
    {
        wavelench3 = value;
        wavelench3.value_namespace = name_space;
        wavelench3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packageOui")
    {
        packageoui = value;
        packageoui.value_namespace = name_space;
        packageoui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorName")
    {
        vendorname = value;
        vendorname.value_namespace = name_space;
        vendorname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorPn")
    {
        vendorpn = value;
        vendorpn.value_namespace = name_space;
        vendorpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorRev")
    {
        vendorrev = value;
        vendorrev.value_namespace = name_space;
        vendorrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorSerNo")
    {
        vendorserno = value;
        vendorserno.value_namespace = name_space;
        vendorserno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dateCode")
    {
        datecode = value;
        datecode.value_namespace = name_space;
        datecode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lotCode")
    {
        lotcode = value;
        lotcode.value_namespace = name_space;
        lotcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fiveVStressEnv")
    {
        fivevstressenv = value;
        fivevstressenv.value_namespace = name_space;
        fivevstressenv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threeThreeVStressEnv")
    {
        threethreevstressenv = value;
        threethreevstressenv.value_namespace = name_space;
        threethreevstressenv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "apsStressEnv")
    {
        apsstressenv = value;
        apsstressenv.value_namespace = name_space;
        apsstressenv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normalApsVolt")
    {
        normalapsvolt = value;
        normalapsvolt.value_namespace = name_space;
        normalapsvolt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagOptMonCap")
    {
        diagoptmoncap = value;
        diagoptmoncap.value_namespace = name_space;
        diagoptmoncap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowPwrStartupCap")
    {
        lowpwrstartupcap = value;
        lowpwrstartupcap.value_namespace = name_space;
        lowpwrstartupcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved")
    {
        reserved = value;
        reserved.value_namespace = name_space;
        reserved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPid")
    {
        ciscopid = value;
        ciscopid.value_namespace = name_space;
        ciscopid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoVid")
    {
        ciscovid = value;
        ciscovid.value_namespace = name_space;
        ciscovid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoSN")
    {
        ciscosn = value;
        ciscosn.value_namespace = name_space;
        ciscosn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPN")
    {
        ciscopn = value;
        ciscopn.value_namespace = name_space;
        ciscopn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoRev")
    {
        ciscorev = value;
        ciscorev.value_namespace = name_space;
        ciscorev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extVendorSpecific")
    {
        extvendorspecific = value;
        extvendorspecific.value_namespace = name_space;
        extvendorspecific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed = value;
        maxspeed.value_namespace = name_space;
        maxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minSpeed")
    {
        minspeed = value;
        minspeed.value_namespace = name_space;
        minspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotNum")
    {
        fcotnum = value;
        fcotnum.value_namespace = name_space;
        fcotnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotType")
    {
        fcottype = value;
        fcottype.value_namespace = name_space;
        fcottype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc = value;
        gigethcc.value_namespace = name_space;
        gigethcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fCTxType")
    {
        fctxtype = value;
        fctxtype.value_namespace = name_space;
        fctxtype.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "versionId")
    {
        versionid.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "isFcotPresent")
    {
        isfcotpresent.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "typeName")
    {
        typename_.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "xcvrType")
    {
        xcvrtype.yfilter = yfilter;
    }
    if(value_path == "connectType")
    {
        connecttype.yfilter = yfilter;
    }
    if(value_path == "bitEncoding")
    {
        bitencoding.yfilter = yfilter;
    }
    if(value_path == "bitRateMbps")
    {
        bitratembps.yfilter = yfilter;
    }
    if(value_path == "protocolType")
    {
        protocoltype.yfilter = yfilter;
    }
    if(value_path == "xgEthCode")
    {
        xgethcode.yfilter = yfilter;
    }
    if(value_path == "sonetSdhCode")
    {
        sonetsdhcode.yfilter = yfilter;
    }
    if(value_path == "xgFcCode")
    {
        xgfccode.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "fibreType")
    {
        fibretype.yfilter = yfilter;
    }
    if(value_path == "waveLenCh0")
    {
        wavelench0.yfilter = yfilter;
    }
    if(value_path == "waveLenCh1")
    {
        wavelench1.yfilter = yfilter;
    }
    if(value_path == "waveLenCh2")
    {
        wavelench2.yfilter = yfilter;
    }
    if(value_path == "waveLenCh3")
    {
        wavelench3.yfilter = yfilter;
    }
    if(value_path == "packageOui")
    {
        packageoui.yfilter = yfilter;
    }
    if(value_path == "vendorName")
    {
        vendorname.yfilter = yfilter;
    }
    if(value_path == "vendorPn")
    {
        vendorpn.yfilter = yfilter;
    }
    if(value_path == "vendorRev")
    {
        vendorrev.yfilter = yfilter;
    }
    if(value_path == "vendorSerNo")
    {
        vendorserno.yfilter = yfilter;
    }
    if(value_path == "dateCode")
    {
        datecode.yfilter = yfilter;
    }
    if(value_path == "lotCode")
    {
        lotcode.yfilter = yfilter;
    }
    if(value_path == "fiveVStressEnv")
    {
        fivevstressenv.yfilter = yfilter;
    }
    if(value_path == "threeThreeVStressEnv")
    {
        threethreevstressenv.yfilter = yfilter;
    }
    if(value_path == "apsStressEnv")
    {
        apsstressenv.yfilter = yfilter;
    }
    if(value_path == "normalApsVolt")
    {
        normalapsvolt.yfilter = yfilter;
    }
    if(value_path == "diagOptMonCap")
    {
        diagoptmoncap.yfilter = yfilter;
    }
    if(value_path == "lowPwrStartupCap")
    {
        lowpwrstartupcap.yfilter = yfilter;
    }
    if(value_path == "reserved")
    {
        reserved.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "ciscoPid")
    {
        ciscopid.yfilter = yfilter;
    }
    if(value_path == "ciscoVid")
    {
        ciscovid.yfilter = yfilter;
    }
    if(value_path == "ciscoSN")
    {
        ciscosn.yfilter = yfilter;
    }
    if(value_path == "ciscoPN")
    {
        ciscopn.yfilter = yfilter;
    }
    if(value_path == "ciscoRev")
    {
        ciscorev.yfilter = yfilter;
    }
    if(value_path == "extVendorSpecific")
    {
        extvendorspecific.yfilter = yfilter;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed.yfilter = yfilter;
    }
    if(value_path == "minSpeed")
    {
        minspeed.yfilter = yfilter;
    }
    if(value_path == "fcotNum")
    {
        fcotnum.yfilter = yfilter;
    }
    if(value_path == "fcotType")
    {
        fcottype.yfilter = yfilter;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc.yfilter = yfilter;
    }
    if(value_path == "fCTxType")
    {
        fctxtype.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "partNumber" || name == "versionId" || name == "description" || name == "isFcotPresent" || name == "state" || name == "flags" || name == "type" || name == "typeName" || name == "eid" || name == "xcvrType" || name == "connectType" || name == "bitEncoding" || name == "bitRateMbps" || name == "protocolType" || name == "xgEthCode" || name == "sonetSdhCode" || name == "xgFcCode" || name == "range" || name == "fibreType" || name == "waveLenCh0" || name == "waveLenCh1" || name == "waveLenCh2" || name == "waveLenCh3" || name == "packageOui" || name == "vendorName" || name == "vendorPn" || name == "vendorRev" || name == "vendorSerNo" || name == "dateCode" || name == "lotCode" || name == "fiveVStressEnv" || name == "threeThreeVStressEnv" || name == "apsStressEnv" || name == "normalApsVolt" || name == "diagOptMonCap" || name == "lowPwrStartupCap" || name == "reserved" || name == "checksum" || name == "ciscoPid" || name == "ciscoVid" || name == "ciscoSN" || name == "ciscoPN" || name == "ciscoRev" || name == "extVendorSpecific" || name == "maxSpeed" || name == "minSpeed" || name == "fcotNum" || name == "fcotType" || name == "gigEthCC" || name == "fCTxType")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems::FcotddItems()
    :
    partnumber{YType::str, "partNumber"},
    versionid{YType::str, "versionId"},
    description{YType::str, "description"},
    isfcotpresent{YType::boolean, "isFcotPresent"},
    state{YType::enumeration, "state"},
    flags{YType::enumeration, "flags"},
    type{YType::enumeration, "type"},
    typename_{YType::str, "typeName"},
    eid{YType::str, "eid"},
    xcvrtype{YType::uint8, "xcvrType"},
    verid{YType::uint8, "verId"},
    modadvcode{YType::str, "modAdvCode"},
    vendorname{YType::str, "vendorName"},
    vendorpn{YType::str, "vendorPn"},
    vendorrev{YType::str, "vendorRev"},
    vendorserno{YType::str, "vendorSerNo"},
    datecode{YType::str, "dateCode"},
    lotcode{YType::str, "lotCode"},
    connecttype{YType::uint8, "connectType"},
    diagoptmoncap{YType::uint8, "diagOptMonCap"},
    checksum{YType::uint8, "checksum"},
    ciscopid{YType::str, "ciscoPid"},
    ciscovid{YType::str, "ciscoVid"},
    ciscosn{YType::str, "ciscoSN"},
    ciscopn{YType::str, "ciscoPN"},
    ciscorev{YType::str, "ciscoRev"},
    maxspeed{YType::uint32, "maxSpeed"},
    minspeed{YType::uint32, "minSpeed"},
    fcotnum{YType::uint8, "fcotNum"},
    fcottype{YType::uint8, "fcotType"},
    fctxtype{YType::uint8, "fCTxType"}
{

    yang_name = "fcotdd-items"; yang_parent_name = "phys-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems::~FcotddItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems::has_data() const
{
    if (is_presence_container) return true;
    return partnumber.is_set
	|| versionid.is_set
	|| description.is_set
	|| isfcotpresent.is_set
	|| state.is_set
	|| flags.is_set
	|| type.is_set
	|| typename_.is_set
	|| eid.is_set
	|| xcvrtype.is_set
	|| verid.is_set
	|| modadvcode.is_set
	|| vendorname.is_set
	|| vendorpn.is_set
	|| vendorrev.is_set
	|| vendorserno.is_set
	|| datecode.is_set
	|| lotcode.is_set
	|| connecttype.is_set
	|| diagoptmoncap.is_set
	|| checksum.is_set
	|| ciscopid.is_set
	|| ciscovid.is_set
	|| ciscosn.is_set
	|| ciscopn.is_set
	|| ciscorev.is_set
	|| maxspeed.is_set
	|| minspeed.is_set
	|| fcotnum.is_set
	|| fcottype.is_set
	|| fctxtype.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(versionid.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(isfcotpresent.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(typename_.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(xcvrtype.yfilter)
	|| ydk::is_set(verid.yfilter)
	|| ydk::is_set(modadvcode.yfilter)
	|| ydk::is_set(vendorname.yfilter)
	|| ydk::is_set(vendorpn.yfilter)
	|| ydk::is_set(vendorrev.yfilter)
	|| ydk::is_set(vendorserno.yfilter)
	|| ydk::is_set(datecode.yfilter)
	|| ydk::is_set(lotcode.yfilter)
	|| ydk::is_set(connecttype.yfilter)
	|| ydk::is_set(diagoptmoncap.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(ciscopid.yfilter)
	|| ydk::is_set(ciscovid.yfilter)
	|| ydk::is_set(ciscosn.yfilter)
	|| ydk::is_set(ciscopn.yfilter)
	|| ydk::is_set(ciscorev.yfilter)
	|| ydk::is_set(maxspeed.yfilter)
	|| ydk::is_set(minspeed.yfilter)
	|| ydk::is_set(fcotnum.yfilter)
	|| ydk::is_set(fcottype.yfilter)
	|| ydk::is_set(fctxtype.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcotdd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (versionid.is_set || is_set(versionid.yfilter)) leaf_name_data.push_back(versionid.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (isfcotpresent.is_set || is_set(isfcotpresent.yfilter)) leaf_name_data.push_back(isfcotpresent.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (typename_.is_set || is_set(typename_.yfilter)) leaf_name_data.push_back(typename_.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (xcvrtype.is_set || is_set(xcvrtype.yfilter)) leaf_name_data.push_back(xcvrtype.get_name_leafdata());
    if (verid.is_set || is_set(verid.yfilter)) leaf_name_data.push_back(verid.get_name_leafdata());
    if (modadvcode.is_set || is_set(modadvcode.yfilter)) leaf_name_data.push_back(modadvcode.get_name_leafdata());
    if (vendorname.is_set || is_set(vendorname.yfilter)) leaf_name_data.push_back(vendorname.get_name_leafdata());
    if (vendorpn.is_set || is_set(vendorpn.yfilter)) leaf_name_data.push_back(vendorpn.get_name_leafdata());
    if (vendorrev.is_set || is_set(vendorrev.yfilter)) leaf_name_data.push_back(vendorrev.get_name_leafdata());
    if (vendorserno.is_set || is_set(vendorserno.yfilter)) leaf_name_data.push_back(vendorserno.get_name_leafdata());
    if (datecode.is_set || is_set(datecode.yfilter)) leaf_name_data.push_back(datecode.get_name_leafdata());
    if (lotcode.is_set || is_set(lotcode.yfilter)) leaf_name_data.push_back(lotcode.get_name_leafdata());
    if (connecttype.is_set || is_set(connecttype.yfilter)) leaf_name_data.push_back(connecttype.get_name_leafdata());
    if (diagoptmoncap.is_set || is_set(diagoptmoncap.yfilter)) leaf_name_data.push_back(diagoptmoncap.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (ciscopid.is_set || is_set(ciscopid.yfilter)) leaf_name_data.push_back(ciscopid.get_name_leafdata());
    if (ciscovid.is_set || is_set(ciscovid.yfilter)) leaf_name_data.push_back(ciscovid.get_name_leafdata());
    if (ciscosn.is_set || is_set(ciscosn.yfilter)) leaf_name_data.push_back(ciscosn.get_name_leafdata());
    if (ciscopn.is_set || is_set(ciscopn.yfilter)) leaf_name_data.push_back(ciscopn.get_name_leafdata());
    if (ciscorev.is_set || is_set(ciscorev.yfilter)) leaf_name_data.push_back(ciscorev.get_name_leafdata());
    if (maxspeed.is_set || is_set(maxspeed.yfilter)) leaf_name_data.push_back(maxspeed.get_name_leafdata());
    if (minspeed.is_set || is_set(minspeed.yfilter)) leaf_name_data.push_back(minspeed.get_name_leafdata());
    if (fcotnum.is_set || is_set(fcotnum.yfilter)) leaf_name_data.push_back(fcotnum.get_name_leafdata());
    if (fcottype.is_set || is_set(fcottype.yfilter)) leaf_name_data.push_back(fcottype.get_name_leafdata());
    if (fctxtype.is_set || is_set(fctxtype.yfilter)) leaf_name_data.push_back(fctxtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "versionId")
    {
        versionid = value;
        versionid.value_namespace = name_space;
        versionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isFcotPresent")
    {
        isfcotpresent = value;
        isfcotpresent.value_namespace = name_space;
        isfcotpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "typeName")
    {
        typename_ = value;
        typename_.value_namespace = name_space;
        typename_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvrType")
    {
        xcvrtype = value;
        xcvrtype.value_namespace = name_space;
        xcvrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verId")
    {
        verid = value;
        verid.value_namespace = name_space;
        verid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modAdvCode")
    {
        modadvcode = value;
        modadvcode.value_namespace = name_space;
        modadvcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorName")
    {
        vendorname = value;
        vendorname.value_namespace = name_space;
        vendorname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorPn")
    {
        vendorpn = value;
        vendorpn.value_namespace = name_space;
        vendorpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorRev")
    {
        vendorrev = value;
        vendorrev.value_namespace = name_space;
        vendorrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorSerNo")
    {
        vendorserno = value;
        vendorserno.value_namespace = name_space;
        vendorserno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dateCode")
    {
        datecode = value;
        datecode.value_namespace = name_space;
        datecode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lotCode")
    {
        lotcode = value;
        lotcode.value_namespace = name_space;
        lotcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connectType")
    {
        connecttype = value;
        connecttype.value_namespace = name_space;
        connecttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagOptMonCap")
    {
        diagoptmoncap = value;
        diagoptmoncap.value_namespace = name_space;
        diagoptmoncap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPid")
    {
        ciscopid = value;
        ciscopid.value_namespace = name_space;
        ciscopid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoVid")
    {
        ciscovid = value;
        ciscovid.value_namespace = name_space;
        ciscovid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoSN")
    {
        ciscosn = value;
        ciscosn.value_namespace = name_space;
        ciscosn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPN")
    {
        ciscopn = value;
        ciscopn.value_namespace = name_space;
        ciscopn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoRev")
    {
        ciscorev = value;
        ciscorev.value_namespace = name_space;
        ciscorev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed = value;
        maxspeed.value_namespace = name_space;
        maxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minSpeed")
    {
        minspeed = value;
        minspeed.value_namespace = name_space;
        minspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotNum")
    {
        fcotnum = value;
        fcotnum.value_namespace = name_space;
        fcotnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotType")
    {
        fcottype = value;
        fcottype.value_namespace = name_space;
        fcottype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fCTxType")
    {
        fctxtype = value;
        fctxtype.value_namespace = name_space;
        fctxtype.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "versionId")
    {
        versionid.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "isFcotPresent")
    {
        isfcotpresent.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "typeName")
    {
        typename_.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "xcvrType")
    {
        xcvrtype.yfilter = yfilter;
    }
    if(value_path == "verId")
    {
        verid.yfilter = yfilter;
    }
    if(value_path == "modAdvCode")
    {
        modadvcode.yfilter = yfilter;
    }
    if(value_path == "vendorName")
    {
        vendorname.yfilter = yfilter;
    }
    if(value_path == "vendorPn")
    {
        vendorpn.yfilter = yfilter;
    }
    if(value_path == "vendorRev")
    {
        vendorrev.yfilter = yfilter;
    }
    if(value_path == "vendorSerNo")
    {
        vendorserno.yfilter = yfilter;
    }
    if(value_path == "dateCode")
    {
        datecode.yfilter = yfilter;
    }
    if(value_path == "lotCode")
    {
        lotcode.yfilter = yfilter;
    }
    if(value_path == "connectType")
    {
        connecttype.yfilter = yfilter;
    }
    if(value_path == "diagOptMonCap")
    {
        diagoptmoncap.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "ciscoPid")
    {
        ciscopid.yfilter = yfilter;
    }
    if(value_path == "ciscoVid")
    {
        ciscovid.yfilter = yfilter;
    }
    if(value_path == "ciscoSN")
    {
        ciscosn.yfilter = yfilter;
    }
    if(value_path == "ciscoPN")
    {
        ciscopn.yfilter = yfilter;
    }
    if(value_path == "ciscoRev")
    {
        ciscorev.yfilter = yfilter;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed.yfilter = yfilter;
    }
    if(value_path == "minSpeed")
    {
        minspeed.yfilter = yfilter;
    }
    if(value_path == "fcotNum")
    {
        fcotnum.yfilter = yfilter;
    }
    if(value_path == "fcotType")
    {
        fcottype.yfilter = yfilter;
    }
    if(value_path == "fCTxType")
    {
        fctxtype.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "partNumber" || name == "versionId" || name == "description" || name == "isFcotPresent" || name == "state" || name == "flags" || name == "type" || name == "typeName" || name == "eid" || name == "xcvrType" || name == "verId" || name == "modAdvCode" || name == "vendorName" || name == "vendorPn" || name == "vendorRev" || name == "vendorSerNo" || name == "dateCode" || name == "lotCode" || name == "connectType" || name == "diagOptMonCap" || name == "checksum" || name == "ciscoPid" || name == "ciscoVid" || name == "ciscoSN" || name == "ciscoPN" || name == "ciscoRev" || name == "maxSpeed" || name == "minSpeed" || name == "fcotNum" || name == "fcotType" || name == "fCTxType")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::PortcapItems()
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

    yang_name = "portcap-items"; yang_parent_name = "phys-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::~PortcapItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::has_data() const
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

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::has_operation() const
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

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portcap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "speed" || name == "duplex" || name == "trunkEncap" || name == "channel" || name == "suppression" || name == "rxFlowControl" || name == "txFlowControl" || name == "cosRewrite" || name == "tosRewrite" || name == "span" || name == "udld" || name == "autoneg" || name == "linkDebounce" || name == "linkDebounceTime" || name == "fcotCapable" || name == "rateMode" || name == "mdix" || name == "portGroup" || name == "ctsCapable" || name == "qosRxPrio" || name == "qosRxQueue" || name == "qosRxThold" || name == "qosTxPrio" || name == "qosTxQueue" || name == "qosTxThold" || name == "model" || name == "type" || name == "portGrpMbrs" || name == "protoSupport" || name == "portCap" || name == "eeeCapVal" || name == "eeeWakeTimes10g" || name == "eeeFlapFlags")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::HwifdetailsItems()
    :
    slice{YType::uint32, "slice"},
    sport{YType::uint32, "sPort"},
    vif{YType::uint32, "vif"}
{

    yang_name = "hwifdetails-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::~HwifdetailsItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::has_data() const
{
    if (is_presence_container) return true;
    return slice.is_set
	|| sport.is_set
	|| vif.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slice.yfilter)
	|| ydk::is_set(sport.yfilter)
	|| ydk::is_set(vif.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hwifdetails-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice.is_set || is_set(slice.yfilter)) leaf_name_data.push_back(slice.get_name_leafdata());
    if (sport.is_set || is_set(sport.yfilter)) leaf_name_data.push_back(sport.get_name_leafdata());
    if (vif.is_set || is_set(vif.yfilter)) leaf_name_data.push_back(vif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice" || name == "sPort" || name == "vif")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::AggrmbrifItems()
    :
    operst{YType::enumeration, "operSt"},
    channelingst{YType::enumeration, "channelingSt"},
    summoperst{YType::enumeration, "summOperSt"},
    uptime{YType::str, "uptime"},
    flags{YType::str, "flags"},
    bdlportnum{YType::uint32, "bdlPortNum"},
    ltlprogrammed{YType::boolean, "ltlProgrammed"},
    name{YType::str, "name"}
{

    yang_name = "aggrmbrif-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::~AggrmbrifItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::has_data() const
{
    if (is_presence_container) return true;
    return operst.is_set
	|| channelingst.is_set
	|| summoperst.is_set
	|| uptime.is_set
	|| flags.is_set
	|| bdlportnum.is_set
	|| ltlprogrammed.is_set
	|| name.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(channelingst.yfilter)
	|| ydk::is_set(summoperst.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(bdlportnum.yfilter)
	|| ydk::is_set(ltlprogrammed.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggrmbrif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (channelingst.is_set || is_set(channelingst.yfilter)) leaf_name_data.push_back(channelingst.get_name_leafdata());
    if (summoperst.is_set || is_set(summoperst.yfilter)) leaf_name_data.push_back(summoperst.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (bdlportnum.is_set || is_set(bdlportnum.yfilter)) leaf_name_data.push_back(bdlportnum.get_name_leafdata());
    if (ltlprogrammed.is_set || is_set(ltlprogrammed.yfilter)) leaf_name_data.push_back(ltlprogrammed.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channelingSt")
    {
        channelingst = value;
        channelingst.value_namespace = name_space;
        channelingst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summOperSt")
    {
        summoperst = value;
        summoperst.value_namespace = name_space;
        summoperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdlPortNum")
    {
        bdlportnum = value;
        bdlportnum.value_namespace = name_space;
        bdlportnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ltlProgrammed")
    {
        ltlprogrammed = value;
        ltlprogrammed.value_namespace = name_space;
        ltlprogrammed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "channelingSt")
    {
        channelingst.yfilter = yfilter;
    }
    if(value_path == "summOperSt")
    {
        summoperst.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "bdlPortNum")
    {
        bdlportnum.yfilter = yfilter;
    }
    if(value_path == "ltlProgrammed")
    {
        ltlprogrammed.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operSt" || name == "channelingSt" || name == "summOperSt" || name == "uptime" || name == "flags" || name == "bdlPortNum" || name == "ltlProgrammed" || name == "name")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::MultisiteiftrackingItems()
    :
    tracking{YType::enumeration, "tracking"}
{

    yang_name = "multisiteiftracking-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::~MultisiteiftrackingItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::has_data() const
{
    if (is_presence_container) return true;
    return tracking.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracking.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multisiteiftracking-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracking.is_set || is_set(tracking.yfilter)) leaf_name_data.push_back(tracking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracking")
    {
        tracking = value;
        tracking.value_namespace = name_space;
        tracking.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracking")
    {
        tracking.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracking")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomItems()
    :
    domdef_list(this, {"dompkey"})
{

    yang_name = "dom-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DomItems::~DomItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domdef_list.len(); index++)
    {
        if(domdef_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::has_operation() const
{
    for (std::size_t index=0; index<domdef_list.len(); index++)
    {
        if(domdef_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomDef-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList>();
        ent_->parent = this;
        domdef_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DomItems::get_children() const
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

void System::IntfItems::PhysItems::PhysIfList::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomDef-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::DomDefList()
    :
    dompkey{YType::str, "domPKey"},
    instrimedcy{YType::enumeration, "instrImedcy"},
    name{YType::str, "name"}
        ,
    rsdomdefns_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems>())
    , rsdomdefnslocal_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems>())
    , rtfvtodomdef_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems>())
{
    rsdomdefns_items->parent = this;
    rsdomdefnslocal_items->parent = this;
    rtfvtodomdef_items->parent = this;

    yang_name = "DomDef-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::~DomDefList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::has_data() const
{
    if (is_presence_container) return true;
    return dompkey.is_set
	|| instrimedcy.is_set
	|| name.is_set
	|| (rsdomdefns_items !=  nullptr && rsdomdefns_items->has_data())
	|| (rsdomdefnslocal_items !=  nullptr && rsdomdefnslocal_items->has_data())
	|| (rtfvtodomdef_items !=  nullptr && rtfvtodomdef_items->has_data());
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dompkey.yfilter)
	|| ydk::is_set(instrimedcy.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rsdomdefns_items !=  nullptr && rsdomdefns_items->has_operation())
	|| (rsdomdefnslocal_items !=  nullptr && rsdomdefnslocal_items->has_operation())
	|| (rtfvtodomdef_items !=  nullptr && rtfvtodomdef_items->has_operation());
}

std::string System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomDef-list";
    ADD_KEY_TOKEN(dompkey, "domPKey");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dompkey.is_set || is_set(dompkey.yfilter)) leaf_name_data.push_back(dompkey.get_name_leafdata());
    if (instrimedcy.is_set || is_set(instrimedcy.yfilter)) leaf_name_data.push_back(instrimedcy.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsdomDefNs-items")
    {
        if(rsdomdefns_items == nullptr)
        {
            rsdomdefns_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems>();
        }
        return rsdomdefns_items;
    }

    if(child_yang_name == "rsdomDefNsLocal-items")
    {
        if(rsdomdefnslocal_items == nullptr)
        {
            rsdomdefnslocal_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems>();
        }
        return rsdomdefnslocal_items;
    }

    if(child_yang_name == "rtfvToDomDef-items")
    {
        if(rtfvtodomdef_items == nullptr)
        {
            rtfvtodomdef_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems>();
        }
        return rtfvtodomdef_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::get_children() const
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

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsdomDefNs-items" || name == "rsdomDefNsLocal-items" || name == "rtfvToDomDef-items" || name == "domPKey" || name == "instrImedcy" || name == "name")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::RsdomDefNsItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rsdomDefNs-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::~RsdomDefNsItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdomDefNs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::RsdomDefNsLocalItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rsdomDefNsLocal-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::~RsdomDefNsLocalItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdomDefNsLocal-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}


}
}

