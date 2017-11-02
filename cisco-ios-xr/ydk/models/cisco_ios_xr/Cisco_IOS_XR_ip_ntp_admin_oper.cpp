
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_ntp_admin_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_ntp_admin_oper {

Ntp::Ntp()
    :
    racks(std::make_shared<Ntp::Racks>())
{
    racks->parent = this;

    yang_name = "ntp"; yang_parent_name = "Cisco-IOS-XR-ip-ntp-admin-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Ntp::~Ntp()
{
}

bool Ntp::has_data() const
{
    return (racks !=  nullptr && racks->has_data());
}

bool Ntp::has_operation() const
{
    return is_set(yfilter)
	|| (racks !=  nullptr && racks->has_operation());
}

std::string Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-admin-oper:ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "racks")
    {
        if(racks == nullptr)
        {
            racks = std::make_shared<Ntp::Racks>();
        }
        return racks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(racks != nullptr)
    {
        children["racks"] = racks;
    }

    return children;
}

void Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ntp::clone_ptr() const
{
    return std::make_shared<Ntp>();
}

std::string Ntp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ntp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ntp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ntp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "racks")
        return true;
    return false;
}

Ntp::Racks::Racks()
{

    yang_name = "racks"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false;
}

Ntp::Racks::~Racks()
{
}

bool Ntp::Racks::has_data() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::Racks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-admin-oper:ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        for(auto const & c : rack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ntp::Racks::Rack>();
        c->parent = this;
        rack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ntp::Racks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::Racks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::Racks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Ntp::Racks::Rack::Rack()
    :
    number{YType::int32, "number"}
    	,
    slots(std::make_shared<Ntp::Racks::Rack::Slots>())
{
    slots->parent = this;

    yang_name = "rack"; yang_parent_name = "racks"; is_top_level_class = false; has_list_ancestor = false;
}

Ntp::Racks::Rack::~Rack()
{
}

bool Ntp::Racks::Rack::has_data() const
{
    return number.is_set
	|| (slots !=  nullptr && slots->has_data());
}

bool Ntp::Racks::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (slots !=  nullptr && slots->has_operation());
}

std::string Ntp::Racks::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-admin-oper:ntp/racks/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slots")
    {
        if(slots == nullptr)
        {
            slots = std::make_shared<Ntp::Racks::Rack::Slots>();
        }
        return slots;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(slots != nullptr)
    {
        children["slots"] = slots;
    }

    return children;
}

void Ntp::Racks::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slots" || name == "number")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slots()
{

    yang_name = "slots"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::~Slots()
{
}

bool Ntp::Racks::Rack::Slots::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::Racks::Rack::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot")
    {
        for(auto const & c : slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ntp::Racks::Rack::Slots::Slot>();
        c->parent = this;
        slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::Racks::Rack::Slots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::Racks::Rack::Slots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Slot()
    :
    number{YType::int32, "number"}
    	,
    instances(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances>())
{
    instances->parent = this;

    yang_name = "slot"; yang_parent_name = "slots"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::~Slot()
{
}

bool Ntp::Racks::Rack::Slots::Slot::has_data() const
{
    return number.is_set
	|| (instances !=  nullptr && instances->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (instances !=  nullptr && instances->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instances")
    {
        if(instances == nullptr)
        {
            instances = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances>();
        }
        return instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instances != nullptr)
    {
        children["instances"] = instances;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instances" || name == "number")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instances()
{

    yang_name = "instances"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::~Instances()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::Racks::Rack::Slots::Slot::Instances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Instance()
    :
    number{YType::int32, "number"}
    	,
    status(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status>())
	,associations(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations>())
	,associations_detail(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail>())
{
    status->parent = this;
    associations->parent = this;
    associations_detail->parent = this;

    yang_name = "instance"; yang_parent_name = "instances"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::~Instance()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::has_data() const
{
    return number.is_set
	|| (status !=  nullptr && status->has_data())
	|| (associations !=  nullptr && associations->has_data())
	|| (associations_detail !=  nullptr && associations_detail->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (status !=  nullptr && status->has_operation())
	|| (associations !=  nullptr && associations->has_operation())
	|| (associations_detail !=  nullptr && associations_detail->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status>();
        }
        return status;
    }

    if(child_yang_name == "associations")
    {
        if(associations == nullptr)
        {
            associations = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations>();
        }
        return associations;
    }

    if(child_yang_name == "associations-detail")
    {
        if(associations_detail == nullptr)
        {
            associations_detail = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail>();
        }
        return associations_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status != nullptr)
    {
        children["status"] = status;
    }

    if(associations != nullptr)
    {
        children["associations"] = associations;
    }

    if(associations_detail != nullptr)
    {
        children["associations-detail"] = associations_detail;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status" || name == "associations" || name == "associations-detail" || name == "number")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::Status()
    :
    is_ntp_enabled{YType::boolean, "is-ntp-enabled"},
    sys_dispersion{YType::str, "sys-dispersion"},
    sys_offset{YType::str, "sys-offset"},
    clock_period{YType::uint32, "clock-period"},
    sys_leap{YType::enumeration, "sys-leap"},
    sys_precision{YType::int8, "sys-precision"},
    sys_stratum{YType::uint8, "sys-stratum"},
    sys_ref_id{YType::str, "sys-ref-id"},
    sys_root_delay{YType::str, "sys-root-delay"},
    sys_root_dispersion{YType::str, "sys-root-dispersion"},
    loop_filter_state{YType::enumeration, "loop-filter-state"},
    poll_interval{YType::uint8, "poll-interval"},
    is_updated{YType::enumeration, "is-updated"},
    last_update{YType::int32, "last-update"}
    	,
    sys_ref_time(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime>())
	,sys_drift(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift>())
{
    sys_ref_time->parent = this;
    sys_drift->parent = this;

    yang_name = "status"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::~Status()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::has_data() const
{
    return is_ntp_enabled.is_set
	|| sys_dispersion.is_set
	|| sys_offset.is_set
	|| clock_period.is_set
	|| sys_leap.is_set
	|| sys_precision.is_set
	|| sys_stratum.is_set
	|| sys_ref_id.is_set
	|| sys_root_delay.is_set
	|| sys_root_dispersion.is_set
	|| loop_filter_state.is_set
	|| poll_interval.is_set
	|| is_updated.is_set
	|| last_update.is_set
	|| (sys_ref_time !=  nullptr && sys_ref_time->has_data())
	|| (sys_drift !=  nullptr && sys_drift->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ntp_enabled.yfilter)
	|| ydk::is_set(sys_dispersion.yfilter)
	|| ydk::is_set(sys_offset.yfilter)
	|| ydk::is_set(clock_period.yfilter)
	|| ydk::is_set(sys_leap.yfilter)
	|| ydk::is_set(sys_precision.yfilter)
	|| ydk::is_set(sys_stratum.yfilter)
	|| ydk::is_set(sys_ref_id.yfilter)
	|| ydk::is_set(sys_root_delay.yfilter)
	|| ydk::is_set(sys_root_dispersion.yfilter)
	|| ydk::is_set(loop_filter_state.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(is_updated.yfilter)
	|| ydk::is_set(last_update.yfilter)
	|| (sys_ref_time !=  nullptr && sys_ref_time->has_operation())
	|| (sys_drift !=  nullptr && sys_drift->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ntp_enabled.is_set || is_set(is_ntp_enabled.yfilter)) leaf_name_data.push_back(is_ntp_enabled.get_name_leafdata());
    if (sys_dispersion.is_set || is_set(sys_dispersion.yfilter)) leaf_name_data.push_back(sys_dispersion.get_name_leafdata());
    if (sys_offset.is_set || is_set(sys_offset.yfilter)) leaf_name_data.push_back(sys_offset.get_name_leafdata());
    if (clock_period.is_set || is_set(clock_period.yfilter)) leaf_name_data.push_back(clock_period.get_name_leafdata());
    if (sys_leap.is_set || is_set(sys_leap.yfilter)) leaf_name_data.push_back(sys_leap.get_name_leafdata());
    if (sys_precision.is_set || is_set(sys_precision.yfilter)) leaf_name_data.push_back(sys_precision.get_name_leafdata());
    if (sys_stratum.is_set || is_set(sys_stratum.yfilter)) leaf_name_data.push_back(sys_stratum.get_name_leafdata());
    if (sys_ref_id.is_set || is_set(sys_ref_id.yfilter)) leaf_name_data.push_back(sys_ref_id.get_name_leafdata());
    if (sys_root_delay.is_set || is_set(sys_root_delay.yfilter)) leaf_name_data.push_back(sys_root_delay.get_name_leafdata());
    if (sys_root_dispersion.is_set || is_set(sys_root_dispersion.yfilter)) leaf_name_data.push_back(sys_root_dispersion.get_name_leafdata());
    if (loop_filter_state.is_set || is_set(loop_filter_state.yfilter)) leaf_name_data.push_back(loop_filter_state.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (is_updated.is_set || is_set(is_updated.yfilter)) leaf_name_data.push_back(is_updated.get_name_leafdata());
    if (last_update.is_set || is_set(last_update.yfilter)) leaf_name_data.push_back(last_update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sys-ref-time")
    {
        if(sys_ref_time == nullptr)
        {
            sys_ref_time = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime>();
        }
        return sys_ref_time;
    }

    if(child_yang_name == "sys-drift")
    {
        if(sys_drift == nullptr)
        {
            sys_drift = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift>();
        }
        return sys_drift;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sys_ref_time != nullptr)
    {
        children["sys-ref-time"] = sys_ref_time;
    }

    if(sys_drift != nullptr)
    {
        children["sys-drift"] = sys_drift;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ntp-enabled")
    {
        is_ntp_enabled = value;
        is_ntp_enabled.value_namespace = name_space;
        is_ntp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-dispersion")
    {
        sys_dispersion = value;
        sys_dispersion.value_namespace = name_space;
        sys_dispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-offset")
    {
        sys_offset = value;
        sys_offset.value_namespace = name_space;
        sys_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-period")
    {
        clock_period = value;
        clock_period.value_namespace = name_space;
        clock_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-leap")
    {
        sys_leap = value;
        sys_leap.value_namespace = name_space;
        sys_leap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-precision")
    {
        sys_precision = value;
        sys_precision.value_namespace = name_space;
        sys_precision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-stratum")
    {
        sys_stratum = value;
        sys_stratum.value_namespace = name_space;
        sys_stratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-ref-id")
    {
        sys_ref_id = value;
        sys_ref_id.value_namespace = name_space;
        sys_ref_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-root-delay")
    {
        sys_root_delay = value;
        sys_root_delay.value_namespace = name_space;
        sys_root_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-root-dispersion")
    {
        sys_root_dispersion = value;
        sys_root_dispersion.value_namespace = name_space;
        sys_root_dispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loop-filter-state")
    {
        loop_filter_state = value;
        loop_filter_state.value_namespace = name_space;
        loop_filter_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-updated")
    {
        is_updated = value;
        is_updated.value_namespace = name_space;
        is_updated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update")
    {
        last_update = value;
        last_update.value_namespace = name_space;
        last_update.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ntp-enabled")
    {
        is_ntp_enabled.yfilter = yfilter;
    }
    if(value_path == "sys-dispersion")
    {
        sys_dispersion.yfilter = yfilter;
    }
    if(value_path == "sys-offset")
    {
        sys_offset.yfilter = yfilter;
    }
    if(value_path == "clock-period")
    {
        clock_period.yfilter = yfilter;
    }
    if(value_path == "sys-leap")
    {
        sys_leap.yfilter = yfilter;
    }
    if(value_path == "sys-precision")
    {
        sys_precision.yfilter = yfilter;
    }
    if(value_path == "sys-stratum")
    {
        sys_stratum.yfilter = yfilter;
    }
    if(value_path == "sys-ref-id")
    {
        sys_ref_id.yfilter = yfilter;
    }
    if(value_path == "sys-root-delay")
    {
        sys_root_delay.yfilter = yfilter;
    }
    if(value_path == "sys-root-dispersion")
    {
        sys_root_dispersion.yfilter = yfilter;
    }
    if(value_path == "loop-filter-state")
    {
        loop_filter_state.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "is-updated")
    {
        is_updated.yfilter = yfilter;
    }
    if(value_path == "last-update")
    {
        last_update.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sys-ref-time" || name == "sys-drift" || name == "is-ntp-enabled" || name == "sys-dispersion" || name == "sys-offset" || name == "clock-period" || name == "sys-leap" || name == "sys-precision" || name == "sys-stratum" || name == "sys-ref-id" || name == "sys-root-delay" || name == "sys-root-dispersion" || name == "loop-filter-state" || name == "poll-interval" || name == "is-updated" || name == "last-update")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::SysRefTime()
    :
    sec(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec>())
	,frac_secs(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs>())
{
    sec->parent = this;
    frac_secs->parent = this;

    yang_name = "sys-ref-time"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::~SysRefTime()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::has_data() const
{
    return (sec !=  nullptr && sec->has_data())
	|| (frac_secs !=  nullptr && frac_secs->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::has_operation() const
{
    return is_set(yfilter)
	|| (sec !=  nullptr && sec->has_operation())
	|| (frac_secs !=  nullptr && frac_secs->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys-ref-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sec")
    {
        if(sec == nullptr)
        {
            sec = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec>();
        }
        return sec;
    }

    if(child_yang_name == "frac-secs")
    {
        if(frac_secs == nullptr)
        {
            frac_secs = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs>();
        }
        return frac_secs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sec != nullptr)
    {
        children["sec"] = sec;
    }

    if(frac_secs != nullptr)
    {
        children["frac-secs"] = frac_secs;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sec" || name == "frac-secs")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec::Sec()
    :
    int_{YType::uint32, "int"}
{

    yang_name = "sec"; yang_parent_name = "sys-ref-time"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec::~Sec()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec::has_data() const
{
    return int_.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(int_.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (int_.is_set || is_set(int_.yfilter)) leaf_name_data.push_back(int_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "int")
    {
        int_ = value;
        int_.value_namespace = name_space;
        int_.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "int")
    {
        int_.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "int")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs::FracSecs()
    :
    frac{YType::uint32, "frac"}
{

    yang_name = "frac-secs"; yang_parent_name = "sys-ref-time"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs::~FracSecs()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs::has_data() const
{
    return frac.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frac.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frac-secs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frac.is_set || is_set(frac.yfilter)) leaf_name_data.push_back(frac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frac")
    {
        frac = value;
        frac.value_namespace = name_space;
        frac.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frac")
    {
        frac.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frac")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::SysDrift()
    :
    sec(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec>())
	,frac_secs(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs>())
{
    sec->parent = this;
    frac_secs->parent = this;

    yang_name = "sys-drift"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::~SysDrift()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::has_data() const
{
    return (sec !=  nullptr && sec->has_data())
	|| (frac_secs !=  nullptr && frac_secs->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::has_operation() const
{
    return is_set(yfilter)
	|| (sec !=  nullptr && sec->has_operation())
	|| (frac_secs !=  nullptr && frac_secs->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys-drift";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sec")
    {
        if(sec == nullptr)
        {
            sec = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec>();
        }
        return sec;
    }

    if(child_yang_name == "frac-secs")
    {
        if(frac_secs == nullptr)
        {
            frac_secs = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs>();
        }
        return frac_secs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sec != nullptr)
    {
        children["sec"] = sec;
    }

    if(frac_secs != nullptr)
    {
        children["frac-secs"] = frac_secs;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sec" || name == "frac-secs")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec::Sec()
    :
    int_{YType::uint32, "int"}
{

    yang_name = "sec"; yang_parent_name = "sys-drift"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec::~Sec()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec::has_data() const
{
    return int_.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(int_.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (int_.is_set || is_set(int_.yfilter)) leaf_name_data.push_back(int_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "int")
    {
        int_ = value;
        int_.value_namespace = name_space;
        int_.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "int")
    {
        int_.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "int")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs::FracSecs()
    :
    frac{YType::uint32, "frac"}
{

    yang_name = "frac-secs"; yang_parent_name = "sys-drift"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs::~FracSecs()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs::has_data() const
{
    return frac.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frac.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frac-secs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frac.is_set || is_set(frac.yfilter)) leaf_name_data.push_back(frac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frac")
    {
        frac = value;
        frac.value_namespace = name_space;
        frac.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frac")
    {
        frac.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frac")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::Associations()
    :
    is_ntp_enabled{YType::boolean, "is-ntp-enabled"},
    sys_leap{YType::enumeration, "sys-leap"}
{

    yang_name = "associations"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::~Associations()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::has_data() const
{
    for (std::size_t index=0; index<peer_summary_info.size(); index++)
    {
        if(peer_summary_info[index]->has_data())
            return true;
    }
    return is_ntp_enabled.is_set
	|| sys_leap.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::has_operation() const
{
    for (std::size_t index=0; index<peer_summary_info.size(); index++)
    {
        if(peer_summary_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_ntp_enabled.yfilter)
	|| ydk::is_set(sys_leap.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "associations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ntp_enabled.is_set || is_set(is_ntp_enabled.yfilter)) leaf_name_data.push_back(is_ntp_enabled.get_name_leafdata());
    if (sys_leap.is_set || is_set(sys_leap.yfilter)) leaf_name_data.push_back(sys_leap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-summary-info")
    {
        for(auto const & c : peer_summary_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo>();
        c->parent = this;
        peer_summary_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_summary_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ntp-enabled")
    {
        is_ntp_enabled = value;
        is_ntp_enabled.value_namespace = name_space;
        is_ntp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-leap")
    {
        sys_leap = value;
        sys_leap.value_namespace = name_space;
        sys_leap.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ntp-enabled")
    {
        is_ntp_enabled.yfilter = yfilter;
    }
    if(value_path == "sys-leap")
    {
        sys_leap.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-summary-info" || name == "is-ntp-enabled" || name == "sys-leap")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerSummaryInfo()
    :
    time_since{YType::int32, "time-since"}
    	,
    peer_info_common(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon>())
{
    peer_info_common->parent = this;

    yang_name = "peer-summary-info"; yang_parent_name = "associations"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::~PeerSummaryInfo()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::has_data() const
{
    return time_since.is_set
	|| (peer_info_common !=  nullptr && peer_info_common->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_since.yfilter)
	|| (peer_info_common !=  nullptr && peer_info_common->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-summary-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_since.is_set || is_set(time_since.yfilter)) leaf_name_data.push_back(time_since.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-info-common")
    {
        if(peer_info_common == nullptr)
        {
            peer_info_common = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon>();
        }
        return peer_info_common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_info_common != nullptr)
    {
        children["peer-info-common"] = peer_info_common;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-since")
    {
        time_since = value;
        time_since.value_namespace = name_space;
        time_since.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-since")
    {
        time_since.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-info-common" || name == "time-since")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::PeerInfoCommon()
    :
    host_mode{YType::enumeration, "host-mode"},
    is_configured{YType::boolean, "is-configured"},
    address{YType::str, "address"},
    reference_id{YType::str, "reference-id"},
    host_poll{YType::uint8, "host-poll"},
    reachability{YType::uint8, "reachability"},
    stratum{YType::uint8, "stratum"},
    status{YType::enumeration, "status"},
    delay{YType::str, "delay"},
    offset{YType::str, "offset"},
    dispersion{YType::str, "dispersion"},
    is_sys_peer{YType::boolean, "is-sys-peer"}
{

    yang_name = "peer-info-common"; yang_parent_name = "peer-summary-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::~PeerInfoCommon()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::has_data() const
{
    return host_mode.is_set
	|| is_configured.is_set
	|| address.is_set
	|| reference_id.is_set
	|| host_poll.is_set
	|| reachability.is_set
	|| stratum.is_set
	|| status.is_set
	|| delay.is_set
	|| offset.is_set
	|| dispersion.is_set
	|| is_sys_peer.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_mode.yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(reference_id.yfilter)
	|| ydk::is_set(host_poll.yfilter)
	|| ydk::is_set(reachability.yfilter)
	|| ydk::is_set(stratum.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(dispersion.yfilter)
	|| ydk::is_set(is_sys_peer.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-info-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_mode.is_set || is_set(host_mode.yfilter)) leaf_name_data.push_back(host_mode.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (reference_id.is_set || is_set(reference_id.yfilter)) leaf_name_data.push_back(reference_id.get_name_leafdata());
    if (host_poll.is_set || is_set(host_poll.yfilter)) leaf_name_data.push_back(host_poll.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.yfilter)) leaf_name_data.push_back(reachability.get_name_leafdata());
    if (stratum.is_set || is_set(stratum.yfilter)) leaf_name_data.push_back(stratum.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (dispersion.is_set || is_set(dispersion.yfilter)) leaf_name_data.push_back(dispersion.get_name_leafdata());
    if (is_sys_peer.is_set || is_set(is_sys_peer.yfilter)) leaf_name_data.push_back(is_sys_peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-mode")
    {
        host_mode = value;
        host_mode.value_namespace = name_space;
        host_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-id")
    {
        reference_id = value;
        reference_id.value_namespace = name_space;
        reference_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-poll")
    {
        host_poll = value;
        host_poll.value_namespace = name_space;
        host_poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability")
    {
        reachability = value;
        reachability.value_namespace = name_space;
        reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stratum")
    {
        stratum = value;
        stratum.value_namespace = name_space;
        stratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dispersion")
    {
        dispersion = value;
        dispersion.value_namespace = name_space;
        dispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sys-peer")
    {
        is_sys_peer = value;
        is_sys_peer.value_namespace = name_space;
        is_sys_peer.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-mode")
    {
        host_mode.yfilter = yfilter;
    }
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "reference-id")
    {
        reference_id.yfilter = yfilter;
    }
    if(value_path == "host-poll")
    {
        host_poll.yfilter = yfilter;
    }
    if(value_path == "reachability")
    {
        reachability.yfilter = yfilter;
    }
    if(value_path == "stratum")
    {
        stratum.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "dispersion")
    {
        dispersion.yfilter = yfilter;
    }
    if(value_path == "is-sys-peer")
    {
        is_sys_peer.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-mode" || name == "is-configured" || name == "address" || name == "reference-id" || name == "host-poll" || name == "reachability" || name == "stratum" || name == "status" || name == "delay" || name == "offset" || name == "dispersion" || name == "is-sys-peer")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::AssociationsDetail()
    :
    is_ntp_enabled{YType::boolean, "is-ntp-enabled"},
    sys_leap{YType::enumeration, "sys-leap"}
{

    yang_name = "associations-detail"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::~AssociationsDetail()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::has_data() const
{
    for (std::size_t index=0; index<peer_detail_info.size(); index++)
    {
        if(peer_detail_info[index]->has_data())
            return true;
    }
    return is_ntp_enabled.is_set
	|| sys_leap.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::has_operation() const
{
    for (std::size_t index=0; index<peer_detail_info.size(); index++)
    {
        if(peer_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_ntp_enabled.yfilter)
	|| ydk::is_set(sys_leap.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "associations-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ntp_enabled.is_set || is_set(is_ntp_enabled.yfilter)) leaf_name_data.push_back(is_ntp_enabled.get_name_leafdata());
    if (sys_leap.is_set || is_set(sys_leap.yfilter)) leaf_name_data.push_back(sys_leap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-detail-info")
    {
        for(auto const & c : peer_detail_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo>();
        c->parent = this;
        peer_detail_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer_detail_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ntp-enabled")
    {
        is_ntp_enabled = value;
        is_ntp_enabled.value_namespace = name_space;
        is_ntp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-leap")
    {
        sys_leap = value;
        sys_leap.value_namespace = name_space;
        sys_leap.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ntp-enabled")
    {
        is_ntp_enabled.yfilter = yfilter;
    }
    if(value_path == "sys-leap")
    {
        sys_leap.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-detail-info" || name == "is-ntp-enabled" || name == "sys-leap")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerDetailInfo()
    :
    leap{YType::enumeration, "leap"},
    peer_mode{YType::enumeration, "peer-mode"},
    poll_interval{YType::uint8, "poll-interval"},
    is_ref_clock{YType::boolean, "is-ref-clock"},
    is_authenticated{YType::boolean, "is-authenticated"},
    root_delay{YType::str, "root-delay"},
    root_dispersion{YType::str, "root-dispersion"},
    synch_distance{YType::str, "synch-distance"},
    precision{YType::int8, "precision"},
    version{YType::uint8, "version"},
    filter_index{YType::uint32, "filter-index"}
    	,
    peer_info_common(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon>())
	,ref_time(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime>())
	,originate_time(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime>())
	,receive_time(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime>())
	,transmit_time(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime>())
{
    peer_info_common->parent = this;
    ref_time->parent = this;
    originate_time->parent = this;
    receive_time->parent = this;
    transmit_time->parent = this;

    yang_name = "peer-detail-info"; yang_parent_name = "associations-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::~PeerDetailInfo()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::has_data() const
{
    for (std::size_t index=0; index<filter_detail.size(); index++)
    {
        if(filter_detail[index]->has_data())
            return true;
    }
    return leap.is_set
	|| peer_mode.is_set
	|| poll_interval.is_set
	|| is_ref_clock.is_set
	|| is_authenticated.is_set
	|| root_delay.is_set
	|| root_dispersion.is_set
	|| synch_distance.is_set
	|| precision.is_set
	|| version.is_set
	|| filter_index.is_set
	|| (peer_info_common !=  nullptr && peer_info_common->has_data())
	|| (ref_time !=  nullptr && ref_time->has_data())
	|| (originate_time !=  nullptr && originate_time->has_data())
	|| (receive_time !=  nullptr && receive_time->has_data())
	|| (transmit_time !=  nullptr && transmit_time->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::has_operation() const
{
    for (std::size_t index=0; index<filter_detail.size(); index++)
    {
        if(filter_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(leap.yfilter)
	|| ydk::is_set(peer_mode.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(is_ref_clock.yfilter)
	|| ydk::is_set(is_authenticated.yfilter)
	|| ydk::is_set(root_delay.yfilter)
	|| ydk::is_set(root_dispersion.yfilter)
	|| ydk::is_set(synch_distance.yfilter)
	|| ydk::is_set(precision.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(filter_index.yfilter)
	|| (peer_info_common !=  nullptr && peer_info_common->has_operation())
	|| (ref_time !=  nullptr && ref_time->has_operation())
	|| (originate_time !=  nullptr && originate_time->has_operation())
	|| (receive_time !=  nullptr && receive_time->has_operation())
	|| (transmit_time !=  nullptr && transmit_time->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (leap.is_set || is_set(leap.yfilter)) leaf_name_data.push_back(leap.get_name_leafdata());
    if (peer_mode.is_set || is_set(peer_mode.yfilter)) leaf_name_data.push_back(peer_mode.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (is_ref_clock.is_set || is_set(is_ref_clock.yfilter)) leaf_name_data.push_back(is_ref_clock.get_name_leafdata());
    if (is_authenticated.is_set || is_set(is_authenticated.yfilter)) leaf_name_data.push_back(is_authenticated.get_name_leafdata());
    if (root_delay.is_set || is_set(root_delay.yfilter)) leaf_name_data.push_back(root_delay.get_name_leafdata());
    if (root_dispersion.is_set || is_set(root_dispersion.yfilter)) leaf_name_data.push_back(root_dispersion.get_name_leafdata());
    if (synch_distance.is_set || is_set(synch_distance.yfilter)) leaf_name_data.push_back(synch_distance.get_name_leafdata());
    if (precision.is_set || is_set(precision.yfilter)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (filter_index.is_set || is_set(filter_index.yfilter)) leaf_name_data.push_back(filter_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-info-common")
    {
        if(peer_info_common == nullptr)
        {
            peer_info_common = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon>();
        }
        return peer_info_common;
    }

    if(child_yang_name == "ref-time")
    {
        if(ref_time == nullptr)
        {
            ref_time = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime>();
        }
        return ref_time;
    }

    if(child_yang_name == "originate-time")
    {
        if(originate_time == nullptr)
        {
            originate_time = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime>();
        }
        return originate_time;
    }

    if(child_yang_name == "receive-time")
    {
        if(receive_time == nullptr)
        {
            receive_time = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime>();
        }
        return receive_time;
    }

    if(child_yang_name == "transmit-time")
    {
        if(transmit_time == nullptr)
        {
            transmit_time = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime>();
        }
        return transmit_time;
    }

    if(child_yang_name == "filter-detail")
    {
        for(auto const & c : filter_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail>();
        c->parent = this;
        filter_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_info_common != nullptr)
    {
        children["peer-info-common"] = peer_info_common;
    }

    if(ref_time != nullptr)
    {
        children["ref-time"] = ref_time;
    }

    if(originate_time != nullptr)
    {
        children["originate-time"] = originate_time;
    }

    if(receive_time != nullptr)
    {
        children["receive-time"] = receive_time;
    }

    if(transmit_time != nullptr)
    {
        children["transmit-time"] = transmit_time;
    }

    for (auto const & c : filter_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "leap")
    {
        leap = value;
        leap.value_namespace = name_space;
        leap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-mode")
    {
        peer_mode = value;
        peer_mode.value_namespace = name_space;
        peer_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ref-clock")
    {
        is_ref_clock = value;
        is_ref_clock.value_namespace = name_space;
        is_ref_clock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-authenticated")
    {
        is_authenticated = value;
        is_authenticated.value_namespace = name_space;
        is_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root-delay")
    {
        root_delay = value;
        root_delay.value_namespace = name_space;
        root_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root-dispersion")
    {
        root_dispersion = value;
        root_dispersion.value_namespace = name_space;
        root_dispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synch-distance")
    {
        synch_distance = value;
        synch_distance.value_namespace = name_space;
        synch_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precision")
    {
        precision = value;
        precision.value_namespace = name_space;
        precision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-index")
    {
        filter_index = value;
        filter_index.value_namespace = name_space;
        filter_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "leap")
    {
        leap.yfilter = yfilter;
    }
    if(value_path == "peer-mode")
    {
        peer_mode.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "is-ref-clock")
    {
        is_ref_clock.yfilter = yfilter;
    }
    if(value_path == "is-authenticated")
    {
        is_authenticated.yfilter = yfilter;
    }
    if(value_path == "root-delay")
    {
        root_delay.yfilter = yfilter;
    }
    if(value_path == "root-dispersion")
    {
        root_dispersion.yfilter = yfilter;
    }
    if(value_path == "synch-distance")
    {
        synch_distance.yfilter = yfilter;
    }
    if(value_path == "precision")
    {
        precision.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "filter-index")
    {
        filter_index.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-info-common" || name == "ref-time" || name == "originate-time" || name == "receive-time" || name == "transmit-time" || name == "filter-detail" || name == "leap" || name == "peer-mode" || name == "poll-interval" || name == "is-ref-clock" || name == "is-authenticated" || name == "root-delay" || name == "root-dispersion" || name == "synch-distance" || name == "precision" || name == "version" || name == "filter-index")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::PeerInfoCommon()
    :
    host_mode{YType::enumeration, "host-mode"},
    is_configured{YType::boolean, "is-configured"},
    address{YType::str, "address"},
    reference_id{YType::str, "reference-id"},
    host_poll{YType::uint8, "host-poll"},
    reachability{YType::uint8, "reachability"},
    stratum{YType::uint8, "stratum"},
    status{YType::enumeration, "status"},
    delay{YType::str, "delay"},
    offset{YType::str, "offset"},
    dispersion{YType::str, "dispersion"},
    is_sys_peer{YType::boolean, "is-sys-peer"}
{

    yang_name = "peer-info-common"; yang_parent_name = "peer-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::~PeerInfoCommon()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::has_data() const
{
    return host_mode.is_set
	|| is_configured.is_set
	|| address.is_set
	|| reference_id.is_set
	|| host_poll.is_set
	|| reachability.is_set
	|| stratum.is_set
	|| status.is_set
	|| delay.is_set
	|| offset.is_set
	|| dispersion.is_set
	|| is_sys_peer.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_mode.yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(reference_id.yfilter)
	|| ydk::is_set(host_poll.yfilter)
	|| ydk::is_set(reachability.yfilter)
	|| ydk::is_set(stratum.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(dispersion.yfilter)
	|| ydk::is_set(is_sys_peer.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-info-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_mode.is_set || is_set(host_mode.yfilter)) leaf_name_data.push_back(host_mode.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (reference_id.is_set || is_set(reference_id.yfilter)) leaf_name_data.push_back(reference_id.get_name_leafdata());
    if (host_poll.is_set || is_set(host_poll.yfilter)) leaf_name_data.push_back(host_poll.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.yfilter)) leaf_name_data.push_back(reachability.get_name_leafdata());
    if (stratum.is_set || is_set(stratum.yfilter)) leaf_name_data.push_back(stratum.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (dispersion.is_set || is_set(dispersion.yfilter)) leaf_name_data.push_back(dispersion.get_name_leafdata());
    if (is_sys_peer.is_set || is_set(is_sys_peer.yfilter)) leaf_name_data.push_back(is_sys_peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-mode")
    {
        host_mode = value;
        host_mode.value_namespace = name_space;
        host_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-id")
    {
        reference_id = value;
        reference_id.value_namespace = name_space;
        reference_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-poll")
    {
        host_poll = value;
        host_poll.value_namespace = name_space;
        host_poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability")
    {
        reachability = value;
        reachability.value_namespace = name_space;
        reachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stratum")
    {
        stratum = value;
        stratum.value_namespace = name_space;
        stratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dispersion")
    {
        dispersion = value;
        dispersion.value_namespace = name_space;
        dispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sys-peer")
    {
        is_sys_peer = value;
        is_sys_peer.value_namespace = name_space;
        is_sys_peer.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-mode")
    {
        host_mode.yfilter = yfilter;
    }
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "reference-id")
    {
        reference_id.yfilter = yfilter;
    }
    if(value_path == "host-poll")
    {
        host_poll.yfilter = yfilter;
    }
    if(value_path == "reachability")
    {
        reachability.yfilter = yfilter;
    }
    if(value_path == "stratum")
    {
        stratum.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "dispersion")
    {
        dispersion.yfilter = yfilter;
    }
    if(value_path == "is-sys-peer")
    {
        is_sys_peer.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-mode" || name == "is-configured" || name == "address" || name == "reference-id" || name == "host-poll" || name == "reachability" || name == "stratum" || name == "status" || name == "delay" || name == "offset" || name == "dispersion" || name == "is-sys-peer")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::RefTime()
    :
    sec(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec>())
	,frac_secs(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs>())
{
    sec->parent = this;
    frac_secs->parent = this;

    yang_name = "ref-time"; yang_parent_name = "peer-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::~RefTime()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::has_data() const
{
    return (sec !=  nullptr && sec->has_data())
	|| (frac_secs !=  nullptr && frac_secs->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::has_operation() const
{
    return is_set(yfilter)
	|| (sec !=  nullptr && sec->has_operation())
	|| (frac_secs !=  nullptr && frac_secs->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ref-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sec")
    {
        if(sec == nullptr)
        {
            sec = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec>();
        }
        return sec;
    }

    if(child_yang_name == "frac-secs")
    {
        if(frac_secs == nullptr)
        {
            frac_secs = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs>();
        }
        return frac_secs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sec != nullptr)
    {
        children["sec"] = sec;
    }

    if(frac_secs != nullptr)
    {
        children["frac-secs"] = frac_secs;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sec" || name == "frac-secs")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec::Sec()
    :
    int_{YType::uint32, "int"}
{

    yang_name = "sec"; yang_parent_name = "ref-time"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec::~Sec()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec::has_data() const
{
    return int_.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(int_.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (int_.is_set || is_set(int_.yfilter)) leaf_name_data.push_back(int_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "int")
    {
        int_ = value;
        int_.value_namespace = name_space;
        int_.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "int")
    {
        int_.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "int")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs::FracSecs()
    :
    frac{YType::uint32, "frac"}
{

    yang_name = "frac-secs"; yang_parent_name = "ref-time"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs::~FracSecs()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs::has_data() const
{
    return frac.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frac.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frac-secs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frac.is_set || is_set(frac.yfilter)) leaf_name_data.push_back(frac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frac")
    {
        frac = value;
        frac.value_namespace = name_space;
        frac.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frac")
    {
        frac.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frac")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::OriginateTime()
    :
    sec(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec>())
	,frac_secs(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs>())
{
    sec->parent = this;
    frac_secs->parent = this;

    yang_name = "originate-time"; yang_parent_name = "peer-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::~OriginateTime()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::has_data() const
{
    return (sec !=  nullptr && sec->has_data())
	|| (frac_secs !=  nullptr && frac_secs->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::has_operation() const
{
    return is_set(yfilter)
	|| (sec !=  nullptr && sec->has_operation())
	|| (frac_secs !=  nullptr && frac_secs->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sec")
    {
        if(sec == nullptr)
        {
            sec = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec>();
        }
        return sec;
    }

    if(child_yang_name == "frac-secs")
    {
        if(frac_secs == nullptr)
        {
            frac_secs = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs>();
        }
        return frac_secs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sec != nullptr)
    {
        children["sec"] = sec;
    }

    if(frac_secs != nullptr)
    {
        children["frac-secs"] = frac_secs;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sec" || name == "frac-secs")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec::Sec()
    :
    int_{YType::uint32, "int"}
{

    yang_name = "sec"; yang_parent_name = "originate-time"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec::~Sec()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec::has_data() const
{
    return int_.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(int_.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (int_.is_set || is_set(int_.yfilter)) leaf_name_data.push_back(int_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "int")
    {
        int_ = value;
        int_.value_namespace = name_space;
        int_.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "int")
    {
        int_.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "int")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs::FracSecs()
    :
    frac{YType::uint32, "frac"}
{

    yang_name = "frac-secs"; yang_parent_name = "originate-time"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs::~FracSecs()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs::has_data() const
{
    return frac.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frac.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frac-secs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frac.is_set || is_set(frac.yfilter)) leaf_name_data.push_back(frac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frac")
    {
        frac = value;
        frac.value_namespace = name_space;
        frac.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frac")
    {
        frac.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frac")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::ReceiveTime()
    :
    sec(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec>())
	,frac_secs(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs>())
{
    sec->parent = this;
    frac_secs->parent = this;

    yang_name = "receive-time"; yang_parent_name = "peer-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::~ReceiveTime()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::has_data() const
{
    return (sec !=  nullptr && sec->has_data())
	|| (frac_secs !=  nullptr && frac_secs->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::has_operation() const
{
    return is_set(yfilter)
	|| (sec !=  nullptr && sec->has_operation())
	|| (frac_secs !=  nullptr && frac_secs->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sec")
    {
        if(sec == nullptr)
        {
            sec = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec>();
        }
        return sec;
    }

    if(child_yang_name == "frac-secs")
    {
        if(frac_secs == nullptr)
        {
            frac_secs = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs>();
        }
        return frac_secs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sec != nullptr)
    {
        children["sec"] = sec;
    }

    if(frac_secs != nullptr)
    {
        children["frac-secs"] = frac_secs;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sec" || name == "frac-secs")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec::Sec()
    :
    int_{YType::uint32, "int"}
{

    yang_name = "sec"; yang_parent_name = "receive-time"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec::~Sec()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec::has_data() const
{
    return int_.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(int_.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (int_.is_set || is_set(int_.yfilter)) leaf_name_data.push_back(int_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "int")
    {
        int_ = value;
        int_.value_namespace = name_space;
        int_.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "int")
    {
        int_.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "int")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs::FracSecs()
    :
    frac{YType::uint32, "frac"}
{

    yang_name = "frac-secs"; yang_parent_name = "receive-time"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs::~FracSecs()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs::has_data() const
{
    return frac.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frac.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frac-secs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frac.is_set || is_set(frac.yfilter)) leaf_name_data.push_back(frac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frac")
    {
        frac = value;
        frac.value_namespace = name_space;
        frac.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frac")
    {
        frac.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frac")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::TransmitTime()
    :
    sec(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec>())
	,frac_secs(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs>())
{
    sec->parent = this;
    frac_secs->parent = this;

    yang_name = "transmit-time"; yang_parent_name = "peer-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::~TransmitTime()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::has_data() const
{
    return (sec !=  nullptr && sec->has_data())
	|| (frac_secs !=  nullptr && frac_secs->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::has_operation() const
{
    return is_set(yfilter)
	|| (sec !=  nullptr && sec->has_operation())
	|| (frac_secs !=  nullptr && frac_secs->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sec")
    {
        if(sec == nullptr)
        {
            sec = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec>();
        }
        return sec;
    }

    if(child_yang_name == "frac-secs")
    {
        if(frac_secs == nullptr)
        {
            frac_secs = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs>();
        }
        return frac_secs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sec != nullptr)
    {
        children["sec"] = sec;
    }

    if(frac_secs != nullptr)
    {
        children["frac-secs"] = frac_secs;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sec" || name == "frac-secs")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec::Sec()
    :
    int_{YType::uint32, "int"}
{

    yang_name = "sec"; yang_parent_name = "transmit-time"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec::~Sec()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec::has_data() const
{
    return int_.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(int_.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (int_.is_set || is_set(int_.yfilter)) leaf_name_data.push_back(int_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "int")
    {
        int_ = value;
        int_.value_namespace = name_space;
        int_.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "int")
    {
        int_.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "int")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs::FracSecs()
    :
    frac{YType::uint32, "frac"}
{

    yang_name = "frac-secs"; yang_parent_name = "transmit-time"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs::~FracSecs()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs::has_data() const
{
    return frac.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frac.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frac-secs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frac.is_set || is_set(frac.yfilter)) leaf_name_data.push_back(frac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frac")
    {
        frac = value;
        frac.value_namespace = name_space;
        frac.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frac")
    {
        frac.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frac")
        return true;
    return false;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::FilterDetail()
    :
    filter_delay{YType::str, "filter-delay"},
    filter_offset{YType::str, "filter-offset"},
    filter_disp{YType::str, "filter-disp"}
{

    yang_name = "filter-detail"; yang_parent_name = "peer-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::~FilterDetail()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::has_data() const
{
    return filter_delay.is_set
	|| filter_offset.is_set
	|| filter_disp.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_delay.yfilter)
	|| ydk::is_set(filter_offset.yfilter)
	|| ydk::is_set(filter_disp.yfilter);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_delay.is_set || is_set(filter_delay.yfilter)) leaf_name_data.push_back(filter_delay.get_name_leafdata());
    if (filter_offset.is_set || is_set(filter_offset.yfilter)) leaf_name_data.push_back(filter_offset.get_name_leafdata());
    if (filter_disp.is_set || is_set(filter_disp.yfilter)) leaf_name_data.push_back(filter_disp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-delay")
    {
        filter_delay = value;
        filter_delay.value_namespace = name_space;
        filter_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-offset")
    {
        filter_offset = value;
        filter_offset.value_namespace = name_space;
        filter_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-disp")
    {
        filter_disp = value;
        filter_disp.value_namespace = name_space;
        filter_disp.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-delay")
    {
        filter_delay.yfilter = yfilter;
    }
    if(value_path == "filter-offset")
    {
        filter_offset.yfilter = yfilter;
    }
    if(value_path == "filter-disp")
    {
        filter_disp.yfilter = yfilter;
    }
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter-delay" || name == "filter-offset" || name == "filter-disp")
        return true;
    return false;
}

const Enum::YLeaf NtpPeerStatus::ntp_ctl_pst_sel_reject {0, "ntp-ctl-pst-sel-reject"};
const Enum::YLeaf NtpPeerStatus::ntp_ctl_pst_sel_sane {1, "ntp-ctl-pst-sel-sane"};
const Enum::YLeaf NtpPeerStatus::ntp_ctl_pst_sel_correct {2, "ntp-ctl-pst-sel-correct"};
const Enum::YLeaf NtpPeerStatus::ntp_ctl_pst_sel_selcand {3, "ntp-ctl-pst-sel-selcand"};
const Enum::YLeaf NtpPeerStatus::ntp_ctl_pst_sel_sync_cand {4, "ntp-ctl-pst-sel-sync-cand"};
const Enum::YLeaf NtpPeerStatus::ntp_ctl_pst_sel_distsys_peer {5, "ntp-ctl-pst-sel-distsys-peer"};
const Enum::YLeaf NtpPeerStatus::ntp_ctl_pst_sel_sys_peer {6, "ntp-ctl-pst-sel-sys-peer"};
const Enum::YLeaf NtpPeerStatus::ntp_ctl_pst_sel_pps {7, "ntp-ctl-pst-sel-pps"};

const Enum::YLeaf NtpMode::ntp_mode_unspec {0, "ntp-mode-unspec"};
const Enum::YLeaf NtpMode::ntp_mode_symetric_active {1, "ntp-mode-symetric-active"};
const Enum::YLeaf NtpMode::ntp_mode_symetric_passive {2, "ntp-mode-symetric-passive"};
const Enum::YLeaf NtpMode::ntp_mode_client {3, "ntp-mode-client"};
const Enum::YLeaf NtpMode::ntp_mode_server {4, "ntp-mode-server"};
const Enum::YLeaf NtpMode::ntp_mode_xcast_server {5, "ntp-mode-xcast-server"};
const Enum::YLeaf NtpMode::ntp_mode_control {6, "ntp-mode-control"};
const Enum::YLeaf NtpMode::ntp_mode_private {7, "ntp-mode-private"};
const Enum::YLeaf NtpMode::ntp_mode_xcast_client {8, "ntp-mode-xcast-client"};

const Enum::YLeaf ClockUpdateNode::clk_never_updated {0, "clk-never-updated"};
const Enum::YLeaf ClockUpdateNode::clk_updated {1, "clk-updated"};
const Enum::YLeaf ClockUpdateNode::clk_no_update_info {2, "clk-no-update-info"};

const Enum::YLeaf NtpLoopFilterState::ntp_loop_flt_n_set {0, "ntp-loop-flt-n-set"};
const Enum::YLeaf NtpLoopFilterState::ntp_loop_flt_f_set {1, "ntp-loop-flt-f-set"};
const Enum::YLeaf NtpLoopFilterState::ntp_loop_flt_spik {2, "ntp-loop-flt-spik"};
const Enum::YLeaf NtpLoopFilterState::ntp_loop_flt_freq {3, "ntp-loop-flt-freq"};
const Enum::YLeaf NtpLoopFilterState::ntp_loop_flt_sync {4, "ntp-loop-flt-sync"};
const Enum::YLeaf NtpLoopFilterState::ntp_loop_flt_unkn {5, "ntp-loop-flt-unkn"};

const Enum::YLeaf NtpLeap::ntp_leap_no_warning {0, "ntp-leap-no-warning"};
const Enum::YLeaf NtpLeap::ntp_leap_addse_cond {1, "ntp-leap-addse-cond"};
const Enum::YLeaf NtpLeap::ntp_leap_delse_cond {2, "ntp-leap-delse-cond"};
const Enum::YLeaf NtpLeap::ntp_leap_not_in_sync {3, "ntp-leap-not-in-sync"};


}
}

