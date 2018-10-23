
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_vm_mgr.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_vm_mgr {

VM::VM()
    :
    all_locations(this, {"location"})
{

    yang_name = "VM"; yang_parent_name = "Cisco-IOS-XR-sysadmin-vm-mgr"; is_top_level_class = true; has_list_ancestor = false; 
}

VM::~VM()
{
}

bool VM::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_locations.len(); index++)
    {
        if(all_locations[index]->has_data())
            return true;
    }
    return false;
}

bool VM::has_operation() const
{
    for (std::size_t index=0; index<all_locations.len(); index++)
    {
        if(all_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VM::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-vm-mgr:VM";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VM::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VM::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-locations")
    {
        auto ent_ = std::make_shared<VM::AllLocations>();
        ent_->parent = this;
        all_locations.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VM::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_locations.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void VM::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VM::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> VM::clone_ptr() const
{
    return std::make_shared<VM>();
}

std::string VM::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string VM::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function VM::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> VM::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool VM::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-locations")
        return true;
    return false;
}

VM::AllLocations::AllLocations()
    :
    location{YType::str, "location"}
        ,
    all_uiids(this, {"uiid"})
{

    yang_name = "all-locations"; yang_parent_name = "VM"; is_top_level_class = false; has_list_ancestor = false; 
}

VM::AllLocations::~AllLocations()
{
}

bool VM::AllLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_uiids.len(); index++)
    {
        if(all_uiids[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool VM::AllLocations::has_operation() const
{
    for (std::size_t index=0; index<all_uiids.len(); index++)
    {
        if(all_uiids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string VM::AllLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-vm-mgr:VM/" << get_segment_path();
    return path_buffer.str();
}

std::string VM::AllLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-locations";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VM::AllLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VM::AllLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-uiids")
    {
        auto ent_ = std::make_shared<VM::AllLocations::AllUiids>();
        ent_->parent = this;
        all_uiids.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VM::AllLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_uiids.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void VM::AllLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void VM::AllLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool VM::AllLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-uiids" || name == "location")
        return true;
    return false;
}

VM::AllLocations::AllUiids::AllUiids()
    :
    uiid{YType::str, "uiid"},
    id{YType::str, "id"},
    status{YType::str, "status"},
    ipaddr{YType::str, "ipaddr"},
    hb_interval_s{YType::str, "hb_interval_s"},
    hb_interval_ns{YType::str, "hb_interval_ns"},
    last_hb_sent{YType::str, "last_hb_sent"},
    last_hb_rec{YType::str, "last_hb_rec"},
    role{YType::str, "role"}
{

    yang_name = "all-uiids"; yang_parent_name = "all-locations"; is_top_level_class = false; has_list_ancestor = true; 
}

VM::AllLocations::AllUiids::~AllUiids()
{
}

bool VM::AllLocations::AllUiids::has_data() const
{
    if (is_presence_container) return true;
    return uiid.is_set
	|| id.is_set
	|| status.is_set
	|| ipaddr.is_set
	|| hb_interval_s.is_set
	|| hb_interval_ns.is_set
	|| last_hb_sent.is_set
	|| last_hb_rec.is_set
	|| role.is_set;
}

bool VM::AllLocations::AllUiids::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uiid.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(hb_interval_s.yfilter)
	|| ydk::is_set(hb_interval_ns.yfilter)
	|| ydk::is_set(last_hb_sent.yfilter)
	|| ydk::is_set(last_hb_rec.yfilter)
	|| ydk::is_set(role.yfilter);
}

std::string VM::AllLocations::AllUiids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-uiids";
    ADD_KEY_TOKEN(uiid, "uiid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VM::AllLocations::AllUiids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uiid.is_set || is_set(uiid.yfilter)) leaf_name_data.push_back(uiid.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (hb_interval_s.is_set || is_set(hb_interval_s.yfilter)) leaf_name_data.push_back(hb_interval_s.get_name_leafdata());
    if (hb_interval_ns.is_set || is_set(hb_interval_ns.yfilter)) leaf_name_data.push_back(hb_interval_ns.get_name_leafdata());
    if (last_hb_sent.is_set || is_set(last_hb_sent.yfilter)) leaf_name_data.push_back(last_hb_sent.get_name_leafdata());
    if (last_hb_rec.is_set || is_set(last_hb_rec.yfilter)) leaf_name_data.push_back(last_hb_rec.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VM::AllLocations::AllUiids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VM::AllLocations::AllUiids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void VM::AllLocations::AllUiids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uiid")
    {
        uiid = value;
        uiid.value_namespace = name_space;
        uiid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipaddr")
    {
        ipaddr = value;
        ipaddr.value_namespace = name_space;
        ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hb_interval_s")
    {
        hb_interval_s = value;
        hb_interval_s.value_namespace = name_space;
        hb_interval_s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hb_interval_ns")
    {
        hb_interval_ns = value;
        hb_interval_ns.value_namespace = name_space;
        hb_interval_ns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_hb_sent")
    {
        last_hb_sent = value;
        last_hb_sent.value_namespace = name_space;
        last_hb_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_hb_rec")
    {
        last_hb_rec = value;
        last_hb_rec.value_namespace = name_space;
        last_hb_rec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void VM::AllLocations::AllUiids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uiid")
    {
        uiid.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "ipaddr")
    {
        ipaddr.yfilter = yfilter;
    }
    if(value_path == "hb_interval_s")
    {
        hb_interval_s.yfilter = yfilter;
    }
    if(value_path == "hb_interval_ns")
    {
        hb_interval_ns.yfilter = yfilter;
    }
    if(value_path == "last_hb_sent")
    {
        last_hb_sent.yfilter = yfilter;
    }
    if(value_path == "last_hb_rec")
    {
        last_hb_rec.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool VM::AllLocations::AllUiids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uiid" || name == "id" || name == "status" || name == "ipaddr" || name == "hb_interval_s" || name == "hb_interval_ns" || name == "last_hb_sent" || name == "last_hb_rec" || name == "role")
        return true;
    return false;
}


}
}

