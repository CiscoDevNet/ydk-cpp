
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_rpc.hpp"

namespace ydk {
namespace Cisco_IOS_XE_rpc {

SwitchRpc::SwitchRpc()
    :
    input_(std::make_shared<SwitchRpc::Input>())
	,output_(std::make_shared<SwitchRpc::Output>())
{
    input_->parent = this;

    output_->parent = this;

    yang_name = "switch"; yang_parent_name = "Cisco-IOS-XE-rpc";
}

SwitchRpc::~SwitchRpc()
{
}

bool SwitchRpc::has_data() const
{
    return (input_ !=  nullptr && input_->has_data())
	|| (output_ !=  nullptr && output_->has_data());
}

bool SwitchRpc::has_operation() const
{
    return is_set(operation)
	|| (input_ !=  nullptr && input_->has_operation())
	|| (output_ !=  nullptr && output_->has_operation());
}

std::string SwitchRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:switch";

    return path_buffer.str();

}

const EntityPath SwitchRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> SwitchRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input_ == nullptr)
        {
            input_ = std::make_shared<SwitchRpc::Input>();
        }
        return input_;
    }

    if(child_yang_name == "output")
    {
        if(output_ == nullptr)
        {
            output_ = std::make_shared<SwitchRpc::Output>();
        }
        return output_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SwitchRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_ != nullptr)
    {
        children["input"] = input_;
    }

    if(output_ != nullptr)
    {
        children["output"] = output_;
    }

    return children;
}

void SwitchRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SwitchRpc::clone_ptr() const
{
    return std::make_shared<SwitchRpc>();
}

std::string SwitchRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string SwitchRpc::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function SwitchRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

SwitchRpc::Input::Input()
    :
    priority{YType::uint8, "priority"},
    renumber{YType::uint8, "renumber"},
    switch_number{YType::uint8, "switch-number"}
    	,
    statck_(std::make_shared<SwitchRpc::Input::Statck>())
{
    statck_->parent = this;

    yang_name = "input"; yang_parent_name = "switch";
}

SwitchRpc::Input::~Input()
{
}

bool SwitchRpc::Input::has_data() const
{
    return priority.is_set
	|| renumber.is_set
	|| switch_number.is_set
	|| (statck_ !=  nullptr && statck_->has_data());
}

bool SwitchRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation)
	|| is_set(renumber.operation)
	|| is_set(switch_number.operation)
	|| (statck_ !=  nullptr && statck_->has_operation());
}

std::string SwitchRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath SwitchRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-rpc:switch/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (renumber.is_set || is_set(renumber.operation)) leaf_name_data.push_back(renumber.get_name_leafdata());
    if (switch_number.is_set || is_set(switch_number.operation)) leaf_name_data.push_back(switch_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SwitchRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statck")
    {
        if(statck_ == nullptr)
        {
            statck_ = std::make_shared<SwitchRpc::Input::Statck>();
        }
        return statck_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SwitchRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statck_ != nullptr)
    {
        children["statck"] = statck_;
    }

    return children;
}

void SwitchRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "renumber")
    {
        renumber = value;
    }
    if(value_path == "switch-number")
    {
        switch_number = value;
    }
}

SwitchRpc::Input::Statck::Statck()
    :
    port{YType::uint8, "port"}
{
    yang_name = "statck"; yang_parent_name = "input";
}

SwitchRpc::Input::Statck::~Statck()
{
}

bool SwitchRpc::Input::Statck::has_data() const
{
    return port.is_set;
}

bool SwitchRpc::Input::Statck::has_operation() const
{
    return is_set(operation)
	|| is_set(port.operation);
}

std::string SwitchRpc::Input::Statck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statck";

    return path_buffer.str();

}

const EntityPath SwitchRpc::Input::Statck::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-rpc:switch/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SwitchRpc::Input::Statck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SwitchRpc::Input::Statck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SwitchRpc::Input::Statck::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port")
    {
        port = value;
    }
}

SwitchRpc::Output::Output()
    :
    result{YType::str, "result"}
{
    yang_name = "output"; yang_parent_name = "switch";
}

SwitchRpc::Output::~Output()
{
}

bool SwitchRpc::Output::has_data() const
{
    return result.is_set;
}

bool SwitchRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(result.operation);
}

std::string SwitchRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath SwitchRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-rpc:switch/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.operation)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SwitchRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SwitchRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SwitchRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "result")
    {
        result = value;
    }
}

DefaultRpc::DefaultRpc()
    :
    input_(std::make_shared<DefaultRpc::Input>())
	,output_(std::make_shared<DefaultRpc::Output>())
{
    input_->parent = this;

    output_->parent = this;

    yang_name = "default"; yang_parent_name = "Cisco-IOS-XE-rpc";
}

DefaultRpc::~DefaultRpc()
{
}

bool DefaultRpc::has_data() const
{
    return (input_ !=  nullptr && input_->has_data())
	|| (output_ !=  nullptr && output_->has_data());
}

bool DefaultRpc::has_operation() const
{
    return is_set(operation)
	|| (input_ !=  nullptr && input_->has_operation())
	|| (output_ !=  nullptr && output_->has_operation());
}

std::string DefaultRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:default";

    return path_buffer.str();

}

const EntityPath DefaultRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> DefaultRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input_ == nullptr)
        {
            input_ = std::make_shared<DefaultRpc::Input>();
        }
        return input_;
    }

    if(child_yang_name == "output")
    {
        if(output_ == nullptr)
        {
            output_ = std::make_shared<DefaultRpc::Output>();
        }
        return output_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DefaultRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_ != nullptr)
    {
        children["input"] = input_;
    }

    if(output_ != nullptr)
    {
        children["output"] = output_;
    }

    return children;
}

void DefaultRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> DefaultRpc::clone_ptr() const
{
    return std::make_shared<DefaultRpc>();
}

std::string DefaultRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DefaultRpc::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DefaultRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

DefaultRpc::Input::Input()
    :
    interface{YType::str, "interface"}
{
    yang_name = "input"; yang_parent_name = "default";
}

DefaultRpc::Input::~Input()
{
}

bool DefaultRpc::Input::has_data() const
{
    return interface.is_set;
}

bool DefaultRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string DefaultRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath DefaultRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-rpc:default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DefaultRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DefaultRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DefaultRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

DefaultRpc::Output::Output()
    :
    result{YType::str, "result"}
{
    yang_name = "output"; yang_parent_name = "default";
}

DefaultRpc::Output::~Output()
{
}

bool DefaultRpc::Output::has_data() const
{
    return result.is_set;
}

bool DefaultRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(result.operation);
}

std::string DefaultRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath DefaultRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-rpc:default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.operation)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DefaultRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DefaultRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DefaultRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "result")
    {
        result = value;
    }
}

ReloadRpc::ReloadRpc()
    :
    output_(std::make_shared<ReloadRpc::Output>())
{
    output_->parent = this;

    yang_name = "reload"; yang_parent_name = "Cisco-IOS-XE-rpc";
}

ReloadRpc::~ReloadRpc()
{
}

bool ReloadRpc::has_data() const
{
    return (output_ !=  nullptr && output_->has_data());
}

bool ReloadRpc::has_operation() const
{
    return is_set(operation)
	|| (output_ !=  nullptr && output_->has_operation());
}

std::string ReloadRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:reload";

    return path_buffer.str();

}

const EntityPath ReloadRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ReloadRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output_ == nullptr)
        {
            output_ = std::make_shared<ReloadRpc::Output>();
        }
        return output_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ReloadRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(output_ != nullptr)
    {
        children["output"] = output_;
    }

    return children;
}

void ReloadRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ReloadRpc::clone_ptr() const
{
    return std::make_shared<ReloadRpc>();
}

std::string ReloadRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ReloadRpc::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ReloadRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

ReloadRpc::Output::Output()
    :
    result{YType::str, "result"}
{
    yang_name = "output"; yang_parent_name = "reload";
}

ReloadRpc::Output::~Output()
{
}

bool ReloadRpc::Output::has_data() const
{
    return result.is_set;
}

bool ReloadRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(result.operation);
}

std::string ReloadRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath ReloadRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-rpc:reload/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.operation)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ReloadRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ReloadRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ReloadRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "result")
    {
        result = value;
    }
}

LicenseRpc::LicenseRpc()
    :
    input_(std::make_shared<LicenseRpc::Input>())
	,output_(std::make_shared<LicenseRpc::Output>())
{
    input_->parent = this;

    output_->parent = this;

    yang_name = "license"; yang_parent_name = "Cisco-IOS-XE-rpc";
}

LicenseRpc::~LicenseRpc()
{
}

bool LicenseRpc::has_data() const
{
    return (input_ !=  nullptr && input_->has_data())
	|| (output_ !=  nullptr && output_->has_data());
}

bool LicenseRpc::has_operation() const
{
    return is_set(operation)
	|| (input_ !=  nullptr && input_->has_operation())
	|| (output_ !=  nullptr && output_->has_operation());
}

std::string LicenseRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:license";

    return path_buffer.str();

}

const EntityPath LicenseRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> LicenseRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input_ == nullptr)
        {
            input_ = std::make_shared<LicenseRpc::Input>();
        }
        return input_;
    }

    if(child_yang_name == "output")
    {
        if(output_ == nullptr)
        {
            output_ = std::make_shared<LicenseRpc::Output>();
        }
        return output_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LicenseRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_ != nullptr)
    {
        children["input"] = input_;
    }

    if(output_ != nullptr)
    {
        children["output"] = output_;
    }

    return children;
}

void LicenseRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> LicenseRpc::clone_ptr() const
{
    return std::make_shared<LicenseRpc>();
}

std::string LicenseRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string LicenseRpc::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function LicenseRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

LicenseRpc::Input::Input()
    :
    smart_(std::make_shared<LicenseRpc::Input::Smart>())
{
    smart_->parent = this;

    yang_name = "input"; yang_parent_name = "license";
}

LicenseRpc::Input::~Input()
{
}

bool LicenseRpc::Input::has_data() const
{
    return (smart_ !=  nullptr && smart_->has_data());
}

bool LicenseRpc::Input::has_operation() const
{
    return is_set(operation)
	|| (smart_ !=  nullptr && smart_->has_operation());
}

std::string LicenseRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath LicenseRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-rpc:license/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LicenseRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "smart")
    {
        if(smart_ == nullptr)
        {
            smart_ = std::make_shared<LicenseRpc::Input::Smart>();
        }
        return smart_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LicenseRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(smart_ != nullptr)
    {
        children["smart"] = smart_;
    }

    return children;
}

void LicenseRpc::Input::set_value(const std::string & value_path, std::string value)
{
}

LicenseRpc::Input::Smart::Smart()
    :
    deregister{YType::empty, "deregister"}
    	,
    register__(std::make_shared<LicenseRpc::Input::Smart::Register_>())
	,renew_(std::make_shared<LicenseRpc::Input::Smart::Renew>())
{
    register__->parent = this;

    renew_->parent = this;

    yang_name = "smart"; yang_parent_name = "input";
}

LicenseRpc::Input::Smart::~Smart()
{
}

bool LicenseRpc::Input::Smart::has_data() const
{
    return deregister.is_set
	|| (register__ !=  nullptr && register__->has_data())
	|| (renew_ !=  nullptr && renew_->has_data());
}

bool LicenseRpc::Input::Smart::has_operation() const
{
    return is_set(operation)
	|| is_set(deregister.operation)
	|| (register__ !=  nullptr && register__->has_operation())
	|| (renew_ !=  nullptr && renew_->has_operation());
}

std::string LicenseRpc::Input::Smart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smart";

    return path_buffer.str();

}

const EntityPath LicenseRpc::Input::Smart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-rpc:license/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deregister.is_set || is_set(deregister.operation)) leaf_name_data.push_back(deregister.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LicenseRpc::Input::Smart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register")
    {
        if(register__ == nullptr)
        {
            register__ = std::make_shared<LicenseRpc::Input::Smart::Register_>();
        }
        return register__;
    }

    if(child_yang_name == "renew")
    {
        if(renew_ == nullptr)
        {
            renew_ = std::make_shared<LicenseRpc::Input::Smart::Renew>();
        }
        return renew_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LicenseRpc::Input::Smart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(register__ != nullptr)
    {
        children["register"] = register__;
    }

    if(renew_ != nullptr)
    {
        children["renew"] = renew_;
    }

    return children;
}

void LicenseRpc::Input::Smart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deregister")
    {
        deregister = value;
    }
}

LicenseRpc::Input::Smart::Register_::Register_()
    :
    idtoken{YType::empty, "idtoken"}
{
    yang_name = "register"; yang_parent_name = "smart";
}

LicenseRpc::Input::Smart::Register_::~Register_()
{
}

bool LicenseRpc::Input::Smart::Register_::has_data() const
{
    return idtoken.is_set;
}

bool LicenseRpc::Input::Smart::Register_::has_operation() const
{
    return is_set(operation)
	|| is_set(idtoken.operation);
}

std::string LicenseRpc::Input::Smart::Register_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register";

    return path_buffer.str();

}

const EntityPath LicenseRpc::Input::Smart::Register_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-rpc:license/input/smart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idtoken.is_set || is_set(idtoken.operation)) leaf_name_data.push_back(idtoken.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LicenseRpc::Input::Smart::Register_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LicenseRpc::Input::Smart::Register_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LicenseRpc::Input::Smart::Register_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "idtoken")
    {
        idtoken = value;
    }
}

LicenseRpc::Input::Smart::Renew::Renew()
    :
    auth{YType::empty, "auth"},
    id{YType::empty, "id"}
{
    yang_name = "renew"; yang_parent_name = "smart";
}

LicenseRpc::Input::Smart::Renew::~Renew()
{
}

bool LicenseRpc::Input::Smart::Renew::has_data() const
{
    return auth.is_set
	|| id.is_set;
}

bool LicenseRpc::Input::Smart::Renew::has_operation() const
{
    return is_set(operation)
	|| is_set(auth.operation)
	|| is_set(id.operation);
}

std::string LicenseRpc::Input::Smart::Renew::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "renew";

    return path_buffer.str();

}

const EntityPath LicenseRpc::Input::Smart::Renew::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-rpc:license/input/smart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth.is_set || is_set(auth.operation)) leaf_name_data.push_back(auth.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LicenseRpc::Input::Smart::Renew::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LicenseRpc::Input::Smart::Renew::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LicenseRpc::Input::Smart::Renew::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth")
    {
        auth = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

LicenseRpc::Output::Output()
    :
    result{YType::str, "result"}
{
    yang_name = "output"; yang_parent_name = "license";
}

LicenseRpc::Output::~Output()
{
}

bool LicenseRpc::Output::has_data() const
{
    return result.is_set;
}

bool LicenseRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(result.operation);
}

std::string LicenseRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath LicenseRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-rpc:license/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.operation)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LicenseRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LicenseRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LicenseRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "result")
    {
        result = value;
    }
}


}
}

