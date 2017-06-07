
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_ntp_admin_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_ntp_admin_oper {

Ntp::Ntp()
    :
    racks(std::make_shared<Ntp::Racks>())
{
    racks->parent = this;

    yang_name = "ntp"; yang_parent_name = "Cisco-IOS-XR-ip-ntp-admin-oper";
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
    return is_set(operation)
	|| (racks !=  nullptr && racks->has_operation());
}

std::string Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-admin-oper:ntp";

    return path_buffer.str();

}

const EntityPath Ntp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::set_value(const std::string & value_path, std::string value)
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

Ntp::Racks::Racks()
{
    yang_name = "racks"; yang_parent_name = "ntp";
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
    return is_set(operation);
}

std::string Ntp::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-admin-oper:ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::set_value(const std::string & value_path, std::string value)
{
}

Ntp::Racks::Rack::Rack()
    :
    number{YType::int32, "number"}
    	,
    slots(std::make_shared<Ntp::Racks::Rack::Slots>())
{
    slots->parent = this;

    yang_name = "rack"; yang_parent_name = "racks";
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
    return is_set(operation)
	|| is_set(number.operation)
	|| (slots !=  nullptr && slots->has_operation());
}

std::string Ntp::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-admin-oper:ntp/racks/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Ntp::Racks::Rack::Slots::Slots()
{
    yang_name = "slots"; yang_parent_name = "rack";
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
    return is_set(operation);
}

std::string Ntp::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slots' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::set_value(const std::string & value_path, std::string value)
{
}

Ntp::Racks::Rack::Slots::Slot::Slot()
    :
    number{YType::int32, "number"}
    	,
    instances(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances>())
{
    instances->parent = this;

    yang_name = "slot"; yang_parent_name = "slots";
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
    return is_set(operation)
	|| is_set(number.operation)
	|| (instances !=  nullptr && instances->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slot' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instances()
{
    yang_name = "instances"; yang_parent_name = "slot";
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
    return is_set(operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Instances' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::set_value(const std::string & value_path, std::string value)
{
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Instance()
    :
    number{YType::int32, "number"}
    	,
    associations(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations>())
	,associations_detail(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail>())
	,status(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status>())
{
    associations->parent = this;

    associations_detail->parent = this;

    status->parent = this;

    yang_name = "instance"; yang_parent_name = "instances";
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::~Instance()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::has_data() const
{
    return number.is_set
	|| (associations !=  nullptr && associations->has_data())
	|| (associations_detail !=  nullptr && associations_detail->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (associations !=  nullptr && associations->has_operation())
	|| (associations_detail !=  nullptr && associations_detail->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Instance' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(associations != nullptr)
    {
        children["associations"] = associations;
    }

    if(associations_detail != nullptr)
    {
        children["associations-detail"] = associations_detail;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::Status()
    :
    clock_period{YType::uint32, "clock-period"},
    is_ntp_enabled{YType::boolean, "is-ntp-enabled"},
    is_updated{YType::enumeration, "is-updated"},
    last_update{YType::int32, "last-update"},
    loop_filter_state{YType::enumeration, "loop-filter-state"},
    poll_interval{YType::uint8, "poll-interval"},
    sys_dispersion{YType::str, "sys-dispersion"},
    sys_leap{YType::enumeration, "sys-leap"},
    sys_offset{YType::str, "sys-offset"},
    sys_precision{YType::int8, "sys-precision"},
    sys_ref_id{YType::str, "sys-ref-id"},
    sys_root_delay{YType::str, "sys-root-delay"},
    sys_root_dispersion{YType::str, "sys-root-dispersion"},
    sys_stratum{YType::uint8, "sys-stratum"}
    	,
    sys_drift(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift>())
	,sys_ref_time(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime>())
{
    sys_drift->parent = this;

    sys_ref_time->parent = this;

    yang_name = "status"; yang_parent_name = "instance";
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::~Status()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::has_data() const
{
    return clock_period.is_set
	|| is_ntp_enabled.is_set
	|| is_updated.is_set
	|| last_update.is_set
	|| loop_filter_state.is_set
	|| poll_interval.is_set
	|| sys_dispersion.is_set
	|| sys_leap.is_set
	|| sys_offset.is_set
	|| sys_precision.is_set
	|| sys_ref_id.is_set
	|| sys_root_delay.is_set
	|| sys_root_dispersion.is_set
	|| sys_stratum.is_set
	|| (sys_drift !=  nullptr && sys_drift->has_data())
	|| (sys_ref_time !=  nullptr && sys_ref_time->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::has_operation() const
{
    return is_set(operation)
	|| is_set(clock_period.operation)
	|| is_set(is_ntp_enabled.operation)
	|| is_set(is_updated.operation)
	|| is_set(last_update.operation)
	|| is_set(loop_filter_state.operation)
	|| is_set(poll_interval.operation)
	|| is_set(sys_dispersion.operation)
	|| is_set(sys_leap.operation)
	|| is_set(sys_offset.operation)
	|| is_set(sys_precision.operation)
	|| is_set(sys_ref_id.operation)
	|| is_set(sys_root_delay.operation)
	|| is_set(sys_root_dispersion.operation)
	|| is_set(sys_stratum.operation)
	|| (sys_drift !=  nullptr && sys_drift->has_operation())
	|| (sys_ref_time !=  nullptr && sys_ref_time->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Status' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_period.is_set || is_set(clock_period.operation)) leaf_name_data.push_back(clock_period.get_name_leafdata());
    if (is_ntp_enabled.is_set || is_set(is_ntp_enabled.operation)) leaf_name_data.push_back(is_ntp_enabled.get_name_leafdata());
    if (is_updated.is_set || is_set(is_updated.operation)) leaf_name_data.push_back(is_updated.get_name_leafdata());
    if (last_update.is_set || is_set(last_update.operation)) leaf_name_data.push_back(last_update.get_name_leafdata());
    if (loop_filter_state.is_set || is_set(loop_filter_state.operation)) leaf_name_data.push_back(loop_filter_state.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (sys_dispersion.is_set || is_set(sys_dispersion.operation)) leaf_name_data.push_back(sys_dispersion.get_name_leafdata());
    if (sys_leap.is_set || is_set(sys_leap.operation)) leaf_name_data.push_back(sys_leap.get_name_leafdata());
    if (sys_offset.is_set || is_set(sys_offset.operation)) leaf_name_data.push_back(sys_offset.get_name_leafdata());
    if (sys_precision.is_set || is_set(sys_precision.operation)) leaf_name_data.push_back(sys_precision.get_name_leafdata());
    if (sys_ref_id.is_set || is_set(sys_ref_id.operation)) leaf_name_data.push_back(sys_ref_id.get_name_leafdata());
    if (sys_root_delay.is_set || is_set(sys_root_delay.operation)) leaf_name_data.push_back(sys_root_delay.get_name_leafdata());
    if (sys_root_dispersion.is_set || is_set(sys_root_dispersion.operation)) leaf_name_data.push_back(sys_root_dispersion.get_name_leafdata());
    if (sys_stratum.is_set || is_set(sys_stratum.operation)) leaf_name_data.push_back(sys_stratum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sys-drift")
    {
        if(sys_drift == nullptr)
        {
            sys_drift = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift>();
        }
        return sys_drift;
    }

    if(child_yang_name == "sys-ref-time")
    {
        if(sys_ref_time == nullptr)
        {
            sys_ref_time = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime>();
        }
        return sys_ref_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sys_drift != nullptr)
    {
        children["sys-drift"] = sys_drift;
    }

    if(sys_ref_time != nullptr)
    {
        children["sys-ref-time"] = sys_ref_time;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clock-period")
    {
        clock_period = value;
    }
    if(value_path == "is-ntp-enabled")
    {
        is_ntp_enabled = value;
    }
    if(value_path == "is-updated")
    {
        is_updated = value;
    }
    if(value_path == "last-update")
    {
        last_update = value;
    }
    if(value_path == "loop-filter-state")
    {
        loop_filter_state = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "sys-dispersion")
    {
        sys_dispersion = value;
    }
    if(value_path == "sys-leap")
    {
        sys_leap = value;
    }
    if(value_path == "sys-offset")
    {
        sys_offset = value;
    }
    if(value_path == "sys-precision")
    {
        sys_precision = value;
    }
    if(value_path == "sys-ref-id")
    {
        sys_ref_id = value;
    }
    if(value_path == "sys-root-delay")
    {
        sys_root_delay = value;
    }
    if(value_path == "sys-root-dispersion")
    {
        sys_root_dispersion = value;
    }
    if(value_path == "sys-stratum")
    {
        sys_stratum = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::SysRefTime()
    :
    frac_secs(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs>())
	,sec(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec>())
{
    frac_secs->parent = this;

    sec->parent = this;

    yang_name = "sys-ref-time"; yang_parent_name = "status";
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::~SysRefTime()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::has_data() const
{
    return (frac_secs !=  nullptr && frac_secs->has_data())
	|| (sec !=  nullptr && sec->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::has_operation() const
{
    return is_set(operation)
	|| (frac_secs !=  nullptr && frac_secs->has_operation())
	|| (sec !=  nullptr && sec->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys-ref-time";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SysRefTime' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frac-secs")
    {
        if(frac_secs == nullptr)
        {
            frac_secs = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs>();
        }
        return frac_secs;
    }

    if(child_yang_name == "sec")
    {
        if(sec == nullptr)
        {
            sec = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec>();
        }
        return sec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frac_secs != nullptr)
    {
        children["frac-secs"] = frac_secs;
    }

    if(sec != nullptr)
    {
        children["sec"] = sec;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::set_value(const std::string & value_path, std::string value)
{
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec::Sec()
    :
    int_{YType::uint32, "int"}
{
    yang_name = "sec"; yang_parent_name = "sys-ref-time";
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
    return is_set(operation)
	|| is_set(int_.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sec";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sec' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (int_.is_set || is_set(int_.operation)) leaf_name_data.push_back(int_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::Sec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "int")
    {
        int_ = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs::FracSecs()
    :
    frac{YType::uint32, "frac"}
{
    yang_name = "frac-secs"; yang_parent_name = "sys-ref-time";
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
    return is_set(operation)
	|| is_set(frac.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frac-secs";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FracSecs' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frac.is_set || is_set(frac.operation)) leaf_name_data.push_back(frac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysRefTime::FracSecs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frac")
    {
        frac = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::SysDrift()
    :
    frac_secs(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs>())
	,sec(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec>())
{
    frac_secs->parent = this;

    sec->parent = this;

    yang_name = "sys-drift"; yang_parent_name = "status";
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::~SysDrift()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::has_data() const
{
    return (frac_secs !=  nullptr && frac_secs->has_data())
	|| (sec !=  nullptr && sec->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::has_operation() const
{
    return is_set(operation)
	|| (frac_secs !=  nullptr && frac_secs->has_operation())
	|| (sec !=  nullptr && sec->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys-drift";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SysDrift' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frac-secs")
    {
        if(frac_secs == nullptr)
        {
            frac_secs = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs>();
        }
        return frac_secs;
    }

    if(child_yang_name == "sec")
    {
        if(sec == nullptr)
        {
            sec = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec>();
        }
        return sec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frac_secs != nullptr)
    {
        children["frac-secs"] = frac_secs;
    }

    if(sec != nullptr)
    {
        children["sec"] = sec;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::set_value(const std::string & value_path, std::string value)
{
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec::Sec()
    :
    int_{YType::uint32, "int"}
{
    yang_name = "sec"; yang_parent_name = "sys-drift";
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
    return is_set(operation)
	|| is_set(int_.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sec";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sec' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (int_.is_set || is_set(int_.operation)) leaf_name_data.push_back(int_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::Sec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "int")
    {
        int_ = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs::FracSecs()
    :
    frac{YType::uint32, "frac"}
{
    yang_name = "frac-secs"; yang_parent_name = "sys-drift";
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
    return is_set(operation)
	|| is_set(frac.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frac-secs";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FracSecs' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frac.is_set || is_set(frac.operation)) leaf_name_data.push_back(frac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Status::SysDrift::FracSecs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frac")
    {
        frac = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::Associations()
    :
    is_ntp_enabled{YType::boolean, "is-ntp-enabled"},
    sys_leap{YType::enumeration, "sys-leap"}
{
    yang_name = "associations"; yang_parent_name = "instance";
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
    return is_set(operation)
	|| is_set(is_ntp_enabled.operation)
	|| is_set(sys_leap.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "associations";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Associations' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ntp_enabled.is_set || is_set(is_ntp_enabled.operation)) leaf_name_data.push_back(is_ntp_enabled.get_name_leafdata());
    if (sys_leap.is_set || is_set(sys_leap.operation)) leaf_name_data.push_back(sys_leap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-ntp-enabled")
    {
        is_ntp_enabled = value;
    }
    if(value_path == "sys-leap")
    {
        sys_leap = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerSummaryInfo()
    :
    time_since{YType::int32, "time-since"}
    	,
    peer_info_common(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon>())
{
    peer_info_common->parent = this;

    yang_name = "peer-summary-info"; yang_parent_name = "associations";
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
    return is_set(operation)
	|| is_set(time_since.operation)
	|| (peer_info_common !=  nullptr && peer_info_common->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-summary-info";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerSummaryInfo' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_since.is_set || is_set(time_since.operation)) leaf_name_data.push_back(time_since.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-since")
    {
        time_since = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::PeerInfoCommon()
    :
    address{YType::str, "address"},
    delay{YType::str, "delay"},
    dispersion{YType::str, "dispersion"},
    host_mode{YType::enumeration, "host-mode"},
    host_poll{YType::uint8, "host-poll"},
    is_configured{YType::boolean, "is-configured"},
    is_sys_peer{YType::boolean, "is-sys-peer"},
    offset{YType::str, "offset"},
    reachability{YType::uint8, "reachability"},
    reference_id{YType::str, "reference-id"},
    status{YType::enumeration, "status"},
    stratum{YType::uint8, "stratum"}
{
    yang_name = "peer-info-common"; yang_parent_name = "peer-summary-info";
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::~PeerInfoCommon()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::has_data() const
{
    return address.is_set
	|| delay.is_set
	|| dispersion.is_set
	|| host_mode.is_set
	|| host_poll.is_set
	|| is_configured.is_set
	|| is_sys_peer.is_set
	|| offset.is_set
	|| reachability.is_set
	|| reference_id.is_set
	|| status.is_set
	|| stratum.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(delay.operation)
	|| is_set(dispersion.operation)
	|| is_set(host_mode.operation)
	|| is_set(host_poll.operation)
	|| is_set(is_configured.operation)
	|| is_set(is_sys_peer.operation)
	|| is_set(offset.operation)
	|| is_set(reachability.operation)
	|| is_set(reference_id.operation)
	|| is_set(status.operation)
	|| is_set(stratum.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-info-common";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerInfoCommon' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (dispersion.is_set || is_set(dispersion.operation)) leaf_name_data.push_back(dispersion.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.operation)) leaf_name_data.push_back(host_mode.get_name_leafdata());
    if (host_poll.is_set || is_set(host_poll.operation)) leaf_name_data.push_back(host_poll.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.operation)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (is_sys_peer.is_set || is_set(is_sys_peer.operation)) leaf_name_data.push_back(is_sys_peer.get_name_leafdata());
    if (offset.is_set || is_set(offset.operation)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.operation)) leaf_name_data.push_back(reachability.get_name_leafdata());
    if (reference_id.is_set || is_set(reference_id.operation)) leaf_name_data.push_back(reference_id.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (stratum.is_set || is_set(stratum.operation)) leaf_name_data.push_back(stratum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::Associations::PeerSummaryInfo::PeerInfoCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "dispersion")
    {
        dispersion = value;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
    }
    if(value_path == "host-poll")
    {
        host_poll = value;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
    }
    if(value_path == "is-sys-peer")
    {
        is_sys_peer = value;
    }
    if(value_path == "offset")
    {
        offset = value;
    }
    if(value_path == "reachability")
    {
        reachability = value;
    }
    if(value_path == "reference-id")
    {
        reference_id = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "stratum")
    {
        stratum = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::AssociationsDetail()
    :
    is_ntp_enabled{YType::boolean, "is-ntp-enabled"},
    sys_leap{YType::enumeration, "sys-leap"}
{
    yang_name = "associations-detail"; yang_parent_name = "instance";
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
    return is_set(operation)
	|| is_set(is_ntp_enabled.operation)
	|| is_set(sys_leap.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "associations-detail";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AssociationsDetail' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ntp_enabled.is_set || is_set(is_ntp_enabled.operation)) leaf_name_data.push_back(is_ntp_enabled.get_name_leafdata());
    if (sys_leap.is_set || is_set(sys_leap.operation)) leaf_name_data.push_back(sys_leap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-ntp-enabled")
    {
        is_ntp_enabled = value;
    }
    if(value_path == "sys-leap")
    {
        sys_leap = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerDetailInfo()
    :
    filter_index{YType::uint32, "filter-index"},
    is_authenticated{YType::boolean, "is-authenticated"},
    is_ref_clock{YType::boolean, "is-ref-clock"},
    leap{YType::enumeration, "leap"},
    peer_mode{YType::enumeration, "peer-mode"},
    poll_interval{YType::uint8, "poll-interval"},
    precision{YType::int8, "precision"},
    root_delay{YType::str, "root-delay"},
    root_dispersion{YType::str, "root-dispersion"},
    synch_distance{YType::str, "synch-distance"},
    version{YType::uint8, "version"}
    	,
    originate_time(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime>())
	,peer_info_common(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon>())
	,receive_time(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime>())
	,ref_time(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime>())
	,transmit_time(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime>())
{
    originate_time->parent = this;

    peer_info_common->parent = this;

    receive_time->parent = this;

    ref_time->parent = this;

    transmit_time->parent = this;

    yang_name = "peer-detail-info"; yang_parent_name = "associations-detail";
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
    return filter_index.is_set
	|| is_authenticated.is_set
	|| is_ref_clock.is_set
	|| leap.is_set
	|| peer_mode.is_set
	|| poll_interval.is_set
	|| precision.is_set
	|| root_delay.is_set
	|| root_dispersion.is_set
	|| synch_distance.is_set
	|| version.is_set
	|| (originate_time !=  nullptr && originate_time->has_data())
	|| (peer_info_common !=  nullptr && peer_info_common->has_data())
	|| (receive_time !=  nullptr && receive_time->has_data())
	|| (ref_time !=  nullptr && ref_time->has_data())
	|| (transmit_time !=  nullptr && transmit_time->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::has_operation() const
{
    for (std::size_t index=0; index<filter_detail.size(); index++)
    {
        if(filter_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(filter_index.operation)
	|| is_set(is_authenticated.operation)
	|| is_set(is_ref_clock.operation)
	|| is_set(leap.operation)
	|| is_set(peer_mode.operation)
	|| is_set(poll_interval.operation)
	|| is_set(precision.operation)
	|| is_set(root_delay.operation)
	|| is_set(root_dispersion.operation)
	|| is_set(synch_distance.operation)
	|| is_set(version.operation)
	|| (originate_time !=  nullptr && originate_time->has_operation())
	|| (peer_info_common !=  nullptr && peer_info_common->has_operation())
	|| (receive_time !=  nullptr && receive_time->has_operation())
	|| (ref_time !=  nullptr && ref_time->has_operation())
	|| (transmit_time !=  nullptr && transmit_time->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-detail-info";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerDetailInfo' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_index.is_set || is_set(filter_index.operation)) leaf_name_data.push_back(filter_index.get_name_leafdata());
    if (is_authenticated.is_set || is_set(is_authenticated.operation)) leaf_name_data.push_back(is_authenticated.get_name_leafdata());
    if (is_ref_clock.is_set || is_set(is_ref_clock.operation)) leaf_name_data.push_back(is_ref_clock.get_name_leafdata());
    if (leap.is_set || is_set(leap.operation)) leaf_name_data.push_back(leap.get_name_leafdata());
    if (peer_mode.is_set || is_set(peer_mode.operation)) leaf_name_data.push_back(peer_mode.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (precision.is_set || is_set(precision.operation)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (root_delay.is_set || is_set(root_delay.operation)) leaf_name_data.push_back(root_delay.get_name_leafdata());
    if (root_dispersion.is_set || is_set(root_dispersion.operation)) leaf_name_data.push_back(root_dispersion.get_name_leafdata());
    if (synch_distance.is_set || is_set(synch_distance.operation)) leaf_name_data.push_back(synch_distance.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "originate-time")
    {
        if(originate_time == nullptr)
        {
            originate_time = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime>();
        }
        return originate_time;
    }

    if(child_yang_name == "peer-info-common")
    {
        if(peer_info_common == nullptr)
        {
            peer_info_common = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon>();
        }
        return peer_info_common;
    }

    if(child_yang_name == "receive-time")
    {
        if(receive_time == nullptr)
        {
            receive_time = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime>();
        }
        return receive_time;
    }

    if(child_yang_name == "ref-time")
    {
        if(ref_time == nullptr)
        {
            ref_time = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime>();
        }
        return ref_time;
    }

    if(child_yang_name == "transmit-time")
    {
        if(transmit_time == nullptr)
        {
            transmit_time = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime>();
        }
        return transmit_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : filter_detail)
    {
        children[c->get_segment_path()] = c;
    }

    if(originate_time != nullptr)
    {
        children["originate-time"] = originate_time;
    }

    if(peer_info_common != nullptr)
    {
        children["peer-info-common"] = peer_info_common;
    }

    if(receive_time != nullptr)
    {
        children["receive-time"] = receive_time;
    }

    if(ref_time != nullptr)
    {
        children["ref-time"] = ref_time;
    }

    if(transmit_time != nullptr)
    {
        children["transmit-time"] = transmit_time;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filter-index")
    {
        filter_index = value;
    }
    if(value_path == "is-authenticated")
    {
        is_authenticated = value;
    }
    if(value_path == "is-ref-clock")
    {
        is_ref_clock = value;
    }
    if(value_path == "leap")
    {
        leap = value;
    }
    if(value_path == "peer-mode")
    {
        peer_mode = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "precision")
    {
        precision = value;
    }
    if(value_path == "root-delay")
    {
        root_delay = value;
    }
    if(value_path == "root-dispersion")
    {
        root_dispersion = value;
    }
    if(value_path == "synch-distance")
    {
        synch_distance = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::PeerInfoCommon()
    :
    address{YType::str, "address"},
    delay{YType::str, "delay"},
    dispersion{YType::str, "dispersion"},
    host_mode{YType::enumeration, "host-mode"},
    host_poll{YType::uint8, "host-poll"},
    is_configured{YType::boolean, "is-configured"},
    is_sys_peer{YType::boolean, "is-sys-peer"},
    offset{YType::str, "offset"},
    reachability{YType::uint8, "reachability"},
    reference_id{YType::str, "reference-id"},
    status{YType::enumeration, "status"},
    stratum{YType::uint8, "stratum"}
{
    yang_name = "peer-info-common"; yang_parent_name = "peer-detail-info";
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::~PeerInfoCommon()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::has_data() const
{
    return address.is_set
	|| delay.is_set
	|| dispersion.is_set
	|| host_mode.is_set
	|| host_poll.is_set
	|| is_configured.is_set
	|| is_sys_peer.is_set
	|| offset.is_set
	|| reachability.is_set
	|| reference_id.is_set
	|| status.is_set
	|| stratum.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(delay.operation)
	|| is_set(dispersion.operation)
	|| is_set(host_mode.operation)
	|| is_set(host_poll.operation)
	|| is_set(is_configured.operation)
	|| is_set(is_sys_peer.operation)
	|| is_set(offset.operation)
	|| is_set(reachability.operation)
	|| is_set(reference_id.operation)
	|| is_set(status.operation)
	|| is_set(stratum.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-info-common";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerInfoCommon' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (dispersion.is_set || is_set(dispersion.operation)) leaf_name_data.push_back(dispersion.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.operation)) leaf_name_data.push_back(host_mode.get_name_leafdata());
    if (host_poll.is_set || is_set(host_poll.operation)) leaf_name_data.push_back(host_poll.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.operation)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (is_sys_peer.is_set || is_set(is_sys_peer.operation)) leaf_name_data.push_back(is_sys_peer.get_name_leafdata());
    if (offset.is_set || is_set(offset.operation)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.operation)) leaf_name_data.push_back(reachability.get_name_leafdata());
    if (reference_id.is_set || is_set(reference_id.operation)) leaf_name_data.push_back(reference_id.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (stratum.is_set || is_set(stratum.operation)) leaf_name_data.push_back(stratum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::PeerInfoCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "dispersion")
    {
        dispersion = value;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
    }
    if(value_path == "host-poll")
    {
        host_poll = value;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
    }
    if(value_path == "is-sys-peer")
    {
        is_sys_peer = value;
    }
    if(value_path == "offset")
    {
        offset = value;
    }
    if(value_path == "reachability")
    {
        reachability = value;
    }
    if(value_path == "reference-id")
    {
        reference_id = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "stratum")
    {
        stratum = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::RefTime()
    :
    frac_secs(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs>())
	,sec(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec>())
{
    frac_secs->parent = this;

    sec->parent = this;

    yang_name = "ref-time"; yang_parent_name = "peer-detail-info";
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::~RefTime()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::has_data() const
{
    return (frac_secs !=  nullptr && frac_secs->has_data())
	|| (sec !=  nullptr && sec->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::has_operation() const
{
    return is_set(operation)
	|| (frac_secs !=  nullptr && frac_secs->has_operation())
	|| (sec !=  nullptr && sec->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ref-time";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RefTime' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frac-secs")
    {
        if(frac_secs == nullptr)
        {
            frac_secs = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs>();
        }
        return frac_secs;
    }

    if(child_yang_name == "sec")
    {
        if(sec == nullptr)
        {
            sec = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec>();
        }
        return sec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frac_secs != nullptr)
    {
        children["frac-secs"] = frac_secs;
    }

    if(sec != nullptr)
    {
        children["sec"] = sec;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::set_value(const std::string & value_path, std::string value)
{
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec::Sec()
    :
    int_{YType::uint32, "int"}
{
    yang_name = "sec"; yang_parent_name = "ref-time";
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
    return is_set(operation)
	|| is_set(int_.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sec";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sec' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (int_.is_set || is_set(int_.operation)) leaf_name_data.push_back(int_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::Sec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "int")
    {
        int_ = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs::FracSecs()
    :
    frac{YType::uint32, "frac"}
{
    yang_name = "frac-secs"; yang_parent_name = "ref-time";
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
    return is_set(operation)
	|| is_set(frac.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frac-secs";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FracSecs' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frac.is_set || is_set(frac.operation)) leaf_name_data.push_back(frac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frac")
    {
        frac = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::OriginateTime()
    :
    frac_secs(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs>())
	,sec(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec>())
{
    frac_secs->parent = this;

    sec->parent = this;

    yang_name = "originate-time"; yang_parent_name = "peer-detail-info";
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::~OriginateTime()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::has_data() const
{
    return (frac_secs !=  nullptr && frac_secs->has_data())
	|| (sec !=  nullptr && sec->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::has_operation() const
{
    return is_set(operation)
	|| (frac_secs !=  nullptr && frac_secs->has_operation())
	|| (sec !=  nullptr && sec->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate-time";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OriginateTime' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frac-secs")
    {
        if(frac_secs == nullptr)
        {
            frac_secs = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs>();
        }
        return frac_secs;
    }

    if(child_yang_name == "sec")
    {
        if(sec == nullptr)
        {
            sec = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec>();
        }
        return sec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frac_secs != nullptr)
    {
        children["frac-secs"] = frac_secs;
    }

    if(sec != nullptr)
    {
        children["sec"] = sec;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::set_value(const std::string & value_path, std::string value)
{
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec::Sec()
    :
    int_{YType::uint32, "int"}
{
    yang_name = "sec"; yang_parent_name = "originate-time";
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
    return is_set(operation)
	|| is_set(int_.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sec";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sec' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (int_.is_set || is_set(int_.operation)) leaf_name_data.push_back(int_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "int")
    {
        int_ = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs::FracSecs()
    :
    frac{YType::uint32, "frac"}
{
    yang_name = "frac-secs"; yang_parent_name = "originate-time";
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
    return is_set(operation)
	|| is_set(frac.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frac-secs";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FracSecs' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frac.is_set || is_set(frac.operation)) leaf_name_data.push_back(frac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frac")
    {
        frac = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::ReceiveTime()
    :
    frac_secs(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs>())
	,sec(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec>())
{
    frac_secs->parent = this;

    sec->parent = this;

    yang_name = "receive-time"; yang_parent_name = "peer-detail-info";
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::~ReceiveTime()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::has_data() const
{
    return (frac_secs !=  nullptr && frac_secs->has_data())
	|| (sec !=  nullptr && sec->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::has_operation() const
{
    return is_set(operation)
	|| (frac_secs !=  nullptr && frac_secs->has_operation())
	|| (sec !=  nullptr && sec->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-time";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceiveTime' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frac-secs")
    {
        if(frac_secs == nullptr)
        {
            frac_secs = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs>();
        }
        return frac_secs;
    }

    if(child_yang_name == "sec")
    {
        if(sec == nullptr)
        {
            sec = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec>();
        }
        return sec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frac_secs != nullptr)
    {
        children["frac-secs"] = frac_secs;
    }

    if(sec != nullptr)
    {
        children["sec"] = sec;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::set_value(const std::string & value_path, std::string value)
{
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec::Sec()
    :
    int_{YType::uint32, "int"}
{
    yang_name = "sec"; yang_parent_name = "receive-time";
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
    return is_set(operation)
	|| is_set(int_.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sec";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sec' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (int_.is_set || is_set(int_.operation)) leaf_name_data.push_back(int_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "int")
    {
        int_ = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs::FracSecs()
    :
    frac{YType::uint32, "frac"}
{
    yang_name = "frac-secs"; yang_parent_name = "receive-time";
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
    return is_set(operation)
	|| is_set(frac.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frac-secs";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FracSecs' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frac.is_set || is_set(frac.operation)) leaf_name_data.push_back(frac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frac")
    {
        frac = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::TransmitTime()
    :
    frac_secs(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs>())
	,sec(std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec>())
{
    frac_secs->parent = this;

    sec->parent = this;

    yang_name = "transmit-time"; yang_parent_name = "peer-detail-info";
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::~TransmitTime()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::has_data() const
{
    return (frac_secs !=  nullptr && frac_secs->has_data())
	|| (sec !=  nullptr && sec->has_data());
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::has_operation() const
{
    return is_set(operation)
	|| (frac_secs !=  nullptr && frac_secs->has_operation())
	|| (sec !=  nullptr && sec->has_operation());
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-time";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransmitTime' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frac-secs")
    {
        if(frac_secs == nullptr)
        {
            frac_secs = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs>();
        }
        return frac_secs;
    }

    if(child_yang_name == "sec")
    {
        if(sec == nullptr)
        {
            sec = std::make_shared<Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec>();
        }
        return sec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frac_secs != nullptr)
    {
        children["frac-secs"] = frac_secs;
    }

    if(sec != nullptr)
    {
        children["sec"] = sec;
    }

    return children;
}

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::set_value(const std::string & value_path, std::string value)
{
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec::Sec()
    :
    int_{YType::uint32, "int"}
{
    yang_name = "sec"; yang_parent_name = "transmit-time";
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
    return is_set(operation)
	|| is_set(int_.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sec";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sec' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (int_.is_set || is_set(int_.operation)) leaf_name_data.push_back(int_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "int")
    {
        int_ = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs::FracSecs()
    :
    frac{YType::uint32, "frac"}
{
    yang_name = "frac-secs"; yang_parent_name = "transmit-time";
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
    return is_set(operation)
	|| is_set(frac.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frac-secs";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FracSecs' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frac.is_set || is_set(frac.operation)) leaf_name_data.push_back(frac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frac")
    {
        frac = value;
    }
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::FilterDetail()
    :
    filter_delay{YType::str, "filter-delay"},
    filter_disp{YType::str, "filter-disp"},
    filter_offset{YType::str, "filter-offset"}
{
    yang_name = "filter-detail"; yang_parent_name = "peer-detail-info";
}

Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::~FilterDetail()
{
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::has_data() const
{
    return filter_delay.is_set
	|| filter_disp.is_set
	|| filter_offset.is_set;
}

bool Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(filter_delay.operation)
	|| is_set(filter_disp.operation)
	|| is_set(filter_offset.operation);
}

std::string Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-detail";

    return path_buffer.str();

}

const EntityPath Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FilterDetail' in Cisco_IOS_XR_ip_ntp_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_delay.is_set || is_set(filter_delay.operation)) leaf_name_data.push_back(filter_delay.get_name_leafdata());
    if (filter_disp.is_set || is_set(filter_disp.operation)) leaf_name_data.push_back(filter_disp.get_name_leafdata());
    if (filter_offset.is_set || is_set(filter_offset.operation)) leaf_name_data.push_back(filter_offset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Ntp::Racks::Rack::Slots::Slot::Instances::Instance::AssociationsDetail::PeerDetailInfo::FilterDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filter-delay")
    {
        filter_delay = value;
    }
    if(value_path == "filter-disp")
    {
        filter_disp = value;
    }
    if(value_path == "filter-offset")
    {
        filter_offset = value;
    }
}

const Enum::YLeaf NtpPeerStatusEnum::ntp_ctl_pst_sel_reject {0, "ntp-ctl-pst-sel-reject"};
const Enum::YLeaf NtpPeerStatusEnum::ntp_ctl_pst_sel_sane {1, "ntp-ctl-pst-sel-sane"};
const Enum::YLeaf NtpPeerStatusEnum::ntp_ctl_pst_sel_correct {2, "ntp-ctl-pst-sel-correct"};
const Enum::YLeaf NtpPeerStatusEnum::ntp_ctl_pst_sel_selcand {3, "ntp-ctl-pst-sel-selcand"};
const Enum::YLeaf NtpPeerStatusEnum::ntp_ctl_pst_sel_sync_cand {4, "ntp-ctl-pst-sel-sync-cand"};
const Enum::YLeaf NtpPeerStatusEnum::ntp_ctl_pst_sel_distsys_peer {5, "ntp-ctl-pst-sel-distsys-peer"};
const Enum::YLeaf NtpPeerStatusEnum::ntp_ctl_pst_sel_sys_peer {6, "ntp-ctl-pst-sel-sys-peer"};
const Enum::YLeaf NtpPeerStatusEnum::ntp_ctl_pst_sel_pps {7, "ntp-ctl-pst-sel-pps"};

const Enum::YLeaf NtpModeEnum::ntp_mode_unspec {0, "ntp-mode-unspec"};
const Enum::YLeaf NtpModeEnum::ntp_mode_symetric_active {1, "ntp-mode-symetric-active"};
const Enum::YLeaf NtpModeEnum::ntp_mode_symetric_passive {2, "ntp-mode-symetric-passive"};
const Enum::YLeaf NtpModeEnum::ntp_mode_client {3, "ntp-mode-client"};
const Enum::YLeaf NtpModeEnum::ntp_mode_server {4, "ntp-mode-server"};
const Enum::YLeaf NtpModeEnum::ntp_mode_xcast_server {5, "ntp-mode-xcast-server"};
const Enum::YLeaf NtpModeEnum::ntp_mode_control {6, "ntp-mode-control"};
const Enum::YLeaf NtpModeEnum::ntp_mode_private {7, "ntp-mode-private"};
const Enum::YLeaf NtpModeEnum::ntp_mode_xcast_client {8, "ntp-mode-xcast-client"};

const Enum::YLeaf ClockUpdateNodeEnum::clk_never_updated {0, "clk-never-updated"};
const Enum::YLeaf ClockUpdateNodeEnum::clk_updated {1, "clk-updated"};
const Enum::YLeaf ClockUpdateNodeEnum::clk_no_update_info {2, "clk-no-update-info"};

const Enum::YLeaf NtpLoopFilterStateEnum::ntp_loop_flt_n_set {0, "ntp-loop-flt-n-set"};
const Enum::YLeaf NtpLoopFilterStateEnum::ntp_loop_flt_f_set {1, "ntp-loop-flt-f-set"};
const Enum::YLeaf NtpLoopFilterStateEnum::ntp_loop_flt_spik {2, "ntp-loop-flt-spik"};
const Enum::YLeaf NtpLoopFilterStateEnum::ntp_loop_flt_freq {3, "ntp-loop-flt-freq"};
const Enum::YLeaf NtpLoopFilterStateEnum::ntp_loop_flt_sync {4, "ntp-loop-flt-sync"};
const Enum::YLeaf NtpLoopFilterStateEnum::ntp_loop_flt_unkn {5, "ntp-loop-flt-unkn"};

const Enum::YLeaf NtpLeapEnum::ntp_leap_no_warning {0, "ntp-leap-no-warning"};
const Enum::YLeaf NtpLeapEnum::ntp_leap_addse_cond {1, "ntp-leap-addse-cond"};
const Enum::YLeaf NtpLeapEnum::ntp_leap_delse_cond {2, "ntp-leap-delse-cond"};
const Enum::YLeaf NtpLeapEnum::ntp_leap_not_in_sync {3, "ntp-leap-not-in-sync"};


}
}

