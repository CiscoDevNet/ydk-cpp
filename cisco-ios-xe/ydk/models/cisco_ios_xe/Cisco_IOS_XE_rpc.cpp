
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_rpc.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_rpc {

Switch_::Switch_()
    :
    input(std::make_shared<Switch_::Input>())
	,output(std::make_shared<Switch_::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "switch"; yang_parent_name = "Cisco-IOS-XE-rpc";
}

Switch_::~Switch_()
{
}

bool Switch_::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Switch_::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:switch";

    return path_buffer.str();

}

const EntityPath Switch_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Switch_::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Switch_::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Switch_::clone_ptr() const
{
    return std::make_shared<Switch_>();
}

std::string Switch_::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Switch_::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Switch_::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Switch_::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Switch_::Input::Input()
    :
    priority{YType::uint8, "priority"},
    renumber{YType::uint8, "renumber"},
    switch_number{YType::uint8, "switch-number"}
    	,
    statck(std::make_shared<Switch_::Input::Statck>())
{
    statck->parent = this;

    yang_name = "input"; yang_parent_name = "switch";
}

Switch_::Input::~Input()
{
}

bool Switch_::Input::has_data() const
{
    return priority.is_set
	|| renumber.is_set
	|| switch_number.is_set
	|| (statck !=  nullptr && statck->has_data());
}

bool Switch_::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(renumber.yfilter)
	|| ydk::is_set(switch_number.yfilter)
	|| (statck !=  nullptr && statck->has_operation());
}

std::string Switch_::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Switch_::Input::get_entity_path(Entity* ancestor) const
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

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (renumber.is_set || is_set(renumber.yfilter)) leaf_name_data.push_back(renumber.get_name_leafdata());
    if (switch_number.is_set || is_set(switch_number.yfilter)) leaf_name_data.push_back(switch_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Switch_::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statck")
    {
        if(statck == nullptr)
        {
            statck = std::make_shared<Switch_::Input::Statck>();
        }
        return statck;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Switch_::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statck != nullptr)
    {
        children["statck"] = statck;
    }

    return children;
}

void Switch_::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "renumber")
    {
        renumber = value;
        renumber.value_namespace = name_space;
        renumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-number")
    {
        switch_number = value;
        switch_number.value_namespace = name_space;
        switch_number.value_namespace_prefix = name_space_prefix;
    }
}

void Switch_::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "renumber")
    {
        renumber.yfilter = yfilter;
    }
    if(value_path == "switch-number")
    {
        switch_number.yfilter = yfilter;
    }
}

bool Switch_::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statck" || name == "priority" || name == "renumber" || name == "switch-number")
        return true;
    return false;
}

Switch_::Input::Statck::Statck()
    :
    port{YType::uint8, "port"}
{
    yang_name = "statck"; yang_parent_name = "input";
}

Switch_::Input::Statck::~Statck()
{
}

bool Switch_::Input::Statck::has_data() const
{
    return port.is_set;
}

bool Switch_::Input::Statck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Switch_::Input::Statck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statck";

    return path_buffer.str();

}

const EntityPath Switch_::Input::Statck::get_entity_path(Entity* ancestor) const
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

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Switch_::Input::Statck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Switch_::Input::Statck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Switch_::Input::Statck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Switch_::Input::Statck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Switch_::Input::Statck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Switch_::Output::Output()
    :
    result{YType::str, "result"}
{
    yang_name = "output"; yang_parent_name = "switch";
}

Switch_::Output::~Output()
{
}

bool Switch_::Output::has_data() const
{
    return result.is_set;
}

bool Switch_::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Switch_::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Switch_::Output::get_entity_path(Entity* ancestor) const
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

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Switch_::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Switch_::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Switch_::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Switch_::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Switch_::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Default_::Default_()
    :
    input(std::make_shared<Default_::Input>())
	,output(std::make_shared<Default_::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "default"; yang_parent_name = "Cisco-IOS-XE-rpc";
}

Default_::~Default_()
{
}

bool Default_::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Default_::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:default";

    return path_buffer.str();

}

const EntityPath Default_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Default_::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Default_::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Default_::clone_ptr() const
{
    return std::make_shared<Default_>();
}

std::string Default_::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Default_::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Default_::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Default_::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Default_::Input::Input()
    :
    interface{YType::str, "interface"}
{
    yang_name = "input"; yang_parent_name = "default";
}

Default_::Input::~Input()
{
}

bool Default_::Input::has_data() const
{
    return interface.is_set;
}

bool Default_::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Default_::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Default_::Input::get_entity_path(Entity* ancestor) const
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

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Default_::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Default_::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Default_::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Default_::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Default_::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Default_::Output::Output()
    :
    result{YType::str, "result"}
{
    yang_name = "output"; yang_parent_name = "default";
}

Default_::Output::~Output()
{
}

bool Default_::Output::has_data() const
{
    return result.is_set;
}

bool Default_::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Default_::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Default_::Output::get_entity_path(Entity* ancestor) const
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

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Default_::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Default_::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Default_::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Default_::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Default_::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Reload::Reload()
    :
    output(std::make_shared<Reload::Output>())
{
    output->parent = this;

    yang_name = "reload"; yang_parent_name = "Cisco-IOS-XE-rpc";
}

Reload::~Reload()
{
}

bool Reload::has_data() const
{
    return (output !=  nullptr && output->has_data());
}

bool Reload::has_operation() const
{
    return is_set(yfilter)
	|| (output !=  nullptr && output->has_operation());
}

std::string Reload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:reload";

    return path_buffer.str();

}

const EntityPath Reload::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Reload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Reload::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Reload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Reload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Reload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Reload::clone_ptr() const
{
    return std::make_shared<Reload>();
}

std::string Reload::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Reload::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Reload::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Reload::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Reload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Reload::Output::Output()
    :
    result{YType::str, "result"}
{
    yang_name = "output"; yang_parent_name = "reload";
}

Reload::Output::~Output()
{
}

bool Reload::Output::has_data() const
{
    return result.is_set;
}

bool Reload::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Reload::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Reload::Output::get_entity_path(Entity* ancestor) const
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

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Reload::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Reload::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Reload::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Reload::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Reload::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

License::License()
    :
    input(std::make_shared<License::Input>())
	,output(std::make_shared<License::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "license"; yang_parent_name = "Cisco-IOS-XE-rpc";
}

License::~License()
{
}

bool License::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool License::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:license";

    return path_buffer.str();

}

const EntityPath License::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<License::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<License::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> License::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void License::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> License::clone_ptr() const
{
    return std::make_shared<License>();
}

std::string License::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string License::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function License::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> License::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool License::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

License::Input::Input()
    :
    smart(std::make_shared<License::Input::Smart>())
{
    smart->parent = this;

    yang_name = "input"; yang_parent_name = "license";
}

License::Input::~Input()
{
}

bool License::Input::has_data() const
{
    return (smart !=  nullptr && smart->has_data());
}

bool License::Input::has_operation() const
{
    return is_set(yfilter)
	|| (smart !=  nullptr && smart->has_operation());
}

std::string License::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath License::Input::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> License::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "smart")
    {
        if(smart == nullptr)
        {
            smart = std::make_shared<License::Input::Smart>();
        }
        return smart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> License::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(smart != nullptr)
    {
        children["smart"] = smart;
    }

    return children;
}

void License::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void License::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool License::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "smart")
        return true;
    return false;
}

License::Input::Smart::Smart()
    :
    deregister{YType::empty, "deregister"}
    	,
    register_(std::make_shared<License::Input::Smart::Register_>())
	,renew(std::make_shared<License::Input::Smart::Renew>())
{
    register_->parent = this;

    renew->parent = this;

    yang_name = "smart"; yang_parent_name = "input";
}

License::Input::Smart::~Smart()
{
}

bool License::Input::Smart::has_data() const
{
    return deregister.is_set
	|| (register_ !=  nullptr && register_->has_data())
	|| (renew !=  nullptr && renew->has_data());
}

bool License::Input::Smart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deregister.yfilter)
	|| (register_ !=  nullptr && register_->has_operation())
	|| (renew !=  nullptr && renew->has_operation());
}

std::string License::Input::Smart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smart";

    return path_buffer.str();

}

const EntityPath License::Input::Smart::get_entity_path(Entity* ancestor) const
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

    if (deregister.is_set || is_set(deregister.yfilter)) leaf_name_data.push_back(deregister.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> License::Input::Smart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register")
    {
        if(register_ == nullptr)
        {
            register_ = std::make_shared<License::Input::Smart::Register_>();
        }
        return register_;
    }

    if(child_yang_name == "renew")
    {
        if(renew == nullptr)
        {
            renew = std::make_shared<License::Input::Smart::Renew>();
        }
        return renew;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> License::Input::Smart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(register_ != nullptr)
    {
        children["register"] = register_;
    }

    if(renew != nullptr)
    {
        children["renew"] = renew;
    }

    return children;
}

void License::Input::Smart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deregister")
    {
        deregister = value;
        deregister.value_namespace = name_space;
        deregister.value_namespace_prefix = name_space_prefix;
    }
}

void License::Input::Smart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deregister")
    {
        deregister.yfilter = yfilter;
    }
}

bool License::Input::Smart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register" || name == "renew" || name == "deregister")
        return true;
    return false;
}

License::Input::Smart::Register_::Register_()
    :
    idtoken{YType::empty, "idtoken"}
{
    yang_name = "register"; yang_parent_name = "smart";
}

License::Input::Smart::Register_::~Register_()
{
}

bool License::Input::Smart::Register_::has_data() const
{
    return idtoken.is_set;
}

bool License::Input::Smart::Register_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idtoken.yfilter);
}

std::string License::Input::Smart::Register_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register";

    return path_buffer.str();

}

const EntityPath License::Input::Smart::Register_::get_entity_path(Entity* ancestor) const
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

    if (idtoken.is_set || is_set(idtoken.yfilter)) leaf_name_data.push_back(idtoken.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> License::Input::Smart::Register_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> License::Input::Smart::Register_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void License::Input::Smart::Register_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idtoken")
    {
        idtoken = value;
        idtoken.value_namespace = name_space;
        idtoken.value_namespace_prefix = name_space_prefix;
    }
}

void License::Input::Smart::Register_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idtoken")
    {
        idtoken.yfilter = yfilter;
    }
}

bool License::Input::Smart::Register_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idtoken")
        return true;
    return false;
}

License::Input::Smart::Renew::Renew()
    :
    auth{YType::empty, "auth"},
    id{YType::empty, "id"}
{
    yang_name = "renew"; yang_parent_name = "smart";
}

License::Input::Smart::Renew::~Renew()
{
}

bool License::Input::Smart::Renew::has_data() const
{
    return auth.is_set
	|| id.is_set;
}

bool License::Input::Smart::Renew::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string License::Input::Smart::Renew::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "renew";

    return path_buffer.str();

}

const EntityPath License::Input::Smart::Renew::get_entity_path(Entity* ancestor) const
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

    if (auth.is_set || is_set(auth.yfilter)) leaf_name_data.push_back(auth.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> License::Input::Smart::Renew::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> License::Input::Smart::Renew::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void License::Input::Smart::Renew::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth")
    {
        auth = value;
        auth.value_namespace = name_space;
        auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void License::Input::Smart::Renew::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth")
    {
        auth.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool License::Input::Smart::Renew::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth" || name == "id")
        return true;
    return false;
}

License::Output::Output()
    :
    result{YType::str, "result"}
{
    yang_name = "output"; yang_parent_name = "license";
}

License::Output::~Output()
{
}

bool License::Output::has_data() const
{
    return result.is_set;
}

bool License::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string License::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath License::Output::get_entity_path(Entity* ancestor) const
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

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> License::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> License::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void License::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void License::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool License::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}


}
}

